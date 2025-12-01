#include "tree_sitter/parser.h"

#include <string.h>

enum TokenType {
    _OPERAND_SEPARATOR,
    _OPERATOR_SPACE,
    _STATEMENT_SEPARATOR_NO_COMMENT,
    _MULTILINE_OPERAND_SEPARATOR_NO_COMMENT,
    _STATEMENT_SEPARATOR_WITH_COMMENT,
    _MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT,
};

enum {
    CONSUMED_NONE = 0b00,     // Consumed nothing or whitespace
    CONSUMED_NEW_LINE = 0b01, // Consumed at least one new line
    CONSUMED_COMMENT = 0b10,  // Consumed at least one comment, but may consume multiple
    CONSUMED_NEW_LINE_COMMENT = 0b11,
} consumed;

void* tree_sitter_mips_external_scanner_create() {
    return NULL;
}

void tree_sitter_mips_external_scanner_destroy(void* payload) {
    (void) payload;
}

unsigned tree_sitter_mips_external_scanner_serialize(void* payload, char* buffer) {
    (void) payload;
    (void) buffer;
    return 0;
}

void tree_sitter_mips_external_scanner_deserialize(void* payload,
                                                   const char* buffer,
                                                   unsigned length) {
    (void) payload;
    (void) buffer;
    (void) length;
}

static inline bool is_space(int32_t c) {
    return c == ' ' || c == '\t';
}

static inline bool is_newline(int32_t c) {
    return c == '\r' || c == '\n';
}

static inline bool is_eol_or_eof(const TSLexer* lexer) {
    return lexer->eof(lexer) || is_newline(lexer->lookahead);
}

static inline bool is_ascii_alpha(int32_t c) {
    return ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z');
}

static inline bool is_ascii_digit(int32_t c) {
    return '0' <= c && c <= '9';
}

static inline bool is_ascii_alnum(int32_t c) {
    return is_ascii_alpha(c) || is_ascii_digit(c);
}

/**
 * Does not imply invalid operand start.
 */
static inline bool is_valid_operator_start(int32_t c) {
    return c == '+' || c == '-' || c == '*' || c == '%' || c == '/' || c == '&' ||
           c == '|' || c == '^' || c == '~' || c == '!' || c == '<' || c == '>' ||
           c == '=';
}

/**
 * Does not imply invalid operator start.
 */
static inline bool is_valid_operand_start(int32_t c) {
    return is_ascii_alnum(c) || c == '_' || c == '\\' || c == '%' || c == '$' ||
           c == '.' || c == '\'' || c == '"' || c == '(' || c == ')' || c == '-' ||
           c == '+' || c == '@';
}

static inline bool is_valid_macro_start(int32_t c) {
    return c == '%' || c == '$' || c == '\\';
}

static inline bool is_valid_identifier_char(int32_t c) {
    return is_ascii_alnum(c) || c == '_' || c == '$' || c == '\\';
}

/**
 * Skips or consumes consecutive space and tab characters.
 * Returns true if whitespace was found.
 */
static bool consume_whitespace(TSLexer* lexer, bool skip) {
    if (!is_space(lexer->lookahead))
        return false;

    while (!lexer->eof(lexer) && is_space(lexer->lookahead)) {
        lexer->advance(lexer, skip);
    }

    return true;
}

/**
 * Attempts to consume a single newline (handles CRLF and LF).
 * Modifies global consumed flags indicating what was consumed.
 * Returns true if a newline was found.
 */
static bool consume_newline(TSLexer* lexer, bool skip) {
    if (lexer->lookahead == '\r') {
        lexer->advance(lexer, skip);
        if (!lexer->eof(lexer) && lexer->lookahead == '\n') {
            lexer->advance(lexer, skip);
        }
    } else if (lexer->lookahead == '\n') {
        lexer->advance(lexer, skip);
    } else {
        return false;
    }

    consumed |= CONSUMED_NEW_LINE;
    return true;
}

