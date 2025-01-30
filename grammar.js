/**
 * @file A syntax parser for the MIPS Instruction Set Architecture.
 * @author Oskar Meyenburg <oskar.meyenburg@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "mips",

  // The default ignores whitespace
  // Overwrite the extras default to handle whitespace explicitly
  //extras: $ => [],
  conflicts: $ => [
    [$.instruction],
  ],

  rules: {
    program: $ => optional(seq(
      optional($._statement_wrapper),
      optional($._comment_wrapper),
      repeat(seq(
        choice('\n', ';'),
        optional($._statement_wrapper),
        optional($._comment_wrapper)
      )),
    )),

    // Statement
    _statement_wrapper: $ => seq(optional(/\s+/), $._statement),
    //statement: $ => /[^\s#]*/,

    // Comment
    _comment_wrapper: $ => seq(repeat(" "), $.comment),
    comment: $ => /#.*/,

    // Each statement can be a directive, label, instruction
    _statement: $ => choice(
      $.directive,
      $.instruction,
      $.macro,
      seq($.label, /\s*/, optional($._statement)),
    ),

    // A directive consists of a name beginning with a dot,
    // optionally followed by more arguments
    directive: $ => seq($.meta, optional(seq(/[ \t]+/, $.attributes))),
    meta: $ => token(/[.][a-z_]+/),
    attributes: $ => choice(
      $._number,
      $.string,
      token(/[^\n"#0-9]+/)
    ),

    // Macros
    macro: $ => token(/[a-zA-Z_]+\([^#]*\)/),

    // Labels
    label: $ => token(/[a-zA-Z_][a-zA-Z0-9_]*:/),

    // Instructions
    //instruction: $ => seq($.opcode, optional(seq(/ +/, $.operands))),
    instruction: $ => seq($.opcode, token(/[ \t]+/), $.operands),

    instruction: $ => choice(
      seq($.opcode, repeat1(" "), $.operands), // /[ \t]+/,
      $.opcode,
    ),

    //instruction: $ => seq($.opcode, optional($.operands)),
    //instruction: $ => $.opcode,
    opcode: $ => token(/[a-z][a-z0-9.]*/),
    operands: $ => seq($._operand), // repeat(seq(" ", $._operand))
    //operands: $ => seq($._operand, repeat(choice(
    //  seq(/[ \t]*,[ \t]*/, $._operand),
    //  seq(/[ \t]+/, $._operand),
    //))),
    //operands: $ => $._operand,
    //operands: $ => seq($._operand, repeat(seq(optional(","), $._operand))),
    _operand: $ => choice(
      $.register,
      $.macro_variable,
      $._number,
      $.address,
    ),

    // Match any macro variable
    // The starting symbol depends on the assembler in use
    // Examples: %value \\value
    macro_variable: $ => token(/[%\\][0-9a-zA-Z_:$%\\]+/),

    // Match any number
    _number: $ => choice($.char, $.octal, $.decimal, $.hexadecimal, $.float),

    // Match any address
    // Examples: main, main($s4), ($v1), -0x10($a0)
    address: $ => choice(
      $._identifier,
      seq(
        optional(choice($._identifier, $._char, $._octal, $._decimal, $._hexadecimal)),
        '(',
        $._register,
        ')'
      )
    ),

    // Primitives
    _char: $ => /'[^']'/,
    _string: $ => /"[^"]*"/,
    _octal: $ => /-?0[0-7]*/,
    _decimal: $ => /-?\d+/, // Would match octal and decimal
    _hexadecimal: $ => /-?0[xX][0-9a-fA-F]+/,
    _float: $ => choice( // Would match decimal and float
      seq(
        choice(/-?\d+\.?\d*/, /-?\d*\.\d+/),
        optional(/[eE]-?\d+/)
      ),
      /-?\d+[eE]-?\d+/
    ),
    _register: $ => /[$][0-9a-z]+/,
    _identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    char: $ => $._char,
    string: $ => $._string,
    octal: $ => $._octal,
    decimal: $ => $._decimal,
    hexadecimal: $ => $._hexadecimal,
    float: $ => $._float,
    register: $ => $._register,
  }
})
