;; Directives
[
  (macro_mnemonic)
  (integer_mnemonic)
  (float_mnemonic)
  (string_mnemonic)
  (control_mnemonic)
] @keyword

[
  (elf_type_tag)
  (option_flag)
  (macro_parameter_qualifier)
] @type

;; Labels & symbols
[
  (label)
  (macro_label)
  (numeric_label)
  (symbol)
] @label

;; Instructions
(instruction_mnemonic) @function
(register) @parameter

;; Macros
(macro_name) @label
[
  (macro_variable)
  (string_macro_variable)
  (macro_parameter_name)
] @parameter

;; Primitives
[
  (octal)
  (binary)
  (decimal)
  (hexadecimal)
] @number

(float) @number.float
(char) @character
(string) @string

(ERROR) @error
(ERROR (_) @error)

[
  (comment)
] @comment

[
  "="
  ","
  ";"
] @punctuation.delimiter

[
  "("
  ")"
] @punctuation.bracket

[
  (bitwise_or_operator)
  (logical_or_operator)
  (bitwise_and_operator)
  (logical_and_operator)
  (bitwise_xor_operator)
  (relational_operator)
  (shift_operator)
  (additive_operator)
  (multiplicative_operator)
  (equality_operator)
  (assignment_operator)
  (unary_minus_operator)
  (bitwise_not_operator)
  (logical_not_operator)
] @operator