/**
 * Consume a # comment (to end of line).
 * Modifies global consumed flags indicating what was consumed.
 * Returns true if a comment was consumed.
 */
static bool consume_hash_comment(TSLexer* lexer) {
    if (lexer->lookahead != '#')
        return false;

    lexer->advance(lexer, false);
    while (!is_eol_or_eof(lexer)) {
        lexer->advance(lexer, false);
    }

    consumed |= CONSUMED_NEW_LINE_COMMENT;
    return true;
}

/**
 * Consume C-style line and block comments.
 * Modifies global consumed flags indicating what was consumed.
 * Returns true if a comment was consumed.
 * If '/' is not followed by '/' or '*', returns false but consumes '/'!
 */
static bool consume_slash_comment(TSLexer* lexer) {
    if (lexer->lookahead != '/')
        return false;

    lexer->advance(lexer, false);

    if (!lexer->eof(lexer) && lexer->lookahead == '/') {
        // C comment
        lexer->advance(lexer, false);
        while (!is_eol_or_eof(lexer)) {
            lexer->advance(lexer, false);
        }

        // Line comment implies new line
        consumed |= CONSUMED_NEW_LINE_COMMENT;

        return true;
    }

    if (!lexer->eof(lexer) && lexer->lookahead == '*') {
        // C-style block comment
        lexer->advance(lexer, false);
        while (!lexer->eof(lexer)) {
            if (lexer->lookahead == '*') {
                lexer->advance(lexer, false);
                if (!lexer->eof(lexer) && lexer->lookahead == '/') {
                    lexer->advance(lexer, false);
                    break;
                }
            } else {
                lexer->advance(lexer, false);
            }
        }

        consumed |= CONSUMED_COMMENT;
        if (is_eol_or_eof(lexer)) {
            consumed |= CONSUMED_NEW_LINE;
        }

        return true;
    }

    // Not a comment, '/' is an operator
    return false;
}

/**
 * Consume any combination of whitespace and comments.
 * Modifies global consumed flags indicating what was consumed.
 */
static void consume_whitespace_and_comments(TSLexer* lexer) {
    while (!lexer->eof(lexer)) {
        if (consume_whitespace(lexer, !(consumed & CONSUMED_COMMENT)))
            continue;

        if (consume_newline(lexer, !(consumed & CONSUMED_COMMENT)))
            continue;

        if (consume_hash_comment(lexer)) {
            continue;
        }

        if (consume_slash_comment(lexer)) {
            continue;
        }

        break;
    }
}

/**
 * Check if lookahead is a directive (. followed by letter, number or underscore).
 * Call `lexer->mark_end(lexer)` before!
 */
static inline bool is_directive_start(TSLexer* lexer) {
    if (lexer->lookahead != '.')
        return false;

    lexer->advance(lexer, false);
    if (lexer->eof(lexer))
        return false;

    if (is_ascii_alnum(lexer->lookahead) || lexer->lookahead == '_')
        return true;

    return false;
}

/**
 * Skip optional whitespace and check for colon.
 * Call `lexer->mark_end(lexer)` before!
 */
static bool skip_to_colon(TSLexer* lexer) {
    while (!lexer->eof(lexer) && is_space(lexer->lookahead)) {
        lexer->advance(lexer, false);
    }

    return !lexer->eof(lexer) && lexer->lookahead == ':';
}

/**
 * Scan identifier-like sequence (for labels).
 * Call `lexer->mark_end(lexer)` before!
 */
static void scan_identifier_sequence(TSLexer* lexer) {
    while (!lexer->eof(lexer) &&
           (is_ascii_alnum(lexer->lookahead) || lexer->lookahead == '_' ||
            lexer->lookahead == '.' || lexer->lookahead == '$')) {
        lexer->advance(lexer, false);
    }
}

/**
 * Check if current position is a label (identifier followed by colon).
 * Call `lexer->mark_end(lexer)` before!
 */
