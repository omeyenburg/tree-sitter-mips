/**
 * @file A syntax parser for the MIPS Instruction Set Architecture.
 * @author Oskar Meyenburg <omeyenburg@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'mips',

  externals: $ => [
    $._operand_separator,
    $._operator_space,
    $._statement_separator_no_comment,
    $._multiline_operand_separator_no_comment,
    $._statement_separator_with_comment,
    $._multiline_operand_separator_with_comment,
  ],

  extras: $ => [
    /[ \t]|\\\r?\n/,
    $._extra_block_comment,
    $._operator_space,
  ],

  inline: $ => [
    $._whitespace,
    $._expression,
    $._expression_argument,
    $._statement_separator_with_comment_node,
    $._multiline_operand_separator_with_comment_node,

  ],

  conflicts: $ => [
    [$._operand, $.parenthesized_expression],
  ],

  rules: {
    program: $ => seq(
      repeat($._statement),
      optional(seq(
        choice(
          $.directive,
          $.instruction,
          $._label,
        ),
      )),
      optional($._line_comment),
    ),

    _statement: $ => prec(1, choice(
      ';',
      '\r',
      '\n',
      choice(
        seq($.directive, choice(
          ';',
          seq(optional($._line_comment), choice($._statement_separator_no_comment, $._statement_separator_with_comment_node)),
        )),
        seq($.instruction, choice(
          ';',
          seq(optional($._line_comment), choice($._statement_separator_no_comment, $._statement_separator_with_comment_node)),
        )),
      ),
      seq($._line_comment, /\r?\n/),
      $._label,
    )),

    _whitespace: $ => /[ \t]+/,

    _line_comment: $ => alias(token(seq(
      choice('#', '//'),
      /(?:[^\\\n]|\\\r?\n|\\.)*/,
    )), $.comment),

    _block_comment: $ => alias(token.immediate(seq(
      '/*',
      /(?:[^*]|\*[^/])*/,
      optional('*'),
      '*/',
    )), $.comment),

    _extra_block_comment: $ => alias(token.immediate(seq(
      '/*',
      /(?:[^*]|\*[^/])*/,
      optional('*'),
      '*/',
    )), $.comment),

    _statement_separator_with_comment_node: $ => alias($._statement_separator_with_comment, $.comment),
    _multiline_operand_separator_with_comment_node: $ => alias($._multiline_operand_separator_with_comment, $.comment),

    directive: $ => seq(choice(
      $._macro_directive,
      $._numeric_directive,
      $._string_directive,
      $._control_directive,
    )),

    _macro_directive: $ => seq(
      field('mnemonic', $.macro_mnemonic),
      choice(/[ \t]+/, $._block_comment),
      field('name', $.macro_name),
      optional(choice(
        seq(optional($._whitespace), '(', optional(field('parameters', $.macro_parameters)), ')'),
        seq($._whitespace, optional(field('parameters', $.macro_parameters))),
      )),
    ),
    macro_mnemonic: $ => '.macro',
    macro_parameters: $ => prec.left(seq(
      $.macro_parameter,
      repeat(choice(
        seq($._whitespace, $.macro_parameter),
        seq(optional($._whitespace), ',', optional($._whitespace), $.macro_parameter),
        seq($._block_comment, $.macro_parameter),
        seq($._line_comment, $.macro_parameter),
        $._block_comment,
        seq(optional($._whitespace), $._line_comment),
      )),
    )),

    _numeric_directive: $ => choice(
      seq(
        field('mnemonic', $.numeric_mnemonic),
        optional(choice(
          seq(
            choice($._whitespace, $._block_comment),
            field('operands', $.numeric_operands),
          ),
          $._whitespace,
          $._block_comment,
        )),
      ),
      field('mnemonic', $.numeric_mnemonic),
    ),
    numeric_mnemonic: $ => choice(
      '.byte',
      '.2byte', '.short', '.half', '.hword',
      '.4byte', '.word', '.int',
      '.8byte', '.dword', '.long', '.quad',
      '.comm', '.lcomm',
      '.align', '.balign', '.p2align',
      '.sleb128', '.uleb128',
      '.dtprelword', '.dtpreldword',
      '.skip', '.space',
      // Floats
      '.float', '.double', '.single',
    ),
    numeric_operands: $ => seq(
      $._expression,
      repeat(seq(
        choice(
          seq(',', optional(choice(
            $._multiline_operand_separator_no_comment,
            $._multiline_operand_separator_with_comment_node,
          ))),
          $._operand_separator,
          $._multiline_operand_separator_no_comment,
          $._multiline_operand_separator_with_comment_node,
        ),
        $._expression,
      )),
      optional(choice(
        repeat(choice($._multiline_operand_separator_no_comment, $._multiline_operand_separator_with_comment_node)),
      )),
    ),

    _string_directive: $ => seq(
      field('mnemonic', $.string_mnemonic),
      optional(choice(
        seq(
          choice($._whitespace, $._block_comment),
          field('operands', $.string_operands),
        ),
        $._whitespace,
        $._block_comment,
      )),
    ),
    string_mnemonic: $ => choice(
      '.asciz',
      '.ascii',
      '.asciiz',
      '.string',
      '.stringz',
    ),
    string_operands: $ => prec.right(choice(
      // Multiple strings with optional separators
      seq(
        $.string,
        repeat(seq(
          optional(repeat1(choice(
            ',',
            $._block_comment,
            $._multiline_operand_separator_no_comment,
            $._multiline_operand_separator_with_comment_node,
          ))),
          $.string,
        )),
      ),
      // Single non-string operand
      choice($.macro_variable, $.address),
    )),
    _string_operand: $ => choice($.string, $.macro_variable, $.address),

    _control_directive: $ => seq(
      field('mnemonic', $.control_mnemonic),
      optional(choice(
        seq(
          choice($._whitespace, $._block_comment),
          field('operands', $.control_operands),
        ),
        $._whitespace,
        $._block_comment,
      )),
    ),
    control_mnemonic: $ => prec(-1, /\.[a-z0-9_]+/),
    control_operands: $ => seq(
      $._control_operand,
      repeat(seq(
        $._control_operand_separator,
        $._control_operand,
      )),
    ),
    _control_operand: $ => choice(
      $._expression,
      $.string,
      $.elf_type_tag,
      $.option_flag,
    ),
    _control_operand_separator: $ => choice(
      seq(',', optional(choice(
        $._multiline_operand_separator_no_comment,
        $._multiline_operand_separator_with_comment_node,
      ))),
      $._operand_separator,
      $._multiline_operand_separator_no_comment,
      $._multiline_operand_separator_with_comment_node,
    ),

    elf_type_tag: $ => prec(-5, /@[a-z]+/),
    option_flag: $ => prec(-5, /\+[a-z]/),

    // Instruction consists of an opcode and optionally a list of operands.
    instruction: $ => seq(
      field('opcode', choice($.opcode, $.macro_variable)),
      optional(choice(
        $._call_expression,
        seq(
          choice($._whitespace, $._block_comment),
          optional(choice(
            field('operands', $.operands),
            $._call_expression,
          )),
        ),
      )),
    ),
    opcode: $ => token(/[a-zA-Z_][a-zA-Z0-9_.]*/),
    operands: $ => seq(
      field('operand', $._operand),
      repeat(seq(
        choice(
          ',',
          $._operand_separator,
          $._multiline_operand_separator_with_comment_node,
        ),
        field('operand', $._operand),
      )),
      optional($._operand_separator),
    ),
    _operand: $ => choice(
      $._expression,
      $.string,
    ),

    // Support macro-style calling.
    // Examples: `exit(0)`, `for($t0, 0, 3)`
    _call_expression: $ => prec(20, seq(
      '(',
      optional($._block_comment),
      optional(field('operands', $.operands)),
      ')',
    )),

    // Matches primitives, registers, macro variables and compound expressions.
    //
    // Nested expression evaluation order.
    // Operands of higher precedence binary expressions cannot be
    // expressions of lower precedence.
    // Primitives, addresses and single argument expression types
    // are at the bottom of the chain.
    //
    // Examples: `1`, `%var + 3`, `(label + 7)`
    _expression: $ => $._wrapped_assignment_expression,

    _assignment_expression: $ => prec(13, seq(
      field('left', $._wrapped_assignment_expression),
      field('operator', $.assignment_operator),
      field('right', $._wrapped_logical_or_expression),
    )),
    assignment_operator: $ => token('='),
    _wrapped_assignment_expression: $ => choice(
      alias($._assignment_expression, $.binary_expression),
      $._wrapped_logical_or_expression,
    ),

    _logical_or_expression: $ => prec(1, seq(
      field('left', $._wrapped_logical_or_expression),
      field('operator', $.logical_or_operator),
      field('right', $._wrapped_logical_and_expression),
    )),
    logical_or_operator: $ => token('||'),
    _wrapped_logical_or_expression: $ => choice(
      alias($._logical_or_expression, $.binary_expression),
      $._wrapped_logical_and_expression,
    ),

    _logical_and_expression: $ => prec(2, seq(
      field('left', $._wrapped_logical_and_expression),
      field('operator', $.logical_and_operator),
      field('right', $._wrapped_bitwise_or_expression),
    )),
    logical_and_operator: $ => token('&&'),
    _wrapped_logical_and_expression: $ => choice(
      alias($._logical_and_expression, $.binary_expression),
      $._wrapped_bitwise_or_expression,
    ),

    _bitwise_or_expression: $ => prec(3, seq(
      field('left', $._wrapped_bitwise_or_expression),
      field('operator', $.bitwise_or_operator),
      field('right', $._wrapped_bitwise_xor_expression),
    )),
    bitwise_or_operator: $ => token('|'),
    _wrapped_bitwise_or_expression: $ => choice(
      alias($._bitwise_or_expression, $.binary_expression),
      $._wrapped_bitwise_xor_expression,
    ),

    _bitwise_xor_expression: $ => prec(4, seq(
      field('left', $._wrapped_bitwise_xor_expression),
      field('operator', $.bitwise_xor_operator),
      field('right', $._wrapped_bitwise_and_expression),
    )),
    bitwise_xor_operator: $ => token('^'),
    _wrapped_bitwise_xor_expression: $ => choice(
      alias($._bitwise_xor_expression, $.binary_expression),
      $._wrapped_bitwise_and_expression,
    ),

    _bitwise_and_expression: $ => prec(5, seq(
      field('left', $._wrapped_bitwise_and_expression),
      field('operator', $.bitwise_and_operator),
      field('right', $._wrapped_equality_expression),
    )),
    bitwise_and_operator: $ => token('&'),
    _wrapped_bitwise_and_expression: $ => choice(
      alias($._bitwise_and_expression, $.binary_expression),
      $._wrapped_equality_expression,
    ),

    _equality_expression: $ => prec(6, seq(
      field('left', $._wrapped_equality_expression),
      field('operator', $.equality_operator),
      field('right', $._wrapped_relational_expression),
    )),
    equality_operator: $ => token(choice('==', '!=')),
    _wrapped_equality_expression: $ => choice(
      alias($._equality_expression, $.binary_expression),
      $._wrapped_relational_expression,
    ),

    _relational_expression: $ => prec(7, seq(
      field('left', $._wrapped_relational_expression),
      field('operator', $.relational_operator),
      field('right', $._wrapped_shift_expression),
    )),
    relational_operator: $ => token(choice('<', '>', '<=', '>=')),
    _wrapped_relational_expression: $ => choice(
      alias($._relational_expression, $.binary_expression),
      $._wrapped_shift_expression,
    ),

    _shift_expression: $ => prec(8, seq(
      field('left', $._wrapped_shift_expression),
      field('operator', $.shift_operator),
      field('right', $._wrapped_additive_expression),
    )),
    shift_operator: $ => token(choice('<<', '>>')),
    _wrapped_shift_expression: $ => choice(
      alias($._shift_expression, $.binary_expression),
      $._wrapped_additive_expression,
    ),

    _additive_expression: $ => prec(9, seq(
      field('left', $._wrapped_additive_expression),
      field('operator', $.additive_operator),
      field('right', $._wrapped_multiplicative_expression),
    )),
    additive_operator: $ => token(choice('+', '-')),
    _wrapped_additive_expression: $ => choice(
      alias($._additive_expression, $.binary_expression),
      $._wrapped_multiplicative_expression,
    ),

    _multiplicative_expression: $ => prec(11, seq(
      field('left', $._wrapped_multiplicative_expression),
      field('operator', $.multiplicative_operator),
      field('right', $._simple_expression),
    )),
    multiplicative_operator: $ => choice(token('*'), alias($._modulo_operator, '%'), token('/')),
    _modulo_operator: $ => '%',
    _wrapped_multiplicative_expression: $ => choice(
      alias($._multiplicative_expression, $.binary_expression),
      $._simple_expression,
    ),

    // Any non-binary expression and primitive
    _simple_expression: $ => choice(
      $.parenthesized_expression,
      $.unary_expression,
      $.relocation_expression,
      $.address,
      $.macro_variable,
      $.register,
      $.local_label_reference,
      $.symbol,
      $.local_numeric_label_reference,
      $.char,
      $.octal,
      $.binary,
      $.decimal,
      $.hexadecimal,
      $.float,
    ),

    // Parenthesized expression:
    // Contains a new expression with any binary operations.
    // Example: `(2 * 3)`
    parenthesized_expression: $ => seq('(', $._expression_argument, ')'),

    // Unary expression:
    // Supports recursive nesting.
    // Examples: `-x`, `!!1`
    unary_expression: $ => seq(
      field('operator', choice(
        $.unary_minus_operator,
        $.bitwise_not_operator,
        $.logical_not_operator,
      )),
      $._expression_argument,
    ),
    unary_minus_operator: $ => token('-'),
    bitwise_not_operator: $ => token('~'),
    logical_not_operator: $ => token('!'),

    // Relocation expression:
    // Examples: `%hi(foo)`, `%lo(123)`
    relocation_expression: $ => seq(
      field('type', $.relocation_type),
      '(',
      $._expression_argument,
      ')',
    ),
    relocation_type: $ => token(choice(
      '%abs64',
      '%call16',
      '%dtprel',
      '%got',
      '%got_hi',
      '%got_lo',
      '%gprel',
      '%hi',
      '%lo',
      '%pc16',
      '%pc32',
      '%pcrel_hi',
      '%pcrel_lo',
      '%tls_got_hi',
      '%tls_got_lo',
      '%tlsgd_hi',
      '%tlsgd_lo',
      '%tprel',
      '%tprel_add',
      '%tprel_hi',
      '%tprel_lo',
    )),

    _expression_argument: $ => field('argument', $._expression),

    // Primitive data types
    octal: $ => /-?0o?[0-7]*/,
    binary: $ => /-?0[bB][01]+/,
    decimal: $ => prec(-1, /-?\d+/),
    hexadecimal: $ => /-?0[xX][0-9a-fA-F]+/,
    float: $ => token(choice(
      seq(
        choice(/-?\d+\.\d*/, /-?\d*\.\d+/),
        optional(/[eE][+-]?\d+/),
        optional(choice('f', 'd')),
      ),
      /-?\d+[eE][+-]?\d+f?/,
    )),

    char: $ => seq('\'', choice(/\\./, /[^'\\]/), '\''),
    string: $ => seq(
      '"',
      repeat(choice($._escape_sequence, $.string_macro_variable, /[^"\\]/)),
      '"',
    ),
    _escape_sequence: $ => token(
      seq(
        '\\',
        choice(
          /[abfnrtv\\'"?]/,
          /[0-7]{1,3}/,
          /x[0-9a-fA-F]{2}/,
          /u[0-9a-fA-F]{4}/,
          /U[0-9a-fA-F]{8}/,
        ),
      ),
    ),

    register: $ => token(seq(
      optional('$'),
      choice(
        // MIPS
        'zero', 'at', 'gp', 'sp', 'fp', 'ra',
        /[vV][0-1]/, // v0–v1
        /[kK][0-1]/, // k0–k1
        /[cC][0-3]/, // c0–c3

        // RISC V
        'tp',
        /f[ts](?:[0-9]|1[01])/, // ft0–ft11 and fs0–fs11
        /fa[0-7]/, // fa0–fa7

        // Both
        /[aA][0-7]/, // a0–a7, MIPS32 only has ..a3
        /[sS](?:[0-9]|1[01])/, // s0–s11,  MIPS only has ..s8
        /[tT][0-9]/, // t0-t9, MIPS only has ..t6
        /[frxFRX]?(?:[0-9]|[12][0-9]|30|31)/,
      ),
    )),

    // Macro variables:
    // - start with percent, dollar or backslash.
    // - may include \() marking the end of the macro identifier.
    macro_variable: $ => token(choice(
      /[%][0-9a-zA-Z_$\\@]+(\\\(\)[0-9a-zA-Z_%$\\@]*)?/,
      /[$][0-9a-zA-Z_%\\@]+(\\\(\)[0-9a-zA-Z_%$\\@]*)?/,
      /[\\][0-9a-zA-Z_$%@]+(\\\(\)[0-9a-zA-Z_%$@]*)?/,
      /[0-9a-zA-Z_$\\%@]+[\\][0-9a-zA-Z_$%@]+(\\\(\)[0-9a-zA-Z_%$@]*)?/,
    )),
    string_macro_variable: $ => token(/\\[0-9a-zA-Z_$%]+(\\\(\))?/),

    macro_name: $ => token(/[a-zA-Z_][a-zA-Z0-9_$]*/),
    macro_parameter: $ => prec.right(seq(
      field('name', $.macro_parameter_name),
      optional(field('qualifier', $.macro_parameter_qualifier)),
      optional(field('value', seq('=', $._expression))),
    )),
    macro_parameter_name: $ => token(/[%$\\]?[0-9a-zA-Z_$%\\]+/),
    macro_parameter_qualifier: $ => token(':req'),

    _label: $ => seq(
      choice($.macro_label, $.global_label, $.local_label, $.global_numeric_label, $.local_numeric_label),
      optional($._whitespace),
    ),

    // Example: `\foo:`, `\foo\()_bar:`, `\foo :`
    macro_label: $ => token(/[%$\\][0-9a-zA-Z_$\\]+(\\\(\)[0-9a-zA-Z_%$]*)?[ \t]*:/),

    // Example: `.L122:`, `.Loop_1:`, `.L122 :`
    local_label: $ => token(prec(3, /\.L[a-zA-Z0-9_$]*[ \t]*:/)),
    local_label_reference: $ => prec(1, /\.L[a-zA-Z0-9_$]*/),

    // Example: `main:`, `main :`
    global_label: $ => token(prec(2, /[a-zA-Z_.][a-zA-Z0-9_.$]*[ \t]*:/)),
    symbol: $ => prec(-1, /[a-zA-Z_.][a-zA-Z0-9_.$]*/),

    // Example: `123:`, `123 :`
    // Referenced by number literal
    global_numeric_label: $ => token(prec(2, /[1-9][0-9]+[ \t]*:/)),

    // Example: `1:`, `1 :`
    local_numeric_label: $ => token(prec(3, /[0-9][ \t]*:/)),
    local_numeric_label_reference: $ => token(/[0-9][fb]/),

    // Examples: `main($s4)`, `value+4($s1)`, `($v1)`, `-0x10($a0)`
    // Cannot match expression-like addresses: main, main+2
    //  NOTE: This also matches macro calls in instructions.
    //        Example: `foo bar($t0, 1, 5)`
    address: $ => prec(1, seq(
      optional(field('offset', $._expression)),
      '(',
      choice(
        field('base', $.register),
        field('base', $.macro_variable),
        field('base', $.symbol),
        field('operands', $.operands),
      ),
      ')',
    )),
  },
});
