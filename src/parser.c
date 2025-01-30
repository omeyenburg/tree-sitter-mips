#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  anon_sym_SEMI = 2,
  aux_sym__statement_wrapper_token1 = 3,
  anon_sym_SPACE = 4,
  sym_comment = 5,
  aux_sym__statement_token1 = 6,
  aux_sym_directive_token1 = 7,
  sym_meta = 8,
  aux_sym_attributes_token1 = 9,
  sym_macro = 10,
  sym_label = 11,
  sym_opcode = 12,
  sym_macro_variable = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  sym__char = 16,
  sym__string = 17,
  sym__octal = 18,
  sym__decimal = 19,
  sym__hexadecimal = 20,
  aux_sym__float_token1 = 21,
  aux_sym__float_token2 = 22,
  aux_sym__float_token3 = 23,
  aux_sym__float_token4 = 24,
  sym__register = 25,
  sym__identifier = 26,
  sym_program = 27,
  sym__statement_wrapper = 28,
  sym__comment_wrapper = 29,
  sym__statement = 30,
  sym_directive = 31,
  sym_attributes = 32,
  sym_instruction = 33,
  sym_operands = 34,
  sym__operand = 35,
  sym__number = 36,
  sym_address = 37,
  sym__float = 38,
  sym_char = 39,
  sym_string = 40,
  sym_octal = 41,
  sym_decimal = 42,
  sym_hexadecimal = 43,
  sym_float = 44,
  sym_register = 45,
  aux_sym_program_repeat1 = 46,
  aux_sym__comment_wrapper_repeat1 = 47,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [aux_sym__statement_wrapper_token1] = "_statement_wrapper_token1",
  [anon_sym_SPACE] = " ",
  [sym_comment] = "comment",
  [aux_sym__statement_token1] = "_statement_token1",
  [aux_sym_directive_token1] = "directive_token1",
  [sym_meta] = "meta",
  [aux_sym_attributes_token1] = "attributes_token1",
  [sym_macro] = "macro",
  [sym_label] = "label",
  [sym_opcode] = "opcode",
  [sym_macro_variable] = "macro_variable",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym__char] = "_char",
  [sym__string] = "_string",
  [sym__octal] = "_octal",
  [sym__decimal] = "_decimal",
  [sym__hexadecimal] = "_hexadecimal",
  [aux_sym__float_token1] = "_float_token1",
  [aux_sym__float_token2] = "_float_token2",
  [aux_sym__float_token3] = "_float_token3",
  [aux_sym__float_token4] = "_float_token4",
  [sym__register] = "_register",
  [sym__identifier] = "_identifier",
  [sym_program] = "program",
  [sym__statement_wrapper] = "_statement_wrapper",
  [sym__comment_wrapper] = "_comment_wrapper",
  [sym__statement] = "_statement",
  [sym_directive] = "directive",
  [sym_attributes] = "attributes",
  [sym_instruction] = "instruction",
  [sym_operands] = "operands",
  [sym__operand] = "_operand",
  [sym__number] = "_number",
  [sym_address] = "address",
  [sym__float] = "_float",
  [sym_char] = "char",
  [sym_string] = "string",
  [sym_octal] = "octal",
  [sym_decimal] = "decimal",
  [sym_hexadecimal] = "hexadecimal",
  [sym_float] = "float",
  [sym_register] = "register",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym__comment_wrapper_repeat1] = "_comment_wrapper_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym__statement_wrapper_token1] = aux_sym__statement_wrapper_token1,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [sym_comment] = sym_comment,
  [aux_sym__statement_token1] = aux_sym__statement_token1,
  [aux_sym_directive_token1] = aux_sym_directive_token1,
  [sym_meta] = sym_meta,
  [aux_sym_attributes_token1] = aux_sym_attributes_token1,
  [sym_macro] = sym_macro,
  [sym_label] = sym_label,
  [sym_opcode] = sym_opcode,
  [sym_macro_variable] = sym_macro_variable,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym__char] = sym__char,
  [sym__string] = sym__string,
  [sym__octal] = sym__octal,
  [sym__decimal] = sym__decimal,
  [sym__hexadecimal] = sym__hexadecimal,
  [aux_sym__float_token1] = aux_sym__float_token1,
  [aux_sym__float_token2] = aux_sym__float_token2,
  [aux_sym__float_token3] = aux_sym__float_token3,
  [aux_sym__float_token4] = aux_sym__float_token4,
  [sym__register] = sym__register,
  [sym__identifier] = sym__identifier,
  [sym_program] = sym_program,
  [sym__statement_wrapper] = sym__statement_wrapper,
  [sym__comment_wrapper] = sym__comment_wrapper,
  [sym__statement] = sym__statement,
  [sym_directive] = sym_directive,
  [sym_attributes] = sym_attributes,
  [sym_instruction] = sym_instruction,
  [sym_operands] = sym_operands,
  [sym__operand] = sym__operand,
  [sym__number] = sym__number,
  [sym_address] = sym_address,
  [sym__float] = sym__float,
  [sym_char] = sym_char,
  [sym_string] = sym_string,
  [sym_octal] = sym_octal,
  [sym_decimal] = sym_decimal,
  [sym_hexadecimal] = sym_hexadecimal,
  [sym_float] = sym_float,
  [sym_register] = sym_register,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym__comment_wrapper_repeat1] = aux_sym__comment_wrapper_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__statement_wrapper_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_meta] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_attributes_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_variable] = {
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
  [sym__char] = {
    .visible = false,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [sym__octal] = {
    .visible = false,
    .named = true,
  },
  [sym__decimal] = {
    .visible = false,
    .named = true,
  },
  [sym__hexadecimal] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__float_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__float_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__float_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__float_token4] = {
    .visible = false,
    .named = false,
  },
  [sym__register] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_wrapper] = {
    .visible = false,
    .named = true,
  },
  [sym__comment_wrapper] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_operands] = {
    .visible = true,
    .named = true,
  },
  [sym__operand] = {
    .visible = false,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym_address] = {
    .visible = true,
    .named = true,
  },
  [sym__float] = {
    .visible = false,
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
  [sym_octal] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [sym_hexadecimal] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__comment_wrapper_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
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
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(26);
      ADVANCE_MAP(
        '"', 3,
        '#', 37,
        '$', 18,
        '\'', 20,
        '(', 56,
        ')', 57,
        '-', 9,
        '.', 13,
        '0', 60,
        ';', 31,
        'E', 70,
        'e', 50,
        '%', 19,
        '\\', 19,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(71);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(42);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '0') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(46);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        ' ', 36,
        '#', 37,
        '$', 18,
        '\'', 20,
        '(', 56,
        '-', 9,
        '.', 12,
        '0', 60,
        '%', 19,
        '\\', 19,
      );
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(59);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(58);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == ':') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == ')') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '0') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(5);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 17:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 19:
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 20:
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(4);
      END_STATE();
    case 21:
      if (eof) ADVANCE(26);
      if (lookahead == '\t') ADVANCE(39);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == ';') ADVANCE(31);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(21);
      END_STATE();
    case 22:
      if (eof) ADVANCE(26);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == ' ') ADVANCE(34);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == ';') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(32);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(5);
      END_STATE();
    case 23:
      if (eof) ADVANCE(26);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == ';') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(23);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(5);
      END_STATE();
    case 24:
      if (eof) ADVANCE(26);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == ' ') ADVANCE(35);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(24);
      END_STATE();
    case 25:
      if (eof) ADVANCE(26);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == ';') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t') ADVANCE(39);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == ' ') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(32);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym__statement_wrapper_token1);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == ' ') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\t') ADVANCE(39);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == ' ') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(32);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym__statement_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_directive_token1);
      if (lookahead == '\t') ADVANCE(39);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_meta);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_attributes_token1);
      if (lookahead == '\'') ADVANCE(42);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(46);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_attributes_token1);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '#' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_attributes_token1);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(46);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_attributes_token1);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '0') ADVANCE(60);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(46);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_attributes_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_attributes_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '#' &&
          (lookahead < '0' || '9' < lookahead)) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_macro);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(6);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == ':') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(5);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == ':') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(71);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == ':') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(71);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == ':') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == ':') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_macro_variable);
      if (lookahead == '$' ||
          lookahead == '%' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '\\' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__char);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__string);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__octal);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(16);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__octal);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__decimal);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__float_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__float_token3);
      if (lookahead == ':') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__float_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__float_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__register);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == ':') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 22},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 22},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 23},
  [7] = {.lex_state = 23},
  [8] = {.lex_state = 23},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 21},
  [11] = {.lex_state = 23},
  [12] = {.lex_state = 23},
  [13] = {.lex_state = 24},
  [14] = {.lex_state = 23},
  [15] = {.lex_state = 23},
  [16] = {.lex_state = 23},
  [17] = {.lex_state = 23},
  [18] = {.lex_state = 23},
  [19] = {.lex_state = 23},
  [20] = {.lex_state = 23},
  [21] = {.lex_state = 23},
  [22] = {.lex_state = 23},
  [23] = {.lex_state = 23},
  [24] = {.lex_state = 23},
  [25] = {.lex_state = 23},
  [26] = {.lex_state = 23},
  [27] = {.lex_state = 23},
  [28] = {.lex_state = 23},
  [29] = {.lex_state = 23},
  [30] = {.lex_state = 23},
  [31] = {.lex_state = 23},
  [32] = {.lex_state = 23},
  [33] = {.lex_state = 23},
  [34] = {.lex_state = 25},
  [35] = {.lex_state = 25},
  [36] = {.lex_state = 25},
  [37] = {.lex_state = 25},
  [38] = {.lex_state = 25},
  [39] = {.lex_state = 25},
  [40] = {.lex_state = 25},
  [41] = {.lex_state = 25},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 25},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 38},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_meta] = ACTIONS(1),
    [sym_label] = ACTIONS(1),
    [sym_opcode] = ACTIONS(1),
    [sym_macro_variable] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__char] = ACTIONS(1),
    [sym__string] = ACTIONS(1),
    [sym__octal] = ACTIONS(1),
    [sym__decimal] = ACTIONS(1),
    [sym__hexadecimal] = ACTIONS(1),
    [aux_sym__float_token1] = ACTIONS(1),
    [aux_sym__float_token2] = ACTIONS(1),
    [aux_sym__float_token3] = ACTIONS(1),
    [aux_sym__float_token4] = ACTIONS(1),
    [sym__register] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(44),
    [sym__statement_wrapper] = STATE(7),
    [sym__comment_wrapper] = STATE(37),
    [sym__statement] = STATE(7),
    [sym_directive] = STATE(7),
    [sym_instruction] = STATE(7),
    [aux_sym_program_repeat1] = STATE(36),
    [aux_sym__comment_wrapper_repeat1] = STATE(42),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(5),
    [aux_sym__statement_wrapper_token1] = ACTIONS(7),
    [anon_sym_SPACE] = ACTIONS(9),
    [sym_comment] = ACTIONS(11),
    [sym_meta] = ACTIONS(13),
    [sym_macro] = ACTIONS(15),
    [sym_label] = ACTIONS(17),
    [sym_opcode] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(21), 1,
      anon_sym_SPACE,
    ACTIONS(23), 1,
      sym_macro_variable,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      sym__char,
    ACTIONS(29), 1,
      sym__octal,
    ACTIONS(31), 1,
      sym__decimal,
    ACTIONS(33), 1,
      sym__hexadecimal,
    ACTIONS(37), 1,
      aux_sym__float_token4,
    ACTIONS(39), 1,
      sym__register,
    ACTIONS(41), 1,
      sym__identifier,
    STATE(5), 1,
      aux_sym__comment_wrapper_repeat1,
    STATE(26), 1,
      sym__float,
    STATE(31), 1,
      sym_operands,
    ACTIONS(35), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    STATE(18), 9,
      sym__operand,
      sym__number,
      sym_address,
      sym_char,
      sym_octal,
      sym_decimal,
      sym_hexadecimal,
      sym_float,
      sym_register,
  [55] = 11,
    ACTIONS(37), 1,
      aux_sym__float_token4,
    ACTIONS(43), 1,
      aux_sym_attributes_token1,
    ACTIONS(45), 1,
      sym__char,
    ACTIONS(47), 1,
      sym__string,
    ACTIONS(49), 1,
      sym__octal,
    ACTIONS(51), 1,
      sym__decimal,
    ACTIONS(53), 1,
      sym__hexadecimal,
    STATE(19), 1,
      sym_attributes,
    STATE(26), 1,
      sym__float,
    ACTIONS(35), 2,
      aux_sym__float_token1,
      aux_sym__float_token2,
    STATE(24), 7,
      sym__number,
      sym_char,
      sym_string,
      sym_octal,
      sym_decimal,
      sym_hexadecimal,
      sym_float,
  [96] = 12,
    ACTIONS(7), 1,
      aux_sym__statement_wrapper_token1,
    ACTIONS(9), 1,
      anon_sym_SPACE,
    ACTIONS(13), 1,
      sym_meta,
    ACTIONS(17), 1,
      sym_label,
    ACTIONS(19), 1,
      sym_opcode,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym_macro,
    STATE(42), 1,
      aux_sym__comment_wrapper_repeat1,
    STATE(43), 1,
      sym__comment_wrapper,
    ACTIONS(57), 2,
      anon_sym_LF,
      anon_sym_SEMI,
    STATE(8), 4,
      sym__statement_wrapper,
      sym__statement,
      sym_directive,
      sym_instruction,
  [137] = 3,
    ACTIONS(63), 1,
      anon_sym_SPACE,
    STATE(5), 1,
      aux_sym__comment_wrapper_repeat1,
    ACTIONS(66), 12,
      sym_comment,
      sym_macro_variable,
      anon_sym_LPAREN,
      sym__char,
      sym__octal,
      sym__decimal,
      sym__hexadecimal,
      aux_sym__float_token1,
      aux_sym__float_token2,
      aux_sym__float_token4,
      sym__register,
      sym__identifier,
  [158] = 7,
    ACTIONS(13), 1,
      sym_meta,
    ACTIONS(17), 1,
      sym_label,
    ACTIONS(19), 1,
      sym_opcode,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(72), 1,
      sym_macro,
    STATE(27), 3,
      sym__statement,
      sym_directive,
      sym_instruction,
    ACTIONS(70), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      sym_comment,
  [185] = 7,
    ACTIONS(9), 1,
      anon_sym_SPACE,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
      sym_comment,
    STATE(35), 1,
      aux_sym_program_repeat1,
    STATE(38), 1,
      sym__comment_wrapper,
    STATE(42), 1,
      aux_sym__comment_wrapper_repeat1,
    ACTIONS(5), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [208] = 6,
    ACTIONS(9), 1,
      anon_sym_SPACE,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(82), 1,
      sym_comment,
    STATE(40), 1,
      sym__comment_wrapper,
    STATE(42), 1,
      aux_sym__comment_wrapper_repeat1,
    ACTIONS(80), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [228] = 5,
    ACTIONS(19), 1,
      sym_opcode,
    ACTIONS(84), 1,
      sym_meta,
    ACTIONS(86), 1,
      sym_macro,
    ACTIONS(88), 1,
      sym_label,
    STATE(30), 3,
      sym__statement,
      sym_directive,
      sym_instruction,
  [246] = 3,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(94), 1,
      aux_sym_directive_token1,
    ACTIONS(92), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      sym_comment,
  [259] = 4,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 1,
      anon_sym_SPACE,
    STATE(2), 1,
      aux_sym__comment_wrapper_repeat1,
    ACTIONS(98), 3,
      anon_sym_LF,
      anon_sym_SEMI,
      sym_comment,
  [274] = 3,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(105), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      sym_comment,
  [287] = 3,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 1,
      aux_sym__float_token3,
    ACTIONS(111), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      sym_comment,
  [300] = 3,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      sym_comment,
  [313] = 3,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      sym_comment,
  [326] = 3,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      sym_comment,
  [339] = 3,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      sym_comment,
  [352] = 2,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(133), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      sym_comment,
  [362] = 2,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      sym_comment,
  [372] = 2,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(121), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      sym_comment,
  [382] = 2,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      sym_comment,
  [392] = 2,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    ACTIONS(141), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      sym_comment,
  [402] = 2,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      sym_comment,
  [412] = 2,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      sym_comment,
  [422] = 2,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      sym_comment,
  [432] = 2,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      sym_comment,
  [442] = 2,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(153), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      sym_comment,
  [452] = 2,
    ACTIONS(155), 1,
      ts_builtin_sym_end,
    ACTIONS(157), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      sym_comment,
  [462] = 2,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      sym_comment,
  [472] = 2,
    ACTIONS(163), 1,
      ts_builtin_sym_end,
    ACTIONS(165), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      sym_comment,
  [482] = 2,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    ACTIONS(169), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      sym_comment,
  [492] = 2,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
    ACTIONS(173), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      sym_comment,
  [502] = 2,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    ACTIONS(177), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      sym_comment,
  [512] = 4,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(179), 1,
      anon_sym_LF,
    ACTIONS(182), 1,
      anon_sym_SEMI,
    STATE(34), 1,
      aux_sym_program_repeat1,
  [525] = 4,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    ACTIONS(187), 1,
      anon_sym_LF,
    STATE(34), 1,
      aux_sym_program_repeat1,
  [538] = 4,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(187), 1,
      anon_sym_LF,
    STATE(34), 1,
      aux_sym_program_repeat1,
  [551] = 4,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(187), 1,
      anon_sym_LF,
    STATE(35), 1,
      aux_sym_program_repeat1,
  [564] = 4,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    ACTIONS(187), 1,
      anon_sym_LF,
    STATE(39), 1,
      aux_sym_program_repeat1,
  [577] = 4,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(187), 1,
      anon_sym_LF,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      aux_sym_program_repeat1,
  [590] = 2,
    ACTIONS(193), 1,
      anon_sym_SEMI,
    ACTIONS(191), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [598] = 2,
    ACTIONS(197), 1,
      anon_sym_SEMI,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [606] = 3,
    ACTIONS(21), 1,
      anon_sym_SPACE,
    ACTIONS(199), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym__comment_wrapper_repeat1,
  [616] = 2,
    ACTIONS(80), 1,
      anon_sym_SEMI,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [624] = 1,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
  [628] = 1,
    ACTIONS(203), 1,
      sym__register,
  [632] = 1,
    ACTIONS(205), 1,
      aux_sym__statement_token1,
  [636] = 1,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
  [640] = 1,
    ACTIONS(209), 1,
      sym__register,
  [644] = 1,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 96,
  [SMALL_STATE(5)] = 137,
  [SMALL_STATE(6)] = 158,
  [SMALL_STATE(7)] = 185,
  [SMALL_STATE(8)] = 208,
  [SMALL_STATE(9)] = 228,
  [SMALL_STATE(10)] = 246,
  [SMALL_STATE(11)] = 259,
  [SMALL_STATE(12)] = 274,
  [SMALL_STATE(13)] = 287,
  [SMALL_STATE(14)] = 300,
  [SMALL_STATE(15)] = 313,
  [SMALL_STATE(16)] = 326,
  [SMALL_STATE(17)] = 339,
  [SMALL_STATE(18)] = 352,
  [SMALL_STATE(19)] = 362,
  [SMALL_STATE(20)] = 372,
  [SMALL_STATE(21)] = 382,
  [SMALL_STATE(22)] = 392,
  [SMALL_STATE(23)] = 402,
  [SMALL_STATE(24)] = 412,
  [SMALL_STATE(25)] = 422,
  [SMALL_STATE(26)] = 432,
  [SMALL_STATE(27)] = 442,
  [SMALL_STATE(28)] = 452,
  [SMALL_STATE(29)] = 462,
  [SMALL_STATE(30)] = 472,
  [SMALL_STATE(31)] = 482,
  [SMALL_STATE(32)] = 492,
  [SMALL_STATE(33)] = 502,
  [SMALL_STATE(34)] = 512,
  [SMALL_STATE(35)] = 525,
  [SMALL_STATE(36)] = 538,
  [SMALL_STATE(37)] = 551,
  [SMALL_STATE(38)] = 564,
  [SMALL_STATE(39)] = 577,
  [SMALL_STATE(40)] = 590,
  [SMALL_STATE(41)] = 598,
  [SMALL_STATE(42)] = 606,
  [SMALL_STATE(43)] = 616,
  [SMALL_STATE(44)] = 624,
  [SMALL_STATE(45)] = 628,
  [SMALL_STATE(46)] = 632,
  [SMALL_STATE(47)] = 636,
  [SMALL_STATE(48)] = 640,
  [SMALL_STATE(49)] = 644,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__comment_wrapper_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__comment_wrapper_repeat1, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 0),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_instruction, 1, 0, 0), SHIFT(2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hexadecimal, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hexadecimal, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_octal, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_octal, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operands, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 3, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_wrapper, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_wrapper, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 3, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_address, 4, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_address, 4, 0, 0),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 2, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 3, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 3, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_wrapper, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_wrapper, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [201] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
};

#ifdef __cplusplus
extern "C" {
#endif
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