static bool is_label(TSLexer* lexer) {
    if (lexer->lookahead != '_' && !is_ascii_alpha(lexer->lookahead))
        return false;

    scan_identifier_sequence(lexer);

    return skip_to_colon(lexer);
}

/**
 * Check if current position is a numeric label (digits followed by colon).
 * Call `lexer->mark_end(lexer)` before!
 */
static bool is_numeric_label(TSLexer* lexer) {
    if (!is_ascii_digit(lexer->lookahead))
        return false;

    while (!lexer->eof(lexer) && is_ascii_digit(lexer->lookahead)) {
        lexer->advance(lexer, false);
    }

    return skip_to_colon(lexer);
}

/**
 * Determine separator type based on what follows.
 * Returns: 0=statement, 1=operand, -1=unknown
 * Call `lexer->mark_end(lexer)` before!
 */
static int classify_following_content(TSLexer* lexer) {
    if (lexer->eof(lexer))
        return 0;

    if (lexer->lookahead == '.') {
        lexer->advance(lexer, false);
        if (!lexer->eof(lexer) && is_ascii_alpha(lexer->lookahead))
            return 0;
        return 1;
    }

    if (is_valid_macro_start(lexer->lookahead))
        return 0;

    // Check for label/opcode
    if (lexer->lookahead == '_' || is_ascii_alpha(lexer->lookahead))
        return 0;

    // Check number vs numeric label
    if (is_ascii_digit(lexer->lookahead))
        return is_numeric_label(lexer) ? 0 : 1;

    // NOTE: this might be too optimistic, but seems to work.
    if (is_valid_operand_start(lexer->lookahead))
        return 1;

    return -1;
}

/**
 * Return appropriate separator token.
 */
static inline enum TokenType get_separator_token(bool is_statement, bool has_comment) {
    if (is_statement) {
        return has_comment ? _STATEMENT_SEPARATOR_WITH_COMMENT
                           : _STATEMENT_SEPARATOR_NO_COMMENT;
    }
    return has_comment ? _MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT
                       : _MULTILINE_OPERAND_SEPARATOR_NO_COMMENT;
}

/**
 * Check if we're looking at an operator after whitespace.
 * Handles special cases for unary operators.
 */
static bool check_operator_after_space(TSLexer* lexer,
                                       bool is_valid_operator_space,
                                       bool is_valid_operand_separator) {
    if (!is_valid_operator_start(lexer->lookahead))
        return false;

    // Special case: %, $, \ followed by identifier chars are macro variables, not
    // operators
    if (lexer->lookahead == '%' || lexer->lookahead == '$' ||
        lexer->lookahead == '\\') {
        lexer->mark_end(lexer);
        lexer->advance(lexer, false);
        if (!lexer->eof(lexer) &&
            (is_ascii_alnum(lexer->lookahead) || lexer->lookahead == '_' ||
             lexer->lookahead == ':' || lexer->lookahead == '$' ||
             lexer->lookahead == '\\')) {
            // It's a macro variable, not an operator
            return false;
        }
        // Not followed by identifier char, continue as operator
        int operator_char = '%'; // or '$' or '\\'
        bool next_is_space = !lexer->eof(lexer) && is_space(lexer->lookahead);
        bool next_is_operator =
            !lexer->eof(lexer) && is_valid_operator_start(lexer->lookahead);

        // These can't be unary, so treat as binary
        if (is_valid_operator_space) {
            lexer->result_symbol = _OPERATOR_SPACE;
            return true;
        }
        return false;
    }

    lexer->mark_end(lexer);
    int operator_char = lexer->lookahead;
    lexer->advance(lexer, false);

    bool next_is_space = !lexer->eof(lexer) && is_space(lexer->lookahead);
    bool next_is_operator =
        !lexer->eof(lexer) && is_valid_operator_start(lexer->lookahead);

    // Unary operators (-, ~, !) can be followed by operands
    if (operator_char == '-' || operator_char == '~' || operator_char == '!') {
        if (next_is_space) {
            if (is_valid_operator_space) {
                lexer->result_symbol = _OPERATOR_SPACE;
                return true;
            }
        } else if (next_is_operator) {
            lexer->advance(lexer, false);
            bool after_second_is_space =
                !lexer->eof(lexer) && is_space(lexer->lookahead);

            if (after_second_is_space) {
                if (is_valid_operator_space) {
                    lexer->result_symbol = _OPERATOR_SPACE;
                    return true;
                }
            } else {
                if (is_valid_operand_separator) {
                    lexer->result_symbol = _OPERAND_SEPARATOR;
                    return true;
                }
            }
        } else {
            if (is_valid_operand_separator) {
                lexer->result_symbol = _OPERAND_SEPARATOR;
                return true;
            }
        }
        return false;
    }

    // Binary operators
    if (is_valid_operator_space) {
        lexer->result_symbol = _OPERATOR_SPACE;
        return true;
    }
    return false;
}

