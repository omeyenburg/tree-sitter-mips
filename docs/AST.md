# AST Reference

Complete reference of node types produced by tree-sitter-mips.

## Table of Contents

- [Instructions](#instructions)
- [Directives](#directives)
- [Labels](#labels)
- [Expressions](#expressions)
- [Data Types](#data-types)
- [Comments](#comments)
- [Preprocessor](#preprocessor)
- [Field Reference](#field-reference)
- [Example](#example)

---

## Instructions
Represents a MIPS instruction with opcode and operands.

**Example:**
```asm
add t0, t1, t2
```

```scheme
(instruction
  opcode: (opcode)
  operands: (operands
    operand: (register)
    operand: (register)
    operand: (decimal)))
```

### Opcode
Instruction mnemonic (e.g., `add`, `lw`, `beq`).

### Operands
List of operands separated by commas or whitespace.

Operand types: `(register)`, `(decimal)`, `(hexadecimal)`, `(octal)`, `(float)`, `(symbol)`, `(address)`, `(macro_variable)`, `(string)`, `(binary_expression)`, `(unary_expression)`, `(parenthesized_expression)`

---

## Directives
Assembler directives that control assembly behavior.

### Directive Types

#### Macro directive
Macro mnemonic: `.macro`

**Example:**
```asm
.macro loop(x, y, z)
```

```scheme
(directive
  mnemonic: (macro_mnemonic)
  name: (macro_name)
  parameters: (macro_parameters
    parameter: (macro_parameter
      name: (macro_parameter_name))
      qualifier: (macro_parameter_name))
    parameter: (macro_parameter
      name: (macro_parameter_name))))
```

#### Integer directive
Integer data directives: `.byte`, `.half`, `.word`, `.dword`, `.long`, `.quad`, `.2byte`, `.4byte`, `.8byte`, `.int`, `.short`, `.hword`, `.comm`, `.lcomm`, `.align`, `.balign`, `.p2align`, `.sleb128`, `.uleb128`, `.dtprelword`, `.dtpreldword`, `.skip`, `.space`

**Example:**
```asm
.word 1, 2
```

```scheme
(directive
  mnemonic: (integer_mnemonic)
  operands: (integer_operands
    operand: (decimal)
    operand: (decimal)))
```

#### Float directive
Floating-point data: `.float`, `.double`, `.single`

**Example:**
```asm
.float 3.14, .2f
```

```scheme
(directive
  mnemonic: (float_mnemonic)
  operands: (float_operands
    operand: (float)
    operand: (float)))
```

#### String directive
String data: `.ascii`, `.asciz`, `.asciiz`, `.string`, `.stringz`

**Example:**
```asm
.asciiz "Hello, World!\n"
```

```scheme
(directive
  mnemonic: (string_mnemonic)
  operands: (string_operands
    operand: (string)))
```

#### Control directive
All other directives (e.g., `.text`, `.data`, `.globl`, `.section`)

**Example:**
```asm
.global _start
```

```scheme
(directive
  mnemonic: (control_mnemonic)
  operands: (control_operands
    operand: (symbol)))
```

---

## Labels

### Global label
Standard global labels.

**Pattern:** `[a-zA-Z_.][a-zA-Z0-9_.$]*:`

**Example:**
```asm
_start:
```

```scheme
(global_label)
```

### Local label
Local labels starting with dot.

**Pattern:** `\.[A-Z][a-zA-Z0-9_]*:`

**Example:**
```asm
.L1:
```

```scheme
(local_label)
```

### Global numeric label
Multi-digit numeric labels.

**Pattern:** `[1-9][0-9]+:`

**Example:**
```asm
10:
```

```scheme
(global_numeric_label)
```

### Local numeric label
Single-digit numeric labels.

**Pattern:** `[0-9]:`

**Example:**
```asm
1:
```

```scheme
(local_numeric_label)
```

### Local numeric label reference
Reference to numeric labels.

**Examples:**
- `1b` - backward reference (previous label 1:)
- `1f` - forward reference (next label 1:)

```scheme
(local_numeric_label_reference)
```

---

## Expressions

### Binary expression
Binary operations with full operator precedence and support for spaces.

```scheme
(binary_expression
  left: (decimal)
  operator: (additive_operator)
  right: (decimal))
```

**Operators by precedence:**

| Operator             | Type                    |
| -------------------- | ----------------------- |
| `*`, `/`, `%`        | multiplicative_operator |
| `+`, `-`             | additive_operator       |
| `<<`, `>>`           | shift_operator          |
| `<`, `>`, `<=`, `>=` | relational_operator     |
| `==`, `!=`           | equality_operator       |
| `&`                  | bitwise_and_operator    |
| `^`                  | bitwise_xor_operator    |
| `\|`                 | bitwise_or_operator     |
| `&&`                 | logical_and_operator    |
| `\|\|`               | logical_or_operator     |
| `=`                  | assignment_operator     |

**Left-associative:** `1 + 2 + 3` parses as `((1 + 2) + 3)`

### Unary expression
Unary operations.

**Operators:** `-` (negation), `~` (bitwise NOT), `!` (logical NOT)

**Examples:** `-1`, `~0xFF`, `!flag`


```scheme
(unary_expression
  operator: (unary_operator)
  argument: (decimal))
```

### Parenthesized expression
Grouped expressions for precedence.

**Example:** `(1 + 2) * 3`

```scheme
(parenthesized_expression
  argument: (binary_expression ...))
```

---

## Data Types

### Numeric Literals

#### Decimal

```scheme
(decimal)
```

#### Hexadecimal
Hexadecimal with `0x` prefix.

```scheme
(hexadecimal)
```

#### Octal
Octal with leading zero.

```scheme
(octal)
```

#### Float
Floating-point literals: `1.2`, `1e2`

```scheme
(float)
```

### String

```scheme
(string)
```

### Character literal

```scheme
(char)
```

### Symbol
Identifiers and label references.

```scheme
(symbol)
```

### Macro variable
Macro variables usually start with `\`, `%` or `$`.

**Examples**:

```asm
jal \var
jal %var
jal $var
```

```scheme
(macro_variable)
```

Macro variables can start inside of symbols:

```asm
jal foo\var
```

Macro variables can end early using `\()`:

```asm
jal \var\()foo
```

Macro variables can be used inside of strings:

```asm
.string "Hello \var World!"
```

```scheme
(string
  (string_macro_variable))
```

### Address
Memory address with optional offset expression and base register.

**Examples:**
- `0($sp)` - Numeric offset
- `label($gp)` - Symbol offset
- `4 + 8($sp)` - Expression offset (e.g., `4 + 8`, `8 % 4 + 2`)
- `%offset($s0)` - Macro offset

```scheme
(address
  offset: (binary_expression ...)  ; Can be expression or literal
  base: (register))
```

### Register
All registers of RISC V and MIPS are supported.

```scheme
(register)
```

RISC V:
**Numeric:** `0`-`31`, `f0`-`f31`
**Named:** `zero`, `at`, `v0`-`v1`, `a0`-`a3`, `t0`-`t9`, `s0`-`s7`, `k0`-`k1`, `gp`, `sp`, `fp`, `ra`

MIPS:
**Numeric:** `$0`-`$31`, `$f0`-`$f31`
**Named:** `$zero`, `$at`, `$v0`-`$v1`, `$a0`-`$a3`, `$t0`-`$t9`, `$s0`-`$s7`, `$k0`-`$k1`, `$gp`, `$sp`, `$fp`, `$ra`

---

## Comments
These types of comments are parsed as `(comment)`:

```asm
# hash comment

// C-style line comment

/*
   C-style block comment
 */
```

`;` is not accepted to start comments.  
While some assemblers do use it for comments, many major assemblers and simulators use it to separate statements.

---

## Field Reference

| Field            | Used In                                                                 | Description                 |
| ---------------- | ----------------------------------------------------------------------- | --------------------------- |
| `opcode`         | `instruction`                                                           | Instruction mnemonic        |
| `operands`       | `instruction`, `directive`                                              | Operand list                |
| `operand`        | `instruction`, `directive` (operands)                                   | Operand in operand list     |
| `left`, `right`  | `binary_expression`                                                     | Binary operands             |
| `operator`       | `binary_expression`, `unary_expression`                                 | Operator token              |
| `argument`       | `unary_expression`, `parenthesized_expression`, `relocation_expression` | Single operand              |
| `base`, `offset` | `address`                                                               | Address components          |
| `type`           | `relocation_expression`                                                 | Relocation type             |
| `mnemonic`       | `directive`                                                             | Directive type              |
| `name`           | `directive`                                                             | Macro or parameter name     |
| `parameters`     | `directive` (macro directive)                                           | Macro parameters            |
| `parameter`      | `directive` (macro directive parameters)                                | Macro parameter             |
| `qualifier`      | `directive` (macro directive parameter)                                 | Qualifier for parameter     |
| `value`          | `directive` (macro directive parameter)                                 | Default value for parameter |

---

## Example with MIPS registers and instructions

```asm
.data
    array: .word 1, 2, 3, 4, 5

.text
.globl main

main:
    li $t0, 10              # Load immediate
    add $t1, $t0, $t0       # Simple operation
    addi $t2, $t1, 1 + 2    # Expression in operand
    lw $t3, 4 + 8($sp)      # Expression in address
    rem $t4, $t3, 100 % 7   # Modulo expression

1:  bne $t0, $zero, 1b      # Branch loop
    li $v0, 10
    syscall
```
