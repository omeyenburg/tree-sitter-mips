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
  mnemonic: (instruction_mnemonic)
  operands: (operands
    (register)
    (register)
    (decimal)))
```

### Mnemonic
Instruction mnemonic (e.g., `add`, `lw`, `beq`).

### Operands
List of operands separated by commas or whitespace.

Operand types: `(register)`, `(decimal)`, `(hexadecimal)`, `(octal)`, `(float)`, `(char)`, `(symbol)`, `(macro_variable)`, `(string)`, `(binary_expression)`, `(unary_expression)`, `(parenthesized_expression)`

---

## Directives
Assembler directives that control assembly behavior.  
Split into two categories:

### Macro directive
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

### Normal directive
`integer_mnemonic`: `.byte`, `.half`, `.word`, `.dword`, `.long`, `.quad`, `.2byte`, `.4byte`, `.8byte`, `.int`, `.short`, `.hword`, `.comm`, `.lcomm`, `.align`, `.balign`, `.p2align`, `.sleb128`, `.uleb128`, `.dtprelword`, `.dtpreldword`, `.skip`, `.space`, `.zero`, `.null`, `.octa`

`float_mnemonic`: `.float`, `.double`, `.single`

`string_mnemonic`: `.ascii`, `.asciz`, `.asciiz`, `.string`, `.stringz`

`control_mnemonic`: All other directives, like `.text`, `.data`, `.globl`, `.section`

**Example:**
```asm
.word 1, 2
```

```scheme
(directive
  mnemonic: (integer_mnemonic)
  operands: (directive_operands
    (decimal)
    (decimal)))
```

---

## Labels

### Label
Simple labels.

**Pattern:** `[a-zA-Z_.][a-zA-Z0-9_.$]*:`

**Example:**
```asm
_start:
```

```scheme
(label)
```

### Numeric label
Single-digit numeric labels.

**Pattern:** `[0-9]:`

**Example:**
```asm
1:
```

```scheme
(numeric_label)
```

### Numeric label reference
Reference to numeric labels.

**Examples:**
- `1b` - backward reference (previous label 1:)
- `1f` - forward reference (next label 1:)

```scheme
(numeric_label_reference)
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
A general node capturing basic parenthesized math expressions, relocation expressions and addresses.

**Examples:**
- `(1 + 2) * 3`    - Simple expression
- `%hi($t0)`       - Relocation expression
- `offset($s0)`    - Address
- `label + 1($s0)` - Address with expression for offset

```scheme
(parenthesized_expression
  arguments: (operands ...))
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

Multiple consecutive strings will be parsed as `string_concatenation`

**Example**:
```asm
.string "foo" "bar"
```

```scheme
(string_concatenation
  (string)
  (string))
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

| Field            | Used In                                  | Description                   |
| ---------------- | ---------------------------------------- | ----------------------------- |
| `mnemonic`       | `instruction`, `directive`               | Name of instruction/directive |
| `operands`       | `instruction`, `directive`               | Operand list                  |
| `left`, `right`  | `binary_expression`                      | Binary operands               |
| `operator`       | `binary_expression`, `unary_expression`  | Operator token                |
| `argument`       | `unary_expression`                       | Single operand                |
| `arguments`      | `parenthesized_expression`               | One or more arguments         |
| `name`           | `directive`                              | Macro or parameter name       |
| `parameters`     | `directive` (macro directive)            | Macro parameters              |
| `parameter`      | `directive` (macro directive parameters) | Macro parameter               |
| `qualifier`      | `directive` (macro directive parameter)  | Qualifier for parameter       |
| `value`          | `directive` (macro directive parameter)  | Default value for parameter   |

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

Output tree:

```scheme
(program
  (directive
    mnemonic: (control_mnemonic))
  (label)
  (directive
    mnemonic: (integer_mnemonic)
    operands: (directive_operands
      (decimal)
      (decimal)
      (decimal)
      (decimal)
      (decimal)))
  (directive
    mnemonic: (control_mnemonic))
  (directive
    mnemonic: (control_mnemonic)
    operands: (directive_operands
      (symbol)))
  (label)
  (instruction
    mnemonic: (instruction_mnemonic)
    operands: (operands
      (register)
      (decimal)))
  (comment)
  (instruction
    mnemonic: (instruction_mnemonic)
    operands: (operands
      (register)
      (register)
      (register)))
  (comment)
  (instruction
    mnemonic: (instruction_mnemonic)
    operands: (operands
      (register)
      (register)
      (binary_expression
        left: (decimal)
        operator: (additive_operator)
        right: (decimal))))
  (comment)
  (instruction
    mnemonic: (instruction_mnemonic)
    operands: (operands
      (register)
      (parenthesized_expression
        head: (binary_expression
          left: (decimal)
          operator: (additive_operator)
          right: (decimal))
        arguments: (operands
          (register)))))
  (comment)
  (instruction
    mnemonic: (instruction_mnemonic)
    operands: (operands
      (register)
      (register)
      (binary_expression
        left: (decimal)
        operator: (multiplicative_operator)
        right: (decimal))))
  (comment)
  (numeric_label)
  (instruction
    mnemonic: (instruction_mnemonic)
    operands: (operands
      (register)
      (register)
      (numeric_label_reference)))
  (comment)
  (instruction
    mnemonic: (instruction_mnemonic)
    operands: (operands
      (register)
      (decimal)))
  (instruction
    mnemonic: (instruction_mnemonic)))
```