/**
 * Scan for OPERAND_SEPARATOR or OPERATOR_SPACE after horizontal whitespace.
 */
static bool scan_operand_separator(TSLexer* lexer, const bool* valid_symbols) {
    const bool is_valid_operator_space = valid_symbols[_OPERATOR_SPACE];
    const bool is_valid_operand_separator = valid_symbols[_OPERAND_SEPARATOR];

    // Need horizontal whitespace first
    bool found_space = false;
    while (!lexer->eof(lexer) && is_space(lexer->lookahead)) {
        found_space = true;
        lexer->advance(lexer, true);
    }

    if (!found_space || lexer->eof(lexer))
        return false;

    // Don't treat whitespace before line-ending constructs as separator
    if (is_newline(lexer->lookahead) || lexer->lookahead == ';' ||
        lexer->lookahead == '#')
        return false;

    // Handle % (macro variable vs modulo operator)
    if (lexer->lookahead == '%') {
        lexer->mark_end(lexer);
        lexer->advance(lexer, false);
        if (!lexer->eof(lexer) &&
            (is_space(lexer->lookahead) || lexer->lookahead == '%')) {
            if (is_valid_operator_space) {
                lexer->result_symbol = _OPERATOR_SPACE;
                return true;
            }
            return false;
        }
        if (is_valid_operand_separator) {
            lexer->result_symbol = _OPERAND_SEPARATOR;
            return true;
        }
        return false;
    }

    // Check for operators
    if (check_operator_after_space(
            lexer, is_valid_operator_space, is_valid_operand_separator))
        return true;

    // Regular operand
    if (is_valid_operand_start(lexer->lookahead)) {
        if (is_valid_operand_separator) {
            lexer->result_symbol = _OPERAND_SEPARATOR;
            lexer->mark_end(lexer);
            return true;
        }
    }

    return false;
}

/**
 * Scan for operator after newline (e.g., "1\n+ 2").
 */
