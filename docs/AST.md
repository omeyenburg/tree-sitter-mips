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

```scheme
(instruction
  opcode: (opcode)
  operands: (operands
    operand: (register)
    operand: (register)
    operand: (decimal)))
```

**Example:** `add $t0, $t1, $t2`

### Opcode
Instruction mnemonic (e.g., `add`, `lw`, `beq`).

### Operands
List of operands separated by commas or whitespace.

Operand types: `(register)`, `(decimal)`, `(hexadecimal)`, `(octal)`, `(float)`, `(symbol)`, `(address)`, `(macro_variable)`, `(string)`, `(binary_expression)`, `(unary_expression)`, `(parenthesized_expression)`, `(call_expression)`

---

## Directives
Assembler directives that control assembly behavior.

### Directive Types

#### Macro directive
Macro mnemonic: `.macro`

```scheme
(directive
  mnemonic: (macro_mnemonic)
  name: (macro_name)
  parameters: (macro_parameters
    (macro_parameter)
    (macro_parameter)))
```

**Example:**
```asm
.macro loop(x, y, z)
```

#### Integer directive
Integer data directives: `.byte`, `.half`, `.word`, `.dword`, `.long`, `.quad`, `.2byte`, `.4byte`, `.8byte`, `.int`, `.short`, `.hword`, `.comm`, `.lcomm`, `.align`, `.balign`, `.p2align`, `.sleb128`, `.uleb128`, `.dtprelword`, `.dtpreldword`, `.skip`, `.space`

```scheme
(directive
  mnemonic: (integer_mnemonic)
  operands: (integer_operands
    (decimal)
    (decimal)))
```

**Example:**
```asm
.word 1, 2, 3
```

#### Float directive
Floating-point data: `.float`, `.double`, `.single`

```scheme
(directive
  mnemonic: (float_mnemonic)
  operands: (float_operands
    (float)
    (float)))
```

#### String directive
String data: `.ascii`, `.asciz`, `.asciiz`, `.string`, `.stringz`

```scheme
(directive
  mnemonic: (string_mnemonic)
  string: (string))
```

**Example:**
```asm
.asciiz "Hello, World!\n"
```

#### Control directive
All other directives (e.g., `.text`, `.data`, `.globl`, `.section`)

```scheme
(directive
  mnemonic: (control_mnemonic)
  operands: (control_operands
    (symbol)))
```

```asm
.global _start
```

---

## Labels

### Global label
Standard global labels.

```scheme
(global_label)
```

**Pattern:** `[a-zA-Z_.][a-zA-Z0-9_.$]*:`

**Example:**
```asm
_start:
```

### Local label
Local labels starting with dot.

```scheme
(local_label)
```

**Pattern:** `\.[A-Z][a-zA-Z0-9_]*:`

**Example:**
```asm
.L1:
```

### Global numeric label
Multi-digit numeric labels.

```scheme
(global_numeric_label)
```

**Example:**
```asm
10:
```

**Pattern:** `[1-9][0-9]+:`

### Local numeric label
Single-digit numeric labels.

```scheme
(local_numeric_label)
```

**Pattern:** `[0-9]:`

**Example:**
```asm
1:
```

### Local numeric label reference
Reference to numeric labels.

```scheme
(local_numeric_label_reference)
```

**Examples:**
- `1b` - backward reference (previous label 1:)
- `1f` - forward reference (next label 1:)

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

```scheme
(unary_expression
  operator: (unary_operator)
  argument: (decimal))
```

**Operators:** `-` (negation), `~` (bitwise NOT), `!` (logical NOT)

**Example:** `-1`, `~0xFF`, `!flag`

### Parenthesized expression
Grouped expressions for precedence.

```scheme
(parenthesized_expression
  argument: (binary_expression ...))
```

**Example:** `(1 + 2) * 3`

### Call expression
Macro/function calls.

```scheme
(call_expression
  function: (symbol)
  arguments: (call_arguments
    (decimal)
    (register)))
```

**Example:**
```asm
print_int($t0)
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
Macro parameters with prefix: `%var`, `\var`, `$var`

```scheme
(macro_variable)
```

### Address
Memory address with optional offset expression and base register.

```scheme
(address
  offset: (binary_expression ...)  ; Can be expression or literal
  base: (register))
```

**Examples:**
- `0($sp)` - Numeric offset
- `label($gp)` - Symbol offset
- `4 + 8($sp)` - Expression offset (e.g., `4 + 8`, `8 % 4 + 2`)
- `%offset($s0)` - Macro offset

### Register
Registers for RISC V and asm.

```scheme
(register)
```

**Numeric:** `$0`-`$31`, `$f0`-`$f31`
**Named:** `$zero`, `$at`, `$v0`-`$v1`, `$a0`-`$a3`, `$t0`-`$t9`, `$s0`-`$s7`, `$k0`-`$k1`, `$gp`, `$sp`, `$fp`, `$ra`

---

## Comments

### Line comment
Single-line comments.

```scheme
(line_comment)
```

**Examples:**
```asm
# hash comment
// C-style line comment
```

### Block comment
Multi-line C-style comments.

```scheme
(block_comment)
```

---

## Preprocessor
C preprocessor directives.

```scheme
(preprocessor)
```

**Directives:** `#include`, `#define`, `#undef`, `#if`, `#ifdef`, `#ifndef`, `#else`, `#elif`, `#endif`, `#error`, `#warning`, `#pragma`, `#line`

**Example:**
```asm
#define MAX 100
```

---

## Field Reference

| Field            | Used In                                                                 | Description          |
| ---------------- | ----------------------------------------------------------------------- | -------------------- |
| `opcode`         | `instruction`                                                           | Instruction mnemonic |
| `operands`       | `instruction`, `directive`                                              | Operand list         |
| `left`, `right`  | `binary_expression`                                                     | Binary operands      |
| `operator`       | `binary_expression`, `unary_expression`                                 | Operator token       |
| `argument`       | `unary_expression`, `parenthesized_expression`, `relocation_expression` | Single operand       |
| `base`, `offset` | `address`                                                               | Address components   |
| `type`           | `relocation_expression`                                                 | Relocation type      |
| `mnemonic`       | `directive`                                                             | Directive type       |
| `name`           | `directive`                                                             | Macro name           |
| `parameters`     | `directive`                                                             | Macro parameters     |
| `string`         | `directive`                                                             | String value         |

---

## Example

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
