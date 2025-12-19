#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 624
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 162
#define ALIAS_COUNT 0
#define TOKEN_COUNT 96
#define EXTERNAL_TOKEN_COUNT 6
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 31

enum ts_symbol_identifiers {
  anon_sym_SEMI = 1,
  anon_sym_CR = 2,
  anon_sym_LF = 3,
  aux_sym__statement_token1 = 4,
  aux_sym__whitespace_token1 = 5,
  aux_sym__line_comment_token1 = 6,
  aux_sym__block_comment_token1 = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  sym_macro_mnemonic = 10,
  anon_sym_COMMA = 11,
  anon_sym_DOTbyte = 12,
  anon_sym_DOT2byte = 13,
  anon_sym_DOTshort = 14,
  anon_sym_DOThalf = 15,
  anon_sym_DOThword = 16,
  anon_sym_DOT4byte = 17,
  anon_sym_DOTword = 18,
  anon_sym_DOTint = 19,
  anon_sym_DOT8byte = 20,
  anon_sym_DOTdword = 21,
  anon_sym_DOTlong = 22,
  anon_sym_DOTquad = 23,
  anon_sym_DOTcomm = 24,
  anon_sym_DOTlcomm = 25,
  anon_sym_DOTalign = 26,
  anon_sym_DOTbalign = 27,
  anon_sym_DOTp2align = 28,
  anon_sym_DOTsleb128 = 29,
  anon_sym_DOTuleb128 = 30,
  anon_sym_DOTdtprelword = 31,
  anon_sym_DOTdtpreldword = 32,
  anon_sym_DOTskip = 33,
  anon_sym_DOTspace = 34,
  anon_sym_DOTfloat = 35,
  anon_sym_DOTdouble = 36,
  anon_sym_DOTsingle = 37,
  anon_sym_DOTasciz = 38,
  anon_sym_DOTascii = 39,
  anon_sym_DOTasciiz = 40,
  anon_sym_DOTstring = 41,
  anon_sym_DOTstringz = 42,
  aux_sym_control_mnemonic_token1 = 43,
  sym_instruction_mnemonic = 44,
  anon_sym_EQ = 45,
  sym_logical_or_operator = 46,
  sym_logical_and_operator = 47,
  sym_bitwise_or_operator = 48,
  sym_bitwise_xor_operator = 49,
  sym_bitwise_and_operator = 50,
  sym_equality_operator = 51,
  sym_relational_operator = 52,
  sym_shift_operator = 53,
  sym_additive_operator = 54,
  anon_sym_STAR = 55,
  anon_sym_SLASH = 56,
  anon_sym_PERCENT = 57,
  sym_unary_minus_operator = 58,
  sym_bitwise_not_operator = 59,
  sym_logical_not_operator = 60,
  sym_relocation_type = 61,
  sym_octal = 62,
  sym_binary = 63,
  aux_sym_decimal_token1 = 64,
  sym_hexadecimal = 65,
  sym_float = 66,
  aux_sym_elf_type_tag_token1 = 67,
  aux_sym_option_flag_token1 = 68,
  anon_sym_SQUOTE = 69,
  aux_sym_char_token1 = 70,
  aux_sym_char_token2 = 71,
  anon_sym_DQUOTE = 72,
  aux_sym_string_token1 = 73,
  sym__escape_sequence = 74,
  sym_register = 75,
  sym_macro_variable = 76,
  sym_string_macro_variable = 77,
  sym_macro_name = 78,
  sym_macro_parameter_name = 79,
  sym_macro_parameter_qualifier = 80,
  sym_macro_label = 81,
  sym_local_label = 82,
  aux_sym_local_label_reference_token1 = 83,
  sym_global_label = 84,
  aux_sym_symbol_token1 = 85,
  sym_global_numeric_label = 86,
  sym_local_numeric_label = 87,
  sym_local_numeric_label_reference = 88,
  anon_sym_operands = 89,
  sym__operand_separator = 90,
  sym__operator_space = 91,
  sym__statement_separator_no_comment = 92,
  sym__multiline_operand_separator_no_comment = 93,
  sym__statement_separator_with_comment = 94,
  sym__multiline_operand_separator_with_comment = 95,
  sym_program = 96,
  sym__statement = 97,
  sym__line_comment = 98,
  sym__block_comment = 99,
  sym__extra_block_comment = 100,
  sym_directive = 101,
  sym__macro_directive = 102,
  sym_macro_parameters = 103,
  sym__directive = 104,
  sym__directive_mnemonic = 105,
  sym_integer_mnemonic = 106,
  sym_float_mnemonic = 107,
  sym_string_mnemonic = 108,
  sym_control_mnemonic = 109,
  sym_directive_operands = 110,
  sym__directive_operand = 111,
  sym__concat_string = 112,
  sym_instruction = 113,
  sym_instruction_operands = 114,
  sym__instruction_operand = 115,
  sym__call_expression = 116,
  sym__assignment_expression = 117,
  sym_assignment_operator = 118,
  sym__wrapped_assignment_expression = 119,
  sym__logical_or_expression = 120,
  sym__wrapped_logical_or_expression = 121,
  sym__logical_and_expression = 122,
  sym__wrapped_logical_and_expression = 123,
  sym__bitwise_or_expression = 124,
  sym__wrapped_bitwise_or_expression = 125,
  sym__bitwise_xor_expression = 126,
  sym__wrapped_bitwise_xor_expression = 127,
  sym__bitwise_and_expression = 128,
  sym__wrapped_bitwise_and_expression = 129,
  sym__equality_expression = 130,
  sym__wrapped_equality_expression = 131,
  sym__relational_expression = 132,
  sym__wrapped_relational_expression = 133,
  sym__shift_expression = 134,
  sym__wrapped_shift_expression = 135,
  sym__additive_expression = 136,
  sym__wrapped_additive_expression = 137,
  sym__multiplicative_expression = 138,
  sym_multiplicative_operator = 139,
  sym__modulo_operator = 140,
  sym__wrapped_multiplicative_expression = 141,
  sym__simple_expression = 142,
  sym_parenthesized_expression = 143,
  sym_unary_expression = 144,
  sym_relocation_expression = 145,
  sym_decimal = 146,
  sym_elf_type_tag = 147,
  sym_option_flag = 148,
  sym_char = 149,
  sym_string = 150,
  sym_macro_parameter = 151,
  sym__label = 152,
  sym_local_label_reference = 153,
  sym_symbol = 154,
  sym_address = 155,
  aux_sym_program_repeat1 = 156,
  aux_sym_macro_parameters_repeat1 = 157,
  aux_sym_directive_operands_repeat1 = 158,
  aux_sym_directive_operands_repeat2 = 159,
  aux_sym_instruction_operands_repeat1 = 160,
  aux_sym_string_repeat1 = 161,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_CR] = "\r",
  [anon_sym_LF] = "\n",
  [aux_sym__statement_token1] = "_statement_token1",
  [aux_sym__whitespace_token1] = "_whitespace_token1",
  [aux_sym__line_comment_token1] = "comment",
  [aux_sym__block_comment_token1] = "comment",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_macro_mnemonic] = "macro_mnemonic",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOTbyte] = ".byte",
  [anon_sym_DOT2byte] = ".2byte",
  [anon_sym_DOTshort] = ".short",
  [anon_sym_DOThalf] = ".half",
  [anon_sym_DOThword] = ".hword",
  [anon_sym_DOT4byte] = ".4byte",
  [anon_sym_DOTword] = ".word",
  [anon_sym_DOTint] = ".int",
  [anon_sym_DOT8byte] = ".8byte",
  [anon_sym_DOTdword] = ".dword",
  [anon_sym_DOTlong] = ".long",
  [anon_sym_DOTquad] = ".quad",
  [anon_sym_DOTcomm] = ".comm",
  [anon_sym_DOTlcomm] = ".lcomm",
  [anon_sym_DOTalign] = ".align",
  [anon_sym_DOTbalign] = ".balign",
  [anon_sym_DOTp2align] = ".p2align",
  [anon_sym_DOTsleb128] = ".sleb128",
  [anon_sym_DOTuleb128] = ".uleb128",
  [anon_sym_DOTdtprelword] = ".dtprelword",
  [anon_sym_DOTdtpreldword] = ".dtpreldword",
  [anon_sym_DOTskip] = ".skip",
  [anon_sym_DOTspace] = ".space",
  [anon_sym_DOTfloat] = ".float",
  [anon_sym_DOTdouble] = ".double",
  [anon_sym_DOTsingle] = ".single",
  [anon_sym_DOTasciz] = ".asciz",
  [anon_sym_DOTascii] = ".ascii",
  [anon_sym_DOTasciiz] = ".asciiz",
  [anon_sym_DOTstring] = ".string",
  [anon_sym_DOTstringz] = ".stringz",
  [aux_sym_control_mnemonic_token1] = "control_mnemonic_token1",
  [sym_instruction_mnemonic] = "instruction_mnemonic",
  [anon_sym_EQ] = "=",
  [sym_logical_or_operator] = "logical_or_operator",
  [sym_logical_and_operator] = "logical_and_operator",
  [sym_bitwise_or_operator] = "bitwise_or_operator",
  [sym_bitwise_xor_operator] = "bitwise_xor_operator",
  [sym_bitwise_and_operator] = "bitwise_and_operator",
  [sym_equality_operator] = "equality_operator",
  [sym_relational_operator] = "relational_operator",
  [sym_shift_operator] = "shift_operator",
  [sym_additive_operator] = "additive_operator",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [sym_unary_minus_operator] = "unary_minus_operator",
  [sym_bitwise_not_operator] = "bitwise_not_operator",
  [sym_logical_not_operator] = "logical_not_operator",
  [sym_relocation_type] = "relocation_type",
  [sym_octal] = "octal",
  [sym_binary] = "binary",
  [aux_sym_decimal_token1] = "decimal_token1",
  [sym_hexadecimal] = "hexadecimal",
  [sym_float] = "float",
  [aux_sym_elf_type_tag_token1] = "elf_type_tag_token1",
  [aux_sym_option_flag_token1] = "option_flag_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_char_token1] = "char_token1",
  [aux_sym_char_token2] = "char_token2",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym__escape_sequence] = "_escape_sequence",
  [sym_register] = "register",
  [sym_macro_variable] = "macro_variable",
  [sym_string_macro_variable] = "string_macro_variable",
  [sym_macro_name] = "macro_name",
  [sym_macro_parameter_name] = "macro_parameter_name",
  [sym_macro_parameter_qualifier] = "macro_parameter_qualifier",
  [sym_macro_label] = "macro_label",
  [sym_local_label] = "local_label",
  [aux_sym_local_label_reference_token1] = "local_label_reference_token1",
  [sym_global_label] = "global_label",
  [aux_sym_symbol_token1] = "symbol_token1",
  [sym_global_numeric_label] = "global_numeric_label",
  [sym_local_numeric_label] = "local_numeric_label",
  [sym_local_numeric_label_reference] = "local_numeric_label_reference",
  [anon_sym_operands] = "_multiple_operands",
  [sym__operand_separator] = "_operand_separator",
  [sym__operator_space] = "_operator_space",
  [sym__statement_separator_no_comment] = "_statement_separator_no_comment",
  [sym__multiline_operand_separator_no_comment] = "_multiline_operand_separator_no_comment",
  [sym__statement_separator_with_comment] = "comment",
  [sym__multiline_operand_separator_with_comment] = "comment",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym__line_comment] = "_line_comment",
  [sym__block_comment] = "_block_comment",
  [sym__extra_block_comment] = "_extra_block_comment",
  [sym_directive] = "directive",
  [sym__macro_directive] = "_macro_directive",
  [sym_macro_parameters] = "macro_parameters",
  [sym__directive] = "_directive",
  [sym__directive_mnemonic] = "_directive_mnemonic",
  [sym_integer_mnemonic] = "integer_mnemonic",
  [sym_float_mnemonic] = "float_mnemonic",
  [sym_string_mnemonic] = "string_mnemonic",
  [sym_control_mnemonic] = "control_mnemonic",
  [sym_directive_operands] = "directive_operands",
  [sym__directive_operand] = "_directive_operand",
  [sym__concat_string] = "_concat_string",
  [sym_instruction] = "instruction",
  [sym_instruction_operands] = "instruction_operands",
  [sym__instruction_operand] = "_instruction_operand",
  [sym__call_expression] = "_call_expression",
  [sym__assignment_expression] = "binary_expression",
  [sym_assignment_operator] = "assignment_operator",
  [sym__wrapped_assignment_expression] = "_wrapped_assignment_expression",
  [sym__logical_or_expression] = "binary_expression",
  [sym__wrapped_logical_or_expression] = "_wrapped_logical_or_expression",
  [sym__logical_and_expression] = "binary_expression",
  [sym__wrapped_logical_and_expression] = "_wrapped_logical_and_expression",
  [sym__bitwise_or_expression] = "binary_expression",
  [sym__wrapped_bitwise_or_expression] = "_wrapped_bitwise_or_expression",
  [sym__bitwise_xor_expression] = "binary_expression",
  [sym__wrapped_bitwise_xor_expression] = "_wrapped_bitwise_xor_expression",
  [sym__bitwise_and_expression] = "binary_expression",
  [sym__wrapped_bitwise_and_expression] = "_wrapped_bitwise_and_expression",
  [sym__equality_expression] = "binary_expression",
  [sym__wrapped_equality_expression] = "_wrapped_equality_expression",
  [sym__relational_expression] = "binary_expression",
  [sym__wrapped_relational_expression] = "_wrapped_relational_expression",
  [sym__shift_expression] = "binary_expression",
  [sym__wrapped_shift_expression] = "_wrapped_shift_expression",
  [sym__additive_expression] = "binary_expression",
  [sym__wrapped_additive_expression] = "_wrapped_additive_expression",
  [sym__multiplicative_expression] = "binary_expression",
  [sym_multiplicative_operator] = "multiplicative_operator",
  [sym__modulo_operator] = "%",
  [sym__wrapped_multiplicative_expression] = "_wrapped_multiplicative_expression",
  [sym__simple_expression] = "_simple_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_relocation_expression] = "relocation_expression",
  [sym_decimal] = "decimal",
  [sym_elf_type_tag] = "elf_type_tag",
  [sym_option_flag] = "option_flag",
  [sym_char] = "char",
  [sym_string] = "string",
  [sym_macro_parameter] = "macro_parameter",
  [sym__label] = "_label",
  [sym_local_label_reference] = "local_label_reference",
  [sym_symbol] = "symbol",
  [sym_address] = "address",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_macro_parameters_repeat1] = "macro_parameters_repeat1",
  [aux_sym_directive_operands_repeat1] = "directive_operands_repeat1",
  [aux_sym_directive_operands_repeat2] = "directive_operands_repeat2",
  [aux_sym_instruction_operands_repeat1] = "instruction_operands_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_CR] = anon_sym_CR,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym__statement_token1] = aux_sym__statement_token1,
  [aux_sym__whitespace_token1] = aux_sym__whitespace_token1,
  [aux_sym__line_comment_token1] = sym__statement_separator_with_comment,
  [aux_sym__block_comment_token1] = sym__statement_separator_with_comment,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_macro_mnemonic] = sym_macro_mnemonic,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOTbyte] = anon_sym_DOTbyte,
  [anon_sym_DOT2byte] = anon_sym_DOT2byte,
  [anon_sym_DOTshort] = anon_sym_DOTshort,
  [anon_sym_DOThalf] = anon_sym_DOThalf,
  [anon_sym_DOThword] = anon_sym_DOThword,
  [anon_sym_DOT4byte] = anon_sym_DOT4byte,
  [anon_sym_DOTword] = anon_sym_DOTword,
  [anon_sym_DOTint] = anon_sym_DOTint,
  [anon_sym_DOT8byte] = anon_sym_DOT8byte,
  [anon_sym_DOTdword] = anon_sym_DOTdword,
  [anon_sym_DOTlong] = anon_sym_DOTlong,
  [anon_sym_DOTquad] = anon_sym_DOTquad,
  [anon_sym_DOTcomm] = anon_sym_DOTcomm,
  [anon_sym_DOTlcomm] = anon_sym_DOTlcomm,
  [anon_sym_DOTalign] = anon_sym_DOTalign,
  [anon_sym_DOTbalign] = anon_sym_DOTbalign,
  [anon_sym_DOTp2align] = anon_sym_DOTp2align,
  [anon_sym_DOTsleb128] = anon_sym_DOTsleb128,
  [anon_sym_DOTuleb128] = anon_sym_DOTuleb128,
  [anon_sym_DOTdtprelword] = anon_sym_DOTdtprelword,
  [anon_sym_DOTdtpreldword] = anon_sym_DOTdtpreldword,
  [anon_sym_DOTskip] = anon_sym_DOTskip,
  [anon_sym_DOTspace] = anon_sym_DOTspace,
  [anon_sym_DOTfloat] = anon_sym_DOTfloat,
  [anon_sym_DOTdouble] = anon_sym_DOTdouble,
  [anon_sym_DOTsingle] = anon_sym_DOTsingle,
  [anon_sym_DOTasciz] = anon_sym_DOTasciz,
  [anon_sym_DOTascii] = anon_sym_DOTascii,
  [anon_sym_DOTasciiz] = anon_sym_DOTasciiz,
  [anon_sym_DOTstring] = anon_sym_DOTstring,
  [anon_sym_DOTstringz] = anon_sym_DOTstringz,
  [aux_sym_control_mnemonic_token1] = aux_sym_control_mnemonic_token1,
  [sym_instruction_mnemonic] = sym_instruction_mnemonic,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_logical_or_operator] = sym_logical_or_operator,
  [sym_logical_and_operator] = sym_logical_and_operator,
  [sym_bitwise_or_operator] = sym_bitwise_or_operator,
  [sym_bitwise_xor_operator] = sym_bitwise_xor_operator,
  [sym_bitwise_and_operator] = sym_bitwise_and_operator,
  [sym_equality_operator] = sym_equality_operator,
  [sym_relational_operator] = sym_relational_operator,
  [sym_shift_operator] = sym_shift_operator,
  [sym_additive_operator] = sym_additive_operator,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [sym_unary_minus_operator] = sym_unary_minus_operator,
  [sym_bitwise_not_operator] = sym_bitwise_not_operator,
  [sym_logical_not_operator] = sym_logical_not_operator,
  [sym_relocation_type] = sym_relocation_type,
  [sym_octal] = sym_octal,
  [sym_binary] = sym_binary,
  [aux_sym_decimal_token1] = aux_sym_decimal_token1,
  [sym_hexadecimal] = sym_hexadecimal,
  [sym_float] = sym_float,
  [aux_sym_elf_type_tag_token1] = aux_sym_elf_type_tag_token1,
  [aux_sym_option_flag_token1] = aux_sym_option_flag_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_char_token1] = aux_sym_char_token1,
  [aux_sym_char_token2] = aux_sym_char_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym__escape_sequence] = sym__escape_sequence,
  [sym_register] = sym_register,
  [sym_macro_variable] = sym_macro_variable,
  [sym_string_macro_variable] = sym_string_macro_variable,
  [sym_macro_name] = sym_macro_name,
  [sym_macro_parameter_name] = sym_macro_parameter_name,
  [sym_macro_parameter_qualifier] = sym_macro_parameter_qualifier,
  [sym_macro_label] = sym_macro_label,
  [sym_local_label] = sym_local_label,
  [aux_sym_local_label_reference_token1] = aux_sym_local_label_reference_token1,
  [sym_global_label] = sym_global_label,
  [aux_sym_symbol_token1] = aux_sym_symbol_token1,
  [sym_global_numeric_label] = sym_global_numeric_label,
  [sym_local_numeric_label] = sym_local_numeric_label,
  [sym_local_numeric_label_reference] = sym_local_numeric_label_reference,
  [anon_sym_operands] = anon_sym_operands,
  [sym__operand_separator] = sym__operand_separator,
  [sym__operator_space] = sym__operator_space,
  [sym__statement_separator_no_comment] = sym__statement_separator_no_comment,
  [sym__multiline_operand_separator_no_comment] = sym__multiline_operand_separator_no_comment,
  [sym__statement_separator_with_comment] = sym__statement_separator_with_comment,
  [sym__multiline_operand_separator_with_comment] = sym__statement_separator_with_comment,
  [sym_program] = sym_program,
  [sym__statement] = sym__statement,
  [sym__line_comment] = sym__line_comment,
  [sym__block_comment] = sym__block_comment,
  [sym__extra_block_comment] = sym__extra_block_comment,
  [sym_directive] = sym_directive,
  [sym__macro_directive] = sym__macro_directive,
  [sym_macro_parameters] = sym_macro_parameters,
  [sym__directive] = sym__directive,
  [sym__directive_mnemonic] = sym__directive_mnemonic,
  [sym_integer_mnemonic] = sym_integer_mnemonic,
  [sym_float_mnemonic] = sym_float_mnemonic,
  [sym_string_mnemonic] = sym_string_mnemonic,
  [sym_control_mnemonic] = sym_control_mnemonic,
  [sym_directive_operands] = sym_directive_operands,
  [sym__directive_operand] = sym__directive_operand,
  [sym__concat_string] = sym__concat_string,
  [sym_instruction] = sym_instruction,
  [sym_instruction_operands] = sym_instruction_operands,
  [sym__instruction_operand] = sym__instruction_operand,
  [sym__call_expression] = sym__call_expression,
  [sym__assignment_expression] = sym__assignment_expression,
  [sym_assignment_operator] = sym_assignment_operator,
  [sym__wrapped_assignment_expression] = sym__wrapped_assignment_expression,
  [sym__logical_or_expression] = sym__assignment_expression,
  [sym__wrapped_logical_or_expression] = sym__wrapped_logical_or_expression,
  [sym__logical_and_expression] = sym__assignment_expression,
  [sym__wrapped_logical_and_expression] = sym__wrapped_logical_and_expression,
  [sym__bitwise_or_expression] = sym__assignment_expression,
  [sym__wrapped_bitwise_or_expression] = sym__wrapped_bitwise_or_expression,
  [sym__bitwise_xor_expression] = sym__assignment_expression,
  [sym__wrapped_bitwise_xor_expression] = sym__wrapped_bitwise_xor_expression,
  [sym__bitwise_and_expression] = sym__assignment_expression,
  [sym__wrapped_bitwise_and_expression] = sym__wrapped_bitwise_and_expression,
  [sym__equality_expression] = sym__assignment_expression,
  [sym__wrapped_equality_expression] = sym__wrapped_equality_expression,
  [sym__relational_expression] = sym__assignment_expression,
  [sym__wrapped_relational_expression] = sym__wrapped_relational_expression,
  [sym__shift_expression] = sym__assignment_expression,
  [sym__wrapped_shift_expression] = sym__wrapped_shift_expression,
  [sym__additive_expression] = sym__assignment_expression,
  [sym__wrapped_additive_expression] = sym__wrapped_additive_expression,
  [sym__multiplicative_expression] = sym__assignment_expression,
  [sym_multiplicative_operator] = sym_multiplicative_operator,
  [sym__modulo_operator] = anon_sym_PERCENT,
  [sym__wrapped_multiplicative_expression] = sym__wrapped_multiplicative_expression,
  [sym__simple_expression] = sym__simple_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_relocation_expression] = sym_relocation_expression,
  [sym_decimal] = sym_decimal,
  [sym_elf_type_tag] = sym_elf_type_tag,
  [sym_option_flag] = sym_option_flag,
  [sym_char] = sym_char,
  [sym_string] = sym_string,
  [sym_macro_parameter] = sym_macro_parameter,
  [sym__label] = sym__label,
  [sym_local_label_reference] = sym_local_label_reference,
  [sym_symbol] = sym_symbol,
  [sym_address] = sym_address,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_macro_parameters_repeat1] = aux_sym_macro_parameters_repeat1,
  [aux_sym_directive_operands_repeat1] = aux_sym_directive_operands_repeat1,
  [aux_sym_directive_operands_repeat2] = aux_sym_directive_operands_repeat2,
  [aux_sym_instruction_operands_repeat1] = aux_sym_instruction_operands_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__whitespace_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__line_comment_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__block_comment_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_macro_mnemonic] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTbyte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT2byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTshort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOThalf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOThword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT4byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT8byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTdword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTlong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTquad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTcomm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTlcomm] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTalign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTbalign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTp2align] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTsleb128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTuleb128] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTdtprelword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTdtpreldword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTskip] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTspace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTfloat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTdouble] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTsingle] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTasciz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTascii] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTasciiz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTstring] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTstringz] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_control_mnemonic_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_instruction_mnemonic] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_logical_or_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_logical_and_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_bitwise_or_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_bitwise_xor_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_bitwise_and_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_equality_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_relational_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_shift_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_additive_operator] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [sym_unary_minus_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_bitwise_not_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_logical_not_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_relocation_type] = {
    .visible = true,
    .named = true,
  },
  [sym_octal] = {
    .visible = true,
    .named = true,
  },
  [sym_binary] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_decimal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_hexadecimal] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_elf_type_tag_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_option_flag_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_char_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_string_macro_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_name] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_parameter_name] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_parameter_qualifier] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_label] = {
    .visible = true,
    .named = true,
  },
  [sym_local_label] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_local_label_reference_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_global_label] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_symbol_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_global_numeric_label] = {
    .visible = true,
    .named = true,
  },
  [sym_local_numeric_label] = {
    .visible = true,
    .named = true,
  },
  [sym_local_numeric_label_reference] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_operands] = {
    .visible = true,
    .named = true,
  },
  [sym__operand_separator] = {
    .visible = false,
    .named = true,
  },
  [sym__operator_space] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_separator_no_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__multiline_operand_separator_no_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__statement_separator_with_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__multiline_operand_separator_with_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__line_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__block_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__extra_block_comment] = {
    .visible = false,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__macro_directive] = {
    .visible = false,
    .named = true,
  },
  [sym_macro_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym__directive] = {
    .visible = false,
    .named = true,
  },
  [sym__directive_mnemonic] = {
    .visible = false,
    .named = true,
  },
  [sym_integer_mnemonic] = {
    .visible = true,
    .named = true,
  },
  [sym_float_mnemonic] = {
    .visible = true,
    .named = true,
  },
  [sym_string_mnemonic] = {
    .visible = true,
    .named = true,
  },
  [sym_control_mnemonic] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_operands] = {
    .visible = true,
    .named = true,
  },
  [sym__directive_operand] = {
    .visible = false,
    .named = true,
  },
  [sym__concat_string] = {
    .visible = false,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction_operands] = {
    .visible = true,
    .named = true,
  },
  [sym__instruction_operand] = {
    .visible = false,
    .named = true,
  },
  [sym__call_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__assignment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_operator] = {
    .visible = true,
    .named = true,
  },
  [sym__wrapped_assignment_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__logical_or_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__wrapped_logical_or_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__logical_and_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__wrapped_logical_and_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__bitwise_or_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__wrapped_bitwise_or_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__bitwise_xor_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__wrapped_bitwise_xor_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__bitwise_and_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__wrapped_bitwise_and_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__equality_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__wrapped_equality_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__relational_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__wrapped_relational_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__shift_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__wrapped_shift_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__additive_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__wrapped_additive_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__multiplicative_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_multiplicative_operator] = {
    .visible = true,
    .named = true,
  },
  [sym__modulo_operator] = {
    .visible = true,
    .named = false,
  },
  [sym__wrapped_multiplicative_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__simple_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_relocation_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [sym_elf_type_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_option_flag] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__label] = {
    .visible = false,
    .named = true,
  },
  [sym_local_label_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_address] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_macro_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_operands_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_operands_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_operands_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_argument = 1,
  field_base = 2,
  field_left = 3,
  field_mnemonic = 4,
  field_name = 5,
  field_offset = 6,
  field_operand = 7,
  field_operands = 8,
  field_operator = 9,
  field_parameters = 10,
  field_qualifier = 11,
  field_right = 12,
  field_type = 13,
  field_value = 14,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_base] = "base",
  [field_left] = "left",
  [field_mnemonic] = "mnemonic",
  [field_name] = "name",
  [field_offset] = "offset",
  [field_operand] = "operand",
  [field_operands] = "operands",
  [field_operator] = "operator",
  [field_parameters] = "parameters",
  [field_qualifier] = "qualifier",
  [field_right] = "right",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 2},
  [5] = {.index = 8, .length = 2},
  [6] = {.index = 10, .length = 1},
  [7] = {.index = 11, .length = 2},
  [8] = {.index = 13, .length = 1},
  [9] = {.index = 14, .length = 2},
  [10] = {.index = 16, .length = 3},
  [11] = {.index = 19, .length = 2},
  [12] = {.index = 21, .length = 2},
  [13] = {.index = 23, .length = 1},
  [14] = {.index = 24, .length = 2},
  [15] = {.index = 26, .length = 1},
  [16] = {.index = 27, .length = 3},
  [17] = {.index = 30, .length = 1},
  [18] = {.index = 31, .length = 1},
  [19] = {.index = 32, .length = 1},
  [20] = {.index = 33, .length = 3},
  [21] = {.index = 36, .length = 1},
  [22] = {.index = 37, .length = 1},
  [23] = {.index = 38, .length = 2},
  [24] = {.index = 40, .length = 2},
  [25] = {.index = 42, .length = 2},
  [26] = {.index = 44, .length = 2},
  [27] = {.index = 46, .length = 1},
  [28] = {.index = 47, .length = 3},
  [29] = {.index = 50, .length = 3},
  [30] = {.index = 53, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_mnemonic, 0},
  [1] =
    {field_mnemonic, 0, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_parameters, 0, .inherited = true},
  [4] =
    {field_mnemonic, 0, .inherited = true},
    {field_operands, 0, .inherited = true},
  [6] =
    {field_mnemonic, 0},
    {field_operands, 1, .inherited = true},
  [8] =
    {field_mnemonic, 0},
    {field_name, 2},
  [10] =
    {field_operand, 0},
  [11] =
    {field_mnemonic, 0},
    {field_operands, 2},
  [13] =
    {field_operand, 0, .inherited = true},
  [14] =
    {field_mnemonic, 0},
    {field_operands, 2, .inherited = true},
  [16] =
    {field_left, 0, .inherited = true},
    {field_operator, 0, .inherited = true},
    {field_right, 0, .inherited = true},
  [19] =
    {field_argument, 1},
    {field_operator, 0},
  [21] =
    {field_operand, 0, .inherited = true},
    {field_operand, 1, .inherited = true},
  [23] =
    {field_operands, 1},
  [24] =
    {field_operand, 0},
    {field_operand, 1, .inherited = true},
  [26] =
    {field_name, 0},
  [27] =
    {field_mnemonic, 0},
    {field_name, 2},
    {field_parameters, 4},
  [30] =
    {field_base, 1},
  [31] =
    {field_argument, 1},
  [32] =
    {field_operand, 1, .inherited = true},
  [33] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [36] =
    {field_operands, 2},
  [37] =
    {field_operand, 1},
  [38] =
    {field_name, 0},
    {field_qualifier, 1},
  [40] =
    {field_argument, 2},
    {field_type, 0},
  [42] =
    {field_base, 2},
    {field_offset, 0},
  [44] =
    {field_offset, 0},
    {field_operands, 2},
  [46] =
    {field_operand, 2},
  [47] =
    {field_mnemonic, 0},
    {field_name, 2},
    {field_parameters, 5},
  [50] =
    {field_name, 0},
    {field_value, 1},
    {field_value, 2},
  [53] =
    {field_name, 0},
    {field_qualifier, 1},
    {field_value, 2},
    {field_value, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 8,
  [16] = 9,
  [17] = 17,
  [18] = 17,
  [19] = 19,
  [20] = 19,
  [21] = 19,
  [22] = 19,
  [23] = 19,
  [24] = 19,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 26,
  [40] = 27,
  [41] = 28,
  [42] = 29,
  [43] = 30,
  [44] = 31,
  [45] = 32,
  [46] = 33,
  [47] = 36,
  [48] = 37,
  [49] = 38,
  [50] = 26,
  [51] = 27,
  [52] = 28,
  [53] = 29,
  [54] = 30,
  [55] = 31,
  [56] = 32,
  [57] = 33,
  [58] = 36,
  [59] = 37,
  [60] = 38,
  [61] = 26,
  [62] = 27,
  [63] = 28,
  [64] = 29,
  [65] = 30,
  [66] = 31,
  [67] = 32,
  [68] = 33,
  [69] = 36,
  [70] = 37,
  [71] = 38,
  [72] = 26,
  [73] = 27,
  [74] = 28,
  [75] = 29,
  [76] = 30,
  [77] = 31,
  [78] = 32,
  [79] = 33,
  [80] = 36,
  [81] = 37,
  [82] = 38,
  [83] = 26,
  [84] = 27,
  [85] = 28,
  [86] = 29,
  [87] = 30,
  [88] = 31,
  [89] = 32,
  [90] = 33,
  [91] = 25,
  [92] = 92,
  [93] = 36,
  [94] = 34,
  [95] = 35,
  [96] = 36,
  [97] = 36,
  [98] = 36,
  [99] = 36,
  [100] = 36,
  [101] = 25,
  [102] = 25,
  [103] = 25,
  [104] = 25,
  [105] = 92,
  [106] = 92,
  [107] = 36,
  [108] = 92,
  [109] = 37,
  [110] = 92,
  [111] = 92,
  [112] = 38,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 122,
  [125] = 125,
  [126] = 121,
  [127] = 127,
  [128] = 123,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 121,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 122,
  [147] = 147,
  [148] = 127,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 133,
  [175] = 169,
  [176] = 170,
  [177] = 171,
  [178] = 172,
  [179] = 165,
  [180] = 149,
  [181] = 138,
  [182] = 140,
  [183] = 141,
  [184] = 142,
  [185] = 143,
  [186] = 144,
  [187] = 145,
  [188] = 147,
  [189] = 152,
  [190] = 164,
  [191] = 166,
  [192] = 130,
  [193] = 131,
  [194] = 132,
  [195] = 134,
  [196] = 135,
  [197] = 136,
  [198] = 139,
  [199] = 173,
  [200] = 127,
  [201] = 150,
  [202] = 153,
  [203] = 154,
  [204] = 155,
  [205] = 156,
  [206] = 151,
  [207] = 167,
  [208] = 157,
  [209] = 158,
  [210] = 159,
  [211] = 160,
  [212] = 161,
  [213] = 162,
  [214] = 163,
  [215] = 129,
  [216] = 168,
  [217] = 163,
  [218] = 152,
  [219] = 164,
  [220] = 166,
  [221] = 130,
  [222] = 131,
  [223] = 132,
  [224] = 133,
  [225] = 134,
  [226] = 135,
  [227] = 136,
  [228] = 153,
  [229] = 154,
  [230] = 155,
  [231] = 156,
  [232] = 157,
  [233] = 158,
  [234] = 159,
  [235] = 147,
  [236] = 161,
  [237] = 162,
  [238] = 145,
  [239] = 129,
  [240] = 167,
  [241] = 168,
  [242] = 169,
  [243] = 170,
  [244] = 151,
  [245] = 171,
  [246] = 172,
  [247] = 173,
  [248] = 165,
  [249] = 149,
  [250] = 138,
  [251] = 140,
  [252] = 141,
  [253] = 142,
  [254] = 143,
  [255] = 144,
  [256] = 160,
  [257] = 257,
  [258] = 121,
  [259] = 122,
  [260] = 121,
  [261] = 123,
  [262] = 122,
  [263] = 127,
  [264] = 127,
  [265] = 169,
  [266] = 170,
  [267] = 151,
  [268] = 139,
  [269] = 150,
  [270] = 171,
  [271] = 172,
  [272] = 165,
  [273] = 149,
  [274] = 138,
  [275] = 140,
  [276] = 141,
  [277] = 142,
  [278] = 153,
  [279] = 154,
  [280] = 155,
  [281] = 156,
  [282] = 143,
  [283] = 157,
  [284] = 158,
  [285] = 159,
  [286] = 160,
  [287] = 161,
  [288] = 162,
  [289] = 163,
  [290] = 129,
  [291] = 144,
  [292] = 167,
  [293] = 168,
  [294] = 169,
  [295] = 170,
  [296] = 125,
  [297] = 145,
  [298] = 147,
  [299] = 152,
  [300] = 164,
  [301] = 166,
  [302] = 130,
  [303] = 131,
  [304] = 132,
  [305] = 133,
  [306] = 134,
  [307] = 135,
  [308] = 151,
  [309] = 173,
  [310] = 172,
  [311] = 165,
  [312] = 149,
  [313] = 138,
  [314] = 140,
  [315] = 141,
  [316] = 142,
  [317] = 143,
  [318] = 144,
  [319] = 145,
  [320] = 147,
  [321] = 152,
  [322] = 164,
  [323] = 166,
  [324] = 130,
  [325] = 131,
  [326] = 132,
  [327] = 133,
  [328] = 134,
  [329] = 135,
  [330] = 136,
  [331] = 331,
  [332] = 136,
  [333] = 153,
  [334] = 154,
  [335] = 155,
  [336] = 156,
  [337] = 173,
  [338] = 157,
  [339] = 158,
  [340] = 159,
  [341] = 160,
  [342] = 161,
  [343] = 162,
  [344] = 163,
  [345] = 129,
  [346] = 167,
  [347] = 168,
  [348] = 171,
  [349] = 122,
  [350] = 121,
  [351] = 127,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 149,
  [356] = 163,
  [357] = 129,
  [358] = 130,
  [359] = 167,
  [360] = 168,
  [361] = 169,
  [362] = 170,
  [363] = 131,
  [364] = 331,
  [365] = 132,
  [366] = 133,
  [367] = 331,
  [368] = 134,
  [369] = 135,
  [370] = 136,
  [371] = 145,
  [372] = 139,
  [373] = 147,
  [374] = 152,
  [375] = 164,
  [376] = 144,
  [377] = 154,
  [378] = 155,
  [379] = 156,
  [380] = 166,
  [381] = 157,
  [382] = 158,
  [383] = 159,
  [384] = 160,
  [385] = 150,
  [386] = 161,
  [387] = 173,
  [388] = 151,
  [389] = 162,
  [390] = 171,
  [391] = 331,
  [392] = 172,
  [393] = 165,
  [394] = 143,
  [395] = 138,
  [396] = 140,
  [397] = 141,
  [398] = 331,
  [399] = 142,
  [400] = 331,
  [401] = 331,
  [402] = 153,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 406,
  [408] = 403,
  [409] = 409,
  [410] = 404,
  [411] = 173,
  [412] = 405,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 173,
  [420] = 420,
  [421] = 421,
  [422] = 415,
  [423] = 423,
  [424] = 424,
  [425] = 418,
  [426] = 426,
  [427] = 427,
  [428] = 417,
  [429] = 173,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 439,
  [447] = 447,
  [448] = 442,
  [449] = 435,
  [450] = 450,
  [451] = 405,
  [452] = 403,
  [453] = 453,
  [454] = 404,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 406,
  [459] = 433,
  [460] = 460,
  [461] = 424,
  [462] = 462,
  [463] = 463,
  [464] = 173,
  [465] = 465,
  [466] = 426,
  [467] = 414,
  [468] = 421,
  [469] = 469,
  [470] = 423,
  [471] = 471,
  [472] = 427,
  [473] = 473,
  [474] = 474,
  [475] = 173,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 438,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 415,
  [484] = 484,
  [485] = 417,
  [486] = 418,
  [487] = 431,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 430,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 496,
  [506] = 506,
  [507] = 495,
  [508] = 496,
  [509] = 494,
  [510] = 453,
  [511] = 511,
  [512] = 512,
  [513] = 494,
  [514] = 514,
  [515] = 437,
  [516] = 494,
  [517] = 495,
  [518] = 496,
  [519] = 494,
  [520] = 498,
  [521] = 441,
  [522] = 494,
  [523] = 523,
  [524] = 495,
  [525] = 439,
  [526] = 473,
  [527] = 527,
  [528] = 433,
  [529] = 173,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 435,
  [534] = 531,
  [535] = 450,
  [536] = 532,
  [537] = 447,
  [538] = 530,
  [539] = 531,
  [540] = 532,
  [541] = 465,
  [542] = 531,
  [543] = 532,
  [544] = 531,
  [545] = 532,
  [546] = 442,
  [547] = 531,
  [548] = 532,
  [549] = 549,
  [550] = 530,
  [551] = 551,
  [552] = 471,
  [553] = 457,
  [554] = 554,
  [555] = 555,
  [556] = 555,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 558,
  [562] = 555,
  [563] = 555,
  [564] = 554,
  [565] = 555,
  [566] = 555,
  [567] = 567,
  [568] = 415,
  [569] = 569,
  [570] = 570,
  [571] = 569,
  [572] = 560,
  [573] = 417,
  [574] = 569,
  [575] = 569,
  [576] = 576,
  [577] = 569,
  [578] = 578,
  [579] = 579,
  [580] = 578,
  [581] = 570,
  [582] = 569,
  [583] = 583,
  [584] = 584,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 588,
  [589] = 589,
  [590] = 584,
  [591] = 584,
  [592] = 585,
  [593] = 585,
  [594] = 585,
  [595] = 584,
  [596] = 596,
  [597] = 585,
  [598] = 598,
  [599] = 599,
  [600] = 588,
  [601] = 587,
  [602] = 584,
  [603] = 588,
  [604] = 587,
  [605] = 605,
  [606] = 588,
  [607] = 587,
  [608] = 584,
  [609] = 585,
  [610] = 610,
  [611] = 588,
  [612] = 587,
  [613] = 588,
  [614] = 614,
  [615] = 125,
  [616] = 616,
  [617] = 610,
  [618] = 610,
  [619] = 610,
  [620] = 610,
  [621] = 610,
  [622] = 587,
  [623] = 623,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(126);
      ADVANCE_MAP(
        '\n', 129,
        '\r', 128,
        '!', 475,
        '"', 510,
        '#', 134,
        '$', 61,
        '%', 470,
        '&', 460,
        '\'', 505,
        '(', 138,
        ')', 139,
        '*', 467,
        '+', 466,
        ',', 142,
        '-', 471,
        '.', 655,
        '/', 468,
        '3', 529,
        ':', 91,
        ';', 127,
        '<', 463,
        '=', 455,
        '>', 464,
        '@', 105,
        'A', 447,
        'S', 429,
        'T', 449,
        '\\', 5,
        '^', 459,
        'a', 448,
        'f', 431,
        'g', 440,
        'o', 441,
        'r', 433,
        's', 430,
        't', 450,
        'z', 436,
        '|', 458,
        '~', 473,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(107);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(446);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(445);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(445);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(530);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(451);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\n', 129,
        '\r', 128,
        '!', 475,
        '"', 510,
        '#', 134,
        '$', 61,
        '%', 470,
        '&', 460,
        '\'', 505,
        '(', 138,
        ')', 139,
        '*', 467,
        '+', 466,
        ',', 142,
        '-', 471,
        '.', 655,
        '/', 469,
        '3', 529,
        ':', 91,
        ';', 127,
        '<', 463,
        '=', 455,
        '>', 464,
        '@', 105,
        'A', 447,
        'S', 429,
        'T', 449,
        '\\', 5,
        '^', 459,
        'a', 448,
        'f', 431,
        'g', 440,
        'o', 441,
        'r', 433,
        's', 430,
        't', 450,
        'z', 436,
        '|', 458,
        '~', 473,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(1);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(446);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(445);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(445);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(530);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(451);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 129,
        '\r', 128,
        '#', 134,
        '$', 31,
        '%', 34,
        '.', 60,
        '/', 56,
        '0', 68,
        ';', 127,
        '@', 83,
        '\\', 7,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 129,
        '\r', 128,
        '#', 134,
        '$', 31,
        '%', 34,
        '.', 60,
        '/', 56,
        '0', 68,
        ';', 127,
        '@', 83,
        '\\', 15,
        '\t', 131,
        ' ', 131,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(1);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '\r') SKIP(4);
      if (lookahead == 'U') ADVANCE(622);
      if (lookahead == 'u') ADVANCE(618);
      if (lookahead == 'x') ADVANCE(616);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '?' ||
          lookahead == '\\') ADVANCE(514);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(516);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(2);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '\r') SKIP(6);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '%' ||
          lookahead == '@') ADVANCE(610);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(130);
      END_STATE();
    case 9:
      ADVANCE_MAP(
        '\n', 130,
        '\r', 8,
        '!', 474,
        '"', 510,
        '#', 134,
        '$', 29,
        '%', 35,
        '\'', 505,
        '(', 138,
        ')', 139,
        '+', 106,
        '-', 472,
        '.', 656,
        '/', 56,
        '0', 479,
        '3', 487,
        ';', 127,
        '@', 82,
        'A', 650,
        'S', 632,
        'T', 652,
        '\\', 11,
        'a', 651,
        'f', 634,
        'g', 643,
        'r', 636,
        's', 633,
        't', 653,
        'z', 639,
        '~', 473,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(9);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(649);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(648);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(648);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(488);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(635);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(654);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(9);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(9);
      if (lookahead == '\r') SKIP(10);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(25);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(25);
      if (lookahead == '\r') SKIP(12);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(3);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '\r') SKIP(14);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '%' ||
          lookahead == '@') ADVANCE(610);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(26);
      END_STATE();
    case 17:
      if (lookahead == '\n') SKIP(26);
      if (lookahead == '\r') SKIP(16);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 18:
      if (lookahead == '\n') SKIP(33);
      END_STATE();
    case 19:
      if (lookahead == '\n') SKIP(33);
      if (lookahead == '\r') SKIP(18);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 20:
      if (lookahead == '\n') SKIP(28);
      END_STATE();
    case 21:
      if (lookahead == '\n') SKIP(28);
      if (lookahead == '\r') SKIP(20);
      if (lookahead == 'U') ADVANCE(622);
      if (lookahead == 'u') ADVANCE(618);
      if (lookahead == 'x') ADVANCE(616);
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '?' ||
          lookahead == '\\') ADVANCE(514);
      if (lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(516);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(78);
      if (lookahead == '\r') ADVANCE(506);
      if (lookahead != 0) ADVANCE(506);
      END_STATE();
    case 23:
      if (lookahead == '\r') ADVANCE(135);
      if (lookahead != 0) ADVANCE(134);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        '!', 474,
        '"', 510,
        '$', 29,
        '%', 35,
        '\'', 505,
        '(', 138,
        ')', 139,
        '-', 472,
        '.', 656,
        '/', 49,
        '0', 479,
        '3', 487,
        '@', 83,
        'A', 650,
        'S', 632,
        'T', 652,
        '\\', 13,
        'a', 651,
        'f', 634,
        'g', 643,
        'o', 644,
        'r', 636,
        's', 633,
        't', 653,
        'z', 639,
        '~', 473,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(25);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(649);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(648);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(648);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(488);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(635);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(654);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        '!', 474,
        '"', 510,
        '$', 29,
        '%', 35,
        '\'', 505,
        '(', 138,
        ')', 139,
        '-', 472,
        '.', 656,
        '0', 479,
        '3', 487,
        '@', 83,
        'A', 650,
        'S', 632,
        'T', 652,
        '\\', 13,
        'a', 651,
        'f', 634,
        'g', 643,
        'o', 644,
        'r', 636,
        's', 633,
        't', 653,
        'z', 639,
        '~', 473,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(25);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(649);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(648);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(648);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(488);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(635);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(654);
      END_STATE();
    case 26:
      ADVANCE_MAP(
        '"', 510,
        '#', 134,
        '$', 30,
        '%', 36,
        ')', 139,
        ',', 142,
        '/', 56,
        ';', 127,
        '\\', 17,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 27:
      if (lookahead == '"') ADVANCE(510);
      if (lookahead == '/') ADVANCE(512);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(513);
      if (lookahead != 0) ADVANCE(511);
      END_STATE();
    case 28:
      if (lookahead == '"') ADVANCE(510);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(513);
      if (lookahead != 0) ADVANCE(511);
      END_STATE();
    case 29:
      ADVANCE_MAP(
        '$', 83,
        '3', 519,
        'A', 544,
        'S', 533,
        'T', 546,
        '\\', 552,
        'a', 545,
        'f', 535,
        'g', 540,
        'r', 537,
        's', 534,
        't', 547,
        'z', 538,
        'C', 543,
        'c', 543,
        'K', 542,
        'k', 542,
        'V', 542,
        'v', 542,
        '1', 520,
        '2', 520,
        'F', 536,
        'R', 536,
        'X', 536,
        'x', 536,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(521);
      if (lookahead == '%' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(548);
      END_STATE();
    case 30:
      if (lookahead == '$') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(552);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 31:
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(556);
      if (lookahead == '%' ||
          lookahead == '@') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 32:
      ADVANCE_MAP(
        '$', 29,
        '%', 36,
        '.', 658,
        '/', 49,
        '3', 525,
        '@', 83,
        'A', 650,
        'S', 632,
        'T', 652,
        '\\', 19,
        'a', 651,
        'f', 634,
        'g', 643,
        'o', 644,
        'r', 636,
        's', 633,
        't', 653,
        'z', 639,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(33);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(649);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(648);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(648);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(526);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(527);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(654);
      END_STATE();
    case 33:
      ADVANCE_MAP(
        '$', 29,
        '%', 36,
        '.', 658,
        '3', 525,
        '@', 83,
        'A', 650,
        'S', 632,
        'T', 652,
        '\\', 19,
        'a', 651,
        'f', 634,
        'g', 643,
        'o', 644,
        'r', 636,
        's', 633,
        't', 653,
        'z', 639,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(33);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(649);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(648);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(648);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(526);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(527);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(654);
      END_STATE();
    case 34:
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '@') ADVANCE(597);
      if (lookahead == '\\') ADVANCE(602);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 35:
      ADVANCE_MAP(
        '%', 83,
        '\\', 604,
        'a', 569,
        'c', 567,
        'd', 594,
        'g', 587,
        'h', 579,
        'l', 586,
        'p', 570,
        't', 583,
      );
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 36:
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(604);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 37:
      if (lookahead == '(') ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == '(') ADVANCE(42);
      if (lookahead == ':') ADVANCE(628);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '%' ||
          lookahead == '@') ADVANCE(610);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 39:
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 40:
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ':') ADVANCE(628);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '%' ||
          lookahead == '@') ADVANCE(610);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 41:
      if (lookahead == ')') ADVANCE(614);
      END_STATE();
    case 42:
      if (lookahead == ')') ADVANCE(73);
      END_STATE();
    case 43:
      if (lookahead == ')') ADVANCE(609);
      END_STATE();
    case 44:
      if (lookahead == ')') ADVANCE(613);
      END_STATE();
    case 45:
      if (lookahead == ')') ADVANCE(612);
      END_STATE();
    case 46:
      if (lookahead == ')') ADVANCE(606);
      END_STATE();
    case 47:
      if (lookahead == ')') ADVANCE(607);
      END_STATE();
    case 48:
      if (lookahead == ')') ADVANCE(611);
      END_STATE();
    case 49:
      if (lookahead == '*') ADVANCE(52);
      END_STATE();
    case 50:
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '/') ADVANCE(134);
      END_STATE();
    case 51:
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == '/') ADVANCE(137);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == '*') ADVANCE(53);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 53:
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '/') ADVANCE(136);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 54:
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '%' ||
          lookahead == '@') ADVANCE(83);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      if (lookahead == '.') ADVANCE(66);
      if (lookahead == ':') ADVANCE(629);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      if (lookahead == '/') ADVANCE(134);
      END_STATE();
    case 57:
      if (lookahead == '/') ADVANCE(508);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(507);
      END_STATE();
    case 58:
      if (lookahead == '1') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(518);
      END_STATE();
    case 59:
      if (lookahead == '1') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(518);
      END_STATE();
    case 60:
      ADVANCE_MAP(
        '2', 226,
        '4', 230,
        '8', 231,
        ':', 631,
        'L', 55,
        'a', 268,
        'b', 221,
        'c', 288,
        'd', 290,
        'f', 271,
        'h', 224,
        'i', 284,
        'l', 235,
        'm', 220,
        'p', 213,
        'q', 318,
        's', 260,
        'u', 275,
        'w', 291,
        '\t', 65,
        ' ', 65,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      END_STATE();
    case 61:
      ADVANCE_MAP(
        '3', 531,
        'A', 97,
        'S', 58,
        'T', 99,
        'a', 98,
        'f', 62,
        'g', 88,
        'r', 64,
        's', 59,
        't', 103,
        'z', 86,
        'C', 96,
        'c', 96,
        'K', 94,
        'k', 94,
        'V', 94,
        'v', 94,
        '1', 532,
        '2', 532,
        'F', 63,
        'R', 63,
        'X', 63,
        'x', 63,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(518);
      END_STATE();
    case 62:
      if (lookahead == '3') ADVANCE(531);
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(532);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(518);
      END_STATE();
    case 63:
      if (lookahead == '3') ADVANCE(531);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(518);
      END_STATE();
    case 64:
      if (lookahead == '3') ADVANCE(531);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(518);
      END_STATE();
    case 65:
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      END_STATE();
    case 66:
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(660);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(660);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(660);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(628);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '%' ||
          lookahead == '@') ADVANCE(83);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(628);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '%' ||
          lookahead == '@') ADVANCE(610);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(628);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(628);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(629);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(74);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(659);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(659);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 77:
      if (lookahead == '=') ADVANCE(461);
      END_STATE();
    case 78:
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(507);
      END_STATE();
    case 79:
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 80:
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(485);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 81:
      if (lookahead == '\\') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(491);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 82:
      if (lookahead == '\\') ADVANCE(84);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 84:
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(518);
      END_STATE();
    case 88:
      if (lookahead == 'p') ADVANCE(518);
      END_STATE();
    case 89:
      if (lookahead == 'q') ADVANCE(627);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 92:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      END_STATE();
    case 93:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(500);
      END_STATE();
    case 94:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(518);
      END_STATE();
    case 95:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(486);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(518);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(518);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(518);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(518);
      END_STATE();
    case 100:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(498);
      END_STATE();
    case 101:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      END_STATE();
    case 102:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(500);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(518);
      END_STATE();
    case 104:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(492);
      END_STATE();
    case 105:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 106:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(504);
      END_STATE();
    case 107:
      if (eof) ADVANCE(126);
      ADVANCE_MAP(
        '\n', 129,
        '\r', 128,
        '!', 475,
        '"', 510,
        '#', 134,
        '$', 61,
        '%', 470,
        '&', 460,
        '\'', 505,
        '(', 138,
        ')', 139,
        '*', 467,
        '+', 466,
        ',', 142,
        '-', 471,
        '.', 655,
        '/', 469,
        '3', 529,
        ':', 91,
        ';', 127,
        '<', 463,
        '=', 455,
        '>', 464,
        '@', 105,
        'A', 447,
        'S', 429,
        'T', 449,
        '\\', 5,
        '^', 459,
        'a', 448,
        'f', 431,
        'g', 440,
        'o', 441,
        'r', 433,
        's', 430,
        't', 450,
        'z', 436,
        '|', 458,
        '~', 473,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(107);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(446);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(445);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(445);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(530);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(451);
      END_STATE();
    case 108:
      if (eof) ADVANCE(126);
      ADVANCE_MAP(
        '\n', 129,
        '\r', 128,
        '#', 134,
        '$', 31,
        '%', 34,
        '.', 60,
        '/', 50,
        '0', 68,
        ';', 127,
        '@', 83,
        '\\', 7,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(110);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 109:
      if (eof) ADVANCE(126);
      ADVANCE_MAP(
        '\n', 129,
        '\r', 128,
        '#', 134,
        '$', 31,
        '%', 34,
        '.', 60,
        '/', 50,
        '0', 68,
        ';', 127,
        '@', 83,
        '\\', 15,
        '\t', 131,
        ' ', 131,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 110:
      if (eof) ADVANCE(126);
      ADVANCE_MAP(
        '\n', 129,
        '\r', 128,
        '#', 134,
        '$', 31,
        '%', 34,
        '.', 60,
        '/', 56,
        '0', 68,
        ';', 127,
        '@', 83,
        '\\', 7,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(110);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 111:
      if (eof) ADVANCE(126);
      ADVANCE_MAP(
        '\n', 130,
        '\r', 8,
        '!', 474,
        '"', 510,
        '#', 134,
        '$', 29,
        '%', 35,
        '\'', 505,
        '(', 138,
        ')', 139,
        '+', 106,
        '-', 472,
        '.', 656,
        '/', 50,
        '0', 479,
        '3', 487,
        ';', 127,
        '@', 82,
        'A', 650,
        'S', 632,
        'T', 652,
        '\\', 11,
        'a', 651,
        'f', 634,
        'g', 643,
        'r', 636,
        's', 633,
        't', 653,
        'z', 639,
        '~', 473,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(112);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(649);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(648);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(648);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(488);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(635);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(654);
      END_STATE();
    case 112:
      if (eof) ADVANCE(126);
      ADVANCE_MAP(
        '\n', 130,
        '\r', 8,
        '!', 474,
        '"', 510,
        '#', 134,
        '$', 29,
        '%', 35,
        '\'', 505,
        '(', 138,
        ')', 139,
        '+', 106,
        '-', 472,
        '.', 656,
        '/', 56,
        '0', 479,
        '3', 487,
        ';', 127,
        '@', 82,
        'A', 650,
        'S', 632,
        'T', 652,
        '\\', 11,
        'a', 651,
        'f', 634,
        'g', 643,
        'r', 636,
        's', 633,
        't', 653,
        'z', 639,
        '~', 473,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(112);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(649);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(648);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(648);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(488);
      if (lookahead == 'F' ||
          lookahead == 'R' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(635);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'y')) ADVANCE(654);
      END_STATE();
    case 113:
      if (eof) ADVANCE(126);
      if (lookahead == '\n') SKIP(118);
      END_STATE();
    case 114:
      if (eof) ADVANCE(126);
      if (lookahead == '\n') SKIP(118);
      if (lookahead == '\r') SKIP(113);
      END_STATE();
    case 115:
      if (eof) ADVANCE(126);
      if (lookahead == '\n') SKIP(120);
      END_STATE();
    case 116:
      if (eof) ADVANCE(126);
      if (lookahead == '\n') SKIP(120);
      if (lookahead == '\r') SKIP(115);
      END_STATE();
    case 117:
      if (eof) ADVANCE(126);
      ADVANCE_MAP(
        '!', 77,
        '"', 510,
        '#', 134,
        '%', 470,
        '&', 460,
        '(', 138,
        ')', 139,
        '*', 467,
        ',', 142,
        '/', 468,
        ';', 127,
        '<', 463,
        '=', 455,
        '>', 464,
      );
      if (lookahead == '\\') SKIP(114);
      if (lookahead == '^') ADVANCE(459);
      if (lookahead == '|') ADVANCE(458);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(118);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(466);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 118:
      if (eof) ADVANCE(126);
      ADVANCE_MAP(
        '!', 77,
        '"', 510,
        '#', 134,
        '%', 470,
        '&', 460,
        '(', 138,
        ')', 139,
        '*', 467,
        ',', 142,
        '/', 469,
        ';', 127,
        '<', 463,
        '=', 455,
        '>', 464,
      );
      if (lookahead == '\\') SKIP(114);
      if (lookahead == '^') ADVANCE(459);
      if (lookahead == '|') ADVANCE(458);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(118);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(466);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 119:
      if (eof) ADVANCE(126);
      ADVANCE_MAP(
        '!', 77,
        '#', 134,
        '%', 470,
        '&', 460,
        '(', 138,
        ')', 139,
        '*', 467,
        ',', 142,
        '/', 468,
        ':', 91,
        ';', 127,
        '<', 463,
        '=', 455,
        '>', 464,
      );
      if (lookahead == '\\') SKIP(116);
      if (lookahead == '^') ADVANCE(459);
      if (lookahead == '|') ADVANCE(458);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(466);
      END_STATE();
    case 120:
      if (eof) ADVANCE(126);
      ADVANCE_MAP(
        '!', 77,
        '#', 134,
        '%', 470,
        '&', 460,
        '(', 138,
        ')', 139,
        '*', 467,
        ',', 142,
        '/', 469,
        ':', 91,
        ';', 127,
        '<', 463,
        '=', 455,
        '>', 464,
      );
      if (lookahead == '\\') SKIP(116);
      if (lookahead == '^') ADVANCE(459);
      if (lookahead == '|') ADVANCE(458);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(466);
      END_STATE();
    case 121:
      if (eof) ADVANCE(126);
      ADVANCE_MAP(
        '"', 510,
        '#', 134,
        '$', 30,
        '%', 36,
        ')', 139,
        ',', 142,
        '/', 50,
        ';', 127,
        '\\', 17,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 122:
      if (eof) ADVANCE(126);
      ADVANCE_MAP(
        '"', 510,
        '#', 134,
        '$', 30,
        '%', 36,
        ')', 139,
        ',', 142,
        '/', 56,
        ';', 127,
        '\\', 17,
      );
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 123:
      if (eof) ADVANCE(126);
      if (lookahead == '#') ADVANCE(134);
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ',') ADVANCE(142);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ';') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(124);
      if (lookahead == '$' ||
          lookahead == '%') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 124:
      if (eof) ADVANCE(126);
      if (lookahead == '#') ADVANCE(134);
      if (lookahead == '(') ADVANCE(138);
      if (lookahead == ')') ADVANCE(139);
      if (lookahead == ',') ADVANCE(142);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == ';') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(124);
      if (lookahead == '$' ||
          lookahead == '%') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 125:
      if (eof) ADVANCE(126);
      ADVANCE_MAP(
        '#', 134,
        ')', 139,
        ',', 142,
        '/', 50,
        ';', 127,
        '\\', 626,
        '\t', 132,
        ' ', 132,
        '$', 626,
        '%', 626,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '.') ADVANCE(60);
      if (lookahead == '0') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(131);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\\') ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__line_comment_token1);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__line_comment_token1);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead != 0) ADVANCE(134);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__block_comment_token1);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_macro_mnemonic);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_macro_mnemonic);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_DOTbyte);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_DOTbyte);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_DOT2byte);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_DOT2byte);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_DOTshort);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_DOTshort);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_DOThalf);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_DOThalf);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_DOThword);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DOThword);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_DOT4byte);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_DOT4byte);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DOTword);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_DOTword);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_DOTint);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_DOTint);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_DOT8byte);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_DOT8byte);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_DOTdword);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_DOTdword);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_DOTlong);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_DOTlong);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_DOTquad);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_DOTquad);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_DOTcomm);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_DOTcomm);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_DOTlcomm);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_DOTlcomm);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_DOTalign);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DOTalign);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_DOTbalign);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_DOTbalign);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_DOTp2align);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DOTp2align);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DOTsleb128);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DOTsleb128);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DOTuleb128);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_DOTuleb128);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_DOTdtprelword);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_DOTdtprelword);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DOTdtpreldword);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_DOTdtpreldword);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DOTskip);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DOTskip);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DOTspace);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DOTspace);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_DOTfloat);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_DOTfloat);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_DOTdouble);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_DOTdouble);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_DOTsingle);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_DOTsingle);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DOTasciz);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DOTasciz);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DOTascii);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'z') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(323);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DOTascii);
      if (lookahead == 'z') ADVANCE(200);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(428);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DOTasciiz);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DOTasciiz);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DOTstring);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'z') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(323);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_DOTstring);
      if (lookahead == 'z') ADVANCE(204);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(428);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DOTstringz);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_DOTstringz);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(209);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(210);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(212);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '1') ADVANCE(214);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(215);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(217);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(330);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(216);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(225);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '2') ADVANCE(218);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(178);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(180);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(177);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '8') ADVANCE(179);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'a') ADVANCE(236);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'a') ADVANCE(233);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'a') ADVANCE(274);
      if (lookahead == 'y') ADVANCE(313);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'a') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == 'w') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'a') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'b') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'b') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'b') ADVANCE(272);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'b') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'b') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'b') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'c') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'c') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'c') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'c') ADVANCE(294);
      if (lookahead == 'o') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'd') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'd') ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'd') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'd') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'd') ADVANCE(319);
      if (lookahead == 'w') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'd') ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'd') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'e') ADVANCE(193);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'e') ADVANCE(270);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'f') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'g') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'g') ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'g') ADVANCE(281);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'g') ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'g') ADVANCE(283);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'g') ADVANCE(273);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      ADVANCE_MAP(
        ':', 631,
        'h', 293,
        'i', 286,
        'k', 264,
        'l', 250,
        'p', 222,
        't', 304,
        '\t', 65,
        ' ', 65,
      );
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'i') ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'i') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'i') ADVANCE(197);
      if (lookahead == 'z') ADVANCE(195);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(323);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'i') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'i') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'i') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'l') ADVANCE(261);
      if (lookahead == 's') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'l') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'l') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'l') ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'l') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'l') ADVANCE(249);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'l') ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'l') ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'l') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'm') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'm') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'm') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'm') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'n') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'n') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'n') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'n') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'n') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'n') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'o') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'o') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'o') ADVANCE(317);
      if (lookahead == 't') ADVANCE(300);
      if (lookahead == 'w') ADVANCE(295);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'o') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'o') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'o') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'o') ADVANCE(280);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'o') ADVANCE(302);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'o') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'o') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'o') ADVANCE(309);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'p') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'p') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'r') ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'r') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'r') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'r') ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'r') ADVANCE(312);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'r') ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'r') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'r') ADVANCE(251);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'r') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 't') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 't') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 't') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 't') ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 't') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 't') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'u') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'u') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'w') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'y') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'y') ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == 'y') ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'a') ADVANCE(341);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'a') ADVANCE(338);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'a') ADVANCE(379);
      if (lookahead == 'y') ADVANCE(418);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'a') ADVANCE(339);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'a') ADVANCE(416);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'a') ADVANCE(374);
      if (lookahead == 'w') ADVANCE(401);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'b') ADVANCE(425);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'b') ADVANCE(205);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'b') ADVANCE(377);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'b') ADVANCE(207);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'b') ADVANCE(426);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'b') ADVANCE(427);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'c') ADVANCE(367);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'c') ADVANCE(408);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'c') ADVANCE(352);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'c') ADVANCE(399);
      if (lookahead == 'o') ADVANCE(390);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'd') ADVANCE(166);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'd') ADVANCE(156);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'd') ADVANCE(162);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'd') ADVANCE(152);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'd') ADVANCE(424);
      if (lookahead == 'w') ADVANCE(402);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'd') ADVANCE(182);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'd') ADVANCE(184);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'e') ADVANCE(332);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'e') ADVANCE(375);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'e') ADVANCE(334);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'f') ADVANCE(150);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'g') ADVANCE(164);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'g') ADVANCE(202);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'g') ADVANCE(386);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'g') ADVANCE(387);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'g') ADVANCE(388);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'g') ADVANCE(378);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'h') ADVANCE(398);
      if (lookahead == 'i') ADVANCE(391);
      if (lookahead == 'k') ADVANCE(369);
      if (lookahead == 'l') ADVANCE(355);
      if (lookahead == 'p') ADVANCE(327);
      if (lookahead == 't') ADVANCE(409);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'i') ADVANCE(361);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'i') ADVANCE(368);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == 'z') ADVANCE(196);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(428);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'i') ADVANCE(404);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'i') ADVANCE(362);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'i') ADVANCE(363);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'i') ADVANCE(392);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'l') ADVANCE(366);
      if (lookahead == 's') ADVANCE(337);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'l') ADVANCE(358);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'l') ADVANCE(345);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'l') ADVANCE(397);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'l') ADVANCE(353);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'l') ADVANCE(354);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'l') ADVANCE(370);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'l') ADVANCE(357);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'l') ADVANCE(371);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'm') ADVANCE(168);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'm') ADVANCE(170);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'm') ADVANCE(382);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'm') ADVANCE(383);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'n') ADVANCE(172);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'n') ADVANCE(174);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'n') ADVANCE(176);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'n') ADVANCE(415);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'n') ADVANCE(359);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'n') ADVANCE(364);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'n') ADVANCE(360);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'o') ADVANCE(384);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'o') ADVANCE(422);
      if (lookahead == 't') ADVANCE(405);
      if (lookahead == 'w') ADVANCE(400);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'o') ADVANCE(406);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'o') ADVANCE(328);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'o') ADVANCE(410);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'o') ADVANCE(385);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'o') ADVANCE(407);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'o') ADVANCE(411);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'o') ADVANCE(412);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'o') ADVANCE(414);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'p') ADVANCE(186);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'p') ADVANCE(413);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'r') ADVANCE(342);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'r') ADVANCE(343);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'r') ADVANCE(394);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'r') ADVANCE(372);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'r') ADVANCE(417);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'r') ADVANCE(344);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'r') ADVANCE(346);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'r') ADVANCE(356);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'r') ADVANCE(347);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 't') ADVANCE(158);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 't') ADVANCE(190);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 't') ADVANCE(348);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 't') ADVANCE(349);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 't') ADVANCE(350);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 't') ADVANCE(351);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'u') ADVANCE(333);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'u') ADVANCE(324);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'w') ADVANCE(403);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'y') ADVANCE(419);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'y') ADVANCE(420);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == 'y') ADVANCE(421);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(aux_sym_control_mnemonic_token1);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_instruction_mnemonic);
      if (lookahead == '$') ADVANCE(624);
      if (lookahead == '.') ADVANCE(454);
      if (lookahead == '1') ADVANCE(445);
      if (lookahead == '@') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(451);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_instruction_mnemonic);
      if (lookahead == '$') ADVANCE(624);
      if (lookahead == '.') ADVANCE(454);
      if (lookahead == '1') ADVANCE(445);
      if (lookahead == '@') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(451);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(451);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_instruction_mnemonic);
      if (lookahead == '$') ADVANCE(624);
      if (lookahead == '.') ADVANCE(454);
      if (lookahead == '3') ADVANCE(445);
      if (lookahead == '@') ADVANCE(658);
      if (lookahead == 'a') ADVANCE(447);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(449);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(451);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(451);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_instruction_mnemonic);
      if (lookahead == '$') ADVANCE(624);
      if (lookahead == '.') ADVANCE(454);
      if (lookahead == '3') ADVANCE(445);
      if (lookahead == '@') ADVANCE(658);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(451);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_instruction_mnemonic);
      if (lookahead == '$') ADVANCE(624);
      if (lookahead == '.') ADVANCE(454);
      if (lookahead == '3') ADVANCE(445);
      if (lookahead == '@') ADVANCE(658);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(451);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(451);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_instruction_mnemonic);
      if (lookahead == '$') ADVANCE(624);
      if (lookahead == '.') ADVANCE(454);
      if (lookahead == '@') ADVANCE(658);
      if (lookahead == 'a') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(451);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_instruction_mnemonic);
      if (lookahead == '$') ADVANCE(624);
      if (lookahead == '.') ADVANCE(454);
      if (lookahead == '@') ADVANCE(658);
      if (lookahead == 'd') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(451);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_instruction_mnemonic);
      if (lookahead == '$') ADVANCE(624);
      if (lookahead == '.') ADVANCE(454);
      if (lookahead == '@') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(451);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_instruction_mnemonic);
      if (lookahead == '$') ADVANCE(624);
      if (lookahead == '.') ADVANCE(454);
      if (lookahead == '@') ADVANCE(658);
      if (lookahead == 'e') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(451);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_instruction_mnemonic);
      if (lookahead == '$') ADVANCE(624);
      if (lookahead == '.') ADVANCE(454);
      if (lookahead == '@') ADVANCE(658);
      if (lookahead == 'n') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(451);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_instruction_mnemonic);
      if (lookahead == '$') ADVANCE(624);
      if (lookahead == '.') ADVANCE(454);
      if (lookahead == '@') ADVANCE(658);
      if (lookahead == 'o') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(451);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_instruction_mnemonic);
      if (lookahead == '$') ADVANCE(624);
      if (lookahead == '.') ADVANCE(454);
      if (lookahead == '@') ADVANCE(658);
      if (lookahead == 'p') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(451);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_instruction_mnemonic);
      if (lookahead == '$') ADVANCE(624);
      if (lookahead == '.') ADVANCE(454);
      if (lookahead == '@') ADVANCE(658);
      if (lookahead == 'p') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(451);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_instruction_mnemonic);
      if (lookahead == '$') ADVANCE(624);
      if (lookahead == '.') ADVANCE(454);
      if (lookahead == '@') ADVANCE(658);
      if (lookahead == 'r') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(451);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_instruction_mnemonic);
      if (lookahead == '$') ADVANCE(624);
      if (lookahead == '.') ADVANCE(454);
      if (lookahead == '@') ADVANCE(658);
      if (lookahead == 'r') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(451);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_instruction_mnemonic);
      if (lookahead == '$') ADVANCE(624);
      if (lookahead == '.') ADVANCE(454);
      if (lookahead == '@') ADVANCE(658);
      if (lookahead == 's') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(451);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_instruction_mnemonic);
      if (lookahead == '$') ADVANCE(624);
      if (lookahead == '.') ADVANCE(454);
      if (lookahead == '@') ADVANCE(658);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(451);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(451);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_instruction_mnemonic);
      if (lookahead == '$') ADVANCE(624);
      if (lookahead == '.') ADVANCE(454);
      if (lookahead == '@') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(451);
      if (('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(451);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_instruction_mnemonic);
      if (lookahead == '$') ADVANCE(624);
      if (lookahead == '.') ADVANCE(454);
      if (lookahead == '@') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(451);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(451);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_instruction_mnemonic);
      if (lookahead == '$') ADVANCE(624);
      if (lookahead == '.') ADVANCE(454);
      if (lookahead == '@') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(451);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(451);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_instruction_mnemonic);
      if (lookahead == '$') ADVANCE(624);
      if (lookahead == '.') ADVANCE(454);
      if (lookahead == '@') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(451);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(451);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_instruction_mnemonic);
      if (lookahead == '$') ADVANCE(624);
      if (lookahead == '.') ADVANCE(454);
      if (lookahead == '@') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(451);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(451);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_instruction_mnemonic);
      if (lookahead == '$') ADVANCE(624);
      if (lookahead == '.') ADVANCE(454);
      if (lookahead == '@') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(451);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_instruction_mnemonic);
      if (lookahead == '$') ADVANCE(66);
      if (lookahead == ':') ADVANCE(631);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(452);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_instruction_mnemonic);
      ADVANCE_MAP(
        '$', 54,
        '.', 452,
        ':', 631,
        '\\', 84,
        '\t', 65,
        ' ', 65,
        '%', 83,
        '@', 83,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(453);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_instruction_mnemonic);
      if (lookahead == '$' ||
          lookahead == '@') ADVANCE(658);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(461);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_logical_or_operator);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_logical_and_operator);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_bitwise_or_operator);
      if (lookahead == '|') ADVANCE(456);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_bitwise_xor_operator);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_bitwise_and_operator);
      if (lookahead == '&') ADVANCE(457);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_equality_operator);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_relational_operator);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_relational_operator);
      if (lookahead == '<') ADVANCE(465);
      if (lookahead == '=') ADVANCE(462);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_relational_operator);
      if (lookahead == '=') ADVANCE(462);
      if (lookahead == '>') ADVANCE(465);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_shift_operator);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_additive_operator);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '/') ADVANCE(134);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(134);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_unary_minus_operator);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_unary_minus_operator);
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == '0') ADVANCE(481);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(490);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_bitwise_not_operator);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_logical_not_operator);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_logical_not_operator);
      if (lookahead == '=') ADVANCE(461);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == '_') ADVANCE(578);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == '_') ADVANCE(568);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_relocation_type);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_octal);
      ADVANCE_MAP(
        '.', 498,
        'B', 80,
        '\\', 84,
        'b', 662,
        'f', 663,
        'o', 483,
        'E', 79,
        'e', 79,
        'X', 81,
        'x', 81,
        '8', 489,
        '9', 489,
      );
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(480);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == '.') ADVANCE(498);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(480);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_octal);
      ADVANCE_MAP(
        '.', 498,
        'o', 484,
        'B', 95,
        'b', 95,
        'E', 92,
        'e', 92,
        'X', 104,
        'x', 104,
        '8', 490,
        '9', 490,
      );
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(482);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == '.') ADVANCE(498);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(482);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_octal);
      if (lookahead == '\\') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(483);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_octal);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(484);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(485);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(486);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(498);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(663);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(489);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(498);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(498);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(498);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(490);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (lookahead == '\\') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(491);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(492);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == 'f') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'f') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(657);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(497);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(658);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      if (('d' <= lookahead && lookahead <= 'f')) ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(498);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(658);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'd' ||
          lookahead == 'f') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(500);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(658);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_elf_type_tag_token1);
      if (lookahead == '\\') ADVANCE(84);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(502);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(83);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_elf_type_tag_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(503);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_option_flag_token1);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_char_token2);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_char_token2);
      if (lookahead == '*') ADVANCE(52);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_char_token2);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(507);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(52);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(511);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (lookahead == '\\') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(517);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (lookahead == '\\') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(515);
      if (lookahead == '$' ||
          lookahead == '%' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_register);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(550);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(521);
      if (lookahead == '%' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(521);
      if (lookahead == '%' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '$') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(550);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '.') ADVANCE(658);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(524);
      if (lookahead == '$' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '.') ADVANCE(658);
      if (lookahead == '\\') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (lookahead == '$' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '.') ADVANCE(658);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '\\') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(527);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(661);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(661);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(518);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == 'b' ||
          lookahead == 'f') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(518);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_register);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(518);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_register);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(518);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$') ADVANCE(83);
      if (lookahead == '1') ADVANCE(519);
      if (lookahead == '\\') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(521);
      if (lookahead == '%' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$') ADVANCE(83);
      if (lookahead == '1') ADVANCE(519);
      if (lookahead == '\\') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(521);
      if (lookahead == '%' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$') ADVANCE(83);
      if (lookahead == '3') ADVANCE(519);
      if (lookahead == '\\') ADVANCE(550);
      if (lookahead == 'a') ADVANCE(544);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(520);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(521);
      if (lookahead == '%' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$') ADVANCE(83);
      if (lookahead == '3') ADVANCE(519);
      if (lookahead == '\\') ADVANCE(550);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(521);
      if (lookahead == '%' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$') ADVANCE(83);
      if (lookahead == '3') ADVANCE(519);
      if (lookahead == '\\') ADVANCE(550);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(521);
      if (lookahead == '%' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(550);
      if (lookahead == 'e') ADVANCE(541);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(550);
      if (lookahead == 'o') ADVANCE(521);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(550);
      if (lookahead == 'p') ADVANCE(521);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(550);
      if (lookahead == 'r') ADVANCE(539);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(550);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(521);
      if (lookahead == '%' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(521);
      if (lookahead == '%' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(521);
      if (lookahead == '%' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(521);
      if (lookahead == '%' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(521);
      if (lookahead == '%' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(521);
      if (lookahead == '%' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(550);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(548);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$') ADVANCE(70);
      if (lookahead == ':') ADVANCE(628);
      if (lookahead == '\\') ADVANCE(554);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '%' ||
          lookahead == '@') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(549);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$') ADVANCE(610);
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(550);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$') ADVANCE(610);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(550);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$') ADVANCE(610);
      if (lookahead == '\\') ADVANCE(550);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$') ADVANCE(610);
      if (lookahead == '\\') ADVANCE(551);
      if (lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_macro_variable);
      ADVANCE_MAP(
        '$', 608,
        '(', 43,
        ':', 628,
        '\\', 554,
        '\t', 72,
        ' ', 72,
        '%', 553,
        '@', 553,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_macro_variable);
      ADVANCE_MAP(
        '$', 608,
        '(', 47,
        ':', 628,
        '\\', 554,
        '\t', 72,
        ' ', 72,
        '%', 553,
        '@', 553,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$') ADVANCE(608);
      if (lookahead == ':') ADVANCE(628);
      if (lookahead == '\\') ADVANCE(554);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '%' ||
          lookahead == '@') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$') ADVANCE(608);
      if (lookahead == ':') ADVANCE(628);
      if (lookahead == '\\') ADVANCE(555);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '%' ||
          lookahead == '@') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(557);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '1') ADVANCE(562);
      if (lookahead == '3') ADVANCE(560);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == 'r') ADVANCE(575);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '1') ADVANCE(562);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '2') ADVANCE(478);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '4') ADVANCE(478);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '6') ADVANCE(478);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '6') ADVANCE(561);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == ':') ADVANCE(628);
      if (lookahead == '@') ADVANCE(597);
      if (lookahead == '\\') ADVANCE(598);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(564);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == '_') ADVANCE(578);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == '_') ADVANCE(577);
      if (lookahead == 'g') ADVANCE(572);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == 'a') ADVANCE(584);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == 'a') ADVANCE(573);
      if (lookahead == 'h') ADVANCE(579);
      if (lookahead == 'l') ADVANCE(586);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == 'b') ADVANCE(592);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == 'c') ADVANCE(558);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == 'd') ADVANCE(478);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == 'd') ADVANCE(565);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == 'd') ADVANCE(571);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == 'e') ADVANCE(580);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == 'e') ADVANCE(582);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == 'e') ADVANCE(585);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == 'g') ADVANCE(588);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == 'h') ADVANCE(579);
      if (lookahead == 'l') ADVANCE(586);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == 'i') ADVANCE(478);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == 'l') ADVANCE(478);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == 'l') ADVANCE(559);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == 'l') ADVANCE(565);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == 'l') ADVANCE(593);
      if (lookahead == 'p') ADVANCE(591);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == 'l') ADVANCE(581);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == 'l') ADVANCE(477);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == 'o') ADVANCE(478);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == 'o') ADVANCE(595);
      if (lookahead == 'p') ADVANCE(590);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == 'o') ADVANCE(596);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == 'p') ADVANCE(590);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == 'r') ADVANCE(574);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == 'r') ADVANCE(576);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == 's') ADVANCE(563);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == 's') ADVANCE(566);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == 't') ADVANCE(589);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == 't') ADVANCE(476);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == 't') ADVANCE(565);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(597);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(610);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == ':') ADVANCE(628);
      if (lookahead == '@') ADVANCE(605);
      if (lookahead == '\\') ADVANCE(598);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(610);
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(605);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(610);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(605);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(610);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ':') ADVANCE(628);
      if (lookahead == '@') ADVANCE(605);
      if (lookahead == '\\') ADVANCE(598);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(610);
      if (lookahead == ':') ADVANCE(628);
      if (lookahead == '@') ADVANCE(605);
      if (lookahead == '\\') ADVANCE(598);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(610);
      if (lookahead == ':') ADVANCE(628);
      if (lookahead == '@') ADVANCE(605);
      if (lookahead == '\\') ADVANCE(601);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(603);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(610);
      if (lookahead == '\\') ADVANCE(599);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(605);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '%') ADVANCE(610);
      if (lookahead == '\\') ADVANCE(600);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(605);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == ':') ADVANCE(628);
      if (lookahead == '@') ADVANCE(612);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(606);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == ':') ADVANCE(628);
      if (lookahead == '@') ADVANCE(611);
      if (lookahead == '\\') ADVANCE(613);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(607);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == ':') ADVANCE(628);
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '%' ||
          lookahead == '@') ADVANCE(610);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(608);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == ':') ADVANCE(628);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead == '@' ||
          lookahead == '\\') ADVANCE(613);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(609);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(610);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '\\') ADVANCE(613);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(611);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(612);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(613);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_string_macro_variable);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_string_macro_variable);
      if (lookahead == '\\') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(517);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_string_macro_variable);
      if (lookahead == '\\') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(615);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_string_macro_variable);
      if (lookahead == '\\') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(616);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_string_macro_variable);
      if (lookahead == '\\') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(617);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_string_macro_variable);
      if (lookahead == '\\') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(618);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_string_macro_variable);
      if (lookahead == '\\') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(619);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_string_macro_variable);
      if (lookahead == '\\') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(620);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_string_macro_variable);
      if (lookahead == '\\') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(621);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_string_macro_variable);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(623);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '.' ||
          lookahead == '@') ADVANCE(658);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(624);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_macro_name);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(625);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_macro_parameter_name);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(626);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_macro_parameter_qualifier);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_macro_label);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_local_label);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_local_label_reference_token1);
      if (lookahead == '.' ||
          lookahead == '@') ADVANCE(658);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(630);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_global_label);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '.') ADVANCE(658);
      if (lookahead == '1') ADVANCE(522);
      if (lookahead == '\\') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (lookahead == '$' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '.') ADVANCE(658);
      if (lookahead == '1') ADVANCE(522);
      if (lookahead == '\\') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(524);
      if (lookahead == '$' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '.') ADVANCE(658);
      if (lookahead == '3') ADVANCE(522);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == 'a') ADVANCE(650);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(523);
      if (lookahead == 's' ||
          lookahead == 't') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(524);
      if (lookahead == '$' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '.') ADVANCE(658);
      if (lookahead == '3') ADVANCE(522);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (lookahead == '$' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '.') ADVANCE(658);
      if (lookahead == '3') ADVANCE(522);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'a') ADVANCE(524);
      if (lookahead == '$' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '.') ADVANCE(658);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == 'a') ADVANCE(641);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '.') ADVANCE(658);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == 'd') ADVANCE(647);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '.') ADVANCE(658);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(645);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '.') ADVANCE(658);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(646);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '.') ADVANCE(658);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == 'n') ADVANCE(638);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '.') ADVANCE(658);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(524);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '.') ADVANCE(658);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == 'p') ADVANCE(524);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '.') ADVANCE(658);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == 'p') ADVANCE(640);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '.') ADVANCE(658);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == 'r') ADVANCE(642);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '.') ADVANCE(658);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == 'r') ADVANCE(637);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '.') ADVANCE(658);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == 's') ADVANCE(665);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '.') ADVANCE(658);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(524);
      if (lookahead == '$' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '.') ADVANCE(658);
      if (lookahead == '\\') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(524);
      if (lookahead == '$' ||
          ('4' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '.') ADVANCE(658);
      if (lookahead == '\\') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(524);
      if (lookahead == '$' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '.') ADVANCE(658);
      if (lookahead == '\\') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == 't') ADVANCE(524);
      if (lookahead == '$' ||
          lookahead == '8' ||
          lookahead == '9' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '.') ADVANCE(658);
      if (lookahead == '\\') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (lookahead == '$' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '.') ADVANCE(658);
      if (lookahead == '\\') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'p') ADVANCE(524);
      if (lookahead == '$' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '.') ADVANCE(658);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      ADVANCE_MAP(
        '2', 331,
        '4', 335,
        '8', 336,
        'L', 630,
        'a', 373,
        'b', 326,
        'c', 393,
        'd', 395,
        'f', 376,
        'h', 329,
        'i', 389,
        'l', 340,
        'm', 325,
        'p', 211,
        'q', 423,
        's', 365,
        'u', 380,
        'w', 396,
      );
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(428);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z')) ADVANCE(658);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'L') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(497);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(658);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(658);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '$' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(658);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_global_numeric_label);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_local_numeric_label);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_local_numeric_label_reference);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_local_numeric_label_reference);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(485);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('2' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_local_numeric_label_reference);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_operands);
      if (lookahead == '$') ADVANCE(624);
      if (lookahead == '.') ADVANCE(454);
      if (lookahead == '@') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(451);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_operands);
      if (lookahead == '%') ADVANCE(83);
      if (lookahead == '.') ADVANCE(658);
      if (lookahead == '\\') ADVANCE(84);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(654);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 108, .external_lex_state = 2},
  [2] = {.lex_state = 111, .external_lex_state = 3},
  [3] = {.lex_state = 111, .external_lex_state = 4},
  [4] = {.lex_state = 108, .external_lex_state = 2},
  [5] = {.lex_state = 111, .external_lex_state = 4},
  [6] = {.lex_state = 108, .external_lex_state = 2},
  [7] = {.lex_state = 111, .external_lex_state = 5},
  [8] = {.lex_state = 111, .external_lex_state = 4},
  [9] = {.lex_state = 111, .external_lex_state = 4},
  [10] = {.lex_state = 24, .external_lex_state = 2},
  [11] = {.lex_state = 111, .external_lex_state = 2},
  [12] = {.lex_state = 111, .external_lex_state = 2},
  [13] = {.lex_state = 111, .external_lex_state = 2},
  [14] = {.lex_state = 111, .external_lex_state = 2},
  [15] = {.lex_state = 111, .external_lex_state = 2},
  [16] = {.lex_state = 111, .external_lex_state = 2},
  [17] = {.lex_state = 111, .external_lex_state = 2},
  [18] = {.lex_state = 111, .external_lex_state = 2},
  [19] = {.lex_state = 24, .external_lex_state = 2},
  [20] = {.lex_state = 24, .external_lex_state = 2},
  [21] = {.lex_state = 24, .external_lex_state = 2},
  [22] = {.lex_state = 24, .external_lex_state = 2},
  [23] = {.lex_state = 24, .external_lex_state = 2},
  [24] = {.lex_state = 24, .external_lex_state = 2},
  [25] = {.lex_state = 111, .external_lex_state = 2},
  [26] = {.lex_state = 111, .external_lex_state = 2},
  [27] = {.lex_state = 111, .external_lex_state = 2},
  [28] = {.lex_state = 111, .external_lex_state = 2},
  [29] = {.lex_state = 111, .external_lex_state = 2},
  [30] = {.lex_state = 111, .external_lex_state = 2},
  [31] = {.lex_state = 111, .external_lex_state = 2},
  [32] = {.lex_state = 111, .external_lex_state = 2},
  [33] = {.lex_state = 111, .external_lex_state = 2},
  [34] = {.lex_state = 111, .external_lex_state = 2},
  [35] = {.lex_state = 111, .external_lex_state = 2},
  [36] = {.lex_state = 111, .external_lex_state = 2},
  [37] = {.lex_state = 111, .external_lex_state = 2},
  [38] = {.lex_state = 111, .external_lex_state = 2},
  [39] = {.lex_state = 111, .external_lex_state = 2},
  [40] = {.lex_state = 111, .external_lex_state = 2},
  [41] = {.lex_state = 111, .external_lex_state = 2},
  [42] = {.lex_state = 111, .external_lex_state = 2},
  [43] = {.lex_state = 111, .external_lex_state = 2},
  [44] = {.lex_state = 111, .external_lex_state = 2},
  [45] = {.lex_state = 111, .external_lex_state = 2},
  [46] = {.lex_state = 111, .external_lex_state = 2},
  [47] = {.lex_state = 111, .external_lex_state = 2},
  [48] = {.lex_state = 111, .external_lex_state = 2},
  [49] = {.lex_state = 111, .external_lex_state = 2},
  [50] = {.lex_state = 111, .external_lex_state = 2},
  [51] = {.lex_state = 111, .external_lex_state = 2},
  [52] = {.lex_state = 111, .external_lex_state = 2},
  [53] = {.lex_state = 111, .external_lex_state = 2},
  [54] = {.lex_state = 111, .external_lex_state = 2},
  [55] = {.lex_state = 111, .external_lex_state = 2},
  [56] = {.lex_state = 111, .external_lex_state = 2},
  [57] = {.lex_state = 111, .external_lex_state = 2},
  [58] = {.lex_state = 111, .external_lex_state = 2},
  [59] = {.lex_state = 111, .external_lex_state = 2},
  [60] = {.lex_state = 111, .external_lex_state = 2},
  [61] = {.lex_state = 111, .external_lex_state = 2},
  [62] = {.lex_state = 111, .external_lex_state = 2},
  [63] = {.lex_state = 111, .external_lex_state = 2},
  [64] = {.lex_state = 111, .external_lex_state = 2},
  [65] = {.lex_state = 111, .external_lex_state = 2},
  [66] = {.lex_state = 111, .external_lex_state = 2},
  [67] = {.lex_state = 111, .external_lex_state = 2},
  [68] = {.lex_state = 111, .external_lex_state = 2},
  [69] = {.lex_state = 111, .external_lex_state = 2},
  [70] = {.lex_state = 111, .external_lex_state = 2},
  [71] = {.lex_state = 111, .external_lex_state = 2},
  [72] = {.lex_state = 111, .external_lex_state = 2},
  [73] = {.lex_state = 111, .external_lex_state = 2},
  [74] = {.lex_state = 111, .external_lex_state = 2},
  [75] = {.lex_state = 111, .external_lex_state = 2},
  [76] = {.lex_state = 111, .external_lex_state = 2},
  [77] = {.lex_state = 111, .external_lex_state = 2},
  [78] = {.lex_state = 111, .external_lex_state = 2},
  [79] = {.lex_state = 111, .external_lex_state = 2},
  [80] = {.lex_state = 111, .external_lex_state = 2},
  [81] = {.lex_state = 111, .external_lex_state = 2},
  [82] = {.lex_state = 111, .external_lex_state = 2},
  [83] = {.lex_state = 111, .external_lex_state = 2},
  [84] = {.lex_state = 111, .external_lex_state = 2},
  [85] = {.lex_state = 111, .external_lex_state = 2},
  [86] = {.lex_state = 111, .external_lex_state = 2},
  [87] = {.lex_state = 111, .external_lex_state = 2},
  [88] = {.lex_state = 111, .external_lex_state = 2},
  [89] = {.lex_state = 111, .external_lex_state = 2},
  [90] = {.lex_state = 111, .external_lex_state = 2},
  [91] = {.lex_state = 111, .external_lex_state = 2},
  [92] = {.lex_state = 111, .external_lex_state = 2},
  [93] = {.lex_state = 111, .external_lex_state = 2},
  [94] = {.lex_state = 111, .external_lex_state = 2},
  [95] = {.lex_state = 111, .external_lex_state = 2},
  [96] = {.lex_state = 111, .external_lex_state = 2},
  [97] = {.lex_state = 111, .external_lex_state = 2},
  [98] = {.lex_state = 111, .external_lex_state = 2},
  [99] = {.lex_state = 111, .external_lex_state = 2},
  [100] = {.lex_state = 111, .external_lex_state = 2},
  [101] = {.lex_state = 111, .external_lex_state = 2},
  [102] = {.lex_state = 111, .external_lex_state = 2},
  [103] = {.lex_state = 111, .external_lex_state = 2},
  [104] = {.lex_state = 111, .external_lex_state = 2},
  [105] = {.lex_state = 111, .external_lex_state = 2},
  [106] = {.lex_state = 111, .external_lex_state = 2},
  [107] = {.lex_state = 111, .external_lex_state = 2},
  [108] = {.lex_state = 111, .external_lex_state = 2},
  [109] = {.lex_state = 111, .external_lex_state = 2},
  [110] = {.lex_state = 111, .external_lex_state = 2},
  [111] = {.lex_state = 111, .external_lex_state = 2},
  [112] = {.lex_state = 111, .external_lex_state = 2},
  [113] = {.lex_state = 109, .external_lex_state = 2},
  [114] = {.lex_state = 108, .external_lex_state = 2},
  [115] = {.lex_state = 108, .external_lex_state = 2},
  [116] = {.lex_state = 108, .external_lex_state = 2},
  [117] = {.lex_state = 108, .external_lex_state = 2},
  [118] = {.lex_state = 108, .external_lex_state = 2},
  [119] = {.lex_state = 108, .external_lex_state = 2},
  [120] = {.lex_state = 108, .external_lex_state = 2},
  [121] = {.lex_state = 117, .external_lex_state = 1},
  [122] = {.lex_state = 117, .external_lex_state = 1},
  [123] = {.lex_state = 117, .external_lex_state = 1},
  [124] = {.lex_state = 117, .external_lex_state = 6},
  [125] = {.lex_state = 111, .external_lex_state = 4},
  [126] = {.lex_state = 117, .external_lex_state = 6},
  [127] = {.lex_state = 117, .external_lex_state = 1},
  [128] = {.lex_state = 117, .external_lex_state = 6},
  [129] = {.lex_state = 117, .external_lex_state = 1},
  [130] = {.lex_state = 117, .external_lex_state = 1},
  [131] = {.lex_state = 117, .external_lex_state = 1},
  [132] = {.lex_state = 117, .external_lex_state = 1},
  [133] = {.lex_state = 117, .external_lex_state = 1},
  [134] = {.lex_state = 117, .external_lex_state = 1},
  [135] = {.lex_state = 117, .external_lex_state = 1},
  [136] = {.lex_state = 117, .external_lex_state = 1},
  [137] = {.lex_state = 119, .external_lex_state = 4},
  [138] = {.lex_state = 117, .external_lex_state = 1},
  [139] = {.lex_state = 117, .external_lex_state = 1},
  [140] = {.lex_state = 117, .external_lex_state = 1},
  [141] = {.lex_state = 117, .external_lex_state = 1},
  [142] = {.lex_state = 117, .external_lex_state = 1},
  [143] = {.lex_state = 117, .external_lex_state = 1},
  [144] = {.lex_state = 117, .external_lex_state = 1},
  [145] = {.lex_state = 117, .external_lex_state = 1},
  [146] = {.lex_state = 119, .external_lex_state = 4},
  [147] = {.lex_state = 117, .external_lex_state = 1},
  [148] = {.lex_state = 117, .external_lex_state = 6},
  [149] = {.lex_state = 117, .external_lex_state = 1},
  [150] = {.lex_state = 117, .external_lex_state = 1},
  [151] = {.lex_state = 117, .external_lex_state = 1},
  [152] = {.lex_state = 117, .external_lex_state = 1},
  [153] = {.lex_state = 117, .external_lex_state = 1},
  [154] = {.lex_state = 117, .external_lex_state = 1},
  [155] = {.lex_state = 117, .external_lex_state = 1},
  [156] = {.lex_state = 117, .external_lex_state = 1},
  [157] = {.lex_state = 117, .external_lex_state = 1},
  [158] = {.lex_state = 117, .external_lex_state = 1},
  [159] = {.lex_state = 117, .external_lex_state = 1},
  [160] = {.lex_state = 117, .external_lex_state = 1},
  [161] = {.lex_state = 117, .external_lex_state = 1},
  [162] = {.lex_state = 117, .external_lex_state = 1},
  [163] = {.lex_state = 117, .external_lex_state = 1},
  [164] = {.lex_state = 117, .external_lex_state = 1},
  [165] = {.lex_state = 117, .external_lex_state = 1},
  [166] = {.lex_state = 117, .external_lex_state = 1},
  [167] = {.lex_state = 117, .external_lex_state = 1},
  [168] = {.lex_state = 117, .external_lex_state = 1},
  [169] = {.lex_state = 117, .external_lex_state = 1},
  [170] = {.lex_state = 117, .external_lex_state = 1},
  [171] = {.lex_state = 117, .external_lex_state = 1},
  [172] = {.lex_state = 117, .external_lex_state = 1},
  [173] = {.lex_state = 117, .external_lex_state = 1},
  [174] = {.lex_state = 117, .external_lex_state = 6},
  [175] = {.lex_state = 117, .external_lex_state = 6},
  [176] = {.lex_state = 117, .external_lex_state = 6},
  [177] = {.lex_state = 117, .external_lex_state = 6},
  [178] = {.lex_state = 117, .external_lex_state = 6},
  [179] = {.lex_state = 117, .external_lex_state = 6},
  [180] = {.lex_state = 117, .external_lex_state = 6},
  [181] = {.lex_state = 117, .external_lex_state = 6},
  [182] = {.lex_state = 117, .external_lex_state = 6},
  [183] = {.lex_state = 117, .external_lex_state = 6},
  [184] = {.lex_state = 117, .external_lex_state = 6},
  [185] = {.lex_state = 117, .external_lex_state = 6},
  [186] = {.lex_state = 117, .external_lex_state = 6},
  [187] = {.lex_state = 117, .external_lex_state = 6},
  [188] = {.lex_state = 117, .external_lex_state = 6},
  [189] = {.lex_state = 117, .external_lex_state = 6},
  [190] = {.lex_state = 117, .external_lex_state = 6},
  [191] = {.lex_state = 117, .external_lex_state = 6},
  [192] = {.lex_state = 117, .external_lex_state = 6},
  [193] = {.lex_state = 117, .external_lex_state = 6},
  [194] = {.lex_state = 117, .external_lex_state = 6},
  [195] = {.lex_state = 117, .external_lex_state = 6},
  [196] = {.lex_state = 117, .external_lex_state = 6},
  [197] = {.lex_state = 117, .external_lex_state = 6},
  [198] = {.lex_state = 117, .external_lex_state = 6},
  [199] = {.lex_state = 117, .external_lex_state = 6},
  [200] = {.lex_state = 119, .external_lex_state = 4},
  [201] = {.lex_state = 117, .external_lex_state = 6},
  [202] = {.lex_state = 117, .external_lex_state = 6},
  [203] = {.lex_state = 117, .external_lex_state = 6},
  [204] = {.lex_state = 117, .external_lex_state = 6},
  [205] = {.lex_state = 117, .external_lex_state = 6},
  [206] = {.lex_state = 117, .external_lex_state = 6},
  [207] = {.lex_state = 117, .external_lex_state = 6},
  [208] = {.lex_state = 117, .external_lex_state = 6},
  [209] = {.lex_state = 117, .external_lex_state = 6},
  [210] = {.lex_state = 117, .external_lex_state = 6},
  [211] = {.lex_state = 117, .external_lex_state = 6},
  [212] = {.lex_state = 117, .external_lex_state = 6},
  [213] = {.lex_state = 117, .external_lex_state = 6},
  [214] = {.lex_state = 117, .external_lex_state = 6},
  [215] = {.lex_state = 117, .external_lex_state = 6},
  [216] = {.lex_state = 117, .external_lex_state = 6},
  [217] = {.lex_state = 119, .external_lex_state = 4},
  [218] = {.lex_state = 119, .external_lex_state = 4},
  [219] = {.lex_state = 119, .external_lex_state = 4},
  [220] = {.lex_state = 119, .external_lex_state = 4},
  [221] = {.lex_state = 119, .external_lex_state = 4},
  [222] = {.lex_state = 119, .external_lex_state = 4},
  [223] = {.lex_state = 119, .external_lex_state = 4},
  [224] = {.lex_state = 119, .external_lex_state = 4},
  [225] = {.lex_state = 119, .external_lex_state = 4},
  [226] = {.lex_state = 119, .external_lex_state = 4},
  [227] = {.lex_state = 119, .external_lex_state = 4},
  [228] = {.lex_state = 119, .external_lex_state = 4},
  [229] = {.lex_state = 119, .external_lex_state = 4},
  [230] = {.lex_state = 119, .external_lex_state = 4},
  [231] = {.lex_state = 119, .external_lex_state = 4},
  [232] = {.lex_state = 119, .external_lex_state = 4},
  [233] = {.lex_state = 119, .external_lex_state = 4},
  [234] = {.lex_state = 119, .external_lex_state = 4},
  [235] = {.lex_state = 119, .external_lex_state = 4},
  [236] = {.lex_state = 119, .external_lex_state = 4},
  [237] = {.lex_state = 119, .external_lex_state = 4},
  [238] = {.lex_state = 119, .external_lex_state = 4},
  [239] = {.lex_state = 119, .external_lex_state = 4},
  [240] = {.lex_state = 119, .external_lex_state = 4},
  [241] = {.lex_state = 119, .external_lex_state = 4},
  [242] = {.lex_state = 119, .external_lex_state = 4},
  [243] = {.lex_state = 119, .external_lex_state = 4},
  [244] = {.lex_state = 119, .external_lex_state = 4},
  [245] = {.lex_state = 119, .external_lex_state = 4},
  [246] = {.lex_state = 119, .external_lex_state = 4},
  [247] = {.lex_state = 119, .external_lex_state = 4},
  [248] = {.lex_state = 119, .external_lex_state = 4},
  [249] = {.lex_state = 119, .external_lex_state = 4},
  [250] = {.lex_state = 119, .external_lex_state = 4},
  [251] = {.lex_state = 119, .external_lex_state = 4},
  [252] = {.lex_state = 119, .external_lex_state = 4},
  [253] = {.lex_state = 119, .external_lex_state = 4},
  [254] = {.lex_state = 119, .external_lex_state = 4},
  [255] = {.lex_state = 119, .external_lex_state = 4},
  [256] = {.lex_state = 119, .external_lex_state = 4},
  [257] = {.lex_state = 117, .external_lex_state = 7},
  [258] = {.lex_state = 117, .external_lex_state = 7},
  [259] = {.lex_state = 117, .external_lex_state = 7},
  [260] = {.lex_state = 119, .external_lex_state = 2},
  [261] = {.lex_state = 117, .external_lex_state = 7},
  [262] = {.lex_state = 119, .external_lex_state = 2},
  [263] = {.lex_state = 119, .external_lex_state = 2},
  [264] = {.lex_state = 117, .external_lex_state = 7},
  [265] = {.lex_state = 119, .external_lex_state = 2},
  [266] = {.lex_state = 119, .external_lex_state = 2},
  [267] = {.lex_state = 117, .external_lex_state = 7},
  [268] = {.lex_state = 117, .external_lex_state = 7},
  [269] = {.lex_state = 117, .external_lex_state = 7},
  [270] = {.lex_state = 117, .external_lex_state = 7},
  [271] = {.lex_state = 117, .external_lex_state = 7},
  [272] = {.lex_state = 117, .external_lex_state = 7},
  [273] = {.lex_state = 117, .external_lex_state = 7},
  [274] = {.lex_state = 117, .external_lex_state = 7},
  [275] = {.lex_state = 117, .external_lex_state = 7},
  [276] = {.lex_state = 117, .external_lex_state = 7},
  [277] = {.lex_state = 117, .external_lex_state = 7},
  [278] = {.lex_state = 117, .external_lex_state = 7},
  [279] = {.lex_state = 117, .external_lex_state = 7},
  [280] = {.lex_state = 117, .external_lex_state = 7},
  [281] = {.lex_state = 117, .external_lex_state = 7},
  [282] = {.lex_state = 117, .external_lex_state = 7},
  [283] = {.lex_state = 117, .external_lex_state = 7},
  [284] = {.lex_state = 117, .external_lex_state = 7},
  [285] = {.lex_state = 117, .external_lex_state = 7},
  [286] = {.lex_state = 117, .external_lex_state = 7},
  [287] = {.lex_state = 117, .external_lex_state = 7},
  [288] = {.lex_state = 117, .external_lex_state = 7},
  [289] = {.lex_state = 117, .external_lex_state = 7},
  [290] = {.lex_state = 117, .external_lex_state = 7},
  [291] = {.lex_state = 117, .external_lex_state = 7},
  [292] = {.lex_state = 117, .external_lex_state = 7},
  [293] = {.lex_state = 117, .external_lex_state = 7},
  [294] = {.lex_state = 117, .external_lex_state = 7},
  [295] = {.lex_state = 117, .external_lex_state = 7},
  [296] = {.lex_state = 111, .external_lex_state = 2},
  [297] = {.lex_state = 117, .external_lex_state = 7},
  [298] = {.lex_state = 117, .external_lex_state = 7},
  [299] = {.lex_state = 117, .external_lex_state = 7},
  [300] = {.lex_state = 117, .external_lex_state = 7},
  [301] = {.lex_state = 117, .external_lex_state = 7},
  [302] = {.lex_state = 117, .external_lex_state = 7},
  [303] = {.lex_state = 117, .external_lex_state = 7},
  [304] = {.lex_state = 117, .external_lex_state = 7},
  [305] = {.lex_state = 117, .external_lex_state = 7},
  [306] = {.lex_state = 117, .external_lex_state = 7},
  [307] = {.lex_state = 117, .external_lex_state = 7},
  [308] = {.lex_state = 119, .external_lex_state = 2},
  [309] = {.lex_state = 119, .external_lex_state = 2},
  [310] = {.lex_state = 119, .external_lex_state = 2},
  [311] = {.lex_state = 119, .external_lex_state = 2},
  [312] = {.lex_state = 119, .external_lex_state = 2},
  [313] = {.lex_state = 119, .external_lex_state = 2},
  [314] = {.lex_state = 119, .external_lex_state = 2},
  [315] = {.lex_state = 119, .external_lex_state = 2},
  [316] = {.lex_state = 119, .external_lex_state = 2},
  [317] = {.lex_state = 119, .external_lex_state = 2},
  [318] = {.lex_state = 119, .external_lex_state = 2},
  [319] = {.lex_state = 119, .external_lex_state = 2},
  [320] = {.lex_state = 119, .external_lex_state = 2},
  [321] = {.lex_state = 119, .external_lex_state = 2},
  [322] = {.lex_state = 119, .external_lex_state = 2},
  [323] = {.lex_state = 119, .external_lex_state = 2},
  [324] = {.lex_state = 119, .external_lex_state = 2},
  [325] = {.lex_state = 119, .external_lex_state = 2},
  [326] = {.lex_state = 119, .external_lex_state = 2},
  [327] = {.lex_state = 119, .external_lex_state = 2},
  [328] = {.lex_state = 119, .external_lex_state = 2},
  [329] = {.lex_state = 119, .external_lex_state = 2},
  [330] = {.lex_state = 119, .external_lex_state = 2},
  [331] = {.lex_state = 117, .external_lex_state = 7},
  [332] = {.lex_state = 117, .external_lex_state = 7},
  [333] = {.lex_state = 119, .external_lex_state = 2},
  [334] = {.lex_state = 119, .external_lex_state = 2},
  [335] = {.lex_state = 119, .external_lex_state = 2},
  [336] = {.lex_state = 119, .external_lex_state = 2},
  [337] = {.lex_state = 117, .external_lex_state = 7},
  [338] = {.lex_state = 119, .external_lex_state = 2},
  [339] = {.lex_state = 119, .external_lex_state = 2},
  [340] = {.lex_state = 119, .external_lex_state = 2},
  [341] = {.lex_state = 119, .external_lex_state = 2},
  [342] = {.lex_state = 119, .external_lex_state = 2},
  [343] = {.lex_state = 119, .external_lex_state = 2},
  [344] = {.lex_state = 119, .external_lex_state = 2},
  [345] = {.lex_state = 119, .external_lex_state = 2},
  [346] = {.lex_state = 119, .external_lex_state = 2},
  [347] = {.lex_state = 119, .external_lex_state = 2},
  [348] = {.lex_state = 119, .external_lex_state = 2},
  [349] = {.lex_state = 117, .external_lex_state = 2},
  [350] = {.lex_state = 117, .external_lex_state = 2},
  [351] = {.lex_state = 117, .external_lex_state = 2},
  [352] = {.lex_state = 111, .external_lex_state = 2},
  [353] = {.lex_state = 111, .external_lex_state = 2},
  [354] = {.lex_state = 111, .external_lex_state = 2},
  [355] = {.lex_state = 117, .external_lex_state = 2},
  [356] = {.lex_state = 117, .external_lex_state = 2},
  [357] = {.lex_state = 117, .external_lex_state = 2},
  [358] = {.lex_state = 117, .external_lex_state = 2},
  [359] = {.lex_state = 117, .external_lex_state = 2},
  [360] = {.lex_state = 117, .external_lex_state = 2},
  [361] = {.lex_state = 117, .external_lex_state = 2},
  [362] = {.lex_state = 117, .external_lex_state = 2},
  [363] = {.lex_state = 117, .external_lex_state = 2},
  [364] = {.lex_state = 117, .external_lex_state = 2},
  [365] = {.lex_state = 117, .external_lex_state = 2},
  [366] = {.lex_state = 117, .external_lex_state = 2},
  [367] = {.lex_state = 117, .external_lex_state = 2},
  [368] = {.lex_state = 117, .external_lex_state = 2},
  [369] = {.lex_state = 117, .external_lex_state = 2},
  [370] = {.lex_state = 117, .external_lex_state = 2},
  [371] = {.lex_state = 117, .external_lex_state = 2},
  [372] = {.lex_state = 117, .external_lex_state = 2},
  [373] = {.lex_state = 117, .external_lex_state = 2},
  [374] = {.lex_state = 117, .external_lex_state = 2},
  [375] = {.lex_state = 117, .external_lex_state = 2},
  [376] = {.lex_state = 117, .external_lex_state = 2},
  [377] = {.lex_state = 117, .external_lex_state = 2},
  [378] = {.lex_state = 117, .external_lex_state = 2},
  [379] = {.lex_state = 117, .external_lex_state = 2},
  [380] = {.lex_state = 117, .external_lex_state = 2},
  [381] = {.lex_state = 117, .external_lex_state = 2},
  [382] = {.lex_state = 117, .external_lex_state = 2},
  [383] = {.lex_state = 117, .external_lex_state = 2},
  [384] = {.lex_state = 117, .external_lex_state = 2},
  [385] = {.lex_state = 117, .external_lex_state = 2},
  [386] = {.lex_state = 117, .external_lex_state = 2},
  [387] = {.lex_state = 117, .external_lex_state = 2},
  [388] = {.lex_state = 117, .external_lex_state = 2},
  [389] = {.lex_state = 117, .external_lex_state = 2},
  [390] = {.lex_state = 117, .external_lex_state = 2},
  [391] = {.lex_state = 117, .external_lex_state = 2},
  [392] = {.lex_state = 117, .external_lex_state = 2},
  [393] = {.lex_state = 117, .external_lex_state = 2},
  [394] = {.lex_state = 117, .external_lex_state = 2},
  [395] = {.lex_state = 117, .external_lex_state = 2},
  [396] = {.lex_state = 117, .external_lex_state = 2},
  [397] = {.lex_state = 117, .external_lex_state = 2},
  [398] = {.lex_state = 117, .external_lex_state = 2},
  [399] = {.lex_state = 117, .external_lex_state = 2},
  [400] = {.lex_state = 117, .external_lex_state = 2},
  [401] = {.lex_state = 117, .external_lex_state = 2},
  [402] = {.lex_state = 117, .external_lex_state = 2},
  [403] = {.lex_state = 121, .external_lex_state = 1},
  [404] = {.lex_state = 121, .external_lex_state = 1},
  [405] = {.lex_state = 121, .external_lex_state = 1},
  [406] = {.lex_state = 121, .external_lex_state = 1},
  [407] = {.lex_state = 121, .external_lex_state = 6},
  [408] = {.lex_state = 121, .external_lex_state = 6},
  [409] = {.lex_state = 0, .external_lex_state = 1},
  [410] = {.lex_state = 121, .external_lex_state = 6},
  [411] = {.lex_state = 0, .external_lex_state = 1},
  [412] = {.lex_state = 121, .external_lex_state = 6},
  [413] = {.lex_state = 0, .external_lex_state = 1},
  [414] = {.lex_state = 0, .external_lex_state = 6},
  [415] = {.lex_state = 121, .external_lex_state = 1},
  [416] = {.lex_state = 0, .external_lex_state = 1},
  [417] = {.lex_state = 121, .external_lex_state = 1},
  [418] = {.lex_state = 0, .external_lex_state = 1},
  [419] = {.lex_state = 0, .external_lex_state = 6},
  [420] = {.lex_state = 0, .external_lex_state = 1},
  [421] = {.lex_state = 119, .external_lex_state = 4},
  [422] = {.lex_state = 121, .external_lex_state = 6},
  [423] = {.lex_state = 119, .external_lex_state = 4},
  [424] = {.lex_state = 119, .external_lex_state = 4},
  [425] = {.lex_state = 0, .external_lex_state = 6},
  [426] = {.lex_state = 119, .external_lex_state = 4},
  [427] = {.lex_state = 119, .external_lex_state = 4},
  [428] = {.lex_state = 121, .external_lex_state = 6},
  [429] = {.lex_state = 119, .external_lex_state = 4},
  [430] = {.lex_state = 0, .external_lex_state = 6},
  [431] = {.lex_state = 119, .external_lex_state = 4},
  [432] = {.lex_state = 123, .external_lex_state = 4},
  [433] = {.lex_state = 0, .external_lex_state = 1},
  [434] = {.lex_state = 0, .external_lex_state = 1},
  [435] = {.lex_state = 0, .external_lex_state = 1},
  [436] = {.lex_state = 0, .external_lex_state = 1},
  [437] = {.lex_state = 0, .external_lex_state = 6},
  [438] = {.lex_state = 125, .external_lex_state = 4},
  [439] = {.lex_state = 0, .external_lex_state = 1},
  [440] = {.lex_state = 119, .external_lex_state = 4},
  [441] = {.lex_state = 0, .external_lex_state = 6},
  [442] = {.lex_state = 0, .external_lex_state = 1},
  [443] = {.lex_state = 0, .external_lex_state = 1},
  [444] = {.lex_state = 0, .external_lex_state = 1},
  [445] = {.lex_state = 0, .external_lex_state = 1},
  [446] = {.lex_state = 0, .external_lex_state = 6},
  [447] = {.lex_state = 0, .external_lex_state = 6},
  [448] = {.lex_state = 0, .external_lex_state = 6},
  [449] = {.lex_state = 0, .external_lex_state = 6},
  [450] = {.lex_state = 0, .external_lex_state = 6},
  [451] = {.lex_state = 121, .external_lex_state = 7},
  [452] = {.lex_state = 121, .external_lex_state = 7},
  [453] = {.lex_state = 119, .external_lex_state = 4},
  [454] = {.lex_state = 121, .external_lex_state = 7},
  [455] = {.lex_state = 0, .external_lex_state = 3},
  [456] = {.lex_state = 0, .external_lex_state = 3},
  [457] = {.lex_state = 0, .external_lex_state = 6},
  [458] = {.lex_state = 121, .external_lex_state = 7},
  [459] = {.lex_state = 0, .external_lex_state = 6},
  [460] = {.lex_state = 0, .external_lex_state = 3},
  [461] = {.lex_state = 119, .external_lex_state = 2},
  [462] = {.lex_state = 0, .external_lex_state = 7},
  [463] = {.lex_state = 119, .external_lex_state = 4},
  [464] = {.lex_state = 0, .external_lex_state = 7},
  [465] = {.lex_state = 119, .external_lex_state = 4},
  [466] = {.lex_state = 119, .external_lex_state = 2},
  [467] = {.lex_state = 0, .external_lex_state = 7},
  [468] = {.lex_state = 119, .external_lex_state = 2},
  [469] = {.lex_state = 119, .external_lex_state = 4},
  [470] = {.lex_state = 119, .external_lex_state = 2},
  [471] = {.lex_state = 119, .external_lex_state = 4},
  [472] = {.lex_state = 119, .external_lex_state = 2},
  [473] = {.lex_state = 119, .external_lex_state = 4},
  [474] = {.lex_state = 119, .external_lex_state = 4},
  [475] = {.lex_state = 119, .external_lex_state = 2},
  [476] = {.lex_state = 0, .external_lex_state = 3},
  [477] = {.lex_state = 0, .external_lex_state = 4},
  [478] = {.lex_state = 119, .external_lex_state = 4},
  [479] = {.lex_state = 125, .external_lex_state = 2},
  [480] = {.lex_state = 119, .external_lex_state = 4},
  [481] = {.lex_state = 119, .external_lex_state = 4},
  [482] = {.lex_state = 119, .external_lex_state = 4},
  [483] = {.lex_state = 121, .external_lex_state = 7},
  [484] = {.lex_state = 0, .external_lex_state = 4},
  [485] = {.lex_state = 121, .external_lex_state = 7},
  [486] = {.lex_state = 0, .external_lex_state = 7},
  [487] = {.lex_state = 119, .external_lex_state = 2},
  [488] = {.lex_state = 0, .external_lex_state = 4},
  [489] = {.lex_state = 0, .external_lex_state = 4},
  [490] = {.lex_state = 0, .external_lex_state = 4},
  [491] = {.lex_state = 0, .external_lex_state = 4},
  [492] = {.lex_state = 0, .external_lex_state = 4},
  [493] = {.lex_state = 0, .external_lex_state = 4},
  [494] = {.lex_state = 32, .external_lex_state = 2},
  [495] = {.lex_state = 27, .external_lex_state = 2},
  [496] = {.lex_state = 27, .external_lex_state = 2},
  [497] = {.lex_state = 0, .external_lex_state = 4},
  [498] = {.lex_state = 123, .external_lex_state = 2},
  [499] = {.lex_state = 0, .external_lex_state = 7},
  [500] = {.lex_state = 0, .external_lex_state = 4},
  [501] = {.lex_state = 0, .external_lex_state = 4},
  [502] = {.lex_state = 0, .external_lex_state = 4},
  [503] = {.lex_state = 0, .external_lex_state = 4},
  [504] = {.lex_state = 0, .external_lex_state = 4},
  [505] = {.lex_state = 27, .external_lex_state = 2},
  [506] = {.lex_state = 0, .external_lex_state = 4},
  [507] = {.lex_state = 27, .external_lex_state = 2},
  [508] = {.lex_state = 27, .external_lex_state = 2},
  [509] = {.lex_state = 32, .external_lex_state = 2},
  [510] = {.lex_state = 119, .external_lex_state = 2},
  [511] = {.lex_state = 27, .external_lex_state = 2},
  [512] = {.lex_state = 0, .external_lex_state = 4},
  [513] = {.lex_state = 32, .external_lex_state = 2},
  [514] = {.lex_state = 0, .external_lex_state = 4},
  [515] = {.lex_state = 0, .external_lex_state = 7},
  [516] = {.lex_state = 32, .external_lex_state = 2},
  [517] = {.lex_state = 27, .external_lex_state = 2},
  [518] = {.lex_state = 27, .external_lex_state = 2},
  [519] = {.lex_state = 32, .external_lex_state = 2},
  [520] = {.lex_state = 123, .external_lex_state = 2},
  [521] = {.lex_state = 0, .external_lex_state = 7},
  [522] = {.lex_state = 32, .external_lex_state = 2},
  [523] = {.lex_state = 0, .external_lex_state = 4},
  [524] = {.lex_state = 27, .external_lex_state = 2},
  [525] = {.lex_state = 0, .external_lex_state = 7},
  [526] = {.lex_state = 119, .external_lex_state = 2},
  [527] = {.lex_state = 123, .external_lex_state = 2},
  [528] = {.lex_state = 0, .external_lex_state = 7},
  [529] = {.lex_state = 0, .external_lex_state = 2},
  [530] = {.lex_state = 121, .external_lex_state = 2},
  [531] = {.lex_state = 0, .external_lex_state = 2},
  [532] = {.lex_state = 0, .external_lex_state = 2},
  [533] = {.lex_state = 0, .external_lex_state = 7},
  [534] = {.lex_state = 0, .external_lex_state = 2},
  [535] = {.lex_state = 0, .external_lex_state = 7},
  [536] = {.lex_state = 0, .external_lex_state = 2},
  [537] = {.lex_state = 0, .external_lex_state = 7},
  [538] = {.lex_state = 121, .external_lex_state = 2},
  [539] = {.lex_state = 0, .external_lex_state = 2},
  [540] = {.lex_state = 0, .external_lex_state = 2},
  [541] = {.lex_state = 119, .external_lex_state = 2},
  [542] = {.lex_state = 0, .external_lex_state = 2},
  [543] = {.lex_state = 0, .external_lex_state = 2},
  [544] = {.lex_state = 0, .external_lex_state = 2},
  [545] = {.lex_state = 0, .external_lex_state = 2},
  [546] = {.lex_state = 0, .external_lex_state = 7},
  [547] = {.lex_state = 0, .external_lex_state = 2},
  [548] = {.lex_state = 0, .external_lex_state = 2},
  [549] = {.lex_state = 27, .external_lex_state = 2},
  [550] = {.lex_state = 121, .external_lex_state = 2},
  [551] = {.lex_state = 123, .external_lex_state = 2},
  [552] = {.lex_state = 119, .external_lex_state = 2},
  [553] = {.lex_state = 0, .external_lex_state = 7},
  [554] = {.lex_state = 125, .external_lex_state = 2},
  [555] = {.lex_state = 0, .external_lex_state = 2},
  [556] = {.lex_state = 0, .external_lex_state = 2},
  [557] = {.lex_state = 0, .external_lex_state = 4},
  [558] = {.lex_state = 125, .external_lex_state = 2},
  [559] = {.lex_state = 0, .external_lex_state = 4},
  [560] = {.lex_state = 0, .external_lex_state = 4},
  [561] = {.lex_state = 125, .external_lex_state = 2},
  [562] = {.lex_state = 0, .external_lex_state = 2},
  [563] = {.lex_state = 0, .external_lex_state = 2},
  [564] = {.lex_state = 125, .external_lex_state = 2},
  [565] = {.lex_state = 0, .external_lex_state = 2},
  [566] = {.lex_state = 0, .external_lex_state = 2},
  [567] = {.lex_state = 111, .external_lex_state = 2},
  [568] = {.lex_state = 121, .external_lex_state = 2},
  [569] = {.lex_state = 57, .external_lex_state = 2},
  [570] = {.lex_state = 123, .external_lex_state = 2},
  [571] = {.lex_state = 57, .external_lex_state = 2},
  [572] = {.lex_state = 111, .external_lex_state = 2},
  [573] = {.lex_state = 121, .external_lex_state = 2},
  [574] = {.lex_state = 57, .external_lex_state = 2},
  [575] = {.lex_state = 57, .external_lex_state = 2},
  [576] = {.lex_state = 0, .external_lex_state = 4},
  [577] = {.lex_state = 57, .external_lex_state = 2},
  [578] = {.lex_state = 123, .external_lex_state = 2},
  [579] = {.lex_state = 111, .external_lex_state = 2},
  [580] = {.lex_state = 123, .external_lex_state = 2},
  [581] = {.lex_state = 123, .external_lex_state = 2},
  [582] = {.lex_state = 57, .external_lex_state = 2},
  [583] = {.lex_state = 0, .external_lex_state = 2},
  [584] = {.lex_state = 0, .external_lex_state = 2},
  [585] = {.lex_state = 0, .external_lex_state = 2},
  [586] = {.lex_state = 0, .external_lex_state = 2},
  [587] = {.lex_state = 0, .external_lex_state = 2},
  [588] = {.lex_state = 0, .external_lex_state = 2},
  [589] = {.lex_state = 0, .external_lex_state = 2},
  [590] = {.lex_state = 0, .external_lex_state = 2},
  [591] = {.lex_state = 0, .external_lex_state = 2},
  [592] = {.lex_state = 0, .external_lex_state = 2},
  [593] = {.lex_state = 0, .external_lex_state = 2},
  [594] = {.lex_state = 0, .external_lex_state = 2},
  [595] = {.lex_state = 0, .external_lex_state = 2},
  [596] = {.lex_state = 117, .external_lex_state = 2},
  [597] = {.lex_state = 0, .external_lex_state = 2},
  [598] = {.lex_state = 0, .external_lex_state = 2},
  [599] = {.lex_state = 0, .external_lex_state = 2},
  [600] = {.lex_state = 0, .external_lex_state = 2},
  [601] = {.lex_state = 0, .external_lex_state = 2},
  [602] = {.lex_state = 0, .external_lex_state = 2},
  [603] = {.lex_state = 0, .external_lex_state = 2},
  [604] = {.lex_state = 0, .external_lex_state = 2},
  [605] = {.lex_state = 111, .external_lex_state = 2},
  [606] = {.lex_state = 0, .external_lex_state = 2},
  [607] = {.lex_state = 0, .external_lex_state = 2},
  [608] = {.lex_state = 0, .external_lex_state = 2},
  [609] = {.lex_state = 0, .external_lex_state = 2},
  [610] = {.lex_state = 0, .external_lex_state = 2},
  [611] = {.lex_state = 0, .external_lex_state = 2},
  [612] = {.lex_state = 0, .external_lex_state = 2},
  [613] = {.lex_state = 0, .external_lex_state = 2},
  [614] = {.lex_state = 0, .external_lex_state = 2},
  [615] = {.lex_state = 117, .external_lex_state = 2},
  [616] = {.lex_state = 0, .external_lex_state = 2},
  [617] = {.lex_state = 0, .external_lex_state = 2},
  [618] = {.lex_state = 0, .external_lex_state = 2},
  [619] = {.lex_state = 0, .external_lex_state = 2},
  [620] = {.lex_state = 0, .external_lex_state = 2},
  [621] = {.lex_state = 0, .external_lex_state = 2},
  [622] = {.lex_state = 0, .external_lex_state = 2},
  [623] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__extra_block_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_CR] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [aux_sym__line_comment_token1] = ACTIONS(1),
    [aux_sym__block_comment_token1] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_macro_mnemonic] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOTbyte] = ACTIONS(1),
    [anon_sym_DOT2byte] = ACTIONS(1),
    [anon_sym_DOTshort] = ACTIONS(1),
    [anon_sym_DOThalf] = ACTIONS(1),
    [anon_sym_DOThword] = ACTIONS(1),
    [anon_sym_DOT4byte] = ACTIONS(1),
    [anon_sym_DOTword] = ACTIONS(1),
    [anon_sym_DOTint] = ACTIONS(1),
    [anon_sym_DOT8byte] = ACTIONS(1),
    [anon_sym_DOTdword] = ACTIONS(1),
    [anon_sym_DOTlong] = ACTIONS(1),
    [anon_sym_DOTquad] = ACTIONS(1),
    [anon_sym_DOTcomm] = ACTIONS(1),
    [anon_sym_DOTlcomm] = ACTIONS(1),
    [anon_sym_DOTalign] = ACTIONS(1),
    [anon_sym_DOTbalign] = ACTIONS(1),
    [anon_sym_DOTp2align] = ACTIONS(1),
    [anon_sym_DOTsleb128] = ACTIONS(1),
    [anon_sym_DOTuleb128] = ACTIONS(1),
    [anon_sym_DOTdtprelword] = ACTIONS(1),
    [anon_sym_DOTdtpreldword] = ACTIONS(1),
    [anon_sym_DOTskip] = ACTIONS(1),
    [anon_sym_DOTspace] = ACTIONS(1),
    [anon_sym_DOTfloat] = ACTIONS(1),
    [anon_sym_DOTdouble] = ACTIONS(1),
    [anon_sym_DOTsingle] = ACTIONS(1),
    [anon_sym_DOTasciz] = ACTIONS(1),
    [anon_sym_DOTascii] = ACTIONS(1),
    [anon_sym_DOTasciiz] = ACTIONS(1),
    [anon_sym_DOTstring] = ACTIONS(1),
    [anon_sym_DOTstringz] = ACTIONS(1),
    [aux_sym_control_mnemonic_token1] = ACTIONS(1),
    [sym_instruction_mnemonic] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_logical_or_operator] = ACTIONS(1),
    [sym_logical_and_operator] = ACTIONS(1),
    [sym_bitwise_or_operator] = ACTIONS(1),
    [sym_bitwise_xor_operator] = ACTIONS(1),
    [sym_bitwise_and_operator] = ACTIONS(1),
    [sym_equality_operator] = ACTIONS(1),
    [sym_relational_operator] = ACTIONS(1),
    [sym_shift_operator] = ACTIONS(1),
    [sym_additive_operator] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [sym_unary_minus_operator] = ACTIONS(1),
    [sym_bitwise_not_operator] = ACTIONS(1),
    [sym_logical_not_operator] = ACTIONS(1),
    [aux_sym_elf_type_tag_token1] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
    [sym_register] = ACTIONS(1),
    [sym_string_macro_variable] = ACTIONS(1),
    [sym_macro_name] = ACTIONS(1),
    [sym_macro_parameter_qualifier] = ACTIONS(1),
    [aux_sym_local_label_reference_token1] = ACTIONS(1),
    [aux_sym_symbol_token1] = ACTIONS(1),
    [sym_local_numeric_label_reference] = ACTIONS(1),
    [anon_sym_operands] = ACTIONS(1),
    [sym__operand_separator] = ACTIONS(1),
    [sym__operator_space] = ACTIONS(5),
    [sym__statement_separator_no_comment] = ACTIONS(1),
    [sym__multiline_operand_separator_no_comment] = ACTIONS(1),
    [sym__statement_separator_with_comment] = ACTIONS(1),
    [sym__multiline_operand_separator_with_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(589),
    [sym__statement] = STATE(120),
    [sym__line_comment] = STATE(579),
    [sym__extra_block_comment] = STATE(1),
    [sym_directive] = STATE(484),
    [sym__macro_directive] = STATE(491),
    [sym__directive] = STATE(488),
    [sym__directive_mnemonic] = STATE(463),
    [sym_integer_mnemonic] = STATE(463),
    [sym_float_mnemonic] = STATE(463),
    [sym_string_mnemonic] = STATE(463),
    [sym_control_mnemonic] = STATE(463),
    [sym_instruction] = STATE(484),
    [sym__label] = STATE(115),
    [aux_sym_program_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_CR] = ACTIONS(9),
    [anon_sym_LF] = ACTIONS(9),
    [aux_sym__line_comment_token1] = ACTIONS(11),
    [aux_sym__block_comment_token1] = ACTIONS(3),
    [sym_macro_mnemonic] = ACTIONS(13),
    [anon_sym_DOTbyte] = ACTIONS(15),
    [anon_sym_DOT2byte] = ACTIONS(15),
    [anon_sym_DOTshort] = ACTIONS(15),
    [anon_sym_DOThalf] = ACTIONS(15),
    [anon_sym_DOThword] = ACTIONS(15),
    [anon_sym_DOT4byte] = ACTIONS(15),
    [anon_sym_DOTword] = ACTIONS(15),
    [anon_sym_DOTint] = ACTIONS(15),
    [anon_sym_DOT8byte] = ACTIONS(15),
    [anon_sym_DOTdword] = ACTIONS(15),
    [anon_sym_DOTlong] = ACTIONS(15),
    [anon_sym_DOTquad] = ACTIONS(15),
    [anon_sym_DOTcomm] = ACTIONS(15),
    [anon_sym_DOTlcomm] = ACTIONS(15),
    [anon_sym_DOTalign] = ACTIONS(15),
    [anon_sym_DOTbalign] = ACTIONS(15),
    [anon_sym_DOTp2align] = ACTIONS(15),
    [anon_sym_DOTsleb128] = ACTIONS(15),
    [anon_sym_DOTuleb128] = ACTIONS(15),
    [anon_sym_DOTdtprelword] = ACTIONS(15),
    [anon_sym_DOTdtpreldword] = ACTIONS(15),
    [anon_sym_DOTskip] = ACTIONS(15),
    [anon_sym_DOTspace] = ACTIONS(15),
    [anon_sym_DOTfloat] = ACTIONS(17),
    [anon_sym_DOTdouble] = ACTIONS(17),
    [anon_sym_DOTsingle] = ACTIONS(17),
    [anon_sym_DOTasciz] = ACTIONS(19),
    [anon_sym_DOTascii] = ACTIONS(19),
    [anon_sym_DOTasciiz] = ACTIONS(19),
    [anon_sym_DOTstring] = ACTIONS(19),
    [anon_sym_DOTstringz] = ACTIONS(19),
    [aux_sym_control_mnemonic_token1] = ACTIONS(21),
    [sym_instruction_mnemonic] = ACTIONS(23),
    [sym_macro_variable] = ACTIONS(23),
    [sym_macro_label] = ACTIONS(25),
    [sym_local_label] = ACTIONS(25),
    [sym_global_label] = ACTIONS(27),
    [sym_global_numeric_label] = ACTIONS(25),
    [sym_local_numeric_label] = ACTIONS(25),
    [sym__operator_space] = ACTIONS(5),
  },
  [2] = {
    [sym__extra_block_comment] = STATE(2),
    [sym__directive_operand] = STATE(445),
    [sym__concat_string] = STATE(434),
    [sym__assignment_expression] = STATE(165),
    [sym__wrapped_assignment_expression] = STATE(409),
    [sym__logical_or_expression] = STATE(149),
    [sym__wrapped_logical_or_expression] = STATE(138),
    [sym__logical_and_expression] = STATE(140),
    [sym__wrapped_logical_and_expression] = STATE(141),
    [sym__bitwise_or_expression] = STATE(142),
    [sym__wrapped_bitwise_or_expression] = STATE(143),
    [sym__bitwise_xor_expression] = STATE(144),
    [sym__wrapped_bitwise_xor_expression] = STATE(145),
    [sym__bitwise_and_expression] = STATE(147),
    [sym__wrapped_bitwise_and_expression] = STATE(152),
    [sym__equality_expression] = STATE(164),
    [sym__wrapped_equality_expression] = STATE(166),
    [sym__relational_expression] = STATE(130),
    [sym__wrapped_relational_expression] = STATE(131),
    [sym__shift_expression] = STATE(132),
    [sym__wrapped_shift_expression] = STATE(133),
    [sym__additive_expression] = STATE(134),
    [sym__wrapped_additive_expression] = STATE(135),
    [sym__multiplicative_expression] = STATE(136),
    [sym__wrapped_multiplicative_expression] = STATE(122),
    [sym__simple_expression] = STATE(139),
    [sym_parenthesized_expression] = STATE(150),
    [sym_unary_expression] = STATE(150),
    [sym_relocation_expression] = STATE(150),
    [sym_decimal] = STATE(150),
    [sym_elf_type_tag] = STATE(434),
    [sym_option_flag] = STATE(434),
    [sym_char] = STATE(150),
    [sym_string] = STATE(404),
    [sym_local_label_reference] = STATE(150),
    [sym_symbol] = STATE(150),
    [sym_address] = STATE(150),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(29),
    [aux_sym__line_comment_token1] = ACTIONS(29),
    [aux_sym__block_comment_token1] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(31),
    [sym_unary_minus_operator] = ACTIONS(33),
    [sym_bitwise_not_operator] = ACTIONS(35),
    [sym_logical_not_operator] = ACTIONS(35),
    [sym_relocation_type] = ACTIONS(37),
    [sym_octal] = ACTIONS(39),
    [sym_binary] = ACTIONS(39),
    [aux_sym_decimal_token1] = ACTIONS(41),
    [sym_hexadecimal] = ACTIONS(39),
    [sym_float] = ACTIONS(39),
    [aux_sym_elf_type_tag_token1] = ACTIONS(43),
    [aux_sym_option_flag_token1] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_DQUOTE] = ACTIONS(49),
    [sym_register] = ACTIONS(39),
    [sym_macro_variable] = ACTIONS(51),
    [aux_sym_local_label_reference_token1] = ACTIONS(53),
    [aux_sym_symbol_token1] = ACTIONS(55),
    [sym_local_numeric_label_reference] = ACTIONS(39),
    [sym__operator_space] = ACTIONS(5),
    [sym__statement_separator_no_comment] = ACTIONS(29),
    [sym__multiline_operand_separator_no_comment] = ACTIONS(29),
    [sym__statement_separator_with_comment] = ACTIONS(29),
    [sym__multiline_operand_separator_with_comment] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 45,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_unary_minus_operator,
    ACTIONS(37), 1,
      sym_relocation_type,
    ACTIONS(41), 1,
      aux_sym_decimal_token1,
    ACTIONS(43), 1,
      aux_sym_elf_type_tag_token1,
    ACTIONS(45), 1,
      aux_sym_option_flag_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_macro_variable,
    ACTIONS(53), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(55), 1,
      aux_sym_symbol_token1,
    STATE(3), 1,
      sym__extra_block_comment,
    STATE(122), 1,
      sym__wrapped_multiplicative_expression,
    STATE(130), 1,
      sym__relational_expression,
    STATE(131), 1,
      sym__wrapped_relational_expression,
    STATE(132), 1,
      sym__shift_expression,
    STATE(133), 1,
      sym__wrapped_shift_expression,
    STATE(134), 1,
      sym__additive_expression,
    STATE(135), 1,
      sym__wrapped_additive_expression,
    STATE(136), 1,
      sym__multiplicative_expression,
    STATE(138), 1,
      sym__wrapped_logical_or_expression,
    STATE(139), 1,
      sym__simple_expression,
    STATE(140), 1,
      sym__logical_and_expression,
    STATE(141), 1,
      sym__wrapped_logical_and_expression,
    STATE(142), 1,
      sym__bitwise_or_expression,
    STATE(143), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(144), 1,
      sym__bitwise_xor_expression,
    STATE(145), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(147), 1,
      sym__bitwise_and_expression,
    STATE(149), 1,
      sym__logical_or_expression,
    STATE(152), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(164), 1,
      sym__equality_expression,
    STATE(165), 1,
      sym__assignment_expression,
    STATE(166), 1,
      sym__wrapped_equality_expression,
    STATE(404), 1,
      sym_string,
    STATE(409), 1,
      sym__wrapped_assignment_expression,
    STATE(413), 1,
      sym__directive_operand,
    STATE(523), 1,
      sym_directive_operands,
    ACTIONS(35), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    STATE(434), 3,
      sym__concat_string,
      sym_elf_type_tag,
      sym_option_flag,
    ACTIONS(57), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(39), 6,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(150), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [155] = 22,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(11), 1,
      aux_sym__line_comment_token1,
    ACTIONS(13), 1,
      sym_macro_mnemonic,
    ACTIONS(21), 1,
      aux_sym_control_mnemonic_token1,
    ACTIONS(27), 1,
      sym_global_label,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym__extra_block_comment,
    STATE(6), 1,
      aux_sym_program_repeat1,
    STATE(114), 1,
      sym__label,
    STATE(120), 1,
      sym__statement,
    STATE(488), 1,
      sym__directive,
    STATE(491), 1,
      sym__macro_directive,
    STATE(567), 1,
      sym__line_comment,
    ACTIONS(23), 2,
      sym_instruction_mnemonic,
      sym_macro_variable,
    STATE(477), 2,
      sym_directive,
      sym_instruction,
    ACTIONS(9), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
    ACTIONS(17), 3,
      anon_sym_DOTfloat,
      anon_sym_DOTdouble,
      anon_sym_DOTsingle,
    ACTIONS(25), 4,
      sym_macro_label,
      sym_local_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
    ACTIONS(19), 5,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
    STATE(463), 5,
      sym__directive_mnemonic,
      sym_integer_mnemonic,
      sym_float_mnemonic,
      sym_string_mnemonic,
      sym_control_mnemonic,
    ACTIONS(15), 23,
      anon_sym_DOTbyte,
      anon_sym_DOT2byte,
      anon_sym_DOTshort,
      anon_sym_DOThalf,
      anon_sym_DOThword,
      anon_sym_DOT4byte,
      anon_sym_DOTword,
      anon_sym_DOTint,
      anon_sym_DOT8byte,
      anon_sym_DOTdword,
      anon_sym_DOTlong,
      anon_sym_DOTquad,
      anon_sym_DOTcomm,
      anon_sym_DOTlcomm,
      anon_sym_DOTalign,
      anon_sym_DOTbalign,
      anon_sym_DOTp2align,
      anon_sym_DOTsleb128,
      anon_sym_DOTuleb128,
      anon_sym_DOTdtprelword,
      anon_sym_DOTdtpreldword,
      anon_sym_DOTskip,
      anon_sym_DOTspace,
  [261] = 44,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      sym_unary_minus_operator,
    ACTIONS(69), 1,
      sym_relocation_type,
    ACTIONS(73), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_macro_variable,
    ACTIONS(81), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(83), 1,
      aux_sym_symbol_token1,
    STATE(5), 1,
      sym__extra_block_comment,
    STATE(124), 1,
      sym__wrapped_multiplicative_expression,
    STATE(174), 1,
      sym__wrapped_shift_expression,
    STATE(179), 1,
      sym__assignment_expression,
    STATE(180), 1,
      sym__logical_or_expression,
    STATE(181), 1,
      sym__wrapped_logical_or_expression,
    STATE(182), 1,
      sym__logical_and_expression,
    STATE(183), 1,
      sym__wrapped_logical_and_expression,
    STATE(184), 1,
      sym__bitwise_or_expression,
    STATE(185), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(186), 1,
      sym__bitwise_xor_expression,
    STATE(187), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(188), 1,
      sym__bitwise_and_expression,
    STATE(189), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(190), 1,
      sym__equality_expression,
    STATE(191), 1,
      sym__wrapped_equality_expression,
    STATE(192), 1,
      sym__relational_expression,
    STATE(193), 1,
      sym__wrapped_relational_expression,
    STATE(194), 1,
      sym__shift_expression,
    STATE(195), 1,
      sym__additive_expression,
    STATE(196), 1,
      sym__wrapped_additive_expression,
    STATE(197), 1,
      sym__multiplicative_expression,
    STATE(198), 1,
      sym__simple_expression,
    STATE(410), 1,
      sym_string,
    STATE(414), 1,
      sym__wrapped_assignment_expression,
    STATE(430), 1,
      sym__instruction_operand,
    STATE(457), 1,
      sym__concat_string,
    STATE(492), 1,
      sym__call_expression,
    STATE(512), 1,
      sym_instruction_operands,
    ACTIONS(67), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(61), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(71), 6,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(201), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [411] = 21,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 1,
      aux_sym__line_comment_token1,
    ACTIONS(93), 1,
      sym_macro_mnemonic,
    ACTIONS(105), 1,
      aux_sym_control_mnemonic_token1,
    ACTIONS(114), 1,
      sym_global_label,
    STATE(116), 1,
      sym__label,
    STATE(120), 1,
      sym__statement,
    STATE(488), 1,
      sym__directive,
    STATE(491), 1,
      sym__macro_directive,
    STATE(605), 1,
      sym__line_comment,
    ACTIONS(108), 2,
      sym_instruction_mnemonic,
      sym_macro_variable,
    STATE(6), 2,
      sym__extra_block_comment,
      aux_sym_program_repeat1,
    STATE(490), 2,
      sym_directive,
      sym_instruction,
    ACTIONS(87), 3,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
    ACTIONS(99), 3,
      anon_sym_DOTfloat,
      anon_sym_DOTdouble,
      anon_sym_DOTsingle,
    ACTIONS(111), 4,
      sym_macro_label,
      sym_local_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
    ACTIONS(102), 5,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
    STATE(463), 5,
      sym__directive_mnemonic,
      sym_integer_mnemonic,
      sym_float_mnemonic,
      sym_string_mnemonic,
      sym_control_mnemonic,
    ACTIONS(96), 23,
      anon_sym_DOTbyte,
      anon_sym_DOT2byte,
      anon_sym_DOTshort,
      anon_sym_DOThalf,
      anon_sym_DOThword,
      anon_sym_DOT4byte,
      anon_sym_DOTword,
      anon_sym_DOTint,
      anon_sym_DOT8byte,
      anon_sym_DOTdword,
      anon_sym_DOTlong,
      anon_sym_DOTquad,
      anon_sym_DOTcomm,
      anon_sym_DOTlcomm,
      anon_sym_DOTalign,
      anon_sym_DOTbalign,
      anon_sym_DOTp2align,
      anon_sym_DOTsleb128,
      anon_sym_DOTuleb128,
      anon_sym_DOTdtprelword,
      anon_sym_DOTdtpreldword,
      anon_sym_DOTskip,
      anon_sym_DOTspace,
  [515] = 44,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_unary_minus_operator,
    ACTIONS(37), 1,
      sym_relocation_type,
    ACTIONS(41), 1,
      aux_sym_decimal_token1,
    ACTIONS(43), 1,
      aux_sym_elf_type_tag_token1,
    ACTIONS(45), 1,
      aux_sym_option_flag_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_macro_variable,
    ACTIONS(53), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(55), 1,
      aux_sym_symbol_token1,
    STATE(7), 1,
      sym__extra_block_comment,
    STATE(122), 1,
      sym__wrapped_multiplicative_expression,
    STATE(130), 1,
      sym__relational_expression,
    STATE(131), 1,
      sym__wrapped_relational_expression,
    STATE(132), 1,
      sym__shift_expression,
    STATE(133), 1,
      sym__wrapped_shift_expression,
    STATE(134), 1,
      sym__additive_expression,
    STATE(135), 1,
      sym__wrapped_additive_expression,
    STATE(136), 1,
      sym__multiplicative_expression,
    STATE(138), 1,
      sym__wrapped_logical_or_expression,
    STATE(139), 1,
      sym__simple_expression,
    STATE(140), 1,
      sym__logical_and_expression,
    STATE(141), 1,
      sym__wrapped_logical_and_expression,
    STATE(142), 1,
      sym__bitwise_or_expression,
    STATE(143), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(144), 1,
      sym__bitwise_xor_expression,
    STATE(145), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(147), 1,
      sym__bitwise_and_expression,
    STATE(149), 1,
      sym__logical_or_expression,
    STATE(152), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(164), 1,
      sym__equality_expression,
    STATE(165), 1,
      sym__assignment_expression,
    STATE(166), 1,
      sym__wrapped_equality_expression,
    STATE(404), 1,
      sym_string,
    STATE(409), 1,
      sym__wrapped_assignment_expression,
    STATE(445), 1,
      sym__directive_operand,
    ACTIONS(35), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(117), 2,
      sym__multiline_operand_separator_no_comment,
      sym__multiline_operand_separator_with_comment,
    STATE(434), 3,
      sym__concat_string,
      sym_elf_type_tag,
      sym_option_flag,
    ACTIONS(39), 6,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(150), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [664] = 42,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(65), 1,
      sym_unary_minus_operator,
    ACTIONS(69), 1,
      sym_relocation_type,
    ACTIONS(73), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_macro_variable,
    ACTIONS(81), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(83), 1,
      aux_sym_symbol_token1,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      sym__extra_block_comment,
    STATE(124), 1,
      sym__wrapped_multiplicative_expression,
    STATE(174), 1,
      sym__wrapped_shift_expression,
    STATE(179), 1,
      sym__assignment_expression,
    STATE(180), 1,
      sym__logical_or_expression,
    STATE(181), 1,
      sym__wrapped_logical_or_expression,
    STATE(182), 1,
      sym__logical_and_expression,
    STATE(183), 1,
      sym__wrapped_logical_and_expression,
    STATE(184), 1,
      sym__bitwise_or_expression,
    STATE(185), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(186), 1,
      sym__bitwise_xor_expression,
    STATE(187), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(188), 1,
      sym__bitwise_and_expression,
    STATE(189), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(190), 1,
      sym__equality_expression,
    STATE(191), 1,
      sym__wrapped_equality_expression,
    STATE(192), 1,
      sym__relational_expression,
    STATE(193), 1,
      sym__wrapped_relational_expression,
    STATE(194), 1,
      sym__shift_expression,
    STATE(195), 1,
      sym__additive_expression,
    STATE(196), 1,
      sym__wrapped_additive_expression,
    STATE(197), 1,
      sym__multiplicative_expression,
    STATE(198), 1,
      sym__simple_expression,
    STATE(410), 1,
      sym_string,
    STATE(414), 1,
      sym__wrapped_assignment_expression,
    STATE(450), 1,
      sym__instruction_operand,
    STATE(457), 1,
      sym__concat_string,
    ACTIONS(67), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(119), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(71), 6,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(201), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [808] = 42,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(65), 1,
      sym_unary_minus_operator,
    ACTIONS(69), 1,
      sym_relocation_type,
    ACTIONS(73), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_macro_variable,
    ACTIONS(81), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(83), 1,
      aux_sym_symbol_token1,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym__extra_block_comment,
    STATE(124), 1,
      sym__wrapped_multiplicative_expression,
    STATE(174), 1,
      sym__wrapped_shift_expression,
    STATE(179), 1,
      sym__assignment_expression,
    STATE(180), 1,
      sym__logical_or_expression,
    STATE(181), 1,
      sym__wrapped_logical_or_expression,
    STATE(182), 1,
      sym__logical_and_expression,
    STATE(183), 1,
      sym__wrapped_logical_and_expression,
    STATE(184), 1,
      sym__bitwise_or_expression,
    STATE(185), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(186), 1,
      sym__bitwise_xor_expression,
    STATE(187), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(188), 1,
      sym__bitwise_and_expression,
    STATE(189), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(190), 1,
      sym__equality_expression,
    STATE(191), 1,
      sym__wrapped_equality_expression,
    STATE(192), 1,
      sym__relational_expression,
    STATE(193), 1,
      sym__wrapped_relational_expression,
    STATE(194), 1,
      sym__shift_expression,
    STATE(195), 1,
      sym__additive_expression,
    STATE(196), 1,
      sym__wrapped_additive_expression,
    STATE(197), 1,
      sym__multiplicative_expression,
    STATE(198), 1,
      sym__simple_expression,
    STATE(410), 1,
      sym_string,
    STATE(414), 1,
      sym__wrapped_assignment_expression,
    STATE(450), 1,
      sym__instruction_operand,
    STATE(457), 1,
      sym__concat_string,
    ACTIONS(67), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(123), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(71), 6,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(201), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [952] = 47,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(125), 1,
      aux_sym__block_comment_token1,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 1,
      sym_unary_minus_operator,
    ACTIONS(135), 1,
      sym_relocation_type,
    ACTIONS(139), 1,
      aux_sym_decimal_token1,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      sym_register,
    ACTIONS(147), 1,
      sym_macro_variable,
    ACTIONS(149), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(151), 1,
      aux_sym_symbol_token1,
    ACTIONS(153), 1,
      anon_sym_operands,
    STATE(10), 1,
      sym__extra_block_comment,
    STATE(14), 1,
      sym__block_comment,
    STATE(259), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(272), 1,
      sym__assignment_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(274), 1,
      sym__wrapped_logical_or_expression,
    STATE(275), 1,
      sym__logical_and_expression,
    STATE(276), 1,
      sym__wrapped_logical_and_expression,
    STATE(277), 1,
      sym__bitwise_or_expression,
    STATE(282), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(297), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(298), 1,
      sym__bitwise_and_expression,
    STATE(299), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(300), 1,
      sym__equality_expression,
    STATE(301), 1,
      sym__wrapped_equality_expression,
    STATE(302), 1,
      sym__relational_expression,
    STATE(303), 1,
      sym__wrapped_relational_expression,
    STATE(304), 1,
      sym__shift_expression,
    STATE(305), 1,
      sym__wrapped_shift_expression,
    STATE(306), 1,
      sym__additive_expression,
    STATE(307), 1,
      sym__wrapped_additive_expression,
    STATE(331), 1,
      sym_symbol,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(454), 1,
      sym_string,
    STATE(462), 1,
      sym__wrapped_assignment_expression,
    STATE(499), 1,
      sym__instruction_operand,
    STATE(553), 1,
      sym__concat_string,
    STATE(586), 1,
      sym_instruction_operands,
    ACTIONS(133), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(137), 5,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(269), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [1105] = 43,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_unary_minus_operator,
    ACTIONS(37), 1,
      sym_relocation_type,
    ACTIONS(41), 1,
      aux_sym_decimal_token1,
    ACTIONS(43), 1,
      aux_sym_elf_type_tag_token1,
    ACTIONS(45), 1,
      aux_sym_option_flag_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_macro_variable,
    ACTIONS(53), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(55), 1,
      aux_sym_symbol_token1,
    STATE(11), 1,
      sym__extra_block_comment,
    STATE(122), 1,
      sym__wrapped_multiplicative_expression,
    STATE(130), 1,
      sym__relational_expression,
    STATE(131), 1,
      sym__wrapped_relational_expression,
    STATE(132), 1,
      sym__shift_expression,
    STATE(133), 1,
      sym__wrapped_shift_expression,
    STATE(134), 1,
      sym__additive_expression,
    STATE(135), 1,
      sym__wrapped_additive_expression,
    STATE(136), 1,
      sym__multiplicative_expression,
    STATE(138), 1,
      sym__wrapped_logical_or_expression,
    STATE(139), 1,
      sym__simple_expression,
    STATE(140), 1,
      sym__logical_and_expression,
    STATE(141), 1,
      sym__wrapped_logical_and_expression,
    STATE(142), 1,
      sym__bitwise_or_expression,
    STATE(143), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(144), 1,
      sym__bitwise_xor_expression,
    STATE(145), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(147), 1,
      sym__bitwise_and_expression,
    STATE(149), 1,
      sym__logical_or_expression,
    STATE(152), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(164), 1,
      sym__equality_expression,
    STATE(165), 1,
      sym__assignment_expression,
    STATE(166), 1,
      sym__wrapped_equality_expression,
    STATE(404), 1,
      sym_string,
    STATE(409), 1,
      sym__wrapped_assignment_expression,
    STATE(445), 1,
      sym__directive_operand,
    ACTIONS(35), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    STATE(434), 3,
      sym__concat_string,
      sym_elf_type_tag,
      sym_option_flag,
    ACTIONS(39), 6,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(150), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1250] = 43,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_unary_minus_operator,
    ACTIONS(37), 1,
      sym_relocation_type,
    ACTIONS(41), 1,
      aux_sym_decimal_token1,
    ACTIONS(43), 1,
      aux_sym_elf_type_tag_token1,
    ACTIONS(45), 1,
      aux_sym_option_flag_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      sym_macro_variable,
    ACTIONS(53), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(55), 1,
      aux_sym_symbol_token1,
    STATE(12), 1,
      sym__extra_block_comment,
    STATE(122), 1,
      sym__wrapped_multiplicative_expression,
    STATE(130), 1,
      sym__relational_expression,
    STATE(131), 1,
      sym__wrapped_relational_expression,
    STATE(132), 1,
      sym__shift_expression,
    STATE(133), 1,
      sym__wrapped_shift_expression,
    STATE(134), 1,
      sym__additive_expression,
    STATE(135), 1,
      sym__wrapped_additive_expression,
    STATE(136), 1,
      sym__multiplicative_expression,
    STATE(138), 1,
      sym__wrapped_logical_or_expression,
    STATE(139), 1,
      sym__simple_expression,
    STATE(140), 1,
      sym__logical_and_expression,
    STATE(141), 1,
      sym__wrapped_logical_and_expression,
    STATE(142), 1,
      sym__bitwise_or_expression,
    STATE(143), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(144), 1,
      sym__bitwise_xor_expression,
    STATE(145), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(147), 1,
      sym__bitwise_and_expression,
    STATE(149), 1,
      sym__logical_or_expression,
    STATE(152), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(164), 1,
      sym__equality_expression,
    STATE(165), 1,
      sym__assignment_expression,
    STATE(166), 1,
      sym__wrapped_equality_expression,
    STATE(404), 1,
      sym_string,
    STATE(409), 1,
      sym__wrapped_assignment_expression,
    STATE(436), 1,
      sym__directive_operand,
    ACTIONS(35), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    STATE(434), 3,
      sym__concat_string,
      sym_elf_type_tag,
      sym_option_flag,
    ACTIONS(39), 6,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(150), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1395] = 44,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(125), 1,
      aux_sym__block_comment_token1,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 1,
      sym_unary_minus_operator,
    ACTIONS(135), 1,
      sym_relocation_type,
    ACTIONS(139), 1,
      aux_sym_decimal_token1,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(151), 1,
      aux_sym_symbol_token1,
    ACTIONS(155), 1,
      sym_macro_variable,
    STATE(13), 1,
      sym__extra_block_comment,
    STATE(14), 1,
      sym__block_comment,
    STATE(259), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(272), 1,
      sym__assignment_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(274), 1,
      sym__wrapped_logical_or_expression,
    STATE(275), 1,
      sym__logical_and_expression,
    STATE(276), 1,
      sym__wrapped_logical_and_expression,
    STATE(277), 1,
      sym__bitwise_or_expression,
    STATE(282), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(297), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(298), 1,
      sym__bitwise_and_expression,
    STATE(299), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(300), 1,
      sym__equality_expression,
    STATE(301), 1,
      sym__wrapped_equality_expression,
    STATE(302), 1,
      sym__relational_expression,
    STATE(303), 1,
      sym__wrapped_relational_expression,
    STATE(304), 1,
      sym__shift_expression,
    STATE(305), 1,
      sym__wrapped_shift_expression,
    STATE(306), 1,
      sym__additive_expression,
    STATE(307), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(454), 1,
      sym_string,
    STATE(467), 1,
      sym__wrapped_assignment_expression,
    STATE(499), 1,
      sym__instruction_operand,
    STATE(553), 1,
      sym__concat_string,
    STATE(586), 1,
      sym_instruction_operands,
    ACTIONS(133), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(137), 6,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(269), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1541] = 43,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_unary_minus_operator,
    ACTIONS(135), 1,
      sym_relocation_type,
    ACTIONS(139), 1,
      aux_sym_decimal_token1,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(151), 1,
      aux_sym_symbol_token1,
    ACTIONS(155), 1,
      sym_macro_variable,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    STATE(14), 1,
      sym__extra_block_comment,
    STATE(259), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(272), 1,
      sym__assignment_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(274), 1,
      sym__wrapped_logical_or_expression,
    STATE(275), 1,
      sym__logical_and_expression,
    STATE(276), 1,
      sym__wrapped_logical_and_expression,
    STATE(277), 1,
      sym__bitwise_or_expression,
    STATE(282), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(297), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(298), 1,
      sym__bitwise_and_expression,
    STATE(299), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(300), 1,
      sym__equality_expression,
    STATE(301), 1,
      sym__wrapped_equality_expression,
    STATE(302), 1,
      sym__relational_expression,
    STATE(303), 1,
      sym__wrapped_relational_expression,
    STATE(304), 1,
      sym__shift_expression,
    STATE(305), 1,
      sym__wrapped_shift_expression,
    STATE(306), 1,
      sym__additive_expression,
    STATE(307), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(454), 1,
      sym_string,
    STATE(467), 1,
      sym__wrapped_assignment_expression,
    STATE(499), 1,
      sym__instruction_operand,
    STATE(553), 1,
      sym__concat_string,
    STATE(598), 1,
      sym_instruction_operands,
    ACTIONS(133), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(137), 6,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(269), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1684] = 42,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_unary_minus_operator,
    ACTIONS(135), 1,
      sym_relocation_type,
    ACTIONS(139), 1,
      aux_sym_decimal_token1,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(151), 1,
      aux_sym_symbol_token1,
    ACTIONS(155), 1,
      sym_macro_variable,
    STATE(15), 1,
      sym__extra_block_comment,
    STATE(259), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(272), 1,
      sym__assignment_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(274), 1,
      sym__wrapped_logical_or_expression,
    STATE(275), 1,
      sym__logical_and_expression,
    STATE(276), 1,
      sym__wrapped_logical_and_expression,
    STATE(277), 1,
      sym__bitwise_or_expression,
    STATE(282), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(297), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(298), 1,
      sym__bitwise_and_expression,
    STATE(299), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(300), 1,
      sym__equality_expression,
    STATE(301), 1,
      sym__wrapped_equality_expression,
    STATE(302), 1,
      sym__relational_expression,
    STATE(303), 1,
      sym__wrapped_relational_expression,
    STATE(304), 1,
      sym__shift_expression,
    STATE(305), 1,
      sym__wrapped_shift_expression,
    STATE(306), 1,
      sym__additive_expression,
    STATE(307), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(454), 1,
      sym_string,
    STATE(467), 1,
      sym__wrapped_assignment_expression,
    STATE(535), 1,
      sym__instruction_operand,
    STATE(553), 1,
      sym__concat_string,
    ACTIONS(133), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(137), 6,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(269), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1824] = 42,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_unary_minus_operator,
    ACTIONS(135), 1,
      sym_relocation_type,
    ACTIONS(139), 1,
      aux_sym_decimal_token1,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(151), 1,
      aux_sym_symbol_token1,
    ACTIONS(155), 1,
      sym_macro_variable,
    STATE(16), 1,
      sym__extra_block_comment,
    STATE(259), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(272), 1,
      sym__assignment_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(274), 1,
      sym__wrapped_logical_or_expression,
    STATE(275), 1,
      sym__logical_and_expression,
    STATE(276), 1,
      sym__wrapped_logical_and_expression,
    STATE(277), 1,
      sym__bitwise_or_expression,
    STATE(282), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(297), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(298), 1,
      sym__bitwise_and_expression,
    STATE(299), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(300), 1,
      sym__equality_expression,
    STATE(301), 1,
      sym__wrapped_equality_expression,
    STATE(302), 1,
      sym__relational_expression,
    STATE(303), 1,
      sym__wrapped_relational_expression,
    STATE(304), 1,
      sym__shift_expression,
    STATE(305), 1,
      sym__wrapped_shift_expression,
    STATE(306), 1,
      sym__additive_expression,
    STATE(307), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(454), 1,
      sym_string,
    STATE(467), 1,
      sym__wrapped_assignment_expression,
    STATE(535), 1,
      sym__instruction_operand,
    STATE(553), 1,
      sym__concat_string,
    ACTIONS(133), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(137), 6,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(269), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [1964] = 41,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(65), 1,
      sym_unary_minus_operator,
    ACTIONS(69), 1,
      sym_relocation_type,
    ACTIONS(73), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      sym_macro_variable,
    ACTIONS(81), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(83), 1,
      aux_sym_symbol_token1,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym__extra_block_comment,
    STATE(124), 1,
      sym__wrapped_multiplicative_expression,
    STATE(174), 1,
      sym__wrapped_shift_expression,
    STATE(179), 1,
      sym__assignment_expression,
    STATE(180), 1,
      sym__logical_or_expression,
    STATE(181), 1,
      sym__wrapped_logical_or_expression,
    STATE(182), 1,
      sym__logical_and_expression,
    STATE(183), 1,
      sym__wrapped_logical_and_expression,
    STATE(184), 1,
      sym__bitwise_or_expression,
    STATE(185), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(186), 1,
      sym__bitwise_xor_expression,
    STATE(187), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(188), 1,
      sym__bitwise_and_expression,
    STATE(189), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(190), 1,
      sym__equality_expression,
    STATE(191), 1,
      sym__wrapped_equality_expression,
    STATE(192), 1,
      sym__relational_expression,
    STATE(193), 1,
      sym__wrapped_relational_expression,
    STATE(194), 1,
      sym__shift_expression,
    STATE(195), 1,
      sym__additive_expression,
    STATE(196), 1,
      sym__wrapped_additive_expression,
    STATE(197), 1,
      sym__multiplicative_expression,
    STATE(198), 1,
      sym__simple_expression,
    STATE(410), 1,
      sym_string,
    STATE(414), 1,
      sym__wrapped_assignment_expression,
    STATE(447), 1,
      sym__instruction_operand,
    STATE(457), 1,
      sym__concat_string,
    ACTIONS(67), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(71), 6,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(201), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [2101] = 41,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_unary_minus_operator,
    ACTIONS(135), 1,
      sym_relocation_type,
    ACTIONS(139), 1,
      aux_sym_decimal_token1,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(151), 1,
      aux_sym_symbol_token1,
    ACTIONS(155), 1,
      sym_macro_variable,
    STATE(18), 1,
      sym__extra_block_comment,
    STATE(259), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(272), 1,
      sym__assignment_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(274), 1,
      sym__wrapped_logical_or_expression,
    STATE(275), 1,
      sym__logical_and_expression,
    STATE(276), 1,
      sym__wrapped_logical_and_expression,
    STATE(277), 1,
      sym__bitwise_or_expression,
    STATE(282), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(297), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(298), 1,
      sym__bitwise_and_expression,
    STATE(299), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(300), 1,
      sym__equality_expression,
    STATE(301), 1,
      sym__wrapped_equality_expression,
    STATE(302), 1,
      sym__relational_expression,
    STATE(303), 1,
      sym__wrapped_relational_expression,
    STATE(304), 1,
      sym__shift_expression,
    STATE(305), 1,
      sym__wrapped_shift_expression,
    STATE(306), 1,
      sym__additive_expression,
    STATE(307), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(454), 1,
      sym_string,
    STATE(467), 1,
      sym__wrapped_assignment_expression,
    STATE(537), 1,
      sym__instruction_operand,
    STATE(553), 1,
      sym__concat_string,
    ACTIONS(133), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(137), 6,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_local_numeric_label_reference,
    STATE(269), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [2238] = 39,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(169), 1,
      aux_sym_decimal_token1,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(177), 1,
      aux_sym_symbol_token1,
    ACTIONS(179), 1,
      anon_sym_operands,
    STATE(19), 1,
      sym__extra_block_comment,
    STATE(349), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(368), 1,
      sym__additive_expression,
    STATE(369), 1,
      sym__wrapped_additive_expression,
    STATE(370), 1,
      sym__multiplicative_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(372), 1,
      sym__simple_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(401), 1,
      sym_symbol,
    STATE(547), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(173), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(167), 5,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(385), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2368] = 39,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(169), 1,
      aux_sym_decimal_token1,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(177), 1,
      aux_sym_symbol_token1,
    ACTIONS(183), 1,
      anon_sym_operands,
    STATE(20), 1,
      sym__extra_block_comment,
    STATE(349), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(364), 1,
      sym_symbol,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(368), 1,
      sym__additive_expression,
    STATE(369), 1,
      sym__wrapped_additive_expression,
    STATE(370), 1,
      sym__multiplicative_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(372), 1,
      sym__simple_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(534), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(181), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(167), 5,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(385), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2498] = 39,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(153), 1,
      anon_sym_operands,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(169), 1,
      aux_sym_decimal_token1,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(177), 1,
      aux_sym_symbol_token1,
    STATE(21), 1,
      sym__extra_block_comment,
    STATE(349), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(367), 1,
      sym_symbol,
    STATE(368), 1,
      sym__additive_expression,
    STATE(369), 1,
      sym__wrapped_additive_expression,
    STATE(370), 1,
      sym__multiplicative_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(372), 1,
      sym__simple_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(539), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(185), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(167), 5,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(385), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2628] = 39,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(169), 1,
      aux_sym_decimal_token1,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(177), 1,
      aux_sym_symbol_token1,
    ACTIONS(189), 1,
      anon_sym_operands,
    STATE(22), 1,
      sym__extra_block_comment,
    STATE(349), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(368), 1,
      sym__additive_expression,
    STATE(369), 1,
      sym__wrapped_additive_expression,
    STATE(370), 1,
      sym__multiplicative_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(372), 1,
      sym__simple_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(391), 1,
      sym_symbol,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(531), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(187), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(167), 5,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(385), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2758] = 39,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(169), 1,
      aux_sym_decimal_token1,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(177), 1,
      aux_sym_symbol_token1,
    ACTIONS(193), 1,
      anon_sym_operands,
    STATE(23), 1,
      sym__extra_block_comment,
    STATE(349), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(368), 1,
      sym__additive_expression,
    STATE(369), 1,
      sym__wrapped_additive_expression,
    STATE(370), 1,
      sym__multiplicative_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(372), 1,
      sym__simple_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(398), 1,
      sym_symbol,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(542), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(191), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(167), 5,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(385), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [2888] = 39,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(169), 1,
      aux_sym_decimal_token1,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(177), 1,
      aux_sym_symbol_token1,
    ACTIONS(197), 1,
      anon_sym_operands,
    STATE(24), 1,
      sym__extra_block_comment,
    STATE(349), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(368), 1,
      sym__additive_expression,
    STATE(369), 1,
      sym__wrapped_additive_expression,
    STATE(370), 1,
      sym__multiplicative_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(372), 1,
      sym__simple_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(400), 1,
      sym_symbol,
    STATE(544), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(195), 2,
      sym_register,
      sym_macro_variable,
    ACTIONS(167), 5,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_local_numeric_label_reference,
    STATE(385), 7,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_address,
  [3018] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(65), 1,
      sym_unary_minus_operator,
    ACTIONS(69), 1,
      sym_relocation_type,
    ACTIONS(73), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(83), 1,
      aux_sym_symbol_token1,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym__extra_block_comment,
    STATE(124), 1,
      sym__wrapped_multiplicative_expression,
    STATE(148), 1,
      sym__wrapped_assignment_expression,
    STATE(174), 1,
      sym__wrapped_shift_expression,
    STATE(179), 1,
      sym__assignment_expression,
    STATE(180), 1,
      sym__logical_or_expression,
    STATE(181), 1,
      sym__wrapped_logical_or_expression,
    STATE(182), 1,
      sym__logical_and_expression,
    STATE(183), 1,
      sym__wrapped_logical_and_expression,
    STATE(184), 1,
      sym__bitwise_or_expression,
    STATE(185), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(186), 1,
      sym__bitwise_xor_expression,
    STATE(187), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(188), 1,
      sym__bitwise_and_expression,
    STATE(189), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(190), 1,
      sym__equality_expression,
    STATE(191), 1,
      sym__wrapped_equality_expression,
    STATE(192), 1,
      sym__relational_expression,
    STATE(193), 1,
      sym__wrapped_relational_expression,
    STATE(194), 1,
      sym__shift_expression,
    STATE(195), 1,
      sym__additive_expression,
    STATE(196), 1,
      sym__wrapped_additive_expression,
    STATE(197), 1,
      sym__multiplicative_expression,
    STATE(198), 1,
      sym__simple_expression,
    ACTIONS(67), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(71), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(201), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3141] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(65), 1,
      sym_unary_minus_operator,
    ACTIONS(69), 1,
      sym_relocation_type,
    ACTIONS(73), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(83), 1,
      aux_sym_symbol_token1,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym__extra_block_comment,
    STATE(124), 1,
      sym__wrapped_multiplicative_expression,
    STATE(174), 1,
      sym__wrapped_shift_expression,
    STATE(186), 1,
      sym__bitwise_xor_expression,
    STATE(188), 1,
      sym__bitwise_and_expression,
    STATE(189), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(190), 1,
      sym__equality_expression,
    STATE(191), 1,
      sym__wrapped_equality_expression,
    STATE(192), 1,
      sym__relational_expression,
    STATE(193), 1,
      sym__wrapped_relational_expression,
    STATE(194), 1,
      sym__shift_expression,
    STATE(195), 1,
      sym__additive_expression,
    STATE(196), 1,
      sym__wrapped_additive_expression,
    STATE(197), 1,
      sym__multiplicative_expression,
    STATE(198), 1,
      sym__simple_expression,
    STATE(210), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(556), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(67), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(71), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(201), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3264] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(65), 1,
      sym_unary_minus_operator,
    ACTIONS(69), 1,
      sym_relocation_type,
    ACTIONS(73), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(83), 1,
      aux_sym_symbol_token1,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym__extra_block_comment,
    STATE(124), 1,
      sym__wrapped_multiplicative_expression,
    STATE(174), 1,
      sym__wrapped_shift_expression,
    STATE(188), 1,
      sym__bitwise_and_expression,
    STATE(190), 1,
      sym__equality_expression,
    STATE(191), 1,
      sym__wrapped_equality_expression,
    STATE(192), 1,
      sym__relational_expression,
    STATE(193), 1,
      sym__wrapped_relational_expression,
    STATE(194), 1,
      sym__shift_expression,
    STATE(195), 1,
      sym__additive_expression,
    STATE(196), 1,
      sym__wrapped_additive_expression,
    STATE(197), 1,
      sym__multiplicative_expression,
    STATE(198), 1,
      sym__simple_expression,
    STATE(211), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(556), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(67), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(71), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(201), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3387] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(65), 1,
      sym_unary_minus_operator,
    ACTIONS(69), 1,
      sym_relocation_type,
    ACTIONS(73), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(83), 1,
      aux_sym_symbol_token1,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym__extra_block_comment,
    STATE(124), 1,
      sym__wrapped_multiplicative_expression,
    STATE(174), 1,
      sym__wrapped_shift_expression,
    STATE(190), 1,
      sym__equality_expression,
    STATE(192), 1,
      sym__relational_expression,
    STATE(193), 1,
      sym__wrapped_relational_expression,
    STATE(194), 1,
      sym__shift_expression,
    STATE(195), 1,
      sym__additive_expression,
    STATE(196), 1,
      sym__wrapped_additive_expression,
    STATE(197), 1,
      sym__multiplicative_expression,
    STATE(198), 1,
      sym__simple_expression,
    STATE(212), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(556), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(67), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(71), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(201), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3510] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(65), 1,
      sym_unary_minus_operator,
    ACTIONS(69), 1,
      sym_relocation_type,
    ACTIONS(73), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(83), 1,
      aux_sym_symbol_token1,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym__extra_block_comment,
    STATE(124), 1,
      sym__wrapped_multiplicative_expression,
    STATE(174), 1,
      sym__wrapped_shift_expression,
    STATE(192), 1,
      sym__relational_expression,
    STATE(194), 1,
      sym__shift_expression,
    STATE(195), 1,
      sym__additive_expression,
    STATE(196), 1,
      sym__wrapped_additive_expression,
    STATE(197), 1,
      sym__multiplicative_expression,
    STATE(198), 1,
      sym__simple_expression,
    STATE(213), 1,
      sym__wrapped_relational_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(556), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(67), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(71), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(201), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3633] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(65), 1,
      sym_unary_minus_operator,
    ACTIONS(69), 1,
      sym_relocation_type,
    ACTIONS(73), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(83), 1,
      aux_sym_symbol_token1,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      sym__extra_block_comment,
    STATE(124), 1,
      sym__wrapped_multiplicative_expression,
    STATE(194), 1,
      sym__shift_expression,
    STATE(195), 1,
      sym__additive_expression,
    STATE(196), 1,
      sym__wrapped_additive_expression,
    STATE(197), 1,
      sym__multiplicative_expression,
    STATE(198), 1,
      sym__simple_expression,
    STATE(214), 1,
      sym__wrapped_shift_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(556), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(67), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(71), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(201), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3756] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(65), 1,
      sym_unary_minus_operator,
    ACTIONS(69), 1,
      sym_relocation_type,
    ACTIONS(73), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(83), 1,
      aux_sym_symbol_token1,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym__extra_block_comment,
    STATE(124), 1,
      sym__wrapped_multiplicative_expression,
    STATE(195), 1,
      sym__additive_expression,
    STATE(197), 1,
      sym__multiplicative_expression,
    STATE(198), 1,
      sym__simple_expression,
    STATE(215), 1,
      sym__wrapped_additive_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(556), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(67), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(71), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(201), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [3879] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(65), 1,
      sym_unary_minus_operator,
    ACTIONS(69), 1,
      sym_relocation_type,
    ACTIONS(73), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(83), 1,
      aux_sym_symbol_token1,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym__extra_block_comment,
    STATE(126), 1,
      sym__wrapped_multiplicative_expression,
    STATE(197), 1,
      sym__multiplicative_expression,
    STATE(198), 1,
      sym__simple_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(368), 1,
      sym__additive_expression,
    STATE(369), 1,
      sym__wrapped_additive_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(556), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(67), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(71), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(201), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4002] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(65), 1,
      sym_unary_minus_operator,
    ACTIONS(69), 1,
      sym_relocation_type,
    ACTIONS(73), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(83), 1,
      aux_sym_symbol_token1,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym__extra_block_comment,
    STATE(207), 1,
      sym__simple_expression,
    STATE(349), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(368), 1,
      sym__additive_expression,
    STATE(369), 1,
      sym__wrapped_additive_expression,
    STATE(370), 1,
      sym__multiplicative_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(556), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(67), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(71), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(201), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4125] = 34,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      sym_unary_minus_operator,
    ACTIONS(205), 1,
      sym_relocation_type,
    ACTIONS(209), 1,
      aux_sym_decimal_token1,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(215), 1,
      aux_sym_symbol_token1,
    STATE(34), 1,
      sym__extra_block_comment,
    STATE(218), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(219), 1,
      sym__equality_expression,
    STATE(220), 1,
      sym__wrapped_equality_expression,
    STATE(221), 1,
      sym__relational_expression,
    STATE(222), 1,
      sym__wrapped_relational_expression,
    STATE(223), 1,
      sym__shift_expression,
    STATE(224), 1,
      sym__wrapped_shift_expression,
    STATE(225), 1,
      sym__additive_expression,
    STATE(226), 1,
      sym__wrapped_additive_expression,
    STATE(227), 1,
      sym__multiplicative_expression,
    STATE(235), 1,
      sym__bitwise_and_expression,
    STATE(238), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(248), 1,
      sym__assignment_expression,
    STATE(249), 1,
      sym__logical_or_expression,
    STATE(250), 1,
      sym__wrapped_logical_or_expression,
    STATE(251), 1,
      sym__logical_and_expression,
    STATE(252), 1,
      sym__wrapped_logical_and_expression,
    STATE(253), 1,
      sym__bitwise_or_expression,
    STATE(254), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(255), 1,
      sym__bitwise_xor_expression,
    STATE(423), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(203), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(207), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(146), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4244] = 34,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      sym_unary_minus_operator,
    ACTIONS(205), 1,
      sym_relocation_type,
    ACTIONS(209), 1,
      aux_sym_decimal_token1,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(215), 1,
      aux_sym_symbol_token1,
    STATE(35), 1,
      sym__extra_block_comment,
    STATE(218), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(219), 1,
      sym__equality_expression,
    STATE(220), 1,
      sym__wrapped_equality_expression,
    STATE(221), 1,
      sym__relational_expression,
    STATE(222), 1,
      sym__wrapped_relational_expression,
    STATE(223), 1,
      sym__shift_expression,
    STATE(224), 1,
      sym__wrapped_shift_expression,
    STATE(225), 1,
      sym__additive_expression,
    STATE(226), 1,
      sym__wrapped_additive_expression,
    STATE(227), 1,
      sym__multiplicative_expression,
    STATE(235), 1,
      sym__bitwise_and_expression,
    STATE(238), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(248), 1,
      sym__assignment_expression,
    STATE(249), 1,
      sym__logical_or_expression,
    STATE(250), 1,
      sym__wrapped_logical_or_expression,
    STATE(251), 1,
      sym__logical_and_expression,
    STATE(252), 1,
      sym__wrapped_logical_and_expression,
    STATE(253), 1,
      sym__bitwise_or_expression,
    STATE(254), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(255), 1,
      sym__bitwise_xor_expression,
    STATE(424), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(203), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(207), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(146), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4363] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_unary_minus_operator,
    ACTIONS(135), 1,
      sym_relocation_type,
    ACTIONS(139), 1,
      aux_sym_decimal_token1,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(151), 1,
      aux_sym_symbol_token1,
    STATE(36), 1,
      sym__extra_block_comment,
    STATE(259), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(275), 1,
      sym__logical_and_expression,
    STATE(276), 1,
      sym__wrapped_logical_and_expression,
    STATE(277), 1,
      sym__bitwise_or_expression,
    STATE(282), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(297), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(298), 1,
      sym__bitwise_and_expression,
    STATE(299), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(300), 1,
      sym__equality_expression,
    STATE(301), 1,
      sym__wrapped_equality_expression,
    STATE(302), 1,
      sym__relational_expression,
    STATE(303), 1,
      sym__wrapped_relational_expression,
    STATE(304), 1,
      sym__shift_expression,
    STATE(305), 1,
      sym__wrapped_shift_expression,
    STATE(306), 1,
      sym__additive_expression,
    STATE(307), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(464), 1,
      sym__wrapped_logical_or_expression,
    STATE(555), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(133), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(137), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(269), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4486] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_unary_minus_operator,
    ACTIONS(135), 1,
      sym_relocation_type,
    ACTIONS(139), 1,
      aux_sym_decimal_token1,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(151), 1,
      aux_sym_symbol_token1,
    STATE(37), 1,
      sym__extra_block_comment,
    STATE(259), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(275), 1,
      sym__logical_and_expression,
    STATE(277), 1,
      sym__bitwise_or_expression,
    STATE(282), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(283), 1,
      sym__wrapped_logical_and_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(297), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(298), 1,
      sym__bitwise_and_expression,
    STATE(299), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(300), 1,
      sym__equality_expression,
    STATE(301), 1,
      sym__wrapped_equality_expression,
    STATE(302), 1,
      sym__relational_expression,
    STATE(303), 1,
      sym__wrapped_relational_expression,
    STATE(304), 1,
      sym__shift_expression,
    STATE(305), 1,
      sym__wrapped_shift_expression,
    STATE(306), 1,
      sym__additive_expression,
    STATE(307), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(555), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(133), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(137), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(269), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4609] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_unary_minus_operator,
    ACTIONS(135), 1,
      sym_relocation_type,
    ACTIONS(139), 1,
      aux_sym_decimal_token1,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(151), 1,
      aux_sym_symbol_token1,
    STATE(38), 1,
      sym__extra_block_comment,
    STATE(259), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(277), 1,
      sym__bitwise_or_expression,
    STATE(284), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(297), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(298), 1,
      sym__bitwise_and_expression,
    STATE(299), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(300), 1,
      sym__equality_expression,
    STATE(301), 1,
      sym__wrapped_equality_expression,
    STATE(302), 1,
      sym__relational_expression,
    STATE(303), 1,
      sym__wrapped_relational_expression,
    STATE(304), 1,
      sym__shift_expression,
    STATE(305), 1,
      sym__wrapped_shift_expression,
    STATE(306), 1,
      sym__additive_expression,
    STATE(307), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(555), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(133), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(137), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(269), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4732] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_unary_minus_operator,
    ACTIONS(135), 1,
      sym_relocation_type,
    ACTIONS(139), 1,
      aux_sym_decimal_token1,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(151), 1,
      aux_sym_symbol_token1,
    STATE(39), 1,
      sym__extra_block_comment,
    STATE(259), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(285), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(298), 1,
      sym__bitwise_and_expression,
    STATE(299), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(300), 1,
      sym__equality_expression,
    STATE(301), 1,
      sym__wrapped_equality_expression,
    STATE(302), 1,
      sym__relational_expression,
    STATE(303), 1,
      sym__wrapped_relational_expression,
    STATE(304), 1,
      sym__shift_expression,
    STATE(305), 1,
      sym__wrapped_shift_expression,
    STATE(306), 1,
      sym__additive_expression,
    STATE(307), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(555), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(133), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(137), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(269), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4855] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_unary_minus_operator,
    ACTIONS(135), 1,
      sym_relocation_type,
    ACTIONS(139), 1,
      aux_sym_decimal_token1,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(151), 1,
      aux_sym_symbol_token1,
    STATE(40), 1,
      sym__extra_block_comment,
    STATE(259), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(286), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(298), 1,
      sym__bitwise_and_expression,
    STATE(300), 1,
      sym__equality_expression,
    STATE(301), 1,
      sym__wrapped_equality_expression,
    STATE(302), 1,
      sym__relational_expression,
    STATE(303), 1,
      sym__wrapped_relational_expression,
    STATE(304), 1,
      sym__shift_expression,
    STATE(305), 1,
      sym__wrapped_shift_expression,
    STATE(306), 1,
      sym__additive_expression,
    STATE(307), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(555), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(133), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(137), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(269), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [4978] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_unary_minus_operator,
    ACTIONS(135), 1,
      sym_relocation_type,
    ACTIONS(139), 1,
      aux_sym_decimal_token1,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(151), 1,
      aux_sym_symbol_token1,
    STATE(41), 1,
      sym__extra_block_comment,
    STATE(259), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(287), 1,
      sym__wrapped_equality_expression,
    STATE(300), 1,
      sym__equality_expression,
    STATE(302), 1,
      sym__relational_expression,
    STATE(303), 1,
      sym__wrapped_relational_expression,
    STATE(304), 1,
      sym__shift_expression,
    STATE(305), 1,
      sym__wrapped_shift_expression,
    STATE(306), 1,
      sym__additive_expression,
    STATE(307), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(555), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(133), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(137), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(269), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5101] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_unary_minus_operator,
    ACTIONS(135), 1,
      sym_relocation_type,
    ACTIONS(139), 1,
      aux_sym_decimal_token1,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(151), 1,
      aux_sym_symbol_token1,
    STATE(42), 1,
      sym__extra_block_comment,
    STATE(259), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(288), 1,
      sym__wrapped_relational_expression,
    STATE(302), 1,
      sym__relational_expression,
    STATE(304), 1,
      sym__shift_expression,
    STATE(305), 1,
      sym__wrapped_shift_expression,
    STATE(306), 1,
      sym__additive_expression,
    STATE(307), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(555), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(133), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(137), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(269), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5224] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_unary_minus_operator,
    ACTIONS(135), 1,
      sym_relocation_type,
    ACTIONS(139), 1,
      aux_sym_decimal_token1,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(151), 1,
      aux_sym_symbol_token1,
    STATE(43), 1,
      sym__extra_block_comment,
    STATE(259), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(289), 1,
      sym__wrapped_shift_expression,
    STATE(304), 1,
      sym__shift_expression,
    STATE(306), 1,
      sym__additive_expression,
    STATE(307), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(555), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(133), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(137), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(269), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5347] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_unary_minus_operator,
    ACTIONS(135), 1,
      sym_relocation_type,
    ACTIONS(139), 1,
      aux_sym_decimal_token1,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(151), 1,
      aux_sym_symbol_token1,
    STATE(44), 1,
      sym__extra_block_comment,
    STATE(259), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(290), 1,
      sym__wrapped_additive_expression,
    STATE(306), 1,
      sym__additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(555), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(133), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(137), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(269), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5470] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_unary_minus_operator,
    ACTIONS(135), 1,
      sym_relocation_type,
    ACTIONS(139), 1,
      aux_sym_decimal_token1,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(151), 1,
      aux_sym_symbol_token1,
    STATE(45), 1,
      sym__extra_block_comment,
    STATE(258), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(368), 1,
      sym__additive_expression,
    STATE(369), 1,
      sym__wrapped_additive_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(555), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(133), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(137), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(269), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5593] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_unary_minus_operator,
    ACTIONS(135), 1,
      sym_relocation_type,
    ACTIONS(139), 1,
      aux_sym_decimal_token1,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(151), 1,
      aux_sym_symbol_token1,
    STATE(46), 1,
      sym__extra_block_comment,
    STATE(292), 1,
      sym__simple_expression,
    STATE(349), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(368), 1,
      sym__additive_expression,
    STATE(369), 1,
      sym__wrapped_additive_expression,
    STATE(370), 1,
      sym__multiplicative_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(555), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(133), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(137), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(269), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5716] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_unary_minus_operator,
    ACTIONS(37), 1,
      sym_relocation_type,
    ACTIONS(41), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(55), 1,
      aux_sym_symbol_token1,
    STATE(47), 1,
      sym__extra_block_comment,
    STATE(122), 1,
      sym__wrapped_multiplicative_expression,
    STATE(130), 1,
      sym__relational_expression,
    STATE(131), 1,
      sym__wrapped_relational_expression,
    STATE(132), 1,
      sym__shift_expression,
    STATE(133), 1,
      sym__wrapped_shift_expression,
    STATE(134), 1,
      sym__additive_expression,
    STATE(135), 1,
      sym__wrapped_additive_expression,
    STATE(136), 1,
      sym__multiplicative_expression,
    STATE(139), 1,
      sym__simple_expression,
    STATE(140), 1,
      sym__logical_and_expression,
    STATE(141), 1,
      sym__wrapped_logical_and_expression,
    STATE(142), 1,
      sym__bitwise_or_expression,
    STATE(143), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(144), 1,
      sym__bitwise_xor_expression,
    STATE(145), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(147), 1,
      sym__bitwise_and_expression,
    STATE(149), 1,
      sym__logical_or_expression,
    STATE(152), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(164), 1,
      sym__equality_expression,
    STATE(166), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(411), 1,
      sym__wrapped_logical_or_expression,
    STATE(563), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(35), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(39), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(150), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5839] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_unary_minus_operator,
    ACTIONS(37), 1,
      sym_relocation_type,
    ACTIONS(41), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(55), 1,
      aux_sym_symbol_token1,
    STATE(48), 1,
      sym__extra_block_comment,
    STATE(122), 1,
      sym__wrapped_multiplicative_expression,
    STATE(130), 1,
      sym__relational_expression,
    STATE(131), 1,
      sym__wrapped_relational_expression,
    STATE(132), 1,
      sym__shift_expression,
    STATE(133), 1,
      sym__wrapped_shift_expression,
    STATE(134), 1,
      sym__additive_expression,
    STATE(135), 1,
      sym__wrapped_additive_expression,
    STATE(136), 1,
      sym__multiplicative_expression,
    STATE(139), 1,
      sym__simple_expression,
    STATE(140), 1,
      sym__logical_and_expression,
    STATE(142), 1,
      sym__bitwise_or_expression,
    STATE(143), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(144), 1,
      sym__bitwise_xor_expression,
    STATE(145), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(147), 1,
      sym__bitwise_and_expression,
    STATE(152), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(157), 1,
      sym__wrapped_logical_and_expression,
    STATE(164), 1,
      sym__equality_expression,
    STATE(166), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(563), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(35), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(39), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(150), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [5962] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_unary_minus_operator,
    ACTIONS(37), 1,
      sym_relocation_type,
    ACTIONS(41), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(55), 1,
      aux_sym_symbol_token1,
    STATE(49), 1,
      sym__extra_block_comment,
    STATE(122), 1,
      sym__wrapped_multiplicative_expression,
    STATE(130), 1,
      sym__relational_expression,
    STATE(131), 1,
      sym__wrapped_relational_expression,
    STATE(132), 1,
      sym__shift_expression,
    STATE(133), 1,
      sym__wrapped_shift_expression,
    STATE(134), 1,
      sym__additive_expression,
    STATE(135), 1,
      sym__wrapped_additive_expression,
    STATE(136), 1,
      sym__multiplicative_expression,
    STATE(139), 1,
      sym__simple_expression,
    STATE(142), 1,
      sym__bitwise_or_expression,
    STATE(144), 1,
      sym__bitwise_xor_expression,
    STATE(145), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(147), 1,
      sym__bitwise_and_expression,
    STATE(152), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(158), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(164), 1,
      sym__equality_expression,
    STATE(166), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(563), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(35), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(39), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(150), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6085] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_unary_minus_operator,
    ACTIONS(37), 1,
      sym_relocation_type,
    ACTIONS(41), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(55), 1,
      aux_sym_symbol_token1,
    STATE(50), 1,
      sym__extra_block_comment,
    STATE(122), 1,
      sym__wrapped_multiplicative_expression,
    STATE(130), 1,
      sym__relational_expression,
    STATE(131), 1,
      sym__wrapped_relational_expression,
    STATE(132), 1,
      sym__shift_expression,
    STATE(133), 1,
      sym__wrapped_shift_expression,
    STATE(134), 1,
      sym__additive_expression,
    STATE(135), 1,
      sym__wrapped_additive_expression,
    STATE(136), 1,
      sym__multiplicative_expression,
    STATE(139), 1,
      sym__simple_expression,
    STATE(144), 1,
      sym__bitwise_xor_expression,
    STATE(147), 1,
      sym__bitwise_and_expression,
    STATE(152), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(159), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(164), 1,
      sym__equality_expression,
    STATE(166), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(563), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(35), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(39), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(150), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6208] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_unary_minus_operator,
    ACTIONS(37), 1,
      sym_relocation_type,
    ACTIONS(41), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(55), 1,
      aux_sym_symbol_token1,
    STATE(51), 1,
      sym__extra_block_comment,
    STATE(122), 1,
      sym__wrapped_multiplicative_expression,
    STATE(130), 1,
      sym__relational_expression,
    STATE(131), 1,
      sym__wrapped_relational_expression,
    STATE(132), 1,
      sym__shift_expression,
    STATE(133), 1,
      sym__wrapped_shift_expression,
    STATE(134), 1,
      sym__additive_expression,
    STATE(135), 1,
      sym__wrapped_additive_expression,
    STATE(136), 1,
      sym__multiplicative_expression,
    STATE(139), 1,
      sym__simple_expression,
    STATE(147), 1,
      sym__bitwise_and_expression,
    STATE(160), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(164), 1,
      sym__equality_expression,
    STATE(166), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(563), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(35), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(39), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(150), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6331] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_unary_minus_operator,
    ACTIONS(37), 1,
      sym_relocation_type,
    ACTIONS(41), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(55), 1,
      aux_sym_symbol_token1,
    STATE(52), 1,
      sym__extra_block_comment,
    STATE(122), 1,
      sym__wrapped_multiplicative_expression,
    STATE(130), 1,
      sym__relational_expression,
    STATE(131), 1,
      sym__wrapped_relational_expression,
    STATE(132), 1,
      sym__shift_expression,
    STATE(133), 1,
      sym__wrapped_shift_expression,
    STATE(134), 1,
      sym__additive_expression,
    STATE(135), 1,
      sym__wrapped_additive_expression,
    STATE(136), 1,
      sym__multiplicative_expression,
    STATE(139), 1,
      sym__simple_expression,
    STATE(161), 1,
      sym__wrapped_equality_expression,
    STATE(164), 1,
      sym__equality_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(563), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(35), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(39), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(150), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6454] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_unary_minus_operator,
    ACTIONS(37), 1,
      sym_relocation_type,
    ACTIONS(41), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(55), 1,
      aux_sym_symbol_token1,
    STATE(53), 1,
      sym__extra_block_comment,
    STATE(122), 1,
      sym__wrapped_multiplicative_expression,
    STATE(130), 1,
      sym__relational_expression,
    STATE(132), 1,
      sym__shift_expression,
    STATE(133), 1,
      sym__wrapped_shift_expression,
    STATE(134), 1,
      sym__additive_expression,
    STATE(135), 1,
      sym__wrapped_additive_expression,
    STATE(136), 1,
      sym__multiplicative_expression,
    STATE(139), 1,
      sym__simple_expression,
    STATE(162), 1,
      sym__wrapped_relational_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(563), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(35), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(39), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(150), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6577] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_unary_minus_operator,
    ACTIONS(37), 1,
      sym_relocation_type,
    ACTIONS(41), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(55), 1,
      aux_sym_symbol_token1,
    STATE(54), 1,
      sym__extra_block_comment,
    STATE(122), 1,
      sym__wrapped_multiplicative_expression,
    STATE(132), 1,
      sym__shift_expression,
    STATE(134), 1,
      sym__additive_expression,
    STATE(135), 1,
      sym__wrapped_additive_expression,
    STATE(136), 1,
      sym__multiplicative_expression,
    STATE(139), 1,
      sym__simple_expression,
    STATE(163), 1,
      sym__wrapped_shift_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(563), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(35), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(39), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(150), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6700] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_unary_minus_operator,
    ACTIONS(37), 1,
      sym_relocation_type,
    ACTIONS(41), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(55), 1,
      aux_sym_symbol_token1,
    STATE(55), 1,
      sym__extra_block_comment,
    STATE(122), 1,
      sym__wrapped_multiplicative_expression,
    STATE(129), 1,
      sym__wrapped_additive_expression,
    STATE(134), 1,
      sym__additive_expression,
    STATE(136), 1,
      sym__multiplicative_expression,
    STATE(139), 1,
      sym__simple_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(563), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(35), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(39), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(150), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6823] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_unary_minus_operator,
    ACTIONS(37), 1,
      sym_relocation_type,
    ACTIONS(41), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(55), 1,
      aux_sym_symbol_token1,
    STATE(56), 1,
      sym__extra_block_comment,
    STATE(121), 1,
      sym__wrapped_multiplicative_expression,
    STATE(136), 1,
      sym__multiplicative_expression,
    STATE(139), 1,
      sym__simple_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(368), 1,
      sym__additive_expression,
    STATE(369), 1,
      sym__wrapped_additive_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(563), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(35), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(39), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(150), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [6946] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_unary_minus_operator,
    ACTIONS(37), 1,
      sym_relocation_type,
    ACTIONS(41), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(55), 1,
      aux_sym_symbol_token1,
    STATE(57), 1,
      sym__extra_block_comment,
    STATE(167), 1,
      sym__simple_expression,
    STATE(349), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(368), 1,
      sym__additive_expression,
    STATE(369), 1,
      sym__wrapped_additive_expression,
    STATE(370), 1,
      sym__multiplicative_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(563), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(35), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(39), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(150), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7069] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(169), 1,
      aux_sym_decimal_token1,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(177), 1,
      aux_sym_symbol_token1,
    STATE(58), 1,
      sym__extra_block_comment,
    STATE(349), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(368), 1,
      sym__additive_expression,
    STATE(369), 1,
      sym__wrapped_additive_expression,
    STATE(370), 1,
      sym__multiplicative_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(372), 1,
      sym__simple_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(529), 1,
      sym__wrapped_logical_or_expression,
    STATE(562), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(167), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(385), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7192] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(169), 1,
      aux_sym_decimal_token1,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(177), 1,
      aux_sym_symbol_token1,
    STATE(59), 1,
      sym__extra_block_comment,
    STATE(349), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(368), 1,
      sym__additive_expression,
    STATE(369), 1,
      sym__wrapped_additive_expression,
    STATE(370), 1,
      sym__multiplicative_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(372), 1,
      sym__simple_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(381), 1,
      sym__wrapped_logical_and_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(562), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(167), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(385), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7315] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(169), 1,
      aux_sym_decimal_token1,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(177), 1,
      aux_sym_symbol_token1,
    STATE(60), 1,
      sym__extra_block_comment,
    STATE(349), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(368), 1,
      sym__additive_expression,
    STATE(369), 1,
      sym__wrapped_additive_expression,
    STATE(370), 1,
      sym__multiplicative_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(372), 1,
      sym__simple_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(382), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(562), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(167), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(385), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7438] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(169), 1,
      aux_sym_decimal_token1,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(177), 1,
      aux_sym_symbol_token1,
    STATE(61), 1,
      sym__extra_block_comment,
    STATE(349), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(368), 1,
      sym__additive_expression,
    STATE(369), 1,
      sym__wrapped_additive_expression,
    STATE(370), 1,
      sym__multiplicative_expression,
    STATE(372), 1,
      sym__simple_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(383), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(562), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(167), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(385), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7561] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(169), 1,
      aux_sym_decimal_token1,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(177), 1,
      aux_sym_symbol_token1,
    STATE(62), 1,
      sym__extra_block_comment,
    STATE(349), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(368), 1,
      sym__additive_expression,
    STATE(369), 1,
      sym__wrapped_additive_expression,
    STATE(370), 1,
      sym__multiplicative_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(372), 1,
      sym__simple_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(384), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(562), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(167), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(385), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7684] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(169), 1,
      aux_sym_decimal_token1,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(177), 1,
      aux_sym_symbol_token1,
    STATE(63), 1,
      sym__extra_block_comment,
    STATE(349), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(368), 1,
      sym__additive_expression,
    STATE(369), 1,
      sym__wrapped_additive_expression,
    STATE(370), 1,
      sym__multiplicative_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(372), 1,
      sym__simple_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(386), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(562), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(167), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(385), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7807] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(169), 1,
      aux_sym_decimal_token1,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(177), 1,
      aux_sym_symbol_token1,
    STATE(64), 1,
      sym__extra_block_comment,
    STATE(349), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(368), 1,
      sym__additive_expression,
    STATE(369), 1,
      sym__wrapped_additive_expression,
    STATE(370), 1,
      sym__multiplicative_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(372), 1,
      sym__simple_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(389), 1,
      sym__wrapped_relational_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(562), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(167), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(385), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [7930] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(169), 1,
      aux_sym_decimal_token1,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(177), 1,
      aux_sym_symbol_token1,
    STATE(65), 1,
      sym__extra_block_comment,
    STATE(349), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(356), 1,
      sym__wrapped_shift_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(368), 1,
      sym__additive_expression,
    STATE(369), 1,
      sym__wrapped_additive_expression,
    STATE(370), 1,
      sym__multiplicative_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(372), 1,
      sym__simple_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(562), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(167), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(385), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8053] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(169), 1,
      aux_sym_decimal_token1,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(177), 1,
      aux_sym_symbol_token1,
    STATE(66), 1,
      sym__extra_block_comment,
    STATE(349), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(357), 1,
      sym__wrapped_additive_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(368), 1,
      sym__additive_expression,
    STATE(370), 1,
      sym__multiplicative_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(372), 1,
      sym__simple_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(562), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(167), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(385), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8176] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(169), 1,
      aux_sym_decimal_token1,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(177), 1,
      aux_sym_symbol_token1,
    STATE(67), 1,
      sym__extra_block_comment,
    STATE(350), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(368), 1,
      sym__additive_expression,
    STATE(369), 1,
      sym__wrapped_additive_expression,
    STATE(370), 1,
      sym__multiplicative_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(372), 1,
      sym__simple_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(562), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(167), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(385), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8299] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(169), 1,
      aux_sym_decimal_token1,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(177), 1,
      aux_sym_symbol_token1,
    STATE(68), 1,
      sym__extra_block_comment,
    STATE(349), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(359), 1,
      sym__simple_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(368), 1,
      sym__additive_expression,
    STATE(369), 1,
      sym__wrapped_additive_expression,
    STATE(370), 1,
      sym__multiplicative_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(562), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(167), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(385), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8422] = 34,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      sym_unary_minus_operator,
    ACTIONS(205), 1,
      sym_relocation_type,
    ACTIONS(209), 1,
      aux_sym_decimal_token1,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(215), 1,
      aux_sym_symbol_token1,
    STATE(69), 1,
      sym__extra_block_comment,
    STATE(218), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(219), 1,
      sym__equality_expression,
    STATE(220), 1,
      sym__wrapped_equality_expression,
    STATE(221), 1,
      sym__relational_expression,
    STATE(222), 1,
      sym__wrapped_relational_expression,
    STATE(223), 1,
      sym__shift_expression,
    STATE(224), 1,
      sym__wrapped_shift_expression,
    STATE(225), 1,
      sym__additive_expression,
    STATE(226), 1,
      sym__wrapped_additive_expression,
    STATE(227), 1,
      sym__multiplicative_expression,
    STATE(235), 1,
      sym__bitwise_and_expression,
    STATE(238), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(249), 1,
      sym__logical_or_expression,
    STATE(251), 1,
      sym__logical_and_expression,
    STATE(252), 1,
      sym__wrapped_logical_and_expression,
    STATE(253), 1,
      sym__bitwise_or_expression,
    STATE(254), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(255), 1,
      sym__bitwise_xor_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(429), 1,
      sym__wrapped_logical_or_expression,
    STATE(565), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(203), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(207), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(146), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8541] = 34,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      sym_unary_minus_operator,
    ACTIONS(205), 1,
      sym_relocation_type,
    ACTIONS(209), 1,
      aux_sym_decimal_token1,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(215), 1,
      aux_sym_symbol_token1,
    STATE(70), 1,
      sym__extra_block_comment,
    STATE(218), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(219), 1,
      sym__equality_expression,
    STATE(220), 1,
      sym__wrapped_equality_expression,
    STATE(221), 1,
      sym__relational_expression,
    STATE(222), 1,
      sym__wrapped_relational_expression,
    STATE(223), 1,
      sym__shift_expression,
    STATE(224), 1,
      sym__wrapped_shift_expression,
    STATE(225), 1,
      sym__additive_expression,
    STATE(226), 1,
      sym__wrapped_additive_expression,
    STATE(227), 1,
      sym__multiplicative_expression,
    STATE(232), 1,
      sym__wrapped_logical_and_expression,
    STATE(235), 1,
      sym__bitwise_and_expression,
    STATE(238), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(251), 1,
      sym__logical_and_expression,
    STATE(253), 1,
      sym__bitwise_or_expression,
    STATE(254), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(255), 1,
      sym__bitwise_xor_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(565), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(203), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(207), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(146), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8660] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(65), 1,
      sym_unary_minus_operator,
    ACTIONS(69), 1,
      sym_relocation_type,
    ACTIONS(73), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(83), 1,
      aux_sym_symbol_token1,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    STATE(71), 1,
      sym__extra_block_comment,
    STATE(124), 1,
      sym__wrapped_multiplicative_expression,
    STATE(174), 1,
      sym__wrapped_shift_expression,
    STATE(184), 1,
      sym__bitwise_or_expression,
    STATE(186), 1,
      sym__bitwise_xor_expression,
    STATE(187), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(188), 1,
      sym__bitwise_and_expression,
    STATE(189), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(190), 1,
      sym__equality_expression,
    STATE(191), 1,
      sym__wrapped_equality_expression,
    STATE(192), 1,
      sym__relational_expression,
    STATE(193), 1,
      sym__wrapped_relational_expression,
    STATE(194), 1,
      sym__shift_expression,
    STATE(195), 1,
      sym__additive_expression,
    STATE(196), 1,
      sym__wrapped_additive_expression,
    STATE(197), 1,
      sym__multiplicative_expression,
    STATE(198), 1,
      sym__simple_expression,
    STATE(209), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(556), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(67), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(71), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(201), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8783] = 34,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      sym_unary_minus_operator,
    ACTIONS(205), 1,
      sym_relocation_type,
    ACTIONS(209), 1,
      aux_sym_decimal_token1,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(215), 1,
      aux_sym_symbol_token1,
    STATE(72), 1,
      sym__extra_block_comment,
    STATE(218), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(219), 1,
      sym__equality_expression,
    STATE(220), 1,
      sym__wrapped_equality_expression,
    STATE(221), 1,
      sym__relational_expression,
    STATE(222), 1,
      sym__wrapped_relational_expression,
    STATE(223), 1,
      sym__shift_expression,
    STATE(224), 1,
      sym__wrapped_shift_expression,
    STATE(225), 1,
      sym__additive_expression,
    STATE(226), 1,
      sym__wrapped_additive_expression,
    STATE(227), 1,
      sym__multiplicative_expression,
    STATE(234), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(235), 1,
      sym__bitwise_and_expression,
    STATE(255), 1,
      sym__bitwise_xor_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(565), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(203), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(207), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(146), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [8902] = 34,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      sym_unary_minus_operator,
    ACTIONS(205), 1,
      sym_relocation_type,
    ACTIONS(209), 1,
      aux_sym_decimal_token1,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(215), 1,
      aux_sym_symbol_token1,
    STATE(73), 1,
      sym__extra_block_comment,
    STATE(219), 1,
      sym__equality_expression,
    STATE(220), 1,
      sym__wrapped_equality_expression,
    STATE(221), 1,
      sym__relational_expression,
    STATE(222), 1,
      sym__wrapped_relational_expression,
    STATE(223), 1,
      sym__shift_expression,
    STATE(224), 1,
      sym__wrapped_shift_expression,
    STATE(225), 1,
      sym__additive_expression,
    STATE(226), 1,
      sym__wrapped_additive_expression,
    STATE(227), 1,
      sym__multiplicative_expression,
    STATE(235), 1,
      sym__bitwise_and_expression,
    STATE(256), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(565), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(203), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(207), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(146), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9021] = 34,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      sym_unary_minus_operator,
    ACTIONS(205), 1,
      sym_relocation_type,
    ACTIONS(209), 1,
      aux_sym_decimal_token1,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(215), 1,
      aux_sym_symbol_token1,
    STATE(74), 1,
      sym__extra_block_comment,
    STATE(219), 1,
      sym__equality_expression,
    STATE(221), 1,
      sym__relational_expression,
    STATE(222), 1,
      sym__wrapped_relational_expression,
    STATE(223), 1,
      sym__shift_expression,
    STATE(224), 1,
      sym__wrapped_shift_expression,
    STATE(225), 1,
      sym__additive_expression,
    STATE(226), 1,
      sym__wrapped_additive_expression,
    STATE(227), 1,
      sym__multiplicative_expression,
    STATE(236), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(565), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(203), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(207), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(146), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9140] = 34,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      sym_unary_minus_operator,
    ACTIONS(205), 1,
      sym_relocation_type,
    ACTIONS(209), 1,
      aux_sym_decimal_token1,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(215), 1,
      aux_sym_symbol_token1,
    STATE(75), 1,
      sym__extra_block_comment,
    STATE(221), 1,
      sym__relational_expression,
    STATE(223), 1,
      sym__shift_expression,
    STATE(224), 1,
      sym__wrapped_shift_expression,
    STATE(225), 1,
      sym__additive_expression,
    STATE(226), 1,
      sym__wrapped_additive_expression,
    STATE(227), 1,
      sym__multiplicative_expression,
    STATE(237), 1,
      sym__wrapped_relational_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(565), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(203), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(207), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(146), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9259] = 34,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      sym_unary_minus_operator,
    ACTIONS(205), 1,
      sym_relocation_type,
    ACTIONS(209), 1,
      aux_sym_decimal_token1,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(215), 1,
      aux_sym_symbol_token1,
    STATE(76), 1,
      sym__extra_block_comment,
    STATE(217), 1,
      sym__wrapped_shift_expression,
    STATE(223), 1,
      sym__shift_expression,
    STATE(225), 1,
      sym__additive_expression,
    STATE(226), 1,
      sym__wrapped_additive_expression,
    STATE(227), 1,
      sym__multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(565), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(203), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(207), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(146), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9378] = 34,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      sym_unary_minus_operator,
    ACTIONS(205), 1,
      sym_relocation_type,
    ACTIONS(209), 1,
      aux_sym_decimal_token1,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(215), 1,
      aux_sym_symbol_token1,
    STATE(77), 1,
      sym__extra_block_comment,
    STATE(225), 1,
      sym__additive_expression,
    STATE(227), 1,
      sym__multiplicative_expression,
    STATE(239), 1,
      sym__wrapped_additive_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(565), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(203), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(207), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(146), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9497] = 34,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      sym_unary_minus_operator,
    ACTIONS(205), 1,
      sym_relocation_type,
    ACTIONS(209), 1,
      aux_sym_decimal_token1,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(215), 1,
      aux_sym_symbol_token1,
    STATE(78), 1,
      sym__extra_block_comment,
    STATE(227), 1,
      sym__multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(368), 1,
      sym__additive_expression,
    STATE(369), 1,
      sym__wrapped_additive_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(565), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(203), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(217), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(137), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9616] = 35,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      sym_unary_minus_operator,
    ACTIONS(205), 1,
      sym_relocation_type,
    ACTIONS(209), 1,
      aux_sym_decimal_token1,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(215), 1,
      aux_sym_symbol_token1,
    STATE(79), 1,
      sym__extra_block_comment,
    STATE(349), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(368), 1,
      sym__additive_expression,
    STATE(369), 1,
      sym__wrapped_additive_expression,
    STATE(370), 1,
      sym__multiplicative_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(565), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(203), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(219), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(240), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9737] = 34,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      sym_unary_minus_operator,
    ACTIONS(227), 1,
      sym_relocation_type,
    ACTIONS(231), 1,
      aux_sym_decimal_token1,
    ACTIONS(233), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(237), 1,
      aux_sym_symbol_token1,
    STATE(80), 1,
      sym__extra_block_comment,
    STATE(312), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__logical_and_expression,
    STATE(315), 1,
      sym__wrapped_logical_and_expression,
    STATE(316), 1,
      sym__bitwise_or_expression,
    STATE(317), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(318), 1,
      sym__bitwise_xor_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(320), 1,
      sym__bitwise_and_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(328), 1,
      sym__additive_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(330), 1,
      sym__multiplicative_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(475), 1,
      sym__wrapped_logical_or_expression,
    STATE(566), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(225), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(229), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(262), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9856] = 34,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      sym_unary_minus_operator,
    ACTIONS(227), 1,
      sym_relocation_type,
    ACTIONS(231), 1,
      aux_sym_decimal_token1,
    ACTIONS(233), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(237), 1,
      aux_sym_symbol_token1,
    STATE(81), 1,
      sym__extra_block_comment,
    STATE(314), 1,
      sym__logical_and_expression,
    STATE(316), 1,
      sym__bitwise_or_expression,
    STATE(317), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(318), 1,
      sym__bitwise_xor_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(320), 1,
      sym__bitwise_and_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(328), 1,
      sym__additive_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(330), 1,
      sym__multiplicative_expression,
    STATE(338), 1,
      sym__wrapped_logical_and_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(566), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(225), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(229), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(262), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [9975] = 34,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      sym_unary_minus_operator,
    ACTIONS(227), 1,
      sym_relocation_type,
    ACTIONS(231), 1,
      aux_sym_decimal_token1,
    ACTIONS(233), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(237), 1,
      aux_sym_symbol_token1,
    STATE(82), 1,
      sym__extra_block_comment,
    STATE(316), 1,
      sym__bitwise_or_expression,
    STATE(318), 1,
      sym__bitwise_xor_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(320), 1,
      sym__bitwise_and_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(328), 1,
      sym__additive_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(330), 1,
      sym__multiplicative_expression,
    STATE(339), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(566), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(225), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(229), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(262), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10094] = 34,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      sym_unary_minus_operator,
    ACTIONS(227), 1,
      sym_relocation_type,
    ACTIONS(231), 1,
      aux_sym_decimal_token1,
    ACTIONS(233), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(237), 1,
      aux_sym_symbol_token1,
    STATE(83), 1,
      sym__extra_block_comment,
    STATE(318), 1,
      sym__bitwise_xor_expression,
    STATE(320), 1,
      sym__bitwise_and_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(328), 1,
      sym__additive_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(330), 1,
      sym__multiplicative_expression,
    STATE(340), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(566), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(225), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(229), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(262), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10213] = 34,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      sym_unary_minus_operator,
    ACTIONS(227), 1,
      sym_relocation_type,
    ACTIONS(231), 1,
      aux_sym_decimal_token1,
    ACTIONS(233), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(237), 1,
      aux_sym_symbol_token1,
    STATE(84), 1,
      sym__extra_block_comment,
    STATE(320), 1,
      sym__bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(328), 1,
      sym__additive_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(330), 1,
      sym__multiplicative_expression,
    STATE(341), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(566), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(225), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(229), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(262), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10332] = 34,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      sym_unary_minus_operator,
    ACTIONS(227), 1,
      sym_relocation_type,
    ACTIONS(231), 1,
      aux_sym_decimal_token1,
    ACTIONS(233), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(237), 1,
      aux_sym_symbol_token1,
    STATE(85), 1,
      sym__extra_block_comment,
    STATE(322), 1,
      sym__equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(328), 1,
      sym__additive_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(330), 1,
      sym__multiplicative_expression,
    STATE(342), 1,
      sym__wrapped_equality_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(566), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(225), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(229), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(262), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10451] = 34,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      sym_unary_minus_operator,
    ACTIONS(227), 1,
      sym_relocation_type,
    ACTIONS(231), 1,
      aux_sym_decimal_token1,
    ACTIONS(233), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(237), 1,
      aux_sym_symbol_token1,
    STATE(86), 1,
      sym__extra_block_comment,
    STATE(324), 1,
      sym__relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(328), 1,
      sym__additive_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(330), 1,
      sym__multiplicative_expression,
    STATE(343), 1,
      sym__wrapped_relational_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(566), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(225), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(229), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(262), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10570] = 34,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      sym_unary_minus_operator,
    ACTIONS(227), 1,
      sym_relocation_type,
    ACTIONS(231), 1,
      aux_sym_decimal_token1,
    ACTIONS(233), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(237), 1,
      aux_sym_symbol_token1,
    STATE(87), 1,
      sym__extra_block_comment,
    STATE(326), 1,
      sym__shift_expression,
    STATE(328), 1,
      sym__additive_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(330), 1,
      sym__multiplicative_expression,
    STATE(344), 1,
      sym__wrapped_shift_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(566), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(225), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(229), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(262), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10689] = 34,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      sym_unary_minus_operator,
    ACTIONS(227), 1,
      sym_relocation_type,
    ACTIONS(231), 1,
      aux_sym_decimal_token1,
    ACTIONS(233), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(237), 1,
      aux_sym_symbol_token1,
    STATE(88), 1,
      sym__extra_block_comment,
    STATE(328), 1,
      sym__additive_expression,
    STATE(330), 1,
      sym__multiplicative_expression,
    STATE(345), 1,
      sym__wrapped_additive_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(566), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(225), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(229), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(262), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10808] = 34,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      sym_unary_minus_operator,
    ACTIONS(227), 1,
      sym_relocation_type,
    ACTIONS(231), 1,
      aux_sym_decimal_token1,
    ACTIONS(233), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(237), 1,
      aux_sym_symbol_token1,
    STATE(89), 1,
      sym__extra_block_comment,
    STATE(330), 1,
      sym__multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(368), 1,
      sym__additive_expression,
    STATE(369), 1,
      sym__wrapped_additive_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(566), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(225), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(239), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(260), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [10927] = 35,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      sym_unary_minus_operator,
    ACTIONS(227), 1,
      sym_relocation_type,
    ACTIONS(231), 1,
      aux_sym_decimal_token1,
    ACTIONS(233), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(237), 1,
      aux_sym_symbol_token1,
    STATE(90), 1,
      sym__extra_block_comment,
    STATE(349), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(368), 1,
      sym__additive_expression,
    STATE(369), 1,
      sym__wrapped_additive_expression,
    STATE(370), 1,
      sym__multiplicative_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(566), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(225), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(241), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(346), 9,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11048] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_unary_minus_operator,
    ACTIONS(135), 1,
      sym_relocation_type,
    ACTIONS(139), 1,
      aux_sym_decimal_token1,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(151), 1,
      aux_sym_symbol_token1,
    STATE(91), 1,
      sym__extra_block_comment,
    STATE(259), 1,
      sym__wrapped_multiplicative_expression,
    STATE(264), 1,
      sym__wrapped_assignment_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(272), 1,
      sym__assignment_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(274), 1,
      sym__wrapped_logical_or_expression,
    STATE(275), 1,
      sym__logical_and_expression,
    STATE(276), 1,
      sym__wrapped_logical_and_expression,
    STATE(277), 1,
      sym__bitwise_or_expression,
    STATE(282), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(297), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(298), 1,
      sym__bitwise_and_expression,
    STATE(299), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(300), 1,
      sym__equality_expression,
    STATE(301), 1,
      sym__wrapped_equality_expression,
    STATE(302), 1,
      sym__relational_expression,
    STATE(303), 1,
      sym__wrapped_relational_expression,
    STATE(304), 1,
      sym__shift_expression,
    STATE(305), 1,
      sym__wrapped_shift_expression,
    STATE(306), 1,
      sym__additive_expression,
    STATE(307), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    ACTIONS(133), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(137), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(269), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11171] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(169), 1,
      aux_sym_decimal_token1,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(177), 1,
      aux_sym_symbol_token1,
    STATE(92), 1,
      sym__extra_block_comment,
    STATE(349), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(368), 1,
      sym__additive_expression,
    STATE(369), 1,
      sym__wrapped_additive_expression,
    STATE(370), 1,
      sym__multiplicative_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(372), 1,
      sym__simple_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(536), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(167), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(385), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11294] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(65), 1,
      sym_unary_minus_operator,
    ACTIONS(69), 1,
      sym_relocation_type,
    ACTIONS(73), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(83), 1,
      aux_sym_symbol_token1,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
      sym__extra_block_comment,
    STATE(124), 1,
      sym__wrapped_multiplicative_expression,
    STATE(174), 1,
      sym__wrapped_shift_expression,
    STATE(180), 1,
      sym__logical_or_expression,
    STATE(182), 1,
      sym__logical_and_expression,
    STATE(183), 1,
      sym__wrapped_logical_and_expression,
    STATE(184), 1,
      sym__bitwise_or_expression,
    STATE(185), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(186), 1,
      sym__bitwise_xor_expression,
    STATE(187), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(188), 1,
      sym__bitwise_and_expression,
    STATE(189), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(190), 1,
      sym__equality_expression,
    STATE(191), 1,
      sym__wrapped_equality_expression,
    STATE(192), 1,
      sym__relational_expression,
    STATE(193), 1,
      sym__wrapped_relational_expression,
    STATE(194), 1,
      sym__shift_expression,
    STATE(195), 1,
      sym__additive_expression,
    STATE(196), 1,
      sym__wrapped_additive_expression,
    STATE(197), 1,
      sym__multiplicative_expression,
    STATE(198), 1,
      sym__simple_expression,
    STATE(199), 1,
      sym__wrapped_logical_or_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(556), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(67), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(71), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(201), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11417] = 34,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      sym_unary_minus_operator,
    ACTIONS(227), 1,
      sym_relocation_type,
    ACTIONS(231), 1,
      aux_sym_decimal_token1,
    ACTIONS(233), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(237), 1,
      aux_sym_symbol_token1,
    STATE(94), 1,
      sym__extra_block_comment,
    STATE(311), 1,
      sym__assignment_expression,
    STATE(312), 1,
      sym__logical_or_expression,
    STATE(313), 1,
      sym__wrapped_logical_or_expression,
    STATE(314), 1,
      sym__logical_and_expression,
    STATE(315), 1,
      sym__wrapped_logical_and_expression,
    STATE(316), 1,
      sym__bitwise_or_expression,
    STATE(317), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(318), 1,
      sym__bitwise_xor_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(320), 1,
      sym__bitwise_and_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(328), 1,
      sym__additive_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(330), 1,
      sym__multiplicative_expression,
    STATE(470), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(225), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(229), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(262), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11536] = 34,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      sym_unary_minus_operator,
    ACTIONS(227), 1,
      sym_relocation_type,
    ACTIONS(231), 1,
      aux_sym_decimal_token1,
    ACTIONS(233), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(237), 1,
      aux_sym_symbol_token1,
    STATE(95), 1,
      sym__extra_block_comment,
    STATE(311), 1,
      sym__assignment_expression,
    STATE(312), 1,
      sym__logical_or_expression,
    STATE(313), 1,
      sym__wrapped_logical_or_expression,
    STATE(314), 1,
      sym__logical_and_expression,
    STATE(315), 1,
      sym__wrapped_logical_and_expression,
    STATE(316), 1,
      sym__bitwise_or_expression,
    STATE(317), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(318), 1,
      sym__bitwise_xor_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(320), 1,
      sym__bitwise_and_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(328), 1,
      sym__additive_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(330), 1,
      sym__multiplicative_expression,
    STATE(461), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(225), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(229), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(262), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11655] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      sym_unary_minus_operator,
    ACTIONS(135), 1,
      sym_relocation_type,
    ACTIONS(139), 1,
      aux_sym_decimal_token1,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    ACTIONS(149), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(151), 1,
      aux_sym_symbol_token1,
    STATE(96), 1,
      sym__extra_block_comment,
    STATE(259), 1,
      sym__wrapped_multiplicative_expression,
    STATE(268), 1,
      sym__simple_expression,
    STATE(273), 1,
      sym__logical_or_expression,
    STATE(275), 1,
      sym__logical_and_expression,
    STATE(276), 1,
      sym__wrapped_logical_and_expression,
    STATE(277), 1,
      sym__bitwise_or_expression,
    STATE(282), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(291), 1,
      sym__bitwise_xor_expression,
    STATE(297), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(298), 1,
      sym__bitwise_and_expression,
    STATE(299), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(300), 1,
      sym__equality_expression,
    STATE(301), 1,
      sym__wrapped_equality_expression,
    STATE(302), 1,
      sym__relational_expression,
    STATE(303), 1,
      sym__wrapped_relational_expression,
    STATE(304), 1,
      sym__shift_expression,
    STATE(305), 1,
      sym__wrapped_shift_expression,
    STATE(306), 1,
      sym__additive_expression,
    STATE(307), 1,
      sym__wrapped_additive_expression,
    STATE(332), 1,
      sym__multiplicative_expression,
    STATE(337), 1,
      sym__wrapped_logical_or_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(555), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(133), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(137), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(269), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11778] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_unary_minus_operator,
    ACTIONS(37), 1,
      sym_relocation_type,
    ACTIONS(41), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(55), 1,
      aux_sym_symbol_token1,
    STATE(97), 1,
      sym__extra_block_comment,
    STATE(122), 1,
      sym__wrapped_multiplicative_expression,
    STATE(130), 1,
      sym__relational_expression,
    STATE(131), 1,
      sym__wrapped_relational_expression,
    STATE(132), 1,
      sym__shift_expression,
    STATE(133), 1,
      sym__wrapped_shift_expression,
    STATE(134), 1,
      sym__additive_expression,
    STATE(135), 1,
      sym__wrapped_additive_expression,
    STATE(136), 1,
      sym__multiplicative_expression,
    STATE(139), 1,
      sym__simple_expression,
    STATE(140), 1,
      sym__logical_and_expression,
    STATE(141), 1,
      sym__wrapped_logical_and_expression,
    STATE(142), 1,
      sym__bitwise_or_expression,
    STATE(143), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(144), 1,
      sym__bitwise_xor_expression,
    STATE(145), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(147), 1,
      sym__bitwise_and_expression,
    STATE(149), 1,
      sym__logical_or_expression,
    STATE(152), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(164), 1,
      sym__equality_expression,
    STATE(166), 1,
      sym__wrapped_equality_expression,
    STATE(173), 1,
      sym__wrapped_logical_or_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(563), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(35), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(39), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(150), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [11901] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(169), 1,
      aux_sym_decimal_token1,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(177), 1,
      aux_sym_symbol_token1,
    STATE(98), 1,
      sym__extra_block_comment,
    STATE(349), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(368), 1,
      sym__additive_expression,
    STATE(369), 1,
      sym__wrapped_additive_expression,
    STATE(370), 1,
      sym__multiplicative_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(372), 1,
      sym__simple_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(387), 1,
      sym__wrapped_logical_or_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(562), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(167), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(385), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12024] = 34,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      sym_unary_minus_operator,
    ACTIONS(205), 1,
      sym_relocation_type,
    ACTIONS(209), 1,
      aux_sym_decimal_token1,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(215), 1,
      aux_sym_symbol_token1,
    STATE(99), 1,
      sym__extra_block_comment,
    STATE(218), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(219), 1,
      sym__equality_expression,
    STATE(220), 1,
      sym__wrapped_equality_expression,
    STATE(221), 1,
      sym__relational_expression,
    STATE(222), 1,
      sym__wrapped_relational_expression,
    STATE(223), 1,
      sym__shift_expression,
    STATE(224), 1,
      sym__wrapped_shift_expression,
    STATE(225), 1,
      sym__additive_expression,
    STATE(226), 1,
      sym__wrapped_additive_expression,
    STATE(227), 1,
      sym__multiplicative_expression,
    STATE(235), 1,
      sym__bitwise_and_expression,
    STATE(238), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(247), 1,
      sym__wrapped_logical_or_expression,
    STATE(249), 1,
      sym__logical_or_expression,
    STATE(251), 1,
      sym__logical_and_expression,
    STATE(252), 1,
      sym__wrapped_logical_and_expression,
    STATE(253), 1,
      sym__bitwise_or_expression,
    STATE(254), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(255), 1,
      sym__bitwise_xor_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(565), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(203), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(207), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(146), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12143] = 34,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      sym_unary_minus_operator,
    ACTIONS(227), 1,
      sym_relocation_type,
    ACTIONS(231), 1,
      aux_sym_decimal_token1,
    ACTIONS(233), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(237), 1,
      aux_sym_symbol_token1,
    STATE(100), 1,
      sym__extra_block_comment,
    STATE(309), 1,
      sym__wrapped_logical_or_expression,
    STATE(312), 1,
      sym__logical_or_expression,
    STATE(314), 1,
      sym__logical_and_expression,
    STATE(315), 1,
      sym__wrapped_logical_and_expression,
    STATE(316), 1,
      sym__bitwise_or_expression,
    STATE(317), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(318), 1,
      sym__bitwise_xor_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(320), 1,
      sym__bitwise_and_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(328), 1,
      sym__additive_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(330), 1,
      sym__multiplicative_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(566), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(225), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(229), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(262), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12262] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      sym_unary_minus_operator,
    ACTIONS(37), 1,
      sym_relocation_type,
    ACTIONS(41), 1,
      aux_sym_decimal_token1,
    ACTIONS(47), 1,
      anon_sym_SQUOTE,
    ACTIONS(53), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(55), 1,
      aux_sym_symbol_token1,
    STATE(101), 1,
      sym__extra_block_comment,
    STATE(122), 1,
      sym__wrapped_multiplicative_expression,
    STATE(127), 1,
      sym__wrapped_assignment_expression,
    STATE(130), 1,
      sym__relational_expression,
    STATE(131), 1,
      sym__wrapped_relational_expression,
    STATE(132), 1,
      sym__shift_expression,
    STATE(133), 1,
      sym__wrapped_shift_expression,
    STATE(134), 1,
      sym__additive_expression,
    STATE(135), 1,
      sym__wrapped_additive_expression,
    STATE(136), 1,
      sym__multiplicative_expression,
    STATE(138), 1,
      sym__wrapped_logical_or_expression,
    STATE(139), 1,
      sym__simple_expression,
    STATE(140), 1,
      sym__logical_and_expression,
    STATE(141), 1,
      sym__wrapped_logical_and_expression,
    STATE(142), 1,
      sym__bitwise_or_expression,
    STATE(143), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(144), 1,
      sym__bitwise_xor_expression,
    STATE(145), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(147), 1,
      sym__bitwise_and_expression,
    STATE(149), 1,
      sym__logical_or_expression,
    STATE(152), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(164), 1,
      sym__equality_expression,
    STATE(165), 1,
      sym__assignment_expression,
    STATE(166), 1,
      sym__wrapped_equality_expression,
    ACTIONS(35), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(39), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(150), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12385] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(169), 1,
      aux_sym_decimal_token1,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(177), 1,
      aux_sym_symbol_token1,
    STATE(102), 1,
      sym__extra_block_comment,
    STATE(349), 1,
      sym__wrapped_multiplicative_expression,
    STATE(351), 1,
      sym__wrapped_assignment_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(368), 1,
      sym__additive_expression,
    STATE(369), 1,
      sym__wrapped_additive_expression,
    STATE(370), 1,
      sym__multiplicative_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(372), 1,
      sym__simple_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(167), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(385), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12508] = 34,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      sym_unary_minus_operator,
    ACTIONS(205), 1,
      sym_relocation_type,
    ACTIONS(209), 1,
      aux_sym_decimal_token1,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(215), 1,
      aux_sym_symbol_token1,
    STATE(103), 1,
      sym__extra_block_comment,
    STATE(200), 1,
      sym__wrapped_assignment_expression,
    STATE(218), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(219), 1,
      sym__equality_expression,
    STATE(220), 1,
      sym__wrapped_equality_expression,
    STATE(221), 1,
      sym__relational_expression,
    STATE(222), 1,
      sym__wrapped_relational_expression,
    STATE(223), 1,
      sym__shift_expression,
    STATE(224), 1,
      sym__wrapped_shift_expression,
    STATE(225), 1,
      sym__additive_expression,
    STATE(226), 1,
      sym__wrapped_additive_expression,
    STATE(227), 1,
      sym__multiplicative_expression,
    STATE(235), 1,
      sym__bitwise_and_expression,
    STATE(238), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(248), 1,
      sym__assignment_expression,
    STATE(249), 1,
      sym__logical_or_expression,
    STATE(250), 1,
      sym__wrapped_logical_or_expression,
    STATE(251), 1,
      sym__logical_and_expression,
    STATE(252), 1,
      sym__wrapped_logical_and_expression,
    STATE(253), 1,
      sym__bitwise_or_expression,
    STATE(254), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(255), 1,
      sym__bitwise_xor_expression,
    ACTIONS(203), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(207), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(146), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12627] = 34,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    ACTIONS(223), 1,
      sym_unary_minus_operator,
    ACTIONS(227), 1,
      sym_relocation_type,
    ACTIONS(231), 1,
      aux_sym_decimal_token1,
    ACTIONS(233), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(237), 1,
      aux_sym_symbol_token1,
    STATE(104), 1,
      sym__extra_block_comment,
    STATE(263), 1,
      sym__wrapped_assignment_expression,
    STATE(311), 1,
      sym__assignment_expression,
    STATE(312), 1,
      sym__logical_or_expression,
    STATE(313), 1,
      sym__wrapped_logical_or_expression,
    STATE(314), 1,
      sym__logical_and_expression,
    STATE(315), 1,
      sym__wrapped_logical_and_expression,
    STATE(316), 1,
      sym__bitwise_or_expression,
    STATE(317), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(318), 1,
      sym__bitwise_xor_expression,
    STATE(319), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(320), 1,
      sym__bitwise_and_expression,
    STATE(321), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(322), 1,
      sym__equality_expression,
    STATE(323), 1,
      sym__wrapped_equality_expression,
    STATE(324), 1,
      sym__relational_expression,
    STATE(325), 1,
      sym__wrapped_relational_expression,
    STATE(326), 1,
      sym__shift_expression,
    STATE(327), 1,
      sym__wrapped_shift_expression,
    STATE(328), 1,
      sym__additive_expression,
    STATE(329), 1,
      sym__wrapped_additive_expression,
    STATE(330), 1,
      sym__multiplicative_expression,
    ACTIONS(225), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(229), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(262), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12746] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(169), 1,
      aux_sym_decimal_token1,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(177), 1,
      aux_sym_symbol_token1,
    STATE(105), 1,
      sym__extra_block_comment,
    STATE(349), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(368), 1,
      sym__additive_expression,
    STATE(369), 1,
      sym__wrapped_additive_expression,
    STATE(370), 1,
      sym__multiplicative_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(372), 1,
      sym__simple_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(532), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(167), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(385), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12869] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(169), 1,
      aux_sym_decimal_token1,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(177), 1,
      aux_sym_symbol_token1,
    STATE(106), 1,
      sym__extra_block_comment,
    STATE(349), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(368), 1,
      sym__additive_expression,
    STATE(369), 1,
      sym__wrapped_additive_expression,
    STATE(370), 1,
      sym__multiplicative_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(372), 1,
      sym__simple_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(540), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(167), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(385), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [12992] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(65), 1,
      sym_unary_minus_operator,
    ACTIONS(69), 1,
      sym_relocation_type,
    ACTIONS(73), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(83), 1,
      aux_sym_symbol_token1,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    STATE(107), 1,
      sym__extra_block_comment,
    STATE(124), 1,
      sym__wrapped_multiplicative_expression,
    STATE(174), 1,
      sym__wrapped_shift_expression,
    STATE(180), 1,
      sym__logical_or_expression,
    STATE(182), 1,
      sym__logical_and_expression,
    STATE(183), 1,
      sym__wrapped_logical_and_expression,
    STATE(184), 1,
      sym__bitwise_or_expression,
    STATE(185), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(186), 1,
      sym__bitwise_xor_expression,
    STATE(187), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(188), 1,
      sym__bitwise_and_expression,
    STATE(189), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(190), 1,
      sym__equality_expression,
    STATE(191), 1,
      sym__wrapped_equality_expression,
    STATE(192), 1,
      sym__relational_expression,
    STATE(193), 1,
      sym__wrapped_relational_expression,
    STATE(194), 1,
      sym__shift_expression,
    STATE(195), 1,
      sym__additive_expression,
    STATE(196), 1,
      sym__wrapped_additive_expression,
    STATE(197), 1,
      sym__multiplicative_expression,
    STATE(198), 1,
      sym__simple_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(419), 1,
      sym__wrapped_logical_or_expression,
    STATE(556), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(67), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(71), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(201), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [13115] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(169), 1,
      aux_sym_decimal_token1,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(177), 1,
      aux_sym_symbol_token1,
    STATE(108), 1,
      sym__extra_block_comment,
    STATE(349), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(368), 1,
      sym__additive_expression,
    STATE(369), 1,
      sym__wrapped_additive_expression,
    STATE(370), 1,
      sym__multiplicative_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(372), 1,
      sym__simple_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(543), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(167), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(385), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [13238] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(65), 1,
      sym_unary_minus_operator,
    ACTIONS(69), 1,
      sym_relocation_type,
    ACTIONS(73), 1,
      aux_sym_decimal_token1,
    ACTIONS(75), 1,
      anon_sym_SQUOTE,
    ACTIONS(81), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(83), 1,
      aux_sym_symbol_token1,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    STATE(109), 1,
      sym__extra_block_comment,
    STATE(124), 1,
      sym__wrapped_multiplicative_expression,
    STATE(174), 1,
      sym__wrapped_shift_expression,
    STATE(182), 1,
      sym__logical_and_expression,
    STATE(184), 1,
      sym__bitwise_or_expression,
    STATE(185), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(186), 1,
      sym__bitwise_xor_expression,
    STATE(187), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(188), 1,
      sym__bitwise_and_expression,
    STATE(189), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(190), 1,
      sym__equality_expression,
    STATE(191), 1,
      sym__wrapped_equality_expression,
    STATE(192), 1,
      sym__relational_expression,
    STATE(193), 1,
      sym__wrapped_relational_expression,
    STATE(194), 1,
      sym__shift_expression,
    STATE(195), 1,
      sym__additive_expression,
    STATE(196), 1,
      sym__wrapped_additive_expression,
    STATE(197), 1,
      sym__multiplicative_expression,
    STATE(198), 1,
      sym__simple_expression,
    STATE(208), 1,
      sym__wrapped_logical_and_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(556), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(67), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(71), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(201), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [13361] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(169), 1,
      aux_sym_decimal_token1,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(177), 1,
      aux_sym_symbol_token1,
    STATE(110), 1,
      sym__extra_block_comment,
    STATE(349), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(368), 1,
      sym__additive_expression,
    STATE(369), 1,
      sym__wrapped_additive_expression,
    STATE(370), 1,
      sym__multiplicative_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(372), 1,
      sym__simple_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(545), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(167), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(385), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [13484] = 36,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    ACTIONS(161), 1,
      sym_unary_minus_operator,
    ACTIONS(165), 1,
      sym_relocation_type,
    ACTIONS(169), 1,
      aux_sym_decimal_token1,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(175), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(177), 1,
      aux_sym_symbol_token1,
    STATE(111), 1,
      sym__extra_block_comment,
    STATE(349), 1,
      sym__wrapped_multiplicative_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(358), 1,
      sym__relational_expression,
    STATE(363), 1,
      sym__wrapped_relational_expression,
    STATE(365), 1,
      sym__shift_expression,
    STATE(366), 1,
      sym__wrapped_shift_expression,
    STATE(368), 1,
      sym__additive_expression,
    STATE(369), 1,
      sym__wrapped_additive_expression,
    STATE(370), 1,
      sym__multiplicative_expression,
    STATE(371), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(372), 1,
      sym__simple_expression,
    STATE(373), 1,
      sym__bitwise_and_expression,
    STATE(374), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(375), 1,
      sym__equality_expression,
    STATE(376), 1,
      sym__bitwise_xor_expression,
    STATE(380), 1,
      sym__wrapped_equality_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(394), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(399), 1,
      sym__bitwise_or_expression,
    STATE(548), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(163), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(167), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(385), 8,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [13607] = 34,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      sym_unary_minus_operator,
    ACTIONS(205), 1,
      sym_relocation_type,
    ACTIONS(209), 1,
      aux_sym_decimal_token1,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      aux_sym_local_label_reference_token1,
    ACTIONS(215), 1,
      aux_sym_symbol_token1,
    STATE(112), 1,
      sym__extra_block_comment,
    STATE(218), 1,
      sym__wrapped_bitwise_and_expression,
    STATE(219), 1,
      sym__equality_expression,
    STATE(220), 1,
      sym__wrapped_equality_expression,
    STATE(221), 1,
      sym__relational_expression,
    STATE(222), 1,
      sym__wrapped_relational_expression,
    STATE(223), 1,
      sym__shift_expression,
    STATE(224), 1,
      sym__wrapped_shift_expression,
    STATE(225), 1,
      sym__additive_expression,
    STATE(226), 1,
      sym__wrapped_additive_expression,
    STATE(227), 1,
      sym__multiplicative_expression,
    STATE(233), 1,
      sym__wrapped_bitwise_or_expression,
    STATE(235), 1,
      sym__bitwise_and_expression,
    STATE(238), 1,
      sym__wrapped_bitwise_xor_expression,
    STATE(253), 1,
      sym__bitwise_or_expression,
    STATE(255), 1,
      sym__bitwise_xor_expression,
    STATE(355), 1,
      sym__logical_or_expression,
    STATE(393), 1,
      sym__assignment_expression,
    STATE(395), 1,
      sym__wrapped_logical_or_expression,
    STATE(396), 1,
      sym__logical_and_expression,
    STATE(397), 1,
      sym__wrapped_logical_and_expression,
    STATE(565), 1,
      sym__wrapped_assignment_expression,
    ACTIONS(203), 2,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
    ACTIONS(207), 7,
      sym_octal,
      sym_binary,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      sym_local_numeric_label_reference,
    STATE(146), 10,
      sym__wrapped_multiplicative_expression,
      sym__simple_expression,
      sym_parenthesized_expression,
      sym_unary_expression,
      sym_relocation_expression,
      sym_decimal,
      sym_char,
      sym_local_label_reference,
      sym_symbol,
      sym_address,
  [13726] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    ACTIONS(247), 1,
      aux_sym__whitespace_token1,
    STATE(113), 1,
      sym__extra_block_comment,
    ACTIONS(245), 44,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      aux_sym__line_comment_token1,
      sym_macro_mnemonic,
      anon_sym_DOTbyte,
      anon_sym_DOT2byte,
      anon_sym_DOTshort,
      anon_sym_DOThalf,
      anon_sym_DOThword,
      anon_sym_DOT4byte,
      anon_sym_DOTword,
      anon_sym_DOTint,
      anon_sym_DOT8byte,
      anon_sym_DOTdword,
      anon_sym_DOTlong,
      anon_sym_DOTquad,
      anon_sym_DOTcomm,
      anon_sym_DOTlcomm,
      anon_sym_DOTalign,
      anon_sym_DOTbalign,
      anon_sym_DOTp2align,
      anon_sym_DOTsleb128,
      anon_sym_DOTuleb128,
      anon_sym_DOTdtprelword,
      anon_sym_DOTdtpreldword,
      anon_sym_DOTskip,
      anon_sym_DOTspace,
      anon_sym_DOTfloat,
      anon_sym_DOTdouble,
      anon_sym_DOTsingle,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
      aux_sym_control_mnemonic_token1,
      sym_instruction_mnemonic,
      sym_macro_variable,
      sym_macro_label,
      sym_local_label,
      sym_global_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
  [13788] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(114), 1,
      sym__extra_block_comment,
    STATE(599), 1,
      sym__line_comment,
    ACTIONS(249), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      aux_sym__line_comment_token1,
      sym_macro_label,
      sym_local_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
    ACTIONS(251), 36,
      sym_macro_mnemonic,
      anon_sym_DOTbyte,
      anon_sym_DOT2byte,
      anon_sym_DOTshort,
      anon_sym_DOThalf,
      anon_sym_DOThword,
      anon_sym_DOT4byte,
      anon_sym_DOTword,
      anon_sym_DOTint,
      anon_sym_DOT8byte,
      anon_sym_DOTdword,
      anon_sym_DOTlong,
      anon_sym_DOTquad,
      anon_sym_DOTcomm,
      anon_sym_DOTlcomm,
      anon_sym_DOTalign,
      anon_sym_DOTbalign,
      anon_sym_DOTp2align,
      anon_sym_DOTsleb128,
      anon_sym_DOTuleb128,
      anon_sym_DOTdtprelword,
      anon_sym_DOTdtpreldword,
      anon_sym_DOTskip,
      anon_sym_DOTspace,
      anon_sym_DOTfloat,
      anon_sym_DOTdouble,
      anon_sym_DOTsingle,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
      aux_sym_control_mnemonic_token1,
      sym_instruction_mnemonic,
      sym_macro_variable,
      sym_global_label,
  [13850] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(115), 1,
      sym__extra_block_comment,
    STATE(583), 1,
      sym__line_comment,
    ACTIONS(249), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      aux_sym__line_comment_token1,
      sym_macro_label,
      sym_local_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
    ACTIONS(251), 36,
      sym_macro_mnemonic,
      anon_sym_DOTbyte,
      anon_sym_DOT2byte,
      anon_sym_DOTshort,
      anon_sym_DOThalf,
      anon_sym_DOThword,
      anon_sym_DOT4byte,
      anon_sym_DOTword,
      anon_sym_DOTint,
      anon_sym_DOT8byte,
      anon_sym_DOTdword,
      anon_sym_DOTlong,
      anon_sym_DOTquad,
      anon_sym_DOTcomm,
      anon_sym_DOTlcomm,
      anon_sym_DOTalign,
      anon_sym_DOTbalign,
      anon_sym_DOTp2align,
      anon_sym_DOTsleb128,
      anon_sym_DOTuleb128,
      anon_sym_DOTdtprelword,
      anon_sym_DOTdtpreldword,
      anon_sym_DOTskip,
      anon_sym_DOTspace,
      anon_sym_DOTfloat,
      anon_sym_DOTdouble,
      anon_sym_DOTsingle,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
      aux_sym_control_mnemonic_token1,
      sym_instruction_mnemonic,
      sym_macro_variable,
      sym_global_label,
  [13912] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(116), 1,
      sym__extra_block_comment,
    ACTIONS(249), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      aux_sym__line_comment_token1,
      sym_macro_label,
      sym_local_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
    ACTIONS(251), 36,
      sym_macro_mnemonic,
      anon_sym_DOTbyte,
      anon_sym_DOT2byte,
      anon_sym_DOTshort,
      anon_sym_DOThalf,
      anon_sym_DOThword,
      anon_sym_DOT4byte,
      anon_sym_DOTword,
      anon_sym_DOTint,
      anon_sym_DOT8byte,
      anon_sym_DOTdword,
      anon_sym_DOTlong,
      anon_sym_DOTquad,
      anon_sym_DOTcomm,
      anon_sym_DOTlcomm,
      anon_sym_DOTalign,
      anon_sym_DOTbalign,
      anon_sym_DOTp2align,
      anon_sym_DOTsleb128,
      anon_sym_DOTuleb128,
      anon_sym_DOTdtprelword,
      anon_sym_DOTdtpreldword,
      anon_sym_DOTskip,
      anon_sym_DOTspace,
      anon_sym_DOTfloat,
      anon_sym_DOTdouble,
      anon_sym_DOTsingle,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
      aux_sym_control_mnemonic_token1,
      sym_instruction_mnemonic,
      sym_macro_variable,
      sym_global_label,
  [13971] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(117), 1,
      sym__extra_block_comment,
    ACTIONS(253), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      aux_sym__line_comment_token1,
      sym_macro_label,
      sym_local_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
    ACTIONS(255), 36,
      sym_macro_mnemonic,
      anon_sym_DOTbyte,
      anon_sym_DOT2byte,
      anon_sym_DOTshort,
      anon_sym_DOThalf,
      anon_sym_DOThword,
      anon_sym_DOT4byte,
      anon_sym_DOTword,
      anon_sym_DOTint,
      anon_sym_DOT8byte,
      anon_sym_DOTdword,
      anon_sym_DOTlong,
      anon_sym_DOTquad,
      anon_sym_DOTcomm,
      anon_sym_DOTlcomm,
      anon_sym_DOTalign,
      anon_sym_DOTbalign,
      anon_sym_DOTp2align,
      anon_sym_DOTsleb128,
      anon_sym_DOTuleb128,
      anon_sym_DOTdtprelword,
      anon_sym_DOTdtpreldword,
      anon_sym_DOTskip,
      anon_sym_DOTspace,
      anon_sym_DOTfloat,
      anon_sym_DOTdouble,
      anon_sym_DOTsingle,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
      aux_sym_control_mnemonic_token1,
      sym_instruction_mnemonic,
      sym_macro_variable,
      sym_global_label,
  [14030] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(118), 1,
      sym__extra_block_comment,
    ACTIONS(257), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      aux_sym__line_comment_token1,
      sym_macro_label,
      sym_local_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
    ACTIONS(259), 36,
      sym_macro_mnemonic,
      anon_sym_DOTbyte,
      anon_sym_DOT2byte,
      anon_sym_DOTshort,
      anon_sym_DOThalf,
      anon_sym_DOThword,
      anon_sym_DOT4byte,
      anon_sym_DOTword,
      anon_sym_DOTint,
      anon_sym_DOT8byte,
      anon_sym_DOTdword,
      anon_sym_DOTlong,
      anon_sym_DOTquad,
      anon_sym_DOTcomm,
      anon_sym_DOTlcomm,
      anon_sym_DOTalign,
      anon_sym_DOTbalign,
      anon_sym_DOTp2align,
      anon_sym_DOTsleb128,
      anon_sym_DOTuleb128,
      anon_sym_DOTdtprelword,
      anon_sym_DOTdtpreldword,
      anon_sym_DOTskip,
      anon_sym_DOTspace,
      anon_sym_DOTfloat,
      anon_sym_DOTdouble,
      anon_sym_DOTsingle,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
      aux_sym_control_mnemonic_token1,
      sym_instruction_mnemonic,
      sym_macro_variable,
      sym_global_label,
  [14089] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(119), 1,
      sym__extra_block_comment,
    ACTIONS(261), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      aux_sym__line_comment_token1,
      sym_macro_label,
      sym_local_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
    ACTIONS(263), 36,
      sym_macro_mnemonic,
      anon_sym_DOTbyte,
      anon_sym_DOT2byte,
      anon_sym_DOTshort,
      anon_sym_DOThalf,
      anon_sym_DOThword,
      anon_sym_DOT4byte,
      anon_sym_DOTword,
      anon_sym_DOTint,
      anon_sym_DOT8byte,
      anon_sym_DOTdword,
      anon_sym_DOTlong,
      anon_sym_DOTquad,
      anon_sym_DOTcomm,
      anon_sym_DOTlcomm,
      anon_sym_DOTalign,
      anon_sym_DOTbalign,
      anon_sym_DOTp2align,
      anon_sym_DOTsleb128,
      anon_sym_DOTuleb128,
      anon_sym_DOTdtprelword,
      anon_sym_DOTdtpreldword,
      anon_sym_DOTskip,
      anon_sym_DOTspace,
      anon_sym_DOTfloat,
      anon_sym_DOTdouble,
      anon_sym_DOTsingle,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
      aux_sym_control_mnemonic_token1,
      sym_instruction_mnemonic,
      sym_macro_variable,
      sym_global_label,
  [14148] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(120), 1,
      sym__extra_block_comment,
    ACTIONS(265), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_CR,
      anon_sym_LF,
      aux_sym__line_comment_token1,
      sym_macro_label,
      sym_local_label,
      sym_global_numeric_label,
      sym_local_numeric_label,
    ACTIONS(267), 36,
      sym_macro_mnemonic,
      anon_sym_DOTbyte,
      anon_sym_DOT2byte,
      anon_sym_DOTshort,
      anon_sym_DOThalf,
      anon_sym_DOThword,
      anon_sym_DOT4byte,
      anon_sym_DOTword,
      anon_sym_DOTint,
      anon_sym_DOT8byte,
      anon_sym_DOTdword,
      anon_sym_DOTlong,
      anon_sym_DOTquad,
      anon_sym_DOTcomm,
      anon_sym_DOTlcomm,
      anon_sym_DOTalign,
      anon_sym_DOTbalign,
      anon_sym_DOTp2align,
      anon_sym_DOTsleb128,
      anon_sym_DOTuleb128,
      anon_sym_DOTdtprelword,
      anon_sym_DOTdtpreldword,
      anon_sym_DOTskip,
      anon_sym_DOTspace,
      anon_sym_DOTfloat,
      anon_sym_DOTdouble,
      anon_sym_DOTsingle,
      anon_sym_DOTasciz,
      anon_sym_DOTascii,
      anon_sym_DOTasciiz,
      anon_sym_DOTstring,
      anon_sym_DOTstringz,
      aux_sym_control_mnemonic_token1,
      sym_instruction_mnemonic,
      sym_macro_variable,
      sym_global_label,
  [14207] = 10,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(273), 1,
      anon_sym_STAR,
    ACTIONS(275), 1,
      anon_sym_SLASH,
    ACTIONS(277), 1,
      anon_sym_PERCENT,
    STATE(57), 1,
      sym_multiplicative_operator,
    STATE(121), 1,
      sym__extra_block_comment,
    STATE(352), 1,
      sym__modulo_operator,
    ACTIONS(271), 4,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(269), 16,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14256] = 10,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(273), 1,
      anon_sym_STAR,
    ACTIONS(275), 1,
      anon_sym_SLASH,
    ACTIONS(277), 1,
      anon_sym_PERCENT,
    STATE(57), 1,
      sym_multiplicative_operator,
    STATE(122), 1,
      sym__extra_block_comment,
    STATE(352), 1,
      sym__modulo_operator,
    ACTIONS(281), 4,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(279), 16,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14305] = 8,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    STATE(123), 1,
      sym__extra_block_comment,
    STATE(538), 1,
      sym_string,
    ACTIONS(287), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(283), 9,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
    ACTIONS(285), 9,
      anon_sym_LPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14350] = 10,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(273), 1,
      anon_sym_STAR,
    ACTIONS(275), 1,
      anon_sym_SLASH,
    ACTIONS(277), 1,
      anon_sym_PERCENT,
    STATE(33), 1,
      sym_multiplicative_operator,
    STATE(124), 1,
      sym__extra_block_comment,
    STATE(352), 1,
      sym__modulo_operator,
    ACTIONS(281), 4,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(279), 15,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14398] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(125), 1,
      sym__extra_block_comment,
    ACTIONS(291), 11,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
      aux_sym_option_flag_token1,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(293), 13,
      sym_unary_minus_operator,
      sym_relocation_type,
      sym_octal,
      sym_binary,
      aux_sym_decimal_token1,
      sym_hexadecimal,
      sym_float,
      aux_sym_elf_type_tag_token1,
      sym_register,
      sym_macro_variable,
      aux_sym_local_label_reference_token1,
      aux_sym_symbol_token1,
      sym_local_numeric_label_reference,
  [14436] = 10,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(273), 1,
      anon_sym_STAR,
    ACTIONS(275), 1,
      anon_sym_SLASH,
    ACTIONS(277), 1,
      anon_sym_PERCENT,
    STATE(33), 1,
      sym_multiplicative_operator,
    STATE(126), 1,
      sym__extra_block_comment,
    STATE(352), 1,
      sym__modulo_operator,
    ACTIONS(271), 4,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(269), 15,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14484] = 8,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 1,
      anon_sym_EQ,
    STATE(97), 1,
      sym_assignment_operator,
    STATE(127), 1,
      sym__extra_block_comment,
    ACTIONS(301), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(295), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14528] = 8,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    STATE(128), 1,
      sym__extra_block_comment,
    STATE(550), 1,
      sym_string,
    ACTIONS(287), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(283), 8,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
    ACTIONS(285), 9,
      anon_sym_LPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14572] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(307), 1,
      sym_additive_operator,
    STATE(129), 1,
      sym__extra_block_comment,
    ACTIONS(305), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(303), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14611] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(130), 1,
      sym__extra_block_comment,
    ACTIONS(311), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(309), 18,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14648] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(317), 1,
      sym_relational_operator,
    STATE(131), 1,
      sym__extra_block_comment,
    ACTIONS(315), 4,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      anon_sym_SLASH,
    ACTIONS(313), 18,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14687] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(132), 1,
      sym__extra_block_comment,
    ACTIONS(321), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(319), 18,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14724] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(327), 1,
      sym_shift_operator,
    STATE(133), 1,
      sym__extra_block_comment,
    ACTIONS(325), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(323), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14763] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(134), 1,
      sym__extra_block_comment,
    ACTIONS(331), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(329), 18,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14800] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(307), 1,
      sym_additive_operator,
    STATE(135), 1,
      sym__extra_block_comment,
    ACTIONS(335), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(333), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14839] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(136), 1,
      sym__extra_block_comment,
    ACTIONS(339), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(337), 18,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14876] = 8,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(341), 1,
      anon_sym_PERCENT,
    STATE(79), 1,
      sym_multiplicative_operator,
    STATE(137), 1,
      sym__extra_block_comment,
    STATE(352), 1,
      sym__modulo_operator,
    ACTIONS(275), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(269), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(271), 14,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
  [14919] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(347), 1,
      sym_logical_or_operator,
    STATE(138), 1,
      sym__extra_block_comment,
    ACTIONS(345), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(343), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14958] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(139), 1,
      sym__extra_block_comment,
    ACTIONS(351), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(349), 18,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [14995] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(140), 1,
      sym__extra_block_comment,
    ACTIONS(355), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(353), 18,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15032] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(361), 1,
      sym_logical_and_operator,
    STATE(141), 1,
      sym__extra_block_comment,
    ACTIONS(359), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(357), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15071] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(142), 1,
      sym__extra_block_comment,
    ACTIONS(365), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(363), 18,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15108] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(371), 1,
      sym_bitwise_or_operator,
    STATE(143), 1,
      sym__extra_block_comment,
    ACTIONS(369), 4,
      anon_sym_EQ,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(367), 18,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15147] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(144), 1,
      sym__extra_block_comment,
    ACTIONS(375), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(373), 18,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15184] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(381), 1,
      sym_bitwise_xor_operator,
    STATE(145), 1,
      sym__extra_block_comment,
    ACTIONS(379), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(377), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15223] = 8,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(341), 1,
      anon_sym_PERCENT,
    STATE(79), 1,
      sym_multiplicative_operator,
    STATE(146), 1,
      sym__extra_block_comment,
    STATE(352), 1,
      sym__modulo_operator,
    ACTIONS(275), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(279), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(281), 14,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
  [15266] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(147), 1,
      sym__extra_block_comment,
    ACTIONS(385), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(383), 18,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15303] = 8,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(299), 1,
      anon_sym_EQ,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
      sym_assignment_operator,
    STATE(148), 1,
      sym__extra_block_comment,
    ACTIONS(301), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(295), 16,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15346] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(149), 1,
      sym__extra_block_comment,
    ACTIONS(391), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(389), 18,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15383] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(150), 1,
      sym__extra_block_comment,
    ACTIONS(287), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(285), 18,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15420] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(151), 1,
      sym__extra_block_comment,
    ACTIONS(395), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(393), 18,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15457] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(401), 1,
      sym_bitwise_and_operator,
    STATE(152), 1,
      sym__extra_block_comment,
    ACTIONS(399), 4,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(397), 18,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15496] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(153), 1,
      sym__extra_block_comment,
    ACTIONS(405), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(403), 18,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15533] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(154), 1,
      sym__extra_block_comment,
    ACTIONS(409), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(407), 18,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15570] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(155), 1,
      sym__extra_block_comment,
    ACTIONS(413), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(411), 18,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15607] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(156), 1,
      sym__extra_block_comment,
    ACTIONS(417), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(415), 18,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15644] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(361), 1,
      sym_logical_and_operator,
    STATE(157), 1,
      sym__extra_block_comment,
    ACTIONS(421), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(419), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15683] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(371), 1,
      sym_bitwise_or_operator,
    STATE(158), 1,
      sym__extra_block_comment,
    ACTIONS(425), 4,
      anon_sym_EQ,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(423), 18,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15722] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(381), 1,
      sym_bitwise_xor_operator,
    STATE(159), 1,
      sym__extra_block_comment,
    ACTIONS(429), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(427), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15761] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(401), 1,
      sym_bitwise_and_operator,
    STATE(160), 1,
      sym__extra_block_comment,
    ACTIONS(433), 4,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(431), 18,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15800] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(439), 1,
      sym_equality_operator,
    STATE(161), 1,
      sym__extra_block_comment,
    ACTIONS(437), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(435), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15839] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(317), 1,
      sym_relational_operator,
    STATE(162), 1,
      sym__extra_block_comment,
    ACTIONS(443), 4,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      anon_sym_SLASH,
    ACTIONS(441), 18,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15878] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(327), 1,
      sym_shift_operator,
    STATE(163), 1,
      sym__extra_block_comment,
    ACTIONS(447), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(445), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15917] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(164), 1,
      sym__extra_block_comment,
    ACTIONS(451), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(449), 18,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15954] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(165), 1,
      sym__extra_block_comment,
    ACTIONS(455), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(453), 18,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [15991] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(439), 1,
      sym_equality_operator,
    STATE(166), 1,
      sym__extra_block_comment,
    ACTIONS(459), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(457), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16030] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(167), 1,
      sym__extra_block_comment,
    ACTIONS(463), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(461), 18,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16067] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(168), 1,
      sym__extra_block_comment,
    ACTIONS(467), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(465), 18,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16104] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(169), 1,
      sym__extra_block_comment,
    ACTIONS(471), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(469), 18,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16141] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(170), 1,
      sym__extra_block_comment,
    ACTIONS(475), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(473), 18,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16178] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(171), 1,
      sym__extra_block_comment,
    ACTIONS(479), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(477), 18,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16215] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(172), 1,
      sym__extra_block_comment,
    ACTIONS(483), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(481), 18,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16252] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(173), 1,
      sym__extra_block_comment,
    ACTIONS(487), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(485), 18,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16289] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(489), 1,
      sym_shift_operator,
    STATE(174), 1,
      sym__extra_block_comment,
    ACTIONS(325), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(323), 16,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16327] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(175), 1,
      sym__extra_block_comment,
    ACTIONS(471), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(469), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16363] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(176), 1,
      sym__extra_block_comment,
    ACTIONS(475), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(473), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16399] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(177), 1,
      sym__extra_block_comment,
    ACTIONS(479), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(477), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16435] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(178), 1,
      sym__extra_block_comment,
    ACTIONS(483), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(481), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16471] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(179), 1,
      sym__extra_block_comment,
    ACTIONS(455), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(453), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16507] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(180), 1,
      sym__extra_block_comment,
    ACTIONS(391), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(389), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16543] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(491), 1,
      sym_logical_or_operator,
    STATE(181), 1,
      sym__extra_block_comment,
    ACTIONS(345), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(343), 16,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16581] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(182), 1,
      sym__extra_block_comment,
    ACTIONS(355), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(353), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16617] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(493), 1,
      sym_logical_and_operator,
    STATE(183), 1,
      sym__extra_block_comment,
    ACTIONS(359), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(357), 16,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16655] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(184), 1,
      sym__extra_block_comment,
    ACTIONS(365), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(363), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16691] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(495), 1,
      sym_bitwise_or_operator,
    STATE(185), 1,
      sym__extra_block_comment,
    ACTIONS(369), 4,
      anon_sym_EQ,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(367), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16729] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(186), 1,
      sym__extra_block_comment,
    ACTIONS(375), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(373), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16765] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(497), 1,
      sym_bitwise_xor_operator,
    STATE(187), 1,
      sym__extra_block_comment,
    ACTIONS(379), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(377), 16,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16803] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(188), 1,
      sym__extra_block_comment,
    ACTIONS(385), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(383), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16839] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(499), 1,
      sym_bitwise_and_operator,
    STATE(189), 1,
      sym__extra_block_comment,
    ACTIONS(399), 4,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(397), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16877] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(190), 1,
      sym__extra_block_comment,
    ACTIONS(451), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(449), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16913] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(501), 1,
      sym_equality_operator,
    STATE(191), 1,
      sym__extra_block_comment,
    ACTIONS(459), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(457), 16,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16951] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(192), 1,
      sym__extra_block_comment,
    ACTIONS(311), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(309), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [16987] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(503), 1,
      sym_relational_operator,
    STATE(193), 1,
      sym__extra_block_comment,
    ACTIONS(315), 4,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      anon_sym_SLASH,
    ACTIONS(313), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [17025] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(194), 1,
      sym__extra_block_comment,
    ACTIONS(321), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(319), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [17061] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(195), 1,
      sym__extra_block_comment,
    ACTIONS(331), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(329), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [17097] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(505), 1,
      sym_additive_operator,
    STATE(196), 1,
      sym__extra_block_comment,
    ACTIONS(335), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(333), 16,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [17135] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(197), 1,
      sym__extra_block_comment,
    ACTIONS(339), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(337), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [17171] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(198), 1,
      sym__extra_block_comment,
    ACTIONS(351), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(349), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [17207] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(199), 1,
      sym__extra_block_comment,
    ACTIONS(487), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(485), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [17243] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(299), 1,
      anon_sym_EQ,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
    STATE(99), 1,
      sym_assignment_operator,
    STATE(200), 1,
      sym__extra_block_comment,
    ACTIONS(295), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(301), 15,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [17283] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(201), 1,
      sym__extra_block_comment,
    ACTIONS(287), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(285), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [17319] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(202), 1,
      sym__extra_block_comment,
    ACTIONS(405), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(403), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [17355] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(203), 1,
      sym__extra_block_comment,
    ACTIONS(409), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(407), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [17391] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(204), 1,
      sym__extra_block_comment,
    ACTIONS(413), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(411), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [17427] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(205), 1,
      sym__extra_block_comment,
    ACTIONS(417), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(415), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [17463] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(206), 1,
      sym__extra_block_comment,
    ACTIONS(395), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(393), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [17499] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(207), 1,
      sym__extra_block_comment,
    ACTIONS(463), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(461), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [17535] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(493), 1,
      sym_logical_and_operator,
    STATE(208), 1,
      sym__extra_block_comment,
    ACTIONS(421), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(419), 16,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [17573] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(495), 1,
      sym_bitwise_or_operator,
    STATE(209), 1,
      sym__extra_block_comment,
    ACTIONS(425), 4,
      anon_sym_EQ,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(423), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [17611] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(497), 1,
      sym_bitwise_xor_operator,
    STATE(210), 1,
      sym__extra_block_comment,
    ACTIONS(429), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(427), 16,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [17649] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(499), 1,
      sym_bitwise_and_operator,
    STATE(211), 1,
      sym__extra_block_comment,
    ACTIONS(433), 4,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(431), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [17687] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(501), 1,
      sym_equality_operator,
    STATE(212), 1,
      sym__extra_block_comment,
    ACTIONS(437), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(435), 16,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [17725] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(503), 1,
      sym_relational_operator,
    STATE(213), 1,
      sym__extra_block_comment,
    ACTIONS(443), 4,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      anon_sym_SLASH,
    ACTIONS(441), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [17763] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(489), 1,
      sym_shift_operator,
    STATE(214), 1,
      sym__extra_block_comment,
    ACTIONS(447), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(445), 16,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [17801] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(505), 1,
      sym_additive_operator,
    STATE(215), 1,
      sym__extra_block_comment,
    ACTIONS(305), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(303), 16,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [17839] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(216), 1,
      sym__extra_block_comment,
    ACTIONS(467), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(465), 17,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [17875] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(509), 1,
      sym_shift_operator,
    STATE(217), 1,
      sym__extra_block_comment,
    ACTIONS(445), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(447), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [17910] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(511), 1,
      sym_bitwise_and_operator,
    STATE(218), 1,
      sym__extra_block_comment,
    ACTIONS(397), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(399), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [17945] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(219), 1,
      sym__extra_block_comment,
    ACTIONS(449), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(451), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [17978] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(513), 1,
      sym_equality_operator,
    STATE(220), 1,
      sym__extra_block_comment,
    ACTIONS(457), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(459), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [18013] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(221), 1,
      sym__extra_block_comment,
    ACTIONS(309), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(311), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [18046] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(515), 1,
      sym_relational_operator,
    STATE(222), 1,
      sym__extra_block_comment,
    ACTIONS(313), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(315), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [18081] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(223), 1,
      sym__extra_block_comment,
    ACTIONS(319), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(321), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [18114] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(509), 1,
      sym_shift_operator,
    STATE(224), 1,
      sym__extra_block_comment,
    ACTIONS(323), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(325), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [18149] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(225), 1,
      sym__extra_block_comment,
    ACTIONS(329), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(331), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [18182] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(517), 1,
      sym_additive_operator,
    STATE(226), 1,
      sym__extra_block_comment,
    ACTIONS(333), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(335), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [18217] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(227), 1,
      sym__extra_block_comment,
    ACTIONS(337), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(339), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [18250] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(228), 1,
      sym__extra_block_comment,
    ACTIONS(403), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(405), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [18283] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(229), 1,
      sym__extra_block_comment,
    ACTIONS(407), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(409), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [18316] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(230), 1,
      sym__extra_block_comment,
    ACTIONS(411), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(413), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [18349] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(231), 1,
      sym__extra_block_comment,
    ACTIONS(415), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(417), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [18382] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(519), 1,
      sym_logical_and_operator,
    STATE(232), 1,
      sym__extra_block_comment,
    ACTIONS(419), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(421), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [18417] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(521), 1,
      sym_bitwise_or_operator,
    STATE(233), 1,
      sym__extra_block_comment,
    ACTIONS(423), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(425), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [18452] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(523), 1,
      sym_bitwise_xor_operator,
    STATE(234), 1,
      sym__extra_block_comment,
    ACTIONS(427), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(429), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [18487] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(235), 1,
      sym__extra_block_comment,
    ACTIONS(383), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(385), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [18520] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(513), 1,
      sym_equality_operator,
    STATE(236), 1,
      sym__extra_block_comment,
    ACTIONS(435), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(437), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [18555] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(515), 1,
      sym_relational_operator,
    STATE(237), 1,
      sym__extra_block_comment,
    ACTIONS(441), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(443), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [18590] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(523), 1,
      sym_bitwise_xor_operator,
    STATE(238), 1,
      sym__extra_block_comment,
    ACTIONS(377), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(379), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [18625] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(517), 1,
      sym_additive_operator,
    STATE(239), 1,
      sym__extra_block_comment,
    ACTIONS(303), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(305), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [18660] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(240), 1,
      sym__extra_block_comment,
    ACTIONS(461), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(463), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [18693] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(241), 1,
      sym__extra_block_comment,
    ACTIONS(465), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(467), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [18726] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(242), 1,
      sym__extra_block_comment,
    ACTIONS(469), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(471), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [18759] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(243), 1,
      sym__extra_block_comment,
    ACTIONS(473), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(475), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [18792] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(244), 1,
      sym__extra_block_comment,
    ACTIONS(393), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(395), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [18825] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(245), 1,
      sym__extra_block_comment,
    ACTIONS(477), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(479), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [18858] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(246), 1,
      sym__extra_block_comment,
    ACTIONS(481), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(483), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [18891] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(247), 1,
      sym__extra_block_comment,
    ACTIONS(485), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(487), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [18924] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(248), 1,
      sym__extra_block_comment,
    ACTIONS(453), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(455), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [18957] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(249), 1,
      sym__extra_block_comment,
    ACTIONS(389), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(391), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [18990] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(525), 1,
      sym_logical_or_operator,
    STATE(250), 1,
      sym__extra_block_comment,
    ACTIONS(343), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(345), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [19025] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(251), 1,
      sym__extra_block_comment,
    ACTIONS(353), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(355), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [19058] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(519), 1,
      sym_logical_and_operator,
    STATE(252), 1,
      sym__extra_block_comment,
    ACTIONS(357), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(359), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [19093] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(253), 1,
      sym__extra_block_comment,
    ACTIONS(363), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(365), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [19126] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(521), 1,
      sym_bitwise_or_operator,
    STATE(254), 1,
      sym__extra_block_comment,
    ACTIONS(367), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(369), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [19161] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(255), 1,
      sym__extra_block_comment,
    ACTIONS(373), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(375), 17,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [19194] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(511), 1,
      sym_bitwise_and_operator,
    STATE(256), 1,
      sym__extra_block_comment,
    ACTIONS(431), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(433), 16,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [19229] = 8,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    STATE(257), 1,
      sym__extra_block_comment,
    STATE(530), 1,
      sym_string,
    ACTIONS(283), 4,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(287), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(285), 9,
      anon_sym_LPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [19269] = 10,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(273), 1,
      anon_sym_STAR,
    ACTIONS(275), 1,
      anon_sym_SLASH,
    ACTIONS(277), 1,
      anon_sym_PERCENT,
    STATE(46), 1,
      sym_multiplicative_operator,
    STATE(258), 1,
      sym__extra_block_comment,
    STATE(352), 1,
      sym__modulo_operator,
    ACTIONS(271), 4,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(269), 11,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19313] = 10,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(273), 1,
      anon_sym_STAR,
    ACTIONS(275), 1,
      anon_sym_SLASH,
    ACTIONS(277), 1,
      anon_sym_PERCENT,
    STATE(46), 1,
      sym_multiplicative_operator,
    STATE(259), 1,
      sym__extra_block_comment,
    STATE(352), 1,
      sym__modulo_operator,
    ACTIONS(281), 4,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(279), 11,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19357] = 8,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(341), 1,
      anon_sym_PERCENT,
    STATE(90), 1,
      sym_multiplicative_operator,
    STATE(260), 1,
      sym__extra_block_comment,
    STATE(352), 1,
      sym__modulo_operator,
    ACTIONS(269), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(275), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(271), 14,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19397] = 8,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    STATE(261), 1,
      sym__extra_block_comment,
    STATE(530), 1,
      sym_string,
    ACTIONS(283), 4,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(287), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(285), 9,
      anon_sym_LPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [19437] = 8,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(341), 1,
      anon_sym_PERCENT,
    STATE(90), 1,
      sym_multiplicative_operator,
    STATE(262), 1,
      sym__extra_block_comment,
    STATE(352), 1,
      sym__modulo_operator,
    ACTIONS(275), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(279), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(281), 14,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
  [19477] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(299), 1,
      anon_sym_EQ,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    STATE(100), 1,
      sym_assignment_operator,
    STATE(263), 1,
      sym__extra_block_comment,
    ACTIONS(295), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(301), 15,
      aux_sym__line_comment_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [19514] = 8,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(299), 1,
      anon_sym_EQ,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    STATE(96), 1,
      sym_assignment_operator,
    STATE(264), 1,
      sym__extra_block_comment,
    ACTIONS(301), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(295), 12,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [19553] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(265), 1,
      sym__extra_block_comment,
    ACTIONS(469), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(471), 17,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [19583] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(266), 1,
      sym__extra_block_comment,
    ACTIONS(473), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(475), 17,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [19613] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(267), 1,
      sym__extra_block_comment,
    ACTIONS(395), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(393), 13,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [19645] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(268), 1,
      sym__extra_block_comment,
    ACTIONS(351), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(349), 13,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [19677] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(269), 1,
      sym__extra_block_comment,
    ACTIONS(287), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(285), 13,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [19709] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(270), 1,
      sym__extra_block_comment,
    ACTIONS(479), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(477), 13,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [19741] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(271), 1,
      sym__extra_block_comment,
    ACTIONS(483), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(481), 13,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [19773] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(272), 1,
      sym__extra_block_comment,
    ACTIONS(455), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(453), 13,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [19805] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(273), 1,
      sym__extra_block_comment,
    ACTIONS(391), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(389), 13,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [19837] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(531), 1,
      sym_logical_or_operator,
    STATE(274), 1,
      sym__extra_block_comment,
    ACTIONS(345), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(343), 12,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [19871] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(275), 1,
      sym__extra_block_comment,
    ACTIONS(355), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(353), 13,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [19903] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(533), 1,
      sym_logical_and_operator,
    STATE(276), 1,
      sym__extra_block_comment,
    ACTIONS(359), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(357), 12,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [19937] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(277), 1,
      sym__extra_block_comment,
    ACTIONS(365), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(363), 13,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [19969] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(278), 1,
      sym__extra_block_comment,
    ACTIONS(405), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(403), 13,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [20001] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(279), 1,
      sym__extra_block_comment,
    ACTIONS(409), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(407), 13,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [20033] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(280), 1,
      sym__extra_block_comment,
    ACTIONS(413), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(411), 13,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [20065] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(281), 1,
      sym__extra_block_comment,
    ACTIONS(417), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(415), 13,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [20097] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(535), 1,
      sym_bitwise_or_operator,
    STATE(282), 1,
      sym__extra_block_comment,
    ACTIONS(369), 4,
      anon_sym_EQ,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(367), 13,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [20131] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(533), 1,
      sym_logical_and_operator,
    STATE(283), 1,
      sym__extra_block_comment,
    ACTIONS(421), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(419), 12,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [20165] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(535), 1,
      sym_bitwise_or_operator,
    STATE(284), 1,
      sym__extra_block_comment,
    ACTIONS(425), 4,
      anon_sym_EQ,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(423), 13,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [20199] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(537), 1,
      sym_bitwise_xor_operator,
    STATE(285), 1,
      sym__extra_block_comment,
    ACTIONS(429), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(427), 12,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [20233] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(539), 1,
      sym_bitwise_and_operator,
    STATE(286), 1,
      sym__extra_block_comment,
    ACTIONS(433), 4,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(431), 13,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [20267] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(541), 1,
      sym_equality_operator,
    STATE(287), 1,
      sym__extra_block_comment,
    ACTIONS(437), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(435), 12,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [20301] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(543), 1,
      sym_relational_operator,
    STATE(288), 1,
      sym__extra_block_comment,
    ACTIONS(443), 4,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      anon_sym_SLASH,
    ACTIONS(441), 13,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [20335] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(545), 1,
      sym_shift_operator,
    STATE(289), 1,
      sym__extra_block_comment,
    ACTIONS(447), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(445), 12,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [20369] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(547), 1,
      sym_additive_operator,
    STATE(290), 1,
      sym__extra_block_comment,
    ACTIONS(305), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(303), 12,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [20403] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(291), 1,
      sym__extra_block_comment,
    ACTIONS(375), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(373), 13,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [20435] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(292), 1,
      sym__extra_block_comment,
    ACTIONS(463), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(461), 13,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [20467] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(293), 1,
      sym__extra_block_comment,
    ACTIONS(467), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(465), 13,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [20499] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(294), 1,
      sym__extra_block_comment,
    ACTIONS(471), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(469), 13,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [20531] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(295), 1,
      sym__extra_block_comment,
    ACTIONS(475), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(473), 13,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [20563] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(296), 1,
      sym__extra_block_comment,
    ACTIONS(291), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(293), 12,
      sym_unary_minus_operator,
      sym_relocation_type,
      sym_octal,
      sym_binary,
      aux_sym_decimal_token1,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      aux_sym_local_label_reference_token1,
      aux_sym_symbol_token1,
      sym_local_numeric_label_reference,
  [20595] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(537), 1,
      sym_bitwise_xor_operator,
    STATE(297), 1,
      sym__extra_block_comment,
    ACTIONS(379), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(377), 12,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [20629] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(298), 1,
      sym__extra_block_comment,
    ACTIONS(385), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(383), 13,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [20661] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(539), 1,
      sym_bitwise_and_operator,
    STATE(299), 1,
      sym__extra_block_comment,
    ACTIONS(399), 4,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(397), 13,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [20695] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(300), 1,
      sym__extra_block_comment,
    ACTIONS(451), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(449), 13,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [20727] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(541), 1,
      sym_equality_operator,
    STATE(301), 1,
      sym__extra_block_comment,
    ACTIONS(459), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(457), 12,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [20761] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(302), 1,
      sym__extra_block_comment,
    ACTIONS(311), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(309), 13,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [20793] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(543), 1,
      sym_relational_operator,
    STATE(303), 1,
      sym__extra_block_comment,
    ACTIONS(315), 4,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      anon_sym_SLASH,
    ACTIONS(313), 13,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [20827] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(304), 1,
      sym__extra_block_comment,
    ACTIONS(321), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(319), 13,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [20859] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(545), 1,
      sym_shift_operator,
    STATE(305), 1,
      sym__extra_block_comment,
    ACTIONS(325), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(323), 12,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [20893] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(306), 1,
      sym__extra_block_comment,
    ACTIONS(331), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(329), 13,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [20925] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(547), 1,
      sym_additive_operator,
    STATE(307), 1,
      sym__extra_block_comment,
    ACTIONS(335), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(333), 12,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [20959] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(308), 1,
      sym__extra_block_comment,
    ACTIONS(393), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(395), 17,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [20989] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(309), 1,
      sym__extra_block_comment,
    ACTIONS(485), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(487), 17,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [21019] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(310), 1,
      sym__extra_block_comment,
    ACTIONS(481), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(483), 17,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [21049] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(311), 1,
      sym__extra_block_comment,
    ACTIONS(453), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(455), 17,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [21079] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(312), 1,
      sym__extra_block_comment,
    ACTIONS(389), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(391), 17,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [21109] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(549), 1,
      sym_logical_or_operator,
    STATE(313), 1,
      sym__extra_block_comment,
    ACTIONS(343), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(345), 16,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [21141] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(314), 1,
      sym__extra_block_comment,
    ACTIONS(353), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(355), 17,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [21171] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(551), 1,
      sym_logical_and_operator,
    STATE(315), 1,
      sym__extra_block_comment,
    ACTIONS(357), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(359), 16,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [21203] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(316), 1,
      sym__extra_block_comment,
    ACTIONS(363), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(365), 17,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [21233] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(553), 1,
      sym_bitwise_or_operator,
    STATE(317), 1,
      sym__extra_block_comment,
    ACTIONS(367), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(369), 16,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [21265] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(318), 1,
      sym__extra_block_comment,
    ACTIONS(373), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(375), 17,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [21295] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(555), 1,
      sym_bitwise_xor_operator,
    STATE(319), 1,
      sym__extra_block_comment,
    ACTIONS(377), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(379), 16,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [21327] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(320), 1,
      sym__extra_block_comment,
    ACTIONS(383), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(385), 17,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [21357] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(557), 1,
      sym_bitwise_and_operator,
    STATE(321), 1,
      sym__extra_block_comment,
    ACTIONS(397), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(399), 16,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [21389] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(322), 1,
      sym__extra_block_comment,
    ACTIONS(449), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(451), 17,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [21419] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(559), 1,
      sym_equality_operator,
    STATE(323), 1,
      sym__extra_block_comment,
    ACTIONS(457), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(459), 16,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [21451] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(324), 1,
      sym__extra_block_comment,
    ACTIONS(309), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(311), 17,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [21481] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(561), 1,
      sym_relational_operator,
    STATE(325), 1,
      sym__extra_block_comment,
    ACTIONS(313), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(315), 16,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [21513] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(326), 1,
      sym__extra_block_comment,
    ACTIONS(319), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(321), 17,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [21543] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(563), 1,
      sym_shift_operator,
    STATE(327), 1,
      sym__extra_block_comment,
    ACTIONS(323), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(325), 16,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [21575] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(328), 1,
      sym__extra_block_comment,
    ACTIONS(329), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(331), 17,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [21605] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(565), 1,
      sym_additive_operator,
    STATE(329), 1,
      sym__extra_block_comment,
    ACTIONS(333), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(335), 16,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [21637] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(330), 1,
      sym__extra_block_comment,
    ACTIONS(337), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(339), 17,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [21667] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(567), 1,
      anon_sym_RPAREN,
    STATE(331), 1,
      sym__extra_block_comment,
    ACTIONS(287), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(285), 12,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [21701] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(332), 1,
      sym__extra_block_comment,
    ACTIONS(339), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(337), 13,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [21733] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(333), 1,
      sym__extra_block_comment,
    ACTIONS(403), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(405), 17,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [21763] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(334), 1,
      sym__extra_block_comment,
    ACTIONS(407), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(409), 17,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [21793] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(335), 1,
      sym__extra_block_comment,
    ACTIONS(411), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(413), 17,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [21823] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(336), 1,
      sym__extra_block_comment,
    ACTIONS(415), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(417), 17,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [21853] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(337), 1,
      sym__extra_block_comment,
    ACTIONS(487), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(485), 13,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [21885] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(551), 1,
      sym_logical_and_operator,
    STATE(338), 1,
      sym__extra_block_comment,
    ACTIONS(419), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(421), 16,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [21917] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(553), 1,
      sym_bitwise_or_operator,
    STATE(339), 1,
      sym__extra_block_comment,
    ACTIONS(423), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(425), 16,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [21949] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(555), 1,
      sym_bitwise_xor_operator,
    STATE(340), 1,
      sym__extra_block_comment,
    ACTIONS(427), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(429), 16,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [21981] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(557), 1,
      sym_bitwise_and_operator,
    STATE(341), 1,
      sym__extra_block_comment,
    ACTIONS(431), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(433), 16,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [22013] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(559), 1,
      sym_equality_operator,
    STATE(342), 1,
      sym__extra_block_comment,
    ACTIONS(435), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(437), 16,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [22045] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(561), 1,
      sym_relational_operator,
    STATE(343), 1,
      sym__extra_block_comment,
    ACTIONS(441), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(443), 16,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [22077] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(563), 1,
      sym_shift_operator,
    STATE(344), 1,
      sym__extra_block_comment,
    ACTIONS(445), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(447), 16,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [22109] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(565), 1,
      sym_additive_operator,
    STATE(345), 1,
      sym__extra_block_comment,
    ACTIONS(303), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(305), 16,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [22141] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(346), 1,
      sym__extra_block_comment,
    ACTIONS(461), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(463), 17,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [22171] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(347), 1,
      sym__extra_block_comment,
    ACTIONS(465), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(467), 17,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [22201] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(348), 1,
      sym__extra_block_comment,
    ACTIONS(477), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(479), 17,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_or_operator,
      sym_bitwise_xor_operator,
      sym_bitwise_and_operator,
      sym_equality_operator,
      sym_relational_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [22231] = 10,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(273), 1,
      anon_sym_STAR,
    ACTIONS(275), 1,
      anon_sym_SLASH,
    ACTIONS(277), 1,
      anon_sym_PERCENT,
    STATE(68), 1,
      sym_multiplicative_operator,
    STATE(349), 1,
      sym__extra_block_comment,
    STATE(352), 1,
      sym__modulo_operator,
    ACTIONS(281), 4,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(279), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [22272] = 10,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(273), 1,
      anon_sym_STAR,
    ACTIONS(275), 1,
      anon_sym_SLASH,
    ACTIONS(277), 1,
      anon_sym_PERCENT,
    STATE(68), 1,
      sym_multiplicative_operator,
    STATE(350), 1,
      sym__extra_block_comment,
    STATE(352), 1,
      sym__modulo_operator,
    ACTIONS(271), 4,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
    ACTIONS(269), 8,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
  [22313] = 8,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(299), 1,
      anon_sym_EQ,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    STATE(98), 1,
      sym_assignment_operator,
    STATE(351), 1,
      sym__extra_block_comment,
    ACTIONS(301), 4,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(295), 9,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [22349] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(352), 1,
      sym__extra_block_comment,
    ACTIONS(571), 4,
      anon_sym_LPAREN,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
      anon_sym_SQUOTE,
    ACTIONS(573), 12,
      sym_unary_minus_operator,
      sym_relocation_type,
      sym_octal,
      sym_binary,
      aux_sym_decimal_token1,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      aux_sym_local_label_reference_token1,
      aux_sym_symbol_token1,
      sym_local_numeric_label_reference,
  [22379] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(353), 1,
      sym__extra_block_comment,
    ACTIONS(575), 4,
      anon_sym_LPAREN,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
      anon_sym_SQUOTE,
    ACTIONS(577), 12,
      sym_unary_minus_operator,
      sym_relocation_type,
      sym_octal,
      sym_binary,
      aux_sym_decimal_token1,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      aux_sym_local_label_reference_token1,
      aux_sym_symbol_token1,
      sym_local_numeric_label_reference,
  [22409] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(354), 1,
      sym__extra_block_comment,
    ACTIONS(579), 4,
      anon_sym_LPAREN,
      sym_bitwise_not_operator,
      sym_logical_not_operator,
      anon_sym_SQUOTE,
    ACTIONS(581), 12,
      sym_unary_minus_operator,
      sym_relocation_type,
      sym_octal,
      sym_binary,
      aux_sym_decimal_token1,
      sym_hexadecimal,
      sym_float,
      sym_register,
      sym_macro_variable,
      aux_sym_local_label_reference_token1,
      aux_sym_symbol_token1,
      sym_local_numeric_label_reference,
  [22439] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(355), 1,
      sym__extra_block_comment,
    ACTIONS(391), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(389), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [22468] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(583), 1,
      sym_shift_operator,
    STATE(356), 1,
      sym__extra_block_comment,
    ACTIONS(447), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(445), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [22499] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(585), 1,
      sym_additive_operator,
    STATE(357), 1,
      sym__extra_block_comment,
    ACTIONS(305), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(303), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [22530] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(358), 1,
      sym__extra_block_comment,
    ACTIONS(311), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(309), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [22559] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(359), 1,
      sym__extra_block_comment,
    ACTIONS(463), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(461), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [22588] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(360), 1,
      sym__extra_block_comment,
    ACTIONS(467), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(465), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [22617] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(361), 1,
      sym__extra_block_comment,
    ACTIONS(471), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(469), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [22646] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(362), 1,
      sym__extra_block_comment,
    ACTIONS(475), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(473), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [22675] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(587), 1,
      sym_relational_operator,
    STATE(363), 1,
      sym__extra_block_comment,
    ACTIONS(315), 4,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      anon_sym_SLASH,
    ACTIONS(313), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [22706] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
    STATE(364), 1,
      sym__extra_block_comment,
    ACTIONS(287), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(285), 9,
      anon_sym_LPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [22737] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(365), 1,
      sym__extra_block_comment,
    ACTIONS(321), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(319), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [22766] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(583), 1,
      sym_shift_operator,
    STATE(366), 1,
      sym__extra_block_comment,
    ACTIONS(325), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(323), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [22797] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(567), 1,
      anon_sym_RPAREN,
    STATE(367), 1,
      sym__extra_block_comment,
    ACTIONS(287), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(285), 9,
      anon_sym_LPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [22828] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(368), 1,
      sym__extra_block_comment,
    ACTIONS(331), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(329), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [22857] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(585), 1,
      sym_additive_operator,
    STATE(369), 1,
      sym__extra_block_comment,
    ACTIONS(335), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(333), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [22888] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(370), 1,
      sym__extra_block_comment,
    ACTIONS(339), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(337), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [22917] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(591), 1,
      sym_bitwise_xor_operator,
    STATE(371), 1,
      sym__extra_block_comment,
    ACTIONS(379), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(377), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [22948] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(372), 1,
      sym__extra_block_comment,
    ACTIONS(351), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(349), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [22977] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(373), 1,
      sym__extra_block_comment,
    ACTIONS(385), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(383), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [23006] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(593), 1,
      sym_bitwise_and_operator,
    STATE(374), 1,
      sym__extra_block_comment,
    ACTIONS(399), 4,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(397), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [23037] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(375), 1,
      sym__extra_block_comment,
    ACTIONS(451), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(449), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [23066] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(376), 1,
      sym__extra_block_comment,
    ACTIONS(375), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(373), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [23095] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(377), 1,
      sym__extra_block_comment,
    ACTIONS(409), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(407), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [23124] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(378), 1,
      sym__extra_block_comment,
    ACTIONS(413), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(411), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [23153] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(379), 1,
      sym__extra_block_comment,
    ACTIONS(417), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(415), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [23182] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(595), 1,
      sym_equality_operator,
    STATE(380), 1,
      sym__extra_block_comment,
    ACTIONS(459), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(457), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [23213] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(597), 1,
      sym_logical_and_operator,
    STATE(381), 1,
      sym__extra_block_comment,
    ACTIONS(421), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(419), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [23244] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(599), 1,
      sym_bitwise_or_operator,
    STATE(382), 1,
      sym__extra_block_comment,
    ACTIONS(425), 4,
      anon_sym_EQ,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(423), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [23275] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(591), 1,
      sym_bitwise_xor_operator,
    STATE(383), 1,
      sym__extra_block_comment,
    ACTIONS(429), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(427), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [23306] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(593), 1,
      sym_bitwise_and_operator,
    STATE(384), 1,
      sym__extra_block_comment,
    ACTIONS(433), 4,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(431), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [23337] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(385), 1,
      sym__extra_block_comment,
    ACTIONS(287), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(285), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [23366] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(595), 1,
      sym_equality_operator,
    STATE(386), 1,
      sym__extra_block_comment,
    ACTIONS(437), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(435), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [23397] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(387), 1,
      sym__extra_block_comment,
    ACTIONS(487), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(485), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [23426] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(388), 1,
      sym__extra_block_comment,
    ACTIONS(395), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(393), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [23455] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(587), 1,
      sym_relational_operator,
    STATE(389), 1,
      sym__extra_block_comment,
    ACTIONS(443), 4,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      anon_sym_SLASH,
    ACTIONS(441), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [23486] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(390), 1,
      sym__extra_block_comment,
    ACTIONS(479), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(477), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [23515] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(601), 1,
      anon_sym_RPAREN,
    STATE(391), 1,
      sym__extra_block_comment,
    ACTIONS(287), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(285), 9,
      anon_sym_LPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [23546] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(392), 1,
      sym__extra_block_comment,
    ACTIONS(483), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(481), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [23575] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(393), 1,
      sym__extra_block_comment,
    ACTIONS(455), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(453), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [23604] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(599), 1,
      sym_bitwise_or_operator,
    STATE(394), 1,
      sym__extra_block_comment,
    ACTIONS(369), 4,
      anon_sym_EQ,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(367), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [23635] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(603), 1,
      sym_logical_or_operator,
    STATE(395), 1,
      sym__extra_block_comment,
    ACTIONS(345), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(343), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [23666] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(396), 1,
      sym__extra_block_comment,
    ACTIONS(355), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(353), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [23695] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(597), 1,
      sym_logical_and_operator,
    STATE(397), 1,
      sym__extra_block_comment,
    ACTIONS(359), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(357), 9,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [23726] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(605), 1,
      anon_sym_RPAREN,
    STATE(398), 1,
      sym__extra_block_comment,
    ACTIONS(287), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(285), 9,
      anon_sym_LPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [23757] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(399), 1,
      sym__extra_block_comment,
    ACTIONS(365), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(363), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [23786] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(607), 1,
      anon_sym_RPAREN,
    STATE(400), 1,
      sym__extra_block_comment,
    ACTIONS(287), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(285), 9,
      anon_sym_LPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [23817] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(609), 1,
      anon_sym_RPAREN,
    STATE(401), 1,
      sym__extra_block_comment,
    ACTIONS(287), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(285), 9,
      anon_sym_LPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [23848] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(402), 1,
      sym__extra_block_comment,
    ACTIONS(405), 5,
      anon_sym_EQ,
      sym_bitwise_or_operator,
      sym_bitwise_and_operator,
      sym_relational_operator,
      anon_sym_SLASH,
    ACTIONS(403), 10,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_logical_or_operator,
      sym_logical_and_operator,
      sym_bitwise_xor_operator,
      sym_equality_operator,
      sym_shift_operator,
      sym_additive_operator,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [23877] = 8,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(611), 1,
      sym_macro_variable,
    STATE(403), 1,
      sym__extra_block_comment,
    STATE(405), 1,
      sym_string,
    STATE(442), 1,
      sym__concat_string,
    ACTIONS(283), 9,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [23910] = 8,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(611), 1,
      sym_macro_variable,
    STATE(404), 1,
      sym__extra_block_comment,
    STATE(405), 1,
      sym_string,
    STATE(433), 1,
      sym__concat_string,
    ACTIONS(283), 9,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [23943] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(611), 1,
      sym_macro_variable,
    STATE(439), 1,
      sym__concat_string,
    STATE(405), 2,
      sym__extra_block_comment,
      sym_string,
    ACTIONS(283), 9,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [23974] = 8,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(613), 1,
      sym_macro_variable,
    STATE(403), 1,
      sym_string,
    STATE(406), 1,
      sym__extra_block_comment,
    STATE(435), 1,
      sym__concat_string,
    ACTIONS(283), 9,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [24007] = 8,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(615), 1,
      sym_macro_variable,
    STATE(407), 1,
      sym__extra_block_comment,
    STATE(408), 1,
      sym_string,
    STATE(449), 1,
      sym__concat_string,
    ACTIONS(283), 8,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [24039] = 8,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(617), 1,
      sym_macro_variable,
    STATE(408), 1,
      sym__extra_block_comment,
    STATE(412), 1,
      sym_string,
    STATE(448), 1,
      sym__concat_string,
    ACTIONS(283), 8,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [24071] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(621), 1,
      anon_sym_EQ,
    STATE(47), 1,
      sym_assignment_operator,
    STATE(409), 1,
      sym__extra_block_comment,
    ACTIONS(619), 9,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [24101] = 8,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(617), 1,
      sym_macro_variable,
    STATE(410), 1,
      sym__extra_block_comment,
    STATE(412), 1,
      sym_string,
    STATE(459), 1,
      sym__concat_string,
    ACTIONS(283), 8,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [24133] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(347), 1,
      sym_logical_or_operator,
    STATE(411), 1,
      sym__extra_block_comment,
    ACTIONS(485), 11,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [24159] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(617), 1,
      sym_macro_variable,
    STATE(446), 1,
      sym__concat_string,
    STATE(412), 2,
      sym__extra_block_comment,
      sym_string,
    ACTIONS(283), 8,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [24189] = 9,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    ACTIONS(627), 1,
      sym__operand_separator,
    STATE(413), 1,
      sym__extra_block_comment,
    STATE(416), 1,
      aux_sym_directive_operands_repeat1,
    STATE(455), 1,
      aux_sym_directive_operands_repeat2,
    ACTIONS(629), 2,
      sym__multiline_operand_separator_no_comment,
      sym__multiline_operand_separator_with_comment,
    ACTIONS(623), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [24222] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    ACTIONS(621), 1,
      anon_sym_EQ,
    STATE(107), 1,
      sym_assignment_operator,
    STATE(414), 1,
      sym__extra_block_comment,
    ACTIONS(631), 8,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [24251] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(415), 1,
      sym__extra_block_comment,
    ACTIONS(633), 11,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym_macro_variable,
  [24274] = 9,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    ACTIONS(627), 1,
      sym__operand_separator,
    STATE(416), 1,
      sym__extra_block_comment,
    STATE(420), 1,
      aux_sym_directive_operands_repeat1,
    STATE(456), 1,
      aux_sym_directive_operands_repeat2,
    ACTIONS(629), 2,
      sym__multiline_operand_separator_no_comment,
      sym__multiline_operand_separator_with_comment,
    ACTIONS(635), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [24307] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(417), 1,
      sym__extra_block_comment,
    ACTIONS(637), 11,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym_macro_variable,
  [24330] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    STATE(418), 1,
      sym__extra_block_comment,
    STATE(538), 1,
      sym_string,
    ACTIONS(283), 9,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [24357] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(491), 1,
      sym_logical_or_operator,
    STATE(419), 1,
      sym__extra_block_comment,
    ACTIONS(485), 10,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [24382] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    STATE(420), 2,
      sym__extra_block_comment,
      aux_sym_directive_operands_repeat1,
    ACTIONS(644), 3,
      sym__operand_separator,
      sym__multiline_operand_separator_no_comment,
      sym__multiline_operand_separator_with_comment,
    ACTIONS(639), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [24408] = 9,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(651), 1,
      aux_sym__whitespace_token1,
    ACTIONS(653), 1,
      aux_sym__block_comment_token1,
    ACTIONS(655), 1,
      anon_sym_COMMA,
    STATE(421), 1,
      sym__extra_block_comment,
    STATE(426), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(649), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    STATE(438), 2,
      sym__line_comment,
      sym__block_comment,
    ACTIONS(647), 3,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
  [24440] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(422), 1,
      sym__extra_block_comment,
    ACTIONS(633), 10,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym_macro_variable,
  [24462] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(299), 1,
      anon_sym_EQ,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      sym_assignment_operator,
    STATE(423), 1,
      sym__extra_block_comment,
    ACTIONS(659), 3,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
    ACTIONS(657), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
  [24490] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(299), 1,
      anon_sym_EQ,
    ACTIONS(507), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      sym_assignment_operator,
    STATE(424), 1,
      sym__extra_block_comment,
    ACTIONS(663), 3,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
    ACTIONS(661), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
  [24518] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    STATE(425), 1,
      sym__extra_block_comment,
    STATE(550), 1,
      sym_string,
    ACTIONS(283), 8,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [24544] = 9,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(651), 1,
      aux_sym__whitespace_token1,
    ACTIONS(653), 1,
      aux_sym__block_comment_token1,
    ACTIONS(655), 1,
      anon_sym_COMMA,
    STATE(426), 1,
      sym__extra_block_comment,
    STATE(427), 1,
      aux_sym_macro_parameters_repeat1,
    ACTIONS(667), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    STATE(438), 2,
      sym__line_comment,
      sym__block_comment,
    ACTIONS(665), 3,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
  [24576] = 9,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(671), 1,
      anon_sym_SEMI,
    ACTIONS(673), 1,
      aux_sym__whitespace_token1,
    ACTIONS(676), 1,
      aux_sym__line_comment_token1,
    ACTIONS(679), 1,
      aux_sym__block_comment_token1,
    ACTIONS(682), 1,
      anon_sym_COMMA,
    STATE(427), 2,
      sym__extra_block_comment,
      aux_sym_macro_parameters_repeat1,
    STATE(438), 2,
      sym__line_comment,
      sym__block_comment,
    ACTIONS(669), 3,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
  [24608] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(428), 1,
      sym__extra_block_comment,
    ACTIONS(637), 10,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym_macro_variable,
  [24630] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(525), 1,
      sym_logical_or_operator,
    STATE(429), 1,
      sym__extra_block_comment,
    ACTIONS(485), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(487), 5,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [24654] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(689), 1,
      sym__operand_separator,
    STATE(430), 1,
      sym__extra_block_comment,
    STATE(437), 1,
      aux_sym_instruction_operands_repeat1,
    ACTIONS(687), 2,
      sym__multiline_operand_separator_with_comment,
      anon_sym_COMMA,
    ACTIONS(685), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [24681] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(695), 1,
      anon_sym_EQ,
    ACTIONS(697), 1,
      sym_macro_parameter_qualifier,
    STATE(431), 1,
      sym__extra_block_comment,
    ACTIONS(693), 3,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
    ACTIONS(691), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
  [24706] = 9,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(703), 1,
      anon_sym_LPAREN,
    ACTIONS(705), 1,
      sym_macro_parameter_name,
    STATE(421), 1,
      sym_macro_parameter,
    STATE(432), 1,
      sym__extra_block_comment,
    STATE(504), 1,
      sym_macro_parameters,
    ACTIONS(701), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(699), 3,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
  [24737] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(433), 1,
      sym__extra_block_comment,
    ACTIONS(707), 9,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [24758] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(434), 1,
      sym__extra_block_comment,
    ACTIONS(619), 9,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [24779] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(435), 1,
      sym__extra_block_comment,
    ACTIONS(709), 9,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [24800] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(436), 1,
      sym__extra_block_comment,
    ACTIONS(711), 9,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [24821] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(715), 1,
      sym__operand_separator,
    STATE(437), 1,
      sym__extra_block_comment,
    STATE(441), 1,
      aux_sym_instruction_operands_repeat1,
    ACTIONS(687), 2,
      sym__multiline_operand_separator_with_comment,
      anon_sym_COMMA,
    ACTIONS(713), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [24848] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(721), 1,
      sym_macro_parameter_name,
    STATE(438), 1,
      sym__extra_block_comment,
    STATE(465), 1,
      sym_macro_parameter,
    ACTIONS(717), 4,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__block_comment_token1,
    ACTIONS(719), 4,
      anon_sym_SEMI,
      aux_sym__whitespace_token1,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [24873] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(439), 1,
      sym__extra_block_comment,
    ACTIONS(723), 9,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [24894] = 9,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(730), 1,
      aux_sym__whitespace_token1,
    ACTIONS(732), 1,
      aux_sym__block_comment_token1,
    ACTIONS(734), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__block_comment,
    STATE(440), 1,
      sym__extra_block_comment,
    STATE(501), 1,
      sym__call_expression,
    ACTIONS(728), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(726), 3,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
  [24925] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(441), 2,
      sym__extra_block_comment,
      aux_sym_instruction_operands_repeat1,
    ACTIONS(738), 3,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_COMMA,
    ACTIONS(736), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [24948] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(442), 1,
      sym__extra_block_comment,
    ACTIONS(741), 9,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [24969] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(443), 1,
      sym__extra_block_comment,
    ACTIONS(745), 9,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [24990] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(444), 1,
      sym__extra_block_comment,
    ACTIONS(747), 9,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [25011] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(445), 1,
      sym__extra_block_comment,
    ACTIONS(749), 9,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [25032] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(446), 1,
      sym__extra_block_comment,
    ACTIONS(723), 8,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [25052] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(447), 1,
      sym__extra_block_comment,
    ACTIONS(751), 8,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [25072] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(448), 1,
      sym__extra_block_comment,
    ACTIONS(741), 8,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [25092] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(449), 1,
      sym__extra_block_comment,
    ACTIONS(709), 8,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [25112] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(450), 1,
      sym__extra_block_comment,
    ACTIONS(751), 8,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [25132] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    ACTIONS(753), 1,
      sym_macro_variable,
    STATE(525), 1,
      sym__concat_string,
    STATE(451), 2,
      sym__extra_block_comment,
      sym_string,
    ACTIONS(283), 4,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [25158] = 8,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    ACTIONS(753), 1,
      sym_macro_variable,
    STATE(451), 1,
      sym_string,
    STATE(452), 1,
      sym__extra_block_comment,
    STATE(546), 1,
      sym__concat_string,
    ACTIONS(283), 4,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [25186] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(759), 1,
      anon_sym_EQ,
    STATE(453), 1,
      sym__extra_block_comment,
    ACTIONS(757), 3,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
    ACTIONS(755), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
  [25208] = 8,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    ACTIONS(753), 1,
      sym_macro_variable,
    STATE(451), 1,
      sym_string,
    STATE(454), 1,
      sym__extra_block_comment,
    STATE(528), 1,
      sym__concat_string,
    ACTIONS(283), 4,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [25236] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(455), 1,
      sym__extra_block_comment,
    STATE(460), 1,
      aux_sym_directive_operands_repeat2,
    ACTIONS(763), 2,
      sym__multiline_operand_separator_no_comment,
      sym__multiline_operand_separator_with_comment,
    ACTIONS(761), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [25260] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(456), 1,
      sym__extra_block_comment,
    STATE(460), 1,
      aux_sym_directive_operands_repeat2,
    ACTIONS(763), 2,
      sym__multiline_operand_separator_no_comment,
      sym__multiline_operand_separator_with_comment,
    ACTIONS(765), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [25284] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(457), 1,
      sym__extra_block_comment,
    ACTIONS(631), 8,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [25304] = 8,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    ACTIONS(767), 1,
      sym_macro_variable,
    STATE(452), 1,
      sym_string,
    STATE(458), 1,
      sym__extra_block_comment,
    STATE(533), 1,
      sym__concat_string,
    ACTIONS(283), 4,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [25332] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(459), 1,
      sym__extra_block_comment,
    ACTIONS(707), 8,
      sym__operand_separator,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
  [25352] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(771), 2,
      sym__multiline_operand_separator_no_comment,
      sym__multiline_operand_separator_with_comment,
    STATE(460), 2,
      sym__extra_block_comment,
      aux_sym_directive_operands_repeat2,
    ACTIONS(769), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [25374] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(299), 1,
      anon_sym_EQ,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_assignment_operator,
    STATE(461), 1,
      sym__extra_block_comment,
    ACTIONS(661), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(663), 3,
      aux_sym__line_comment_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [25399] = 8,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(621), 1,
      anon_sym_EQ,
    ACTIONS(774), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      sym_assignment_operator,
    STATE(462), 1,
      sym__extra_block_comment,
    ACTIONS(631), 3,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_COMMA,
  [25426] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(732), 1,
      aux_sym__block_comment_token1,
    ACTIONS(781), 1,
      aux_sym__whitespace_token1,
    STATE(3), 1,
      sym__block_comment,
    STATE(463), 1,
      sym__extra_block_comment,
    ACTIONS(779), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(777), 3,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
  [25451] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(531), 1,
      sym_logical_or_operator,
    STATE(464), 1,
      sym__extra_block_comment,
    ACTIONS(485), 6,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [25472] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(465), 1,
      sym__extra_block_comment,
    ACTIONS(671), 3,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
    ACTIONS(669), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
  [25491] = 9,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(667), 1,
      anon_sym_RPAREN,
    ACTIONS(783), 1,
      aux_sym__whitespace_token1,
    ACTIONS(785), 1,
      aux_sym__line_comment_token1,
    ACTIONS(787), 1,
      aux_sym__block_comment_token1,
    ACTIONS(789), 1,
      anon_sym_COMMA,
    STATE(466), 1,
      sym__extra_block_comment,
    STATE(472), 1,
      aux_sym_macro_parameters_repeat1,
    STATE(479), 2,
      sym__line_comment,
      sym__block_comment,
  [25520] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(621), 1,
      anon_sym_EQ,
    STATE(36), 1,
      sym_assignment_operator,
    STATE(467), 1,
      sym__extra_block_comment,
    ACTIONS(631), 4,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [25545] = 9,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(649), 1,
      anon_sym_RPAREN,
    ACTIONS(783), 1,
      aux_sym__whitespace_token1,
    ACTIONS(785), 1,
      aux_sym__line_comment_token1,
    ACTIONS(787), 1,
      aux_sym__block_comment_token1,
    ACTIONS(789), 1,
      anon_sym_COMMA,
    STATE(466), 1,
      aux_sym_macro_parameters_repeat1,
    STATE(468), 1,
      sym__extra_block_comment,
    STATE(479), 2,
      sym__line_comment,
      sym__block_comment,
  [25574] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(795), 1,
      aux_sym__whitespace_token1,
    ACTIONS(797), 1,
      anon_sym_LPAREN,
    STATE(469), 1,
      sym__extra_block_comment,
    ACTIONS(793), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(791), 3,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
  [25599] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(299), 1,
      anon_sym_EQ,
    ACTIONS(527), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_assignment_operator,
    STATE(470), 1,
      sym__extra_block_comment,
    ACTIONS(657), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(659), 3,
      aux_sym__line_comment_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [25624] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(471), 1,
      sym__extra_block_comment,
    ACTIONS(801), 3,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
    ACTIONS(799), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
  [25643] = 8,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(671), 1,
      anon_sym_RPAREN,
    ACTIONS(803), 1,
      aux_sym__whitespace_token1,
    ACTIONS(806), 1,
      aux_sym__line_comment_token1,
    ACTIONS(809), 1,
      aux_sym__block_comment_token1,
    ACTIONS(812), 1,
      anon_sym_COMMA,
    STATE(472), 2,
      sym__extra_block_comment,
      aux_sym_macro_parameters_repeat1,
    STATE(479), 2,
      sym__line_comment,
      sym__block_comment,
  [25670] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(473), 1,
      sym__extra_block_comment,
    ACTIONS(817), 3,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
      anon_sym_COMMA,
    ACTIONS(815), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
  [25689] = 7,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(823), 1,
      aux_sym__whitespace_token1,
    ACTIONS(825), 1,
      aux_sym__block_comment_token1,
    STATE(474), 1,
      sym__extra_block_comment,
    STATE(596), 1,
      sym__block_comment,
    ACTIONS(821), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(819), 3,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
  [25714] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(549), 1,
      sym_logical_or_operator,
    STATE(475), 1,
      sym__extra_block_comment,
    ACTIONS(485), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(487), 5,
      aux_sym__line_comment_token1,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
  [25735] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(476), 1,
      sym__extra_block_comment,
    ACTIONS(29), 7,
      sym__statement_separator_no_comment,
      sym__multiline_operand_separator_no_comment,
      sym__statement_separator_with_comment,
      sym__multiline_operand_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [25754] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(827), 1,
      ts_builtin_sym_end,
    ACTIONS(831), 1,
      aux_sym__line_comment_token1,
    STATE(477), 1,
      sym__extra_block_comment,
    STATE(557), 1,
      sym__line_comment,
    ACTIONS(829), 3,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      anon_sym_SEMI,
  [25778] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(478), 1,
      sym__extra_block_comment,
    ACTIONS(835), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(833), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
  [25796] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(717), 1,
      aux_sym__block_comment_token1,
    ACTIONS(837), 1,
      sym_macro_parameter_name,
    STATE(479), 1,
      sym__extra_block_comment,
    STATE(541), 1,
      sym_macro_parameter,
    ACTIONS(719), 4,
      aux_sym__whitespace_token1,
      aux_sym__line_comment_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [25818] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(480), 1,
      sym__extra_block_comment,
    ACTIONS(841), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(839), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
  [25836] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(481), 1,
      sym__extra_block_comment,
    ACTIONS(845), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(843), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
  [25854] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(482), 1,
      sym__extra_block_comment,
    ACTIONS(849), 2,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
    ACTIONS(847), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
  [25872] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(483), 1,
      sym__extra_block_comment,
    ACTIONS(633), 6,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym_macro_variable,
  [25890] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(831), 1,
      aux_sym__line_comment_token1,
    STATE(484), 1,
      sym__extra_block_comment,
    STATE(559), 1,
      sym__line_comment,
    ACTIONS(829), 3,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      anon_sym_SEMI,
  [25914] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(485), 1,
      sym__extra_block_comment,
    ACTIONS(637), 6,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym_macro_variable,
  [25932] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    STATE(486), 1,
      sym__extra_block_comment,
    STATE(530), 1,
      sym_string,
    ACTIONS(283), 4,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [25954] = 6,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(851), 1,
      anon_sym_EQ,
    ACTIONS(853), 1,
      sym_macro_parameter_qualifier,
    STATE(487), 1,
      sym__extra_block_comment,
    ACTIONS(691), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(693), 3,
      aux_sym__line_comment_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [25976] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(488), 1,
      sym__extra_block_comment,
    ACTIONS(855), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [25993] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(489), 1,
      sym__extra_block_comment,
    ACTIONS(857), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [26010] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(831), 1,
      aux_sym__line_comment_token1,
    STATE(490), 1,
      sym__extra_block_comment,
    STATE(576), 1,
      sym__line_comment,
    ACTIONS(829), 3,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      anon_sym_SEMI,
  [26031] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(491), 1,
      sym__extra_block_comment,
    ACTIONS(859), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [26048] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(492), 1,
      sym__extra_block_comment,
    ACTIONS(861), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [26065] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(493), 1,
      sym__extra_block_comment,
    ACTIONS(863), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [26082] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(177), 1,
      aux_sym_symbol_token1,
    ACTIONS(867), 1,
      anon_sym_operands,
    STATE(494), 1,
      sym__extra_block_comment,
    STATE(591), 1,
      sym_symbol,
    ACTIONS(865), 2,
      sym_register,
      sym_macro_variable,
  [26105] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(869), 1,
      anon_sym_DQUOTE,
    STATE(495), 1,
      sym__extra_block_comment,
    STATE(496), 1,
      aux_sym_string_repeat1,
    ACTIONS(871), 3,
      aux_sym_string_token1,
      sym__escape_sequence,
      sym_string_macro_variable,
  [26126] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(873), 1,
      anon_sym_DQUOTE,
    STATE(496), 1,
      sym__extra_block_comment,
    STATE(511), 1,
      aux_sym_string_repeat1,
    ACTIONS(871), 3,
      aux_sym_string_token1,
      sym__escape_sequence,
      sym_string_macro_variable,
  [26147] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(497), 1,
      sym__extra_block_comment,
    ACTIONS(875), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [26164] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(705), 1,
      sym_macro_parameter_name,
    ACTIONS(877), 1,
      aux_sym__line_comment_token1,
    ACTIONS(879), 1,
      anon_sym_COMMA,
    STATE(498), 1,
      sym__extra_block_comment,
    STATE(465), 2,
      sym__line_comment,
      sym_macro_parameter,
  [26187] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(685), 1,
      anon_sym_RPAREN,
    ACTIONS(883), 1,
      sym__operand_separator,
    STATE(499), 1,
      sym__extra_block_comment,
    STATE(515), 1,
      aux_sym_instruction_operands_repeat1,
    ACTIONS(881), 2,
      sym__multiline_operand_separator_with_comment,
      anon_sym_COMMA,
  [26210] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(500), 1,
      sym__extra_block_comment,
    ACTIONS(885), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [26227] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(501), 1,
      sym__extra_block_comment,
    ACTIONS(887), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [26244] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(502), 1,
      sym__extra_block_comment,
    ACTIONS(889), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [26261] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(503), 1,
      sym__extra_block_comment,
    ACTIONS(891), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [26278] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(504), 1,
      sym__extra_block_comment,
    ACTIONS(893), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [26295] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(895), 1,
      anon_sym_DQUOTE,
    STATE(505), 1,
      sym__extra_block_comment,
    STATE(511), 1,
      aux_sym_string_repeat1,
    ACTIONS(871), 3,
      aux_sym_string_token1,
      sym__escape_sequence,
      sym_string_macro_variable,
  [26316] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(506), 1,
      sym__extra_block_comment,
    ACTIONS(897), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [26333] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(899), 1,
      anon_sym_DQUOTE,
    STATE(507), 1,
      sym__extra_block_comment,
    STATE(508), 1,
      aux_sym_string_repeat1,
    ACTIONS(871), 3,
      aux_sym_string_token1,
      sym__escape_sequence,
      sym_string_macro_variable,
  [26354] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(901), 1,
      anon_sym_DQUOTE,
    STATE(508), 1,
      sym__extra_block_comment,
    STATE(511), 1,
      aux_sym_string_repeat1,
    ACTIONS(871), 3,
      aux_sym_string_token1,
      sym__escape_sequence,
      sym_string_macro_variable,
  [26375] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(177), 1,
      aux_sym_symbol_token1,
    ACTIONS(905), 1,
      anon_sym_operands,
    STATE(509), 1,
      sym__extra_block_comment,
    STATE(602), 1,
      sym_symbol,
    ACTIONS(903), 2,
      sym_register,
      sym_macro_variable,
  [26398] = 5,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(907), 1,
      anon_sym_EQ,
    STATE(510), 1,
      sym__extra_block_comment,
    ACTIONS(755), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(757), 3,
      aux_sym__line_comment_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [26417] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(909), 1,
      anon_sym_DQUOTE,
    STATE(511), 2,
      sym__extra_block_comment,
      aux_sym_string_repeat1,
    ACTIONS(911), 3,
      aux_sym_string_token1,
      sym__escape_sequence,
      sym_string_macro_variable,
  [26436] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(512), 1,
      sym__extra_block_comment,
    ACTIONS(914), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [26453] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(177), 1,
      aux_sym_symbol_token1,
    ACTIONS(918), 1,
      anon_sym_operands,
    STATE(513), 1,
      sym__extra_block_comment,
    STATE(590), 1,
      sym_symbol,
    ACTIONS(916), 2,
      sym_register,
      sym_macro_variable,
  [26476] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(514), 1,
      sym__extra_block_comment,
    ACTIONS(920), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [26493] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(713), 1,
      anon_sym_RPAREN,
    ACTIONS(922), 1,
      sym__operand_separator,
    STATE(515), 1,
      sym__extra_block_comment,
    STATE(521), 1,
      aux_sym_instruction_operands_repeat1,
    ACTIONS(881), 2,
      sym__multiline_operand_separator_with_comment,
      anon_sym_COMMA,
  [26516] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(177), 1,
      aux_sym_symbol_token1,
    ACTIONS(926), 1,
      anon_sym_operands,
    STATE(516), 1,
      sym__extra_block_comment,
    STATE(595), 1,
      sym_symbol,
    ACTIONS(924), 2,
      sym_register,
      sym_macro_variable,
  [26539] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(928), 1,
      anon_sym_DQUOTE,
    STATE(517), 1,
      sym__extra_block_comment,
    STATE(518), 1,
      aux_sym_string_repeat1,
    ACTIONS(871), 3,
      aux_sym_string_token1,
      sym__escape_sequence,
      sym_string_macro_variable,
  [26560] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(930), 1,
      anon_sym_DQUOTE,
    STATE(511), 1,
      aux_sym_string_repeat1,
    STATE(518), 1,
      sym__extra_block_comment,
    ACTIONS(871), 3,
      aux_sym_string_token1,
      sym__escape_sequence,
      sym_string_macro_variable,
  [26581] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(177), 1,
      aux_sym_symbol_token1,
    ACTIONS(934), 1,
      anon_sym_operands,
    STATE(519), 1,
      sym__extra_block_comment,
    STATE(608), 1,
      sym_symbol,
    ACTIONS(932), 2,
      sym_register,
      sym_macro_variable,
  [26604] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(936), 1,
      aux_sym__line_comment_token1,
    ACTIONS(938), 1,
      anon_sym_COMMA,
    ACTIONS(940), 1,
      sym_macro_parameter_name,
    STATE(520), 1,
      sym__extra_block_comment,
    STATE(541), 2,
      sym__line_comment,
      sym_macro_parameter,
  [26627] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(736), 1,
      anon_sym_RPAREN,
    STATE(521), 2,
      sym__extra_block_comment,
      aux_sym_instruction_operands_repeat1,
    ACTIONS(942), 3,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_COMMA,
  [26646] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(177), 1,
      aux_sym_symbol_token1,
    ACTIONS(947), 1,
      anon_sym_operands,
    STATE(522), 1,
      sym__extra_block_comment,
    STATE(584), 1,
      sym_symbol,
    ACTIONS(945), 2,
      sym_register,
      sym_macro_variable,
  [26669] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(523), 1,
      sym__extra_block_comment,
    ACTIONS(949), 5,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      aux_sym__line_comment_token1,
  [26686] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(951), 1,
      anon_sym_DQUOTE,
    STATE(505), 1,
      aux_sym_string_repeat1,
    STATE(524), 1,
      sym__extra_block_comment,
    ACTIONS(871), 3,
      aux_sym_string_token1,
      sym__escape_sequence,
      sym_string_macro_variable,
  [26707] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(525), 1,
      sym__extra_block_comment,
    ACTIONS(723), 4,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [26723] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(526), 1,
      sym__extra_block_comment,
    ACTIONS(815), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(817), 3,
      aux_sym__line_comment_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [26739] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(940), 1,
      sym_macro_parameter_name,
    ACTIONS(953), 1,
      anon_sym_RPAREN,
    STATE(468), 1,
      sym_macro_parameter,
    STATE(527), 1,
      sym__extra_block_comment,
    STATE(614), 1,
      sym_macro_parameters,
  [26761] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(528), 1,
      sym__extra_block_comment,
    ACTIONS(707), 4,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [26777] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(603), 1,
      sym_logical_or_operator,
    STATE(529), 1,
      sym__extra_block_comment,
    ACTIONS(485), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [26795] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    ACTIONS(767), 1,
      sym_macro_variable,
    STATE(454), 1,
      sym_string,
    STATE(530), 1,
      sym__extra_block_comment,
    STATE(533), 1,
      sym__concat_string,
  [26817] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(621), 1,
      anon_sym_EQ,
    ACTIONS(955), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_assignment_operator,
    STATE(531), 1,
      sym__extra_block_comment,
  [26839] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(621), 1,
      anon_sym_EQ,
    ACTIONS(957), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_assignment_operator,
    STATE(532), 1,
      sym__extra_block_comment,
  [26861] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(533), 1,
      sym__extra_block_comment,
    ACTIONS(709), 4,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [26877] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(621), 1,
      anon_sym_EQ,
    ACTIONS(959), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_assignment_operator,
    STATE(534), 1,
      sym__extra_block_comment,
  [26899] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(535), 1,
      sym__extra_block_comment,
    ACTIONS(751), 4,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [26915] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(621), 1,
      anon_sym_EQ,
    ACTIONS(961), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_assignment_operator,
    STATE(536), 1,
      sym__extra_block_comment,
  [26937] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(537), 1,
      sym__extra_block_comment,
    ACTIONS(751), 4,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [26953] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(49), 1,
      anon_sym_DQUOTE,
    ACTIONS(613), 1,
      sym_macro_variable,
    STATE(404), 1,
      sym_string,
    STATE(435), 1,
      sym__concat_string,
    STATE(538), 1,
      sym__extra_block_comment,
  [26975] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(621), 1,
      anon_sym_EQ,
    ACTIONS(963), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_assignment_operator,
    STATE(539), 1,
      sym__extra_block_comment,
  [26997] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(621), 1,
      anon_sym_EQ,
    ACTIONS(965), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_assignment_operator,
    STATE(540), 1,
      sym__extra_block_comment,
  [27019] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(541), 1,
      sym__extra_block_comment,
    ACTIONS(669), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(671), 3,
      aux_sym__line_comment_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [27035] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(621), 1,
      anon_sym_EQ,
    ACTIONS(967), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_assignment_operator,
    STATE(542), 1,
      sym__extra_block_comment,
  [27057] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(621), 1,
      anon_sym_EQ,
    ACTIONS(969), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_assignment_operator,
    STATE(543), 1,
      sym__extra_block_comment,
  [27079] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(621), 1,
      anon_sym_EQ,
    ACTIONS(971), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_assignment_operator,
    STATE(544), 1,
      sym__extra_block_comment,
  [27101] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(621), 1,
      anon_sym_EQ,
    ACTIONS(973), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_assignment_operator,
    STATE(545), 1,
      sym__extra_block_comment,
  [27123] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(546), 1,
      sym__extra_block_comment,
    ACTIONS(741), 4,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [27139] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(621), 1,
      anon_sym_EQ,
    ACTIONS(975), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_assignment_operator,
    STATE(547), 1,
      sym__extra_block_comment,
  [27161] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(621), 1,
      anon_sym_EQ,
    ACTIONS(977), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_assignment_operator,
    STATE(548), 1,
      sym__extra_block_comment,
  [27183] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(549), 1,
      sym__extra_block_comment,
    ACTIONS(979), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      sym__escape_sequence,
      sym_string_macro_variable,
  [27199] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(615), 1,
      sym_macro_variable,
    STATE(410), 1,
      sym_string,
    STATE(449), 1,
      sym__concat_string,
    STATE(550), 1,
      sym__extra_block_comment,
  [27221] = 7,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(940), 1,
      sym_macro_parameter_name,
    ACTIONS(981), 1,
      anon_sym_RPAREN,
    STATE(468), 1,
      sym_macro_parameter,
    STATE(551), 1,
      sym__extra_block_comment,
    STATE(616), 1,
      sym_macro_parameters,
  [27243] = 4,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(552), 1,
      sym__extra_block_comment,
    ACTIONS(799), 2,
      aux_sym__whitespace_token1,
      aux_sym__block_comment_token1,
    ACTIONS(801), 3,
      aux_sym__line_comment_token1,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [27259] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(553), 1,
      sym__extra_block_comment,
    ACTIONS(631), 4,
      sym__operand_separator,
      sym__multiline_operand_separator_with_comment,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [27275] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(837), 1,
      sym_macro_parameter_name,
    ACTIONS(983), 1,
      aux_sym__whitespace_token1,
    STATE(552), 1,
      sym_macro_parameter,
    STATE(554), 1,
      sym__extra_block_comment,
  [27294] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    ACTIONS(621), 1,
      anon_sym_EQ,
    STATE(58), 1,
      sym_assignment_operator,
    STATE(555), 1,
      sym__extra_block_comment,
  [27313] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
    ACTIONS(621), 1,
      anon_sym_EQ,
    STATE(58), 1,
      sym_assignment_operator,
    STATE(556), 1,
      sym__extra_block_comment,
  [27332] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(985), 1,
      ts_builtin_sym_end,
    STATE(557), 1,
      sym__extra_block_comment,
    ACTIONS(987), 2,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
  [27349] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(837), 1,
      sym_macro_parameter_name,
    ACTIONS(989), 1,
      aux_sym__whitespace_token1,
    STATE(541), 1,
      sym_macro_parameter,
    STATE(558), 1,
      sym__extra_block_comment,
  [27368] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(827), 1,
      ts_builtin_sym_end,
    STATE(559), 1,
      sym__extra_block_comment,
    ACTIONS(987), 2,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
  [27385] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(560), 1,
      sym__extra_block_comment,
    ACTIONS(991), 3,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
      ts_builtin_sym_end,
  [27400] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(721), 1,
      sym_macro_parameter_name,
    ACTIONS(993), 1,
      aux_sym__whitespace_token1,
    STATE(465), 1,
      sym_macro_parameter,
    STATE(561), 1,
      sym__extra_block_comment,
  [27419] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(621), 1,
      anon_sym_EQ,
    STATE(58), 1,
      sym_assignment_operator,
    STATE(562), 1,
      sym__extra_block_comment,
  [27438] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(297), 1,
      anon_sym_LPAREN,
    ACTIONS(621), 1,
      anon_sym_EQ,
    STATE(58), 1,
      sym_assignment_operator,
    STATE(563), 1,
      sym__extra_block_comment,
  [27457] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(721), 1,
      sym_macro_parameter_name,
    ACTIONS(995), 1,
      aux_sym__whitespace_token1,
    STATE(471), 1,
      sym_macro_parameter,
    STATE(564), 1,
      sym__extra_block_comment,
  [27476] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(621), 1,
      anon_sym_EQ,
    ACTIONS(997), 1,
      anon_sym_LPAREN,
    STATE(58), 1,
      sym_assignment_operator,
    STATE(565), 1,
      sym__extra_block_comment,
  [27495] = 6,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(621), 1,
      anon_sym_EQ,
    ACTIONS(999), 1,
      anon_sym_LPAREN,
    STATE(58), 1,
      sym_assignment_operator,
    STATE(566), 1,
      sym__extra_block_comment,
  [27514] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(827), 1,
      ts_builtin_sym_end,
    ACTIONS(829), 1,
      aux_sym__statement_token1,
    STATE(567), 1,
      sym__extra_block_comment,
  [27530] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(568), 1,
      sym__extra_block_comment,
    ACTIONS(633), 2,
      anon_sym_DQUOTE,
      sym_macro_variable,
  [27544] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(569), 1,
      sym__extra_block_comment,
    ACTIONS(1001), 2,
      aux_sym_char_token1,
      aux_sym_char_token2,
  [27558] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(705), 1,
      sym_macro_parameter_name,
    STATE(473), 1,
      sym_macro_parameter,
    STATE(570), 1,
      sym__extra_block_comment,
  [27574] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(571), 1,
      sym__extra_block_comment,
    ACTIONS(1003), 2,
      aux_sym_char_token1,
      aux_sym_char_token2,
  [27588] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(572), 1,
      sym__extra_block_comment,
    ACTIONS(991), 2,
      ts_builtin_sym_end,
      aux_sym__statement_token1,
  [27602] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(573), 1,
      sym__extra_block_comment,
    ACTIONS(637), 2,
      anon_sym_DQUOTE,
      sym_macro_variable,
  [27616] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(574), 1,
      sym__extra_block_comment,
    ACTIONS(1005), 2,
      aux_sym_char_token1,
      aux_sym_char_token2,
  [27630] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(575), 1,
      sym__extra_block_comment,
    ACTIONS(1007), 2,
      aux_sym_char_token1,
      aux_sym_char_token2,
  [27644] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(576), 1,
      sym__extra_block_comment,
    ACTIONS(987), 2,
      sym__statement_separator_no_comment,
      sym__statement_separator_with_comment,
  [27658] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(577), 1,
      sym__extra_block_comment,
    ACTIONS(1009), 2,
      aux_sym_char_token1,
      aux_sym_char_token2,
  [27672] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(940), 1,
      sym_macro_parameter_name,
    STATE(552), 1,
      sym_macro_parameter,
    STATE(578), 1,
      sym__extra_block_comment,
  [27688] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(829), 1,
      aux_sym__statement_token1,
    STATE(579), 1,
      sym__extra_block_comment,
  [27704] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(705), 1,
      sym_macro_parameter_name,
    STATE(471), 1,
      sym_macro_parameter,
    STATE(580), 1,
      sym__extra_block_comment,
  [27720] = 5,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(940), 1,
      sym_macro_parameter_name,
    STATE(526), 1,
      sym_macro_parameter,
    STATE(581), 1,
      sym__extra_block_comment,
  [27736] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    STATE(582), 1,
      sym__extra_block_comment,
    ACTIONS(1011), 2,
      aux_sym_char_token1,
      aux_sym_char_token2,
  [27750] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(827), 1,
      ts_builtin_sym_end,
    STATE(583), 1,
      sym__extra_block_comment,
  [27763] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1013), 1,
      anon_sym_RPAREN,
    STATE(584), 1,
      sym__extra_block_comment,
  [27776] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1015), 1,
      anon_sym_RPAREN,
    STATE(585), 1,
      sym__extra_block_comment,
  [27789] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1017), 1,
      anon_sym_RPAREN,
    STATE(586), 1,
      sym__extra_block_comment,
  [27802] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1019), 1,
      anon_sym_RPAREN,
    STATE(587), 1,
      sym__extra_block_comment,
  [27815] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1021), 1,
      anon_sym_SQUOTE,
    STATE(588), 1,
      sym__extra_block_comment,
  [27828] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1023), 1,
      ts_builtin_sym_end,
    STATE(589), 1,
      sym__extra_block_comment,
  [27841] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1025), 1,
      anon_sym_RPAREN,
    STATE(590), 1,
      sym__extra_block_comment,
  [27854] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1027), 1,
      anon_sym_RPAREN,
    STATE(591), 1,
      sym__extra_block_comment,
  [27867] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1029), 1,
      anon_sym_RPAREN,
    STATE(592), 1,
      sym__extra_block_comment,
  [27880] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1031), 1,
      anon_sym_RPAREN,
    STATE(593), 1,
      sym__extra_block_comment,
  [27893] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1033), 1,
      anon_sym_RPAREN,
    STATE(594), 1,
      sym__extra_block_comment,
  [27906] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1035), 1,
      anon_sym_RPAREN,
    STATE(595), 1,
      sym__extra_block_comment,
  [27919] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1037), 1,
      sym_macro_name,
    STATE(596), 1,
      sym__extra_block_comment,
  [27932] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1039), 1,
      anon_sym_RPAREN,
    STATE(597), 1,
      sym__extra_block_comment,
  [27945] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1041), 1,
      anon_sym_RPAREN,
    STATE(598), 1,
      sym__extra_block_comment,
  [27958] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(985), 1,
      ts_builtin_sym_end,
    STATE(599), 1,
      sym__extra_block_comment,
  [27971] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1043), 1,
      anon_sym_SQUOTE,
    STATE(600), 1,
      sym__extra_block_comment,
  [27984] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1045), 1,
      anon_sym_RPAREN,
    STATE(601), 1,
      sym__extra_block_comment,
  [27997] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1047), 1,
      anon_sym_RPAREN,
    STATE(602), 1,
      sym__extra_block_comment,
  [28010] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1049), 1,
      anon_sym_SQUOTE,
    STATE(603), 1,
      sym__extra_block_comment,
  [28023] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1051), 1,
      anon_sym_RPAREN,
    STATE(604), 1,
      sym__extra_block_comment,
  [28036] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(829), 1,
      aux_sym__statement_token1,
    STATE(605), 1,
      sym__extra_block_comment,
  [28049] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1053), 1,
      anon_sym_SQUOTE,
    STATE(606), 1,
      sym__extra_block_comment,
  [28062] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1055), 1,
      anon_sym_RPAREN,
    STATE(607), 1,
      sym__extra_block_comment,
  [28075] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1057), 1,
      anon_sym_RPAREN,
    STATE(608), 1,
      sym__extra_block_comment,
  [28088] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1059), 1,
      anon_sym_RPAREN,
    STATE(609), 1,
      sym__extra_block_comment,
  [28101] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1061), 1,
      anon_sym_LPAREN,
    STATE(610), 1,
      sym__extra_block_comment,
  [28114] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1063), 1,
      anon_sym_SQUOTE,
    STATE(611), 1,
      sym__extra_block_comment,
  [28127] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1065), 1,
      anon_sym_RPAREN,
    STATE(612), 1,
      sym__extra_block_comment,
  [28140] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1067), 1,
      anon_sym_SQUOTE,
    STATE(613), 1,
      sym__extra_block_comment,
  [28153] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1069), 1,
      anon_sym_RPAREN,
    STATE(614), 1,
      sym__extra_block_comment,
  [28166] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(291), 1,
      sym_macro_name,
    STATE(615), 1,
      sym__extra_block_comment,
  [28179] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1071), 1,
      anon_sym_RPAREN,
    STATE(616), 1,
      sym__extra_block_comment,
  [28192] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1073), 1,
      anon_sym_LPAREN,
    STATE(617), 1,
      sym__extra_block_comment,
  [28205] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1075), 1,
      anon_sym_LPAREN,
    STATE(618), 1,
      sym__extra_block_comment,
  [28218] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1077), 1,
      anon_sym_LPAREN,
    STATE(619), 1,
      sym__extra_block_comment,
  [28231] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1079), 1,
      anon_sym_LPAREN,
    STATE(620), 1,
      sym__extra_block_comment,
  [28244] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1081), 1,
      anon_sym_LPAREN,
    STATE(621), 1,
      sym__extra_block_comment,
  [28257] = 4,
    ACTIONS(3), 1,
      aux_sym__block_comment_token1,
    ACTIONS(5), 1,
      sym__operator_space,
    ACTIONS(1083), 1,
      anon_sym_RPAREN,
    STATE(622), 1,
      sym__extra_block_comment,
  [28270] = 1,
    ACTIONS(1085), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 155,
  [SMALL_STATE(5)] = 261,
  [SMALL_STATE(6)] = 411,
  [SMALL_STATE(7)] = 515,
  [SMALL_STATE(8)] = 664,
  [SMALL_STATE(9)] = 808,
  [SMALL_STATE(10)] = 952,
  [SMALL_STATE(11)] = 1105,
  [SMALL_STATE(12)] = 1250,
  [SMALL_STATE(13)] = 1395,
  [SMALL_STATE(14)] = 1541,
  [SMALL_STATE(15)] = 1684,
  [SMALL_STATE(16)] = 1824,
  [SMALL_STATE(17)] = 1964,
  [SMALL_STATE(18)] = 2101,
  [SMALL_STATE(19)] = 2238,
  [SMALL_STATE(20)] = 2368,
  [SMALL_STATE(21)] = 2498,
  [SMALL_STATE(22)] = 2628,
  [SMALL_STATE(23)] = 2758,
  [SMALL_STATE(24)] = 2888,
  [SMALL_STATE(25)] = 3018,
  [SMALL_STATE(26)] = 3141,
  [SMALL_STATE(27)] = 3264,
  [SMALL_STATE(28)] = 3387,
  [SMALL_STATE(29)] = 3510,
  [SMALL_STATE(30)] = 3633,
  [SMALL_STATE(31)] = 3756,
  [SMALL_STATE(32)] = 3879,
  [SMALL_STATE(33)] = 4002,
  [SMALL_STATE(34)] = 4125,
  [SMALL_STATE(35)] = 4244,
  [SMALL_STATE(36)] = 4363,
  [SMALL_STATE(37)] = 4486,
  [SMALL_STATE(38)] = 4609,
  [SMALL_STATE(39)] = 4732,
  [SMALL_STATE(40)] = 4855,
  [SMALL_STATE(41)] = 4978,
  [SMALL_STATE(42)] = 5101,
  [SMALL_STATE(43)] = 5224,
  [SMALL_STATE(44)] = 5347,
  [SMALL_STATE(45)] = 5470,
  [SMALL_STATE(46)] = 5593,
  [SMALL_STATE(47)] = 5716,
  [SMALL_STATE(48)] = 5839,
  [SMALL_STATE(49)] = 5962,
  [SMALL_STATE(50)] = 6085,
  [SMALL_STATE(51)] = 6208,
  [SMALL_STATE(52)] = 6331,
  [SMALL_STATE(53)] = 6454,
  [SMALL_STATE(54)] = 6577,
  [SMALL_STATE(55)] = 6700,
  [SMALL_STATE(56)] = 6823,
  [SMALL_STATE(57)] = 6946,
  [SMALL_STATE(58)] = 7069,
  [SMALL_STATE(59)] = 7192,
  [SMALL_STATE(60)] = 7315,
  [SMALL_STATE(61)] = 7438,
  [SMALL_STATE(62)] = 7561,
  [SMALL_STATE(63)] = 7684,
  [SMALL_STATE(64)] = 7807,
  [SMALL_STATE(65)] = 7930,
  [SMALL_STATE(66)] = 8053,
  [SMALL_STATE(67)] = 8176,
  [SMALL_STATE(68)] = 8299,
  [SMALL_STATE(69)] = 8422,
  [SMALL_STATE(70)] = 8541,
  [SMALL_STATE(71)] = 8660,
  [SMALL_STATE(72)] = 8783,
  [SMALL_STATE(73)] = 8902,
  [SMALL_STATE(74)] = 9021,
  [SMALL_STATE(75)] = 9140,
  [SMALL_STATE(76)] = 9259,
  [SMALL_STATE(77)] = 9378,
  [SMALL_STATE(78)] = 9497,
  [SMALL_STATE(79)] = 9616,
  [SMALL_STATE(80)] = 9737,
  [SMALL_STATE(81)] = 9856,
  [SMALL_STATE(82)] = 9975,
  [SMALL_STATE(83)] = 10094,
  [SMALL_STATE(84)] = 10213,
  [SMALL_STATE(85)] = 10332,
  [SMALL_STATE(86)] = 10451,
  [SMALL_STATE(87)] = 10570,
  [SMALL_STATE(88)] = 10689,
  [SMALL_STATE(89)] = 10808,
  [SMALL_STATE(90)] = 10927,
  [SMALL_STATE(91)] = 11048,
  [SMALL_STATE(92)] = 11171,
  [SMALL_STATE(93)] = 11294,
  [SMALL_STATE(94)] = 11417,
  [SMALL_STATE(95)] = 11536,
  [SMALL_STATE(96)] = 11655,
  [SMALL_STATE(97)] = 11778,
  [SMALL_STATE(98)] = 11901,
  [SMALL_STATE(99)] = 12024,
  [SMALL_STATE(100)] = 12143,
  [SMALL_STATE(101)] = 12262,
  [SMALL_STATE(102)] = 12385,
  [SMALL_STATE(103)] = 12508,
  [SMALL_STATE(104)] = 12627,
  [SMALL_STATE(105)] = 12746,
  [SMALL_STATE(106)] = 12869,
  [SMALL_STATE(107)] = 12992,
  [SMALL_STATE(108)] = 13115,
  [SMALL_STATE(109)] = 13238,
  [SMALL_STATE(110)] = 13361,
  [SMALL_STATE(111)] = 13484,
  [SMALL_STATE(112)] = 13607,
  [SMALL_STATE(113)] = 13726,
  [SMALL_STATE(114)] = 13788,
  [SMALL_STATE(115)] = 13850,
  [SMALL_STATE(116)] = 13912,
  [SMALL_STATE(117)] = 13971,
  [SMALL_STATE(118)] = 14030,
  [SMALL_STATE(119)] = 14089,
  [SMALL_STATE(120)] = 14148,
  [SMALL_STATE(121)] = 14207,
  [SMALL_STATE(122)] = 14256,
  [SMALL_STATE(123)] = 14305,
  [SMALL_STATE(124)] = 14350,
  [SMALL_STATE(125)] = 14398,
  [SMALL_STATE(126)] = 14436,
  [SMALL_STATE(127)] = 14484,
  [SMALL_STATE(128)] = 14528,
  [SMALL_STATE(129)] = 14572,
  [SMALL_STATE(130)] = 14611,
  [SMALL_STATE(131)] = 14648,
  [SMALL_STATE(132)] = 14687,
  [SMALL_STATE(133)] = 14724,
  [SMALL_STATE(134)] = 14763,
  [SMALL_STATE(135)] = 14800,
  [SMALL_STATE(136)] = 14839,
  [SMALL_STATE(137)] = 14876,
  [SMALL_STATE(138)] = 14919,
  [SMALL_STATE(139)] = 14958,
  [SMALL_STATE(140)] = 14995,
  [SMALL_STATE(141)] = 15032,
  [SMALL_STATE(142)] = 15071,
  [SMALL_STATE(143)] = 15108,
  [SMALL_STATE(144)] = 15147,
  [SMALL_STATE(145)] = 15184,
  [SMALL_STATE(146)] = 15223,
  [SMALL_STATE(147)] = 15266,
  [SMALL_STATE(148)] = 15303,
  [SMALL_STATE(149)] = 15346,
  [SMALL_STATE(150)] = 15383,
  [SMALL_STATE(151)] = 15420,
  [SMALL_STATE(152)] = 15457,
  [SMALL_STATE(153)] = 15496,
  [SMALL_STATE(154)] = 15533,
  [SMALL_STATE(155)] = 15570,
  [SMALL_STATE(156)] = 15607,
  [SMALL_STATE(157)] = 15644,
  [SMALL_STATE(158)] = 15683,
  [SMALL_STATE(159)] = 15722,
  [SMALL_STATE(160)] = 15761,
  [SMALL_STATE(161)] = 15800,
  [SMALL_STATE(162)] = 15839,
  [SMALL_STATE(163)] = 15878,
  [SMALL_STATE(164)] = 15917,
  [SMALL_STATE(165)] = 15954,
  [SMALL_STATE(166)] = 15991,
  [SMALL_STATE(167)] = 16030,
  [SMALL_STATE(168)] = 16067,
  [SMALL_STATE(169)] = 16104,
  [SMALL_STATE(170)] = 16141,
  [SMALL_STATE(171)] = 16178,
  [SMALL_STATE(172)] = 16215,
  [SMALL_STATE(173)] = 16252,
  [SMALL_STATE(174)] = 16289,
  [SMALL_STATE(175)] = 16327,
  [SMALL_STATE(176)] = 16363,
  [SMALL_STATE(177)] = 16399,
  [SMALL_STATE(178)] = 16435,
  [SMALL_STATE(179)] = 16471,
  [SMALL_STATE(180)] = 16507,
  [SMALL_STATE(181)] = 16543,
  [SMALL_STATE(182)] = 16581,
  [SMALL_STATE(183)] = 16617,
  [SMALL_STATE(184)] = 16655,
  [SMALL_STATE(185)] = 16691,
  [SMALL_STATE(186)] = 16729,
  [SMALL_STATE(187)] = 16765,
  [SMALL_STATE(188)] = 16803,
  [SMALL_STATE(189)] = 16839,
  [SMALL_STATE(190)] = 16877,
  [SMALL_STATE(191)] = 16913,
  [SMALL_STATE(192)] = 16951,
  [SMALL_STATE(193)] = 16987,
  [SMALL_STATE(194)] = 17025,
  [SMALL_STATE(195)] = 17061,
  [SMALL_STATE(196)] = 17097,
  [SMALL_STATE(197)] = 17135,
  [SMALL_STATE(198)] = 17171,
  [SMALL_STATE(199)] = 17207,
  [SMALL_STATE(200)] = 17243,
  [SMALL_STATE(201)] = 17283,
  [SMALL_STATE(202)] = 17319,
  [SMALL_STATE(203)] = 17355,
  [SMALL_STATE(204)] = 17391,
  [SMALL_STATE(205)] = 17427,
  [SMALL_STATE(206)] = 17463,
  [SMALL_STATE(207)] = 17499,
  [SMALL_STATE(208)] = 17535,
  [SMALL_STATE(209)] = 17573,
  [SMALL_STATE(210)] = 17611,
  [SMALL_STATE(211)] = 17649,
  [SMALL_STATE(212)] = 17687,
  [SMALL_STATE(213)] = 17725,
  [SMALL_STATE(214)] = 17763,
  [SMALL_STATE(215)] = 17801,
  [SMALL_STATE(216)] = 17839,
  [SMALL_STATE(217)] = 17875,
  [SMALL_STATE(218)] = 17910,
  [SMALL_STATE(219)] = 17945,
  [SMALL_STATE(220)] = 17978,
  [SMALL_STATE(221)] = 18013,
  [SMALL_STATE(222)] = 18046,
  [SMALL_STATE(223)] = 18081,
  [SMALL_STATE(224)] = 18114,
  [SMALL_STATE(225)] = 18149,
  [SMALL_STATE(226)] = 18182,
  [SMALL_STATE(227)] = 18217,
  [SMALL_STATE(228)] = 18250,
  [SMALL_STATE(229)] = 18283,
  [SMALL_STATE(230)] = 18316,
  [SMALL_STATE(231)] = 18349,
  [SMALL_STATE(232)] = 18382,
  [SMALL_STATE(233)] = 18417,
  [SMALL_STATE(234)] = 18452,
  [SMALL_STATE(235)] = 18487,
  [SMALL_STATE(236)] = 18520,
  [SMALL_STATE(237)] = 18555,
  [SMALL_STATE(238)] = 18590,
  [SMALL_STATE(239)] = 18625,
  [SMALL_STATE(240)] = 18660,
  [SMALL_STATE(241)] = 18693,
  [SMALL_STATE(242)] = 18726,
  [SMALL_STATE(243)] = 18759,
  [SMALL_STATE(244)] = 18792,
  [SMALL_STATE(245)] = 18825,
  [SMALL_STATE(246)] = 18858,
  [SMALL_STATE(247)] = 18891,
  [SMALL_STATE(248)] = 18924,
  [SMALL_STATE(249)] = 18957,
  [SMALL_STATE(250)] = 18990,
  [SMALL_STATE(251)] = 19025,
  [SMALL_STATE(252)] = 19058,
  [SMALL_STATE(253)] = 19093,
  [SMALL_STATE(254)] = 19126,
  [SMALL_STATE(255)] = 19161,
  [SMALL_STATE(256)] = 19194,
  [SMALL_STATE(257)] = 19229,
  [SMALL_STATE(258)] = 19269,
  [SMALL_STATE(259)] = 19313,
  [SMALL_STATE(260)] = 19357,
  [SMALL_STATE(261)] = 19397,
  [SMALL_STATE(262)] = 19437,
  [SMALL_STATE(263)] = 19477,
  [SMALL_STATE(264)] = 19514,
  [SMALL_STATE(265)] = 19553,
  [SMALL_STATE(266)] = 19583,
  [SMALL_STATE(267)] = 19613,
  [SMALL_STATE(268)] = 19645,
  [SMALL_STATE(269)] = 19677,
  [SMALL_STATE(270)] = 19709,
  [SMALL_STATE(271)] = 19741,
  [SMALL_STATE(272)] = 19773,
  [SMALL_STATE(273)] = 19805,
  [SMALL_STATE(274)] = 19837,
  [SMALL_STATE(275)] = 19871,
  [SMALL_STATE(276)] = 19903,
  [SMALL_STATE(277)] = 19937,
  [SMALL_STATE(278)] = 19969,
  [SMALL_STATE(279)] = 20001,
  [SMALL_STATE(280)] = 20033,
  [SMALL_STATE(281)] = 20065,
  [SMALL_STATE(282)] = 20097,
  [SMALL_STATE(283)] = 20131,
  [SMALL_STATE(284)] = 20165,
  [SMALL_STATE(285)] = 20199,
  [SMALL_STATE(286)] = 20233,
  [SMALL_STATE(287)] = 20267,
  [SMALL_STATE(288)] = 20301,
  [SMALL_STATE(289)] = 20335,
  [SMALL_STATE(290)] = 20369,
  [SMALL_STATE(291)] = 20403,
  [SMALL_STATE(292)] = 20435,
  [SMALL_STATE(293)] = 20467,
  [SMALL_STATE(294)] = 20499,
  [SMALL_STATE(295)] = 20531,
  [SMALL_STATE(296)] = 20563,
  [SMALL_STATE(297)] = 20595,
  [SMALL_STATE(298)] = 20629,
  [SMALL_STATE(299)] = 20661,
  [SMALL_STATE(300)] = 20695,
  [SMALL_STATE(301)] = 20727,
  [SMALL_STATE(302)] = 20761,
  [SMALL_STATE(303)] = 20793,
  [SMALL_STATE(304)] = 20827,
  [SMALL_STATE(305)] = 20859,
  [SMALL_STATE(306)] = 20893,
  [SMALL_STATE(307)] = 20925,
  [SMALL_STATE(308)] = 20959,
  [SMALL_STATE(309)] = 20989,
  [SMALL_STATE(310)] = 21019,
  [SMALL_STATE(311)] = 21049,
  [SMALL_STATE(312)] = 21079,
  [SMALL_STATE(313)] = 21109,
  [SMALL_STATE(314)] = 21141,
  [SMALL_STATE(315)] = 21171,
  [SMALL_STATE(316)] = 21203,
  [SMALL_STATE(317)] = 21233,
  [SMALL_STATE(318)] = 21265,
  [SMALL_STATE(319)] = 21295,
  [SMALL_STATE(320)] = 21327,
  [SMALL_STATE(321)] = 21357,
  [SMALL_STATE(322)] = 21389,
  [SMALL_STATE(323)] = 21419,
  [SMALL_STATE(324)] = 21451,
  [SMALL_STATE(325)] = 21481,
  [SMALL_STATE(326)] = 21513,
  [SMALL_STATE(327)] = 21543,
  [SMALL_STATE(328)] = 21575,
  [SMALL_STATE(329)] = 21605,
  [SMALL_STATE(330)] = 21637,
  [SMALL_STATE(331)] = 21667,
  [SMALL_STATE(332)] = 21701,
  [SMALL_STATE(333)] = 21733,
  [SMALL_STATE(334)] = 21763,
  [SMALL_STATE(335)] = 21793,
  [SMALL_STATE(336)] = 21823,
  [SMALL_STATE(337)] = 21853,
  [SMALL_STATE(338)] = 21885,
  [SMALL_STATE(339)] = 21917,
  [SMALL_STATE(340)] = 21949,
  [SMALL_STATE(341)] = 21981,
  [SMALL_STATE(342)] = 22013,
  [SMALL_STATE(343)] = 22045,
  [SMALL_STATE(344)] = 22077,
  [SMALL_STATE(345)] = 22109,
  [SMALL_STATE(346)] = 22141,
  [SMALL_STATE(347)] = 22171,
  [SMALL_STATE(348)] = 22201,
  [SMALL_STATE(349)] = 22231,
  [SMALL_STATE(350)] = 22272,
  [SMALL_STATE(351)] = 22313,
  [SMALL_STATE(352)] = 22349,
  [SMALL_STATE(353)] = 22379,
  [SMALL_STATE(354)] = 22409,
  [SMALL_STATE(355)] = 22439,
  [SMALL_STATE(356)] = 22468,
  [SMALL_STATE(357)] = 22499,
  [SMALL_STATE(358)] = 22530,
  [SMALL_STATE(359)] = 22559,
  [SMALL_STATE(360)] = 22588,
  [SMALL_STATE(361)] = 22617,
  [SMALL_STATE(362)] = 22646,
  [SMALL_STATE(363)] = 22675,
  [SMALL_STATE(364)] = 22706,
  [SMALL_STATE(365)] = 22737,
  [SMALL_STATE(366)] = 22766,
  [SMALL_STATE(367)] = 22797,
  [SMALL_STATE(368)] = 22828,
  [SMALL_STATE(369)] = 22857,
  [SMALL_STATE(370)] = 22888,
  [SMALL_STATE(371)] = 22917,
  [SMALL_STATE(372)] = 22948,
  [SMALL_STATE(373)] = 22977,
  [SMALL_STATE(374)] = 23006,
  [SMALL_STATE(375)] = 23037,
  [SMALL_STATE(376)] = 23066,
  [SMALL_STATE(377)] = 23095,
  [SMALL_STATE(378)] = 23124,
  [SMALL_STATE(379)] = 23153,
  [SMALL_STATE(380)] = 23182,
  [SMALL_STATE(381)] = 23213,
  [SMALL_STATE(382)] = 23244,
  [SMALL_STATE(383)] = 23275,
  [SMALL_STATE(384)] = 23306,
  [SMALL_STATE(385)] = 23337,
  [SMALL_STATE(386)] = 23366,
  [SMALL_STATE(387)] = 23397,
  [SMALL_STATE(388)] = 23426,
  [SMALL_STATE(389)] = 23455,
  [SMALL_STATE(390)] = 23486,
  [SMALL_STATE(391)] = 23515,
  [SMALL_STATE(392)] = 23546,
  [SMALL_STATE(393)] = 23575,
  [SMALL_STATE(394)] = 23604,
  [SMALL_STATE(395)] = 23635,
  [SMALL_STATE(396)] = 23666,
  [SMALL_STATE(397)] = 23695,
  [SMALL_STATE(398)] = 23726,
  [SMALL_STATE(399)] = 23757,
  [SMALL_STATE(400)] = 23786,
  [SMALL_STATE(401)] = 23817,
  [SMALL_STATE(402)] = 23848,
  [SMALL_STATE(403)] = 23877,
  [SMALL_STATE(404)] = 23910,
  [SMALL_STATE(405)] = 23943,
  [SMALL_STATE(406)] = 23974,
  [SMALL_STATE(407)] = 24007,
  [SMALL_STATE(408)] = 24039,
  [SMALL_STATE(409)] = 24071,
  [SMALL_STATE(410)] = 24101,
  [SMALL_STATE(411)] = 24133,
  [SMALL_STATE(412)] = 24159,
  [SMALL_STATE(413)] = 24189,
  [SMALL_STATE(414)] = 24222,
  [SMALL_STATE(415)] = 24251,
  [SMALL_STATE(416)] = 24274,
  [SMALL_STATE(417)] = 24307,
  [SMALL_STATE(418)] = 24330,
  [SMALL_STATE(419)] = 24357,
  [SMALL_STATE(420)] = 24382,
  [SMALL_STATE(421)] = 24408,
  [SMALL_STATE(422)] = 24440,
  [SMALL_STATE(423)] = 24462,
  [SMALL_STATE(424)] = 24490,
  [SMALL_STATE(425)] = 24518,
  [SMALL_STATE(426)] = 24544,
  [SMALL_STATE(427)] = 24576,
  [SMALL_STATE(428)] = 24608,
  [SMALL_STATE(429)] = 24630,
  [SMALL_STATE(430)] = 24654,
  [SMALL_STATE(431)] = 24681,
  [SMALL_STATE(432)] = 24706,
  [SMALL_STATE(433)] = 24737,
  [SMALL_STATE(434)] = 24758,
  [SMALL_STATE(435)] = 24779,
  [SMALL_STATE(436)] = 24800,
  [SMALL_STATE(437)] = 24821,
  [SMALL_STATE(438)] = 24848,
  [SMALL_STATE(439)] = 24873,
  [SMALL_STATE(440)] = 24894,
  [SMALL_STATE(441)] = 24925,
  [SMALL_STATE(442)] = 24948,
  [SMALL_STATE(443)] = 24969,
  [SMALL_STATE(444)] = 24990,
  [SMALL_STATE(445)] = 25011,
  [SMALL_STATE(446)] = 25032,
  [SMALL_STATE(447)] = 25052,
  [SMALL_STATE(448)] = 25072,
  [SMALL_STATE(449)] = 25092,
  [SMALL_STATE(450)] = 25112,
  [SMALL_STATE(451)] = 25132,
  [SMALL_STATE(452)] = 25158,
  [SMALL_STATE(453)] = 25186,
  [SMALL_STATE(454)] = 25208,
  [SMALL_STATE(455)] = 25236,
  [SMALL_STATE(456)] = 25260,
  [SMALL_STATE(457)] = 25284,
  [SMALL_STATE(458)] = 25304,
  [SMALL_STATE(459)] = 25332,
  [SMALL_STATE(460)] = 25352,
  [SMALL_STATE(461)] = 25374,
  [SMALL_STATE(462)] = 25399,
  [SMALL_STATE(463)] = 25426,
  [SMALL_STATE(464)] = 25451,
  [SMALL_STATE(465)] = 25472,
  [SMALL_STATE(466)] = 25491,
  [SMALL_STATE(467)] = 25520,
  [SMALL_STATE(468)] = 25545,
  [SMALL_STATE(469)] = 25574,
  [SMALL_STATE(470)] = 25599,
  [SMALL_STATE(471)] = 25624,
  [SMALL_STATE(472)] = 25643,
  [SMALL_STATE(473)] = 25670,
  [SMALL_STATE(474)] = 25689,
  [SMALL_STATE(475)] = 25714,
  [SMALL_STATE(476)] = 25735,
  [SMALL_STATE(477)] = 25754,
  [SMALL_STATE(478)] = 25778,
  [SMALL_STATE(479)] = 25796,
  [SMALL_STATE(480)] = 25818,
  [SMALL_STATE(481)] = 25836,
  [SMALL_STATE(482)] = 25854,
  [SMALL_STATE(483)] = 25872,
  [SMALL_STATE(484)] = 25890,
  [SMALL_STATE(485)] = 25914,
  [SMALL_STATE(486)] = 25932,
  [SMALL_STATE(487)] = 25954,
  [SMALL_STATE(488)] = 25976,
  [SMALL_STATE(489)] = 25993,
  [SMALL_STATE(490)] = 26010,
  [SMALL_STATE(491)] = 26031,
  [SMALL_STATE(492)] = 26048,
  [SMALL_STATE(493)] = 26065,
  [SMALL_STATE(494)] = 26082,
  [SMALL_STATE(495)] = 26105,
  [SMALL_STATE(496)] = 26126,
  [SMALL_STATE(497)] = 26147,
  [SMALL_STATE(498)] = 26164,
  [SMALL_STATE(499)] = 26187,
  [SMALL_STATE(500)] = 26210,
  [SMALL_STATE(501)] = 26227,
  [SMALL_STATE(502)] = 26244,
  [SMALL_STATE(503)] = 26261,
  [SMALL_STATE(504)] = 26278,
  [SMALL_STATE(505)] = 26295,
  [SMALL_STATE(506)] = 26316,
  [SMALL_STATE(507)] = 26333,
  [SMALL_STATE(508)] = 26354,
  [SMALL_STATE(509)] = 26375,
  [SMALL_STATE(510)] = 26398,
  [SMALL_STATE(511)] = 26417,
  [SMALL_STATE(512)] = 26436,
  [SMALL_STATE(513)] = 26453,
  [SMALL_STATE(514)] = 26476,
  [SMALL_STATE(515)] = 26493,
  [SMALL_STATE(516)] = 26516,
  [SMALL_STATE(517)] = 26539,
  [SMALL_STATE(518)] = 26560,
  [SMALL_STATE(519)] = 26581,
  [SMALL_STATE(520)] = 26604,
  [SMALL_STATE(521)] = 26627,
  [SMALL_STATE(522)] = 26646,
  [SMALL_STATE(523)] = 26669,
  [SMALL_STATE(524)] = 26686,
  [SMALL_STATE(525)] = 26707,
  [SMALL_STATE(526)] = 26723,
  [SMALL_STATE(527)] = 26739,
  [SMALL_STATE(528)] = 26761,
  [SMALL_STATE(529)] = 26777,
  [SMALL_STATE(530)] = 26795,
  [SMALL_STATE(531)] = 26817,
  [SMALL_STATE(532)] = 26839,
  [SMALL_STATE(533)] = 26861,
  [SMALL_STATE(534)] = 26877,
  [SMALL_STATE(535)] = 26899,
  [SMALL_STATE(536)] = 26915,
  [SMALL_STATE(537)] = 26937,
  [SMALL_STATE(538)] = 26953,
  [SMALL_STATE(539)] = 26975,
  [SMALL_STATE(540)] = 26997,
  [SMALL_STATE(541)] = 27019,
  [SMALL_STATE(542)] = 27035,
  [SMALL_STATE(543)] = 27057,
  [SMALL_STATE(544)] = 27079,
  [SMALL_STATE(545)] = 27101,
  [SMALL_STATE(546)] = 27123,
  [SMALL_STATE(547)] = 27139,
  [SMALL_STATE(548)] = 27161,
  [SMALL_STATE(549)] = 27183,
  [SMALL_STATE(550)] = 27199,
  [SMALL_STATE(551)] = 27221,
  [SMALL_STATE(552)] = 27243,
  [SMALL_STATE(553)] = 27259,
  [SMALL_STATE(554)] = 27275,
  [SMALL_STATE(555)] = 27294,
  [SMALL_STATE(556)] = 27313,
  [SMALL_STATE(557)] = 27332,
  [SMALL_STATE(558)] = 27349,
  [SMALL_STATE(559)] = 27368,
  [SMALL_STATE(560)] = 27385,
  [SMALL_STATE(561)] = 27400,
  [SMALL_STATE(562)] = 27419,
  [SMALL_STATE(563)] = 27438,
  [SMALL_STATE(564)] = 27457,
  [SMALL_STATE(565)] = 27476,
  [SMALL_STATE(566)] = 27495,
  [SMALL_STATE(567)] = 27514,
  [SMALL_STATE(568)] = 27530,
  [SMALL_STATE(569)] = 27544,
  [SMALL_STATE(570)] = 27558,
  [SMALL_STATE(571)] = 27574,
  [SMALL_STATE(572)] = 27588,
  [SMALL_STATE(573)] = 27602,
  [SMALL_STATE(574)] = 27616,
  [SMALL_STATE(575)] = 27630,
  [SMALL_STATE(576)] = 27644,
  [SMALL_STATE(577)] = 27658,
  [SMALL_STATE(578)] = 27672,
  [SMALL_STATE(579)] = 27688,
  [SMALL_STATE(580)] = 27704,
  [SMALL_STATE(581)] = 27720,
  [SMALL_STATE(582)] = 27736,
  [SMALL_STATE(583)] = 27750,
  [SMALL_STATE(584)] = 27763,
  [SMALL_STATE(585)] = 27776,
  [SMALL_STATE(586)] = 27789,
  [SMALL_STATE(587)] = 27802,
  [SMALL_STATE(588)] = 27815,
  [SMALL_STATE(589)] = 27828,
  [SMALL_STATE(590)] = 27841,
  [SMALL_STATE(591)] = 27854,
  [SMALL_STATE(592)] = 27867,
  [SMALL_STATE(593)] = 27880,
  [SMALL_STATE(594)] = 27893,
  [SMALL_STATE(595)] = 27906,
  [SMALL_STATE(596)] = 27919,
  [SMALL_STATE(597)] = 27932,
  [SMALL_STATE(598)] = 27945,
  [SMALL_STATE(599)] = 27958,
  [SMALL_STATE(600)] = 27971,
  [SMALL_STATE(601)] = 27984,
  [SMALL_STATE(602)] = 27997,
  [SMALL_STATE(603)] = 28010,
  [SMALL_STATE(604)] = 28023,
  [SMALL_STATE(605)] = 28036,
  [SMALL_STATE(606)] = 28049,
  [SMALL_STATE(607)] = 28062,
  [SMALL_STATE(608)] = 28075,
  [SMALL_STATE(609)] = 28088,
  [SMALL_STATE(610)] = 28101,
  [SMALL_STATE(611)] = 28114,
  [SMALL_STATE(612)] = 28127,
  [SMALL_STATE(613)] = 28140,
  [SMALL_STATE(614)] = 28153,
  [SMALL_STATE(615)] = 28166,
  [SMALL_STATE(616)] = 28179,
  [SMALL_STATE(617)] = 28192,
  [SMALL_STATE(618)] = 28205,
  [SMALL_STATE(619)] = 28218,
  [SMALL_STATE(620)] = 28231,
  [SMALL_STATE(621)] = 28244,
  [SMALL_STATE(622)] = 28257,
  [SMALL_STATE(623)] = 28270,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(623),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(481),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_operands_repeat2, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(618),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive, 2, 0, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(610),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(569),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(572),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(474),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(481),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(482),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(478),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(480),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(440),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_operands, 2, 0, 8),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_operands, 3, 0, 12),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(617),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(604),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(619),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(601),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(607),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(622),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(612),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(620),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(621),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 1, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__label, 2, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__label, 2, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__additive_expression, 3, 0, 20),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__additive_expression, 3, 0, 20),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__concat_string, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_expression, 1, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_expression, 1, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_comment, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__block_comment, 1, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 11),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 11),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__shift_expression, 3, 0, 20),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__shift_expression, 3, 0, 20),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 10),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 10),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 10),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 10),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_relational_expression, 1, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 10),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_additive_expression, 1, 0, 10),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_shift_expression, 1, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 10),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 10),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_multiplicative_expression, 1, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 10),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 10),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 10),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 10),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_and_expression, 1, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 10),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 10),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_or_expression, 1, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 10),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 10),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 10),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_logical_or_expression, 1, 0, 10),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 1, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_xor_expression, 1, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 17),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 17),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 13),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 13),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 18),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 18),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logical_or_expression, 3, 0, 20),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__logical_or_expression, 3, 0, 20),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logical_and_expression, 3, 0, 20),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__logical_and_expression, 3, 0, 20),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_or_expression, 3, 0, 20),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_or_expression, 3, 0, 20),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_xor_expression, 3, 0, 20),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_xor_expression, 3, 0, 20),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__bitwise_and_expression, 3, 0, 20),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__bitwise_and_expression, 3, 0, 20),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__equality_expression, 3, 0, 20),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__equality_expression, 3, 0, 20),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__relational_expression, 3, 0, 20),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__relational_expression, 3, 0, 20),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 10),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_equality_expression, 1, 0, 10),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 10),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_assignment_expression, 1, 0, 10),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__wrapped_bitwise_and_expression, 1, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiplicative_expression, 3, 0, 20),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiplicative_expression, 3, 0, 20),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relocation_expression, 4, 0, 24),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relocation_expression, 4, 0, 24),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 25),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 25),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 26),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 26),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_label_reference, 1, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_label_reference, 1, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__assignment_expression, 3, 0, 20),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__assignment_expression, 3, 0, 20),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(522),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(494),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiplicative_operator, 1, 0, 0),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiplicative_operator, 1, 0, 0),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_operator, 1, 0, 0),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_operator, 1, 0, 0),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__modulo_operator, 1, 0, 0),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__modulo_operator, 1, 0, 0),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive_operand, 1, 0, 0),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_operands, 1, 0, 6),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction_operand, 1, 0, 6),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_operands, 2, 0, 14),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_operands_repeat1, 2, 0, 12),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_operands_repeat1, 2, 0, 12), SHIFT_REPEAT(7),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_operands_repeat1, 2, 0, 12), SHIFT_REPEAT(11),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 1, 0, 0),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(561),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameter, 3, 0, 29),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameter, 3, 0, 29),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameter, 4, 0, 30),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameter, 4, 0, 30),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameters, 2, 0, 0),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0),
  [673] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(498),
  [676] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(438),
  [679] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(438),
  [682] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(561),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_operands, 1, 0, 8),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameter, 1, 0, 15),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameter, 1, 0, 15),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(453),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 4, 0, 5),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 4, 0, 5),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(551),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__concat_string, 2, 0, 0),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__concat_string, 3, 0, 0),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_operands_repeat1, 3, 0, 27),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_operands, 2, 0, 12),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 1, 0, 0),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 1, 0, 0),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(431),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__concat_string, 2, 0, 0), REDUCE(sym__concat_string, 3, 0, 0),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 1),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 1),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_operands_repeat1, 2, 0, 12),
  [738] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_operands_repeat1, 2, 0, 12), SHIFT_REPEAT(17),
  [741] = {.entry = {.count = 3, .reusable = true}}, REDUCE(sym__concat_string, 2, 0, 0), REDUCE(sym__concat_string, 3, 0, 0), REDUCE(sym__concat_string, 4, 0, 0),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elf_type_tag, 1, 0, 0),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_flag, 1, 0, 0),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_operands_repeat1, 2, 0, 22),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_instruction_operands_repeat1, 2, 0, 19),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_parameter, 2, 0, 23),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_parameter, 2, 0, 23),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_operands, 2, 0, 6),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_operands, 3, 0, 14),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_operands_repeat2, 2, 0, 0),
  [771] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_operands_repeat2, 2, 0, 0), SHIFT_REPEAT(476),
  [774] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__instruction_operand, 1, 0, 6), SHIFT(204),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive, 1, 0, 1),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__directive, 1, 0, 1),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(520),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(479),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 3, 0, 5),
  [793] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 3, 0, 5),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(527),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 3, 0, 0),
  [803] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(520),
  [806] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(479),
  [809] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(479),
  [812] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(558),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_macro_parameters_repeat1, 4, 0, 0),
  [817] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_macro_parameters_repeat1, 4, 0, 0),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 1, 0, 1),
  [821] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__macro_directive, 1, 0, 1),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(615),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_mnemonic, 1, 0, 0),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_mnemonic, 1, 0, 0),
  [837] = {.entry = {.count = 1, .reusable = false}}, SHIFT(487),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_mnemonic, 1, 0, 0),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_mnemonic, 1, 0, 0),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_mnemonic, 1, 0, 0),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_mnemonic, 1, 0, 0),
  [849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_mnemonic, 1, 0, 0),
  [851] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(510),
  [855] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 3),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 16),
  [859] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 2),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 9),
  [863] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 2, 0, 0),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(591),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(592),
  [869] = {.entry = {.count = 1, .reusable = false}}, SHIFT(483),
  [871] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [873] = {.entry = {.count = 1, .reusable = false}}, SHIFT(485),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 7, 0, 28),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(564),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 6, 0, 5),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 4),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 5),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 3, 0, 0),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__macro_directive, 5, 0, 16),
  [895] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 3, 0, 13),
  [899] = {.entry = {.count = 1, .reusable = false}}, SHIFT(568),
  [901] = {.entry = {.count = 1, .reusable = false}}, SHIFT(573),
  [903] = {.entry = {.count = 1, .reusable = false}}, SHIFT(602),
  [905] = {.entry = {.count = 1, .reusable = false}}, SHIFT(593),
  [907] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [909] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [911] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(549),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 7),
  [916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(590),
  [918] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__call_expression, 4, 0, 21),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [924] = {.entry = {.count = 1, .reusable = false}}, SHIFT(595),
  [926] = {.entry = {.count = 1, .reusable = false}}, SHIFT(597),
  [928] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [930] = {.entry = {.count = 1, .reusable = false}}, SHIFT(428),
  [932] = {.entry = {.count = 1, .reusable = false}}, SHIFT(608),
  [934] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [936] = {.entry = {.count = 1, .reusable = false}}, SHIFT(541),
  [938] = {.entry = {.count = 1, .reusable = false}}, SHIFT(554),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [942] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_instruction_operands_repeat1, 2, 0, 12), SHIFT_REPEAT(18),
  [945] = {.entry = {.count = 1, .reusable = false}}, SHIFT(584),
  [947] = {.entry = {.count = 1, .reusable = false}}, SHIFT(585),
  [949] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive, 3, 0, 7),
  [951] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(502),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [979] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1, 0, 0),
  [981] = {.entry = {.count = 1, .reusable = false}}, SHIFT(500),
  [983] = {.entry = {.count = 1, .reusable = false}}, SHIFT(581),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 0),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [989] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [991] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_comment, 1, 0, 0),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT(580),
  [995] = {.entry = {.count = 1, .reusable = false}}, SHIFT(570),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1001] = {.entry = {.count = 1, .reusable = false}}, SHIFT(600),
  [1003] = {.entry = {.count = 1, .reusable = false}}, SHIFT(606),
  [1005] = {.entry = {.count = 1, .reusable = false}}, SHIFT(611),
  [1007] = {.entry = {.count = 1, .reusable = false}}, SHIFT(603),
  [1009] = {.entry = {.count = 1, .reusable = false}}, SHIFT(613),
  [1011] = {.entry = {.count = 1, .reusable = false}}, SHIFT(588),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1023] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__extra_block_comment, 1, 0, 0),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__operand_separator = 0,
  ts_external_token__operator_space = 1,
  ts_external_token__statement_separator_no_comment = 2,
  ts_external_token__multiline_operand_separator_no_comment = 3,
  ts_external_token__statement_separator_with_comment = 4,
  ts_external_token__multiline_operand_separator_with_comment = 5,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__operand_separator] = sym__operand_separator,
  [ts_external_token__operator_space] = sym__operator_space,
  [ts_external_token__statement_separator_no_comment] = sym__statement_separator_no_comment,
  [ts_external_token__multiline_operand_separator_no_comment] = sym__multiline_operand_separator_no_comment,
  [ts_external_token__statement_separator_with_comment] = sym__statement_separator_with_comment,
  [ts_external_token__multiline_operand_separator_with_comment] = sym__multiline_operand_separator_with_comment,
};

static const bool ts_external_scanner_states[8][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__operand_separator] = true,
    [ts_external_token__operator_space] = true,
    [ts_external_token__statement_separator_no_comment] = true,
    [ts_external_token__multiline_operand_separator_no_comment] = true,
    [ts_external_token__statement_separator_with_comment] = true,
    [ts_external_token__multiline_operand_separator_with_comment] = true,
  },
  [2] = {
    [ts_external_token__operator_space] = true,
  },
  [3] = {
    [ts_external_token__operator_space] = true,
    [ts_external_token__statement_separator_no_comment] = true,
    [ts_external_token__multiline_operand_separator_no_comment] = true,
    [ts_external_token__statement_separator_with_comment] = true,
    [ts_external_token__multiline_operand_separator_with_comment] = true,
  },
  [4] = {
    [ts_external_token__operator_space] = true,
    [ts_external_token__statement_separator_no_comment] = true,
    [ts_external_token__statement_separator_with_comment] = true,
  },
  [5] = {
    [ts_external_token__operator_space] = true,
    [ts_external_token__multiline_operand_separator_no_comment] = true,
    [ts_external_token__multiline_operand_separator_with_comment] = true,
  },
  [6] = {
    [ts_external_token__operand_separator] = true,
    [ts_external_token__operator_space] = true,
    [ts_external_token__statement_separator_no_comment] = true,
    [ts_external_token__statement_separator_with_comment] = true,
    [ts_external_token__multiline_operand_separator_with_comment] = true,
  },
  [7] = {
    [ts_external_token__operand_separator] = true,
    [ts_external_token__operator_space] = true,
    [ts_external_token__multiline_operand_separator_with_comment] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_mips_external_scanner_create(void);
void tree_sitter_mips_external_scanner_destroy(void *);
bool tree_sitter_mips_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_mips_external_scanner_serialize(void *, char *);
void tree_sitter_mips_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_mips(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_mips_external_scanner_create,
      tree_sitter_mips_external_scanner_destroy,
      tree_sitter_mips_external_scanner_scan,
      tree_sitter_mips_external_scanner_serialize,
      tree_sitter_mips_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