static bool scan_newline_operator(TSLexer* lexer, const bool* valid_symbols) {
    const bool is_valid_operator_space = valid_symbols[_OPERATOR_SPACE];
    const bool is_valid_multiline_operand_separator =
        valid_symbols[_MULTILINE_OPERAND_SEPARATOR_NO_COMMENT];
    const bool is_valid_statement_separator =
        valid_symbols[_STATEMENT_SEPARATOR_NO_COMMENT];

    if (!is_valid_operator_space || !is_newline(lexer->lookahead))
        return false;

    // IMPORTANT: Check if _multiline_operand_separator_no_comment is also valid.
    // If so, we should NOT consume the newline here - let
    // scan_line_or_multiline_operand_separator_no_comment handle it
    if (is_valid_multiline_operand_separator) {
        return false;
    }

    // If statement separator is also valid, we need to be extra careful
    // Do minimal lookahead first to avoid breaking statement separator scanning
    bool need_careful_lookahead = is_valid_statement_separator;

    if (need_careful_lookahead) {
        // Minimal lookahead using skip mode only
        // Skip ALL whitespace and newlines
        while (!lexer->eof(lexer)) {
            if (is_space(lexer->lookahead)) {
                lexer->advance(lexer, true);
            } else if (lexer->lookahead == '\r') {
                lexer->advance(lexer, true);
                if (!lexer->eof(lexer) && lexer->lookahead == '\n') {
                    lexer->advance(lexer, true);
                }
            } else if (lexer->lookahead == '\n') {
                lexer->advance(lexer, true);
            } else {
                break;
            }
        }

        // Quick check: is there an operator?
        bool found_operator = false;
        if (!lexer->eof(lexer) && is_valid_operator_start(lexer->lookahead)) {
            // Could be operator or macro variable/unary on operand
            // Be conservative: treat most operator chars as operators
            if (lexer->lookahead != '%' && lexer->lookahead != '$' &&
                lexer->lookahead != '\\') {
                found_operator = true;
            }
        }

        if (!found_operator) {
            // No operator found - this looks like a statement separator
            // Instead of returning false (which would leave lexer advanced), return a
            // statement separator
            lexer->mark_end(lexer);
            lexer->result_symbol = _STATEMENT_SEPARATOR_NO_COMMENT;
            return true;
        }

        // Found operator! Continue with full consumption
        // The lexer is already past the newline and spaces, so just consume any
        // comments
        while (!lexer->eof(lexer)) {
            if (consume_hash_comment(lexer) || consume_slash_comment(lexer)) {
                continue;
            }
            break;
        }
    } else {
        // Normal path: statement separator not valid, so we can freely consume
        consume_whitespace_and_comments(lexer);
    }

    // Check for operators (including /)
    if (lexer->lookahead == '/') {
        lexer->mark_end(lexer);
        lexer->advance(lexer, false);

        // Make sure it's not a comment
        if (!lexer->eof(lexer) && (lexer->lookahead == '/' || lexer->lookahead == '*'))
            return false;

        lexer->result_symbol = _OPERATOR_SPACE;
        return true;
    }

    if (is_valid_operator_start(lexer->lookahead)) {
        // Special case: %, $, \ followed by identifier chars are macro variables, not
        // operators
        if (lexer->lookahead == '%' || lexer->lookahead == '$' ||
            lexer->lookahead == '\\') {

            // Peek ahead to see if followed by identifier character
            lexer->mark_end(lexer);
            lexer->advance(lexer, false);

            if (!lexer->eof(lexer) &&
                (is_ascii_alnum(lexer->lookahead) || lexer->lookahead == '_' ||
                 lexer->lookahead == ':' || lexer->lookahead == '$' ||
                 lexer->lookahead == '\\')) {
                // Macro variable, not an operator - don't consume as operator space
                // This might be a statement separator context
                return false;
            }

            // Not followed by identifier char, treat as operator
            lexer->result_symbol = _OPERATOR_SPACE;
            return true;
        }

        lexer->mark_end(lexer);
        lexer->result_symbol = _OPERATOR_SPACE;
        return true;
    }

    // Check for operand continuation
    if (is_valid_multiline_operand_separator && !lexer->eof(lexer) &&
        is_ascii_digit(lexer->lookahead)) {

        lexer->mark_end(lexer);
        lexer->result_symbol = _MULTILINE_OPERAND_SEPARATOR_NO_COMMENT;
        return true;
    }

    return false;
}

/**
 * Scan for inline separator comment after comment without preceding newline.
 * This handles cases like: .word 1 [comment] newline 2
 */
static bool scan_multiline_operand_separator_with_comment(TSLexer* lexer,
                                                          const bool* valid_symbols) {
    if (!valid_symbols[_MULTILINE_OPERAND_SEPARATOR_NO_COMMENT] &&
        !valid_symbols[_MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT])
        return false;

    // Consume the comment
    if (lexer->lookahead == '#') {
        if (!consume_hash_comment(lexer))
            return false;
    } else if (lexer->lookahead == '/') {
        if (!consume_slash_comment(lexer))
            return false;
    } else {
        return false;
    }

    consume_whitespace_and_comments(lexer);

    // Check for directive (new statement)
    if (!lexer->eof(lexer) && lexer->lookahead == '.') {
        lexer->mark_end(lexer);
        if (is_directive_start(lexer))
            return false;
        lexer->result_symbol = _MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT;
        return true;
    }

    // Check for macro label (new statement)
    if (!lexer->eof(lexer) && is_valid_macro_start(lexer->lookahead)) {
        lexer->mark_end(lexer);
        lexer->advance(lexer, false);
        if (!lexer->eof(lexer) && is_valid_identifier_char(lexer->lookahead)) {
            while (!lexer->eof(lexer) && is_valid_identifier_char(lexer->lookahead)) {
                lexer->advance(lexer, false);
            }
            if (skip_to_colon(lexer))
                return false;
        }
        return false;
    }

    // Check for alphabetic label/instruction opcode (new statement)
    if (!lexer->eof(lexer) &&
        (is_ascii_alpha(lexer->lookahead) || lexer->lookahead == '_')) {
        lexer->mark_end(lexer);
        return false;
    }

    // Check for numeric label (new statement)
    if (!lexer->eof(lexer) && is_ascii_digit(lexer->lookahead)) {
        lexer->mark_end(lexer);
        if (is_numeric_label(lexer))
            return false;

        // Just a number
        lexer->result_symbol = _MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT;
        return true;
    }

    // Check for other operand-like content
    // NOTE: this might be too optimistic, but seems to work.
    if (!lexer->eof(lexer) && is_valid_operand_start(lexer->lookahead)) {
        lexer->mark_end(lexer);
        lexer->result_symbol = _MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT;
        return true;
    }

    return false;
}

/**
 * Determine if newline should be statement or multiline operand separator.
 */
static bool scan_statement_or_multiline_operand_sep(TSLexer* lexer,
                                                    const bool* valid_symbols) {
    bool is_valid_stmt = valid_symbols[_STATEMENT_SEPARATOR_NO_COMMENT];
    bool is_valid_multi = valid_symbols[_MULTILINE_OPERAND_SEPARATOR_NO_COMMENT];

    if (!is_valid_stmt && !is_valid_multi)
        return false;

    consume_whitespace(lexer, true);

    if (scan_multiline_operand_separator_with_comment(lexer, valid_symbols))
        return true;

    bool has_comment = (consumed & CONSUMED_COMMENT);
    if (has_comment && is_valid_stmt && is_eol_or_eof(lexer)) {
        lexer->result_symbol = _STATEMENT_SEPARATOR_WITH_COMMENT;
        return true;
    }

    if (lexer->eof(lexer)) {
        lexer->result_symbol = _STATEMENT_SEPARATOR_NO_COMMENT;
        return true;
    }

    if (!is_newline(lexer->lookahead))
        return false;

    consume_whitespace_and_comments(lexer);
    has_comment = (consumed & CONSUMED_COMMENT);

    // Simple cases
    if (lexer->eof(lexer)) {
        lexer->result_symbol = get_separator_token(true, has_comment);
        lexer->mark_end(lexer);
        return true;
    }

    if (lexer->lookahead == ';') {
        lexer->result_symbol = get_separator_token(true, has_comment);
        lexer->mark_end(lexer);
        return true;
    }

    // Both separators valid - disambiguate by looking at what follows
    if (is_valid_stmt && is_valid_multi) {
        lexer->mark_end(lexer);
        int classification = classify_following_content(lexer);
        bool is_statement = (classification == 0);
        lexer->result_symbol = get_separator_token(is_statement, has_comment);
        return true;
    }

    // Only operand separator valid
    if (is_valid_multi) {
        if (lexer->lookahead == '.') {
            lexer->advance(lexer, false);
            if (!lexer->eof(lexer) && is_ascii_alpha(lexer->lookahead))
                return false;
        }
        lexer->result_symbol = get_separator_token(false, has_comment);
        lexer->mark_end(lexer);
        return true;
    }

    // Only statement separator valid
    lexer->result_symbol = get_separator_token(true, has_comment);
    lexer->mark_end(lexer);
    return true;
}

bool tree_sitter_mips_external_scanner_scan(void* payload,
                                            TSLexer* lexer,
                                            const bool* valid_symbols) {
    (void) payload;

    if (lexer->eof(lexer))
        return false;

    consumed = CONSUMED_NONE;

    if (valid_symbols[_OPERAND_SEPARATOR]) {
        // Try operand separator first (space/tab between operands)
        if (scan_operand_separator(lexer, valid_symbols))
            return true;

        if (scan_newline_operator(lexer, valid_symbols))
            return true;

        // Handle comments as separators
        // Block: ONLY when followed by operand (not operator) - for 1/**/2 vs 1/**/+2
        // Line: when followed by newline then operand
        if (lexer->lookahead == '/') {
            lexer->advance(lexer, false);

            if (!lexer->eof(lexer) && lexer->lookahead == '/') {
                // Line comment // - consume to end of line
                while (!is_eol_or_eof(lexer)) {
                    lexer->advance(lexer, false);
                }

                if (is_eol_or_eof(lexer)) {
                    // Consume newline
                    consume_newline(lexer, false);

                    // Consume horizontal space
                    while (!lexer->eof(lexer) && is_space(lexer->lookahead)) {
                        lexer->advance(lexer, false);
                    }
                    // Check if operand follows
                    if (!lexer->eof(lexer) &&
                        is_valid_operand_start(lexer->lookahead)) {
                        // Mark end AFTER consuming comment and whitespace but BEFORE
                        // lookahead
                        lexer->mark_end(lexer);
                        // Line comment followed by operand - return comment separator
                        lexer->result_symbol =
                            valid_symbols[_MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT]
                                ? _MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT
                                : _OPERAND_SEPARATOR;
                        return true;
                    }
                }
                return false;
            } else if (!lexer->eof(lexer) && lexer->lookahead == '*') {
                // Found block comment to consume
                lexer->advance(lexer, false);
                while (!lexer->eof(lexer)) {
                    if (lexer->lookahead == '*') {
                        lexer->advance(lexer, false);
                        if (!lexer->eof(lexer) && lexer->lookahead == '/') {
                            lexer->advance(lexer, false);
                            break;
                        }
                    } else {
                        lexer->advance(lexer, false);
                    }
                }

                // Mark end after consuming block comment
                lexer->mark_end(lexer);

                // Check what follows: if non-operator operand (and not closing paren),
                // return separator
                if (!lexer->eof(lexer) && is_valid_operand_start(lexer->lookahead) &&
                    !is_valid_operator_start(lexer->lookahead) &&
                    lexer->lookahead != ')') {
                    // Return comment separator since we consumed a comment
                    lexer->result_symbol =
                        valid_symbols[_MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT]
                            ? _MULTILINE_OPERAND_SEPARATOR_WITH_COMMENT
                            : _OPERAND_SEPARATOR;
                    return true;
                }

                // If operator follows or closing paren, return false (let block_comment
                // be consumed as extra)
                return false;
            }
            // Not a comment, return false
            return false;
        }
    }

    // Try statement_separator_no_comment and multiline_operand_separator_no_comment
    if (valid_symbols[_STATEMENT_SEPARATOR_NO_COMMENT] ||
        valid_symbols[_MULTILINE_OPERAND_SEPARATOR_NO_COMMENT]) {
        return scan_statement_or_multiline_operand_sep(lexer, valid_symbols);
    }

    return false;
}
