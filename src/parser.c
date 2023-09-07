#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 65
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_COLON = 1,
  aux_sym_method_token1 = 2,
  anon_sym_COLON_SLASH_SLASH = 3,
  anon_sym_LF = 4,
  sym_scheme = 5,
  sym__identifier = 6,
  anon_sym_SLASH = 7,
  anon_sym_QMARK = 8,
  anon_sym_AMP = 9,
  anon_sym_EQ = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  anon_sym_COMMA = 13,
  anon_sym_DQUOTE = 14,
  anon_sym_AT = 15,
  sym_variable_ref = 16,
  sym_domain = 17,
  aux_sym_string_token1 = 18,
  sym_rest_of_line = 19,
  sym_source_file = 20,
  sym_method_url = 21,
  sym_header = 22,
  sym_method = 23,
  sym_url = 24,
  sym_path = 25,
  sym_query_params = 26,
  sym_query_param = 27,
  sym_json_body = 28,
  sym_key_value_list = 29,
  sym_key_value = 30,
  sym_key = 31,
  sym_value = 32,
  sym_variable_declaration = 33,
  sym_identifier = 34,
  sym_string = 35,
  aux_sym_source_file_repeat1 = 36,
  aux_sym_path_repeat1 = 37,
  aux_sym_query_params_repeat1 = 38,
  aux_sym_key_value_list_repeat1 = 39,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [aux_sym_method_token1] = "method_token1",
  [anon_sym_COLON_SLASH_SLASH] = "://",
  [anon_sym_LF] = "\n",
  [sym_scheme] = "scheme",
  [sym__identifier] = "_identifier",
  [anon_sym_SLASH] = "/",
  [anon_sym_QMARK] = "\?",
  [anon_sym_AMP] = "&",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COMMA] = ",",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_AT] = "@",
  [sym_variable_ref] = "variable_ref",
  [sym_domain] = "domain",
  [aux_sym_string_token1] = "string_token1",
  [sym_rest_of_line] = "rest_of_line",
  [sym_source_file] = "source_file",
  [sym_method_url] = "method_url",
  [sym_header] = "header",
  [sym_method] = "method",
  [sym_url] = "url",
  [sym_path] = "path",
  [sym_query_params] = "query_params",
  [sym_query_param] = "query_param",
  [sym_json_body] = "json_body",
  [sym_key_value_list] = "key_value_list",
  [sym_key_value] = "key_value",
  [sym_key] = "key",
  [sym_value] = "value",
  [sym_variable_declaration] = "variable_declaration",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_query_params_repeat1] = "query_params_repeat1",
  [aux_sym_key_value_list_repeat1] = "key_value_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_method_token1] = aux_sym_method_token1,
  [anon_sym_COLON_SLASH_SLASH] = anon_sym_COLON_SLASH_SLASH,
  [anon_sym_LF] = anon_sym_LF,
  [sym_scheme] = sym_scheme,
  [sym__identifier] = sym__identifier,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_AT] = anon_sym_AT,
  [sym_variable_ref] = sym_variable_ref,
  [sym_domain] = sym_domain,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_rest_of_line] = sym_rest_of_line,
  [sym_source_file] = sym_source_file,
  [sym_method_url] = sym_method_url,
  [sym_header] = sym_header,
  [sym_method] = sym_method,
  [sym_url] = sym_url,
  [sym_path] = sym_path,
  [sym_query_params] = sym_query_params,
  [sym_query_param] = sym_query_param,
  [sym_json_body] = sym_json_body,
  [sym_key_value_list] = sym_key_value_list,
  [sym_key_value] = sym_key_value,
  [sym_key] = sym_key,
  [sym_value] = sym_value,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_identifier] = sym_identifier,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_query_params_repeat1] = aux_sym_query_params_repeat1,
  [aux_sym_key_value_list_repeat1] = aux_sym_key_value_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_method_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_scheme] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_variable_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_domain] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_rest_of_line] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_method_url] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_query_params] = {
    .visible = true,
    .named = true,
  },
  [sym_query_param] = {
    .visible = true,
    .named = true,
  },
  [sym_json_body] = {
    .visible = true,
    .named = true,
  },
  [sym_key_value_list] = {
    .visible = true,
    .named = true,
  },
  [sym_key_value] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_query_params_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_key_value_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_header_name = 1,
  field_header_value = 2,
  field_variable_name = 3,
  field_variable_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_header_name] = "header_name",
  [field_header_value] = "header_value",
  [field_variable_name] = "variable_name",
  [field_variable_value] = "variable_value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_header_name, 0},
    {field_header_value, 2},
  [2] =
    {field_variable_name, 1},
    {field_variable_value, 3},
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
  [43] = 16,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(86);
      if (lookahead == '"') ADVANCE(206);
      if (lookahead == '&') ADVANCE(201);
      if (lookahead == ',') ADVANCE(205);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '=') ADVANCE(202);
      if (lookahead == '?') ADVANCE(200);
      if (lookahead == '@') ADVANCE(207);
      if (lookahead == 'C') ADVANCE(123);
      if (lookahead == 'D') ADVANCE(111);
      if (lookahead == 'G') ADVANCE(112);
      if (lookahead == 'H') ADVANCE(113);
      if (lookahead == 'O') ADVANCE(125);
      if (lookahead == 'P') ADVANCE(106);
      if (lookahead == 'T') ADVANCE(126);
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == 'c') ADVANCE(133);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == 'f') ADVANCE(158);
      if (lookahead == 'g') ADVANCE(152);
      if (lookahead == 'h') ADVANCE(102);
      if (lookahead == 'i') ADVANCE(167);
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead == 'n') ADVANCE(159);
      if (lookahead == 'p') ADVANCE(137);
      if (lookahead == 'r') ADVANCE(153);
      if (lookahead == 's') ADVANCE(149);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == 'u') ADVANCE(182);
      if (lookahead == 'w') ADVANCE(185);
      if (lookahead == '{') ADVANCE(203);
      if (lookahead == '}') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(90);
      if (lookahead == '&') ADVANCE(201);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead == '?') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '?') ADVANCE(200);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '{') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(216);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(206);
      if (lookahead == '{') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(76);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(89);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '1') ADVANCE(92);
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '2') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == '3') ADVANCE(11);
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 13:
      if (lookahead == '3') ADVANCE(92);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'c') ADVANCE(15);
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == 'g') ADVANCE(34);
      if (lookahead == 'h') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(49);
      if (lookahead == 'm') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(41);
      if (lookahead == 'p') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(64);
      if (lookahead == 'w') ADVANCE(67);
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 'k') ADVANCE(27);
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(55);
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(59);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(53);
      END_STATE();
    case 39:
      if (lookahead == 'g') ADVANCE(92);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 44:
      if (lookahead == 'k') ADVANCE(32);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 49:
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(38);
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(92);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(96);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(63);
      if (lookahead == 's') ADVANCE(69);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == 'w') ADVANCE(66);
      END_STATE();
    case 63:
      if (lookahead == 'p') ADVANCE(63);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == 'w') ADVANCE(66);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(69);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == 'w') ADVANCE(66);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 77:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 78:
      if (lookahead == 'x') ADVANCE(21);
      END_STATE();
    case 79:
      if (lookahead == 'y') ADVANCE(73);
      END_STATE();
    case 80:
      if (lookahead == '{') ADVANCE(84);
      END_STATE();
    case 81:
      if (lookahead == '{') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(81)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 82:
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 83:
      if (lookahead == '}') ADVANCE(208);
      END_STATE();
    case 84:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 85:
      if (eof) ADVANCE(86);
      if (lookahead == ',') ADVANCE(205);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '@') ADVANCE(207);
      if (lookahead == 'C') ADVANCE(123);
      if (lookahead == 'D') ADVANCE(111);
      if (lookahead == 'G') ADVANCE(112);
      if (lookahead == 'H') ADVANCE(113);
      if (lookahead == 'O') ADVANCE(125);
      if (lookahead == 'P') ADVANCE(106);
      if (lookahead == 'T') ADVANCE(126);
      if (lookahead == '{') ADVANCE(203);
      if (lookahead == '}') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(85)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(91);
      if (lookahead == '{') ADVANCE(80);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_scheme);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 'h') ADVANCE(97);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 'h') ADVANCE(92);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(194);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '1') ADVANCE(97);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '1') ADVANCE(99);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '2') ADVANCE(103);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '3') ADVANCE(101);
      if (lookahead == 't') ADVANCE(192);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '3') ADVANCE(97);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(110);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(109);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(131);
      if (lookahead == 'O') ADVANCE(127);
      if (lookahead == 'U') ADVANCE(129);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(129);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(117);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(114);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(119);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(129);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(132);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(122);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(128);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(121);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(130);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(129);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(118);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(108);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(114);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(147);
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'n') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'k') ADVANCE(145);
      if (lookahead == 'r') ADVANCE(151);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'i') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(173);
      if (lookahead == 'c') ADVANCE(146);
      if (lookahead == 'r') ADVANCE(143);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(183);
      if (lookahead == 's') ADVANCE(188);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(189);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(97);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == 'm') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(97);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 't') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(166);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(150);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(170);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(148);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(156);
      if (lookahead == 'p') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(176);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(97);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(154);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(97);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(195);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(162);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(165);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(97);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 's') ADVANCE(187);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == 'w') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == 'w') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(155);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(100);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(187);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == 'w') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(160);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(189);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(139);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(84);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_variable_ref);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_domain);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(215);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(215);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(215);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(212);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(215);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(215);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '{') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(222);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '{') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(222);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '}') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(222);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '}') ADVANCE(218);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(222);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(222);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(222);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 85},
  [2] = {.lex_state = 85},
  [3] = {.lex_state = 85},
  [4] = {.lex_state = 85},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 85},
  [7] = {.lex_state = 85},
  [8] = {.lex_state = 85},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 85},
  [11] = {.lex_state = 85},
  [12] = {.lex_state = 85},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 85},
  [15] = {.lex_state = 85},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 14},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 210},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 81},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 85},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_method_token1] = ACTIONS(1),
    [sym_scheme] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym_variable_ref] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(55),
    [sym_method_url] = STATE(2),
    [sym_header] = STATE(2),
    [sym_method] = STATE(32),
    [sym_json_body] = STATE(2),
    [sym_variable_declaration] = STATE(2),
    [sym_identifier] = STATE(57),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_method_token1] = ACTIONS(5),
    [sym__identifier] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(11),
    [sym_variable_ref] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(5), 1,
      aux_sym_method_token1,
    ACTIONS(7), 1,
      sym__identifier,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(13), 1,
      sym_variable_ref,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(32), 1,
      sym_method,
    STATE(57), 1,
      sym_identifier,
    STATE(3), 5,
      sym_method_url,
      sym_header,
      sym_json_body,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [32] = 9,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      aux_sym_method_token1,
    ACTIONS(22), 1,
      sym__identifier,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(28), 1,
      anon_sym_AT,
    ACTIONS(31), 1,
      sym_variable_ref,
    STATE(32), 1,
      sym_method,
    STATE(57), 1,
      sym_identifier,
    STATE(3), 5,
      sym_method_url,
      sym_header,
      sym_json_body,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [64] = 2,
    ACTIONS(36), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
    ACTIONS(34), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_AT,
      sym_variable_ref,
  [77] = 6,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(38), 1,
      sym__identifier,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(42), 1,
      sym_variable_ref,
    STATE(42), 1,
      sym_value,
    STATE(41), 3,
      sym_json_body,
      sym_identifier,
      sym_string,
  [98] = 2,
    ACTIONS(44), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_variable_ref,
    ACTIONS(46), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
  [109] = 2,
    ACTIONS(48), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_variable_ref,
    ACTIONS(50), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
  [120] = 2,
    ACTIONS(52), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_variable_ref,
    ACTIONS(54), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
  [131] = 6,
    ACTIONS(56), 1,
      anon_sym_LF,
    ACTIONS(58), 1,
      anon_sym_SLASH,
    ACTIONS(60), 1,
      anon_sym_QMARK,
    STATE(20), 1,
      aux_sym_path_repeat1,
    STATE(31), 1,
      sym_path,
    STATE(53), 1,
      sym_query_params,
  [150] = 2,
    ACTIONS(62), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_variable_ref,
    ACTIONS(64), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
  [161] = 2,
    ACTIONS(66), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_variable_ref,
    ACTIONS(68), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
  [172] = 2,
    ACTIONS(70), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_variable_ref,
    ACTIONS(72), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
  [183] = 6,
    ACTIONS(58), 1,
      anon_sym_SLASH,
    ACTIONS(60), 1,
      anon_sym_QMARK,
    ACTIONS(74), 1,
      anon_sym_LF,
    STATE(20), 1,
      aux_sym_path_repeat1,
    STATE(23), 1,
      sym_path,
    STATE(52), 1,
      sym_query_params,
  [202] = 2,
    ACTIONS(76), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_variable_ref,
    ACTIONS(78), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
  [213] = 2,
    ACTIONS(80), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_variable_ref,
    ACTIONS(82), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
  [224] = 1,
    ACTIONS(84), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
  [232] = 4,
    ACTIONS(38), 1,
      sym__identifier,
    ACTIONS(86), 1,
      sym_variable_ref,
    STATE(46), 1,
      sym_query_param,
    STATE(64), 1,
      sym_identifier,
  [245] = 4,
    ACTIONS(88), 1,
      anon_sym_LF,
    ACTIONS(90), 1,
      anon_sym_SLASH,
    ACTIONS(93), 1,
      anon_sym_QMARK,
    STATE(18), 1,
      aux_sym_path_repeat1,
  [258] = 2,
    ACTIONS(95), 2,
      anon_sym_LF,
      anon_sym_QMARK,
    ACTIONS(97), 2,
      sym__identifier,
      sym_variable_ref,
  [267] = 4,
    ACTIONS(99), 1,
      anon_sym_LF,
    ACTIONS(101), 1,
      anon_sym_SLASH,
    ACTIONS(103), 1,
      anon_sym_QMARK,
    STATE(18), 1,
      aux_sym_path_repeat1,
  [280] = 4,
    ACTIONS(38), 1,
      sym__identifier,
    ACTIONS(86), 1,
      sym_variable_ref,
    STATE(34), 1,
      sym_query_param,
    STATE(64), 1,
      sym_identifier,
  [293] = 4,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    STATE(35), 1,
      sym_key_value,
    STATE(54), 1,
      sym_key,
    STATE(63), 1,
      sym_key_value_list,
  [306] = 3,
    ACTIONS(60), 1,
      anon_sym_QMARK,
    ACTIONS(107), 1,
      anon_sym_LF,
    STATE(61), 1,
      sym_query_params,
  [316] = 3,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    ACTIONS(111), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_key_value_list_repeat1,
  [326] = 3,
    ACTIONS(114), 1,
      anon_sym_LF,
    ACTIONS(116), 1,
      anon_sym_AMP,
    STATE(25), 1,
      aux_sym_query_params_repeat1,
  [336] = 2,
    ACTIONS(119), 1,
      anon_sym_COLON,
    ACTIONS(121), 2,
      sym_scheme,
      sym_variable_ref,
  [344] = 3,
    ACTIONS(123), 1,
      anon_sym_LF,
    ACTIONS(125), 1,
      anon_sym_AMP,
    STATE(25), 1,
      aux_sym_query_params_repeat1,
  [354] = 3,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    STATE(39), 1,
      sym_key_value,
    STATE(54), 1,
      sym_key,
  [364] = 3,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_key_value_list_repeat1,
  [374] = 3,
    ACTIONS(131), 1,
      sym__identifier,
    ACTIONS(133), 1,
      sym_variable_ref,
    STATE(47), 1,
      sym_identifier,
  [384] = 3,
    ACTIONS(60), 1,
      anon_sym_QMARK,
    ACTIONS(135), 1,
      anon_sym_LF,
    STATE(59), 1,
      sym_query_params,
  [394] = 3,
    ACTIONS(137), 1,
      sym_scheme,
    ACTIONS(139), 1,
      sym_variable_ref,
    STATE(14), 1,
      sym_url,
  [404] = 3,
    ACTIONS(38), 1,
      sym__identifier,
    ACTIONS(141), 1,
      sym_variable_ref,
    STATE(58), 1,
      sym_identifier,
  [414] = 3,
    ACTIONS(125), 1,
      anon_sym_AMP,
    ACTIONS(143), 1,
      anon_sym_LF,
    STATE(27), 1,
      aux_sym_query_params_repeat1,
  [424] = 3,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      aux_sym_key_value_list_repeat1,
  [434] = 2,
    ACTIONS(88), 1,
      anon_sym_LF,
    ACTIONS(93), 2,
      anon_sym_SLASH,
      anon_sym_QMARK,
  [442] = 1,
    ACTIONS(121), 2,
      sym_scheme,
      sym_variable_ref,
  [447] = 1,
    ACTIONS(147), 2,
      sym__identifier,
      sym_variable_ref,
  [452] = 1,
    ACTIONS(109), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [457] = 1,
    ACTIONS(149), 2,
      sym_variable_ref,
      aux_sym_string_token1,
  [462] = 1,
    ACTIONS(151), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [467] = 1,
    ACTIONS(153), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [472] = 2,
    ACTIONS(84), 1,
      anon_sym_LF,
    ACTIONS(155), 1,
      anon_sym_AMP,
  [479] = 2,
    ACTIONS(38), 1,
      sym__identifier,
    STATE(60), 1,
      sym_identifier,
  [486] = 1,
    ACTIONS(157), 2,
      sym_variable_ref,
      sym_rest_of_line,
  [491] = 2,
    ACTIONS(114), 1,
      anon_sym_LF,
    ACTIONS(159), 1,
      anon_sym_AMP,
  [498] = 2,
    ACTIONS(161), 1,
      anon_sym_LF,
    ACTIONS(163), 1,
      anon_sym_AMP,
  [505] = 1,
    ACTIONS(165), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [510] = 1,
    ACTIONS(167), 2,
      sym_variable_ref,
      sym_domain,
  [515] = 1,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
  [519] = 1,
    ACTIONS(171), 1,
      anon_sym_COLON,
  [523] = 1,
    ACTIONS(107), 1,
      anon_sym_LF,
  [527] = 1,
    ACTIONS(135), 1,
      anon_sym_LF,
  [531] = 1,
    ACTIONS(173), 1,
      anon_sym_COLON,
  [535] = 1,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
  [539] = 1,
    ACTIONS(177), 1,
      sym_rest_of_line,
  [543] = 1,
    ACTIONS(119), 1,
      anon_sym_COLON,
  [547] = 1,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
  [551] = 1,
    ACTIONS(181), 1,
      anon_sym_LF,
  [555] = 1,
    ACTIONS(183), 1,
      anon_sym_EQ,
  [559] = 1,
    ACTIONS(56), 1,
      anon_sym_LF,
  [563] = 1,
    ACTIONS(185), 1,
      anon_sym_COLON_SLASH_SLASH,
  [567] = 1,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
  [571] = 1,
    ACTIONS(189), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 77,
  [SMALL_STATE(6)] = 98,
  [SMALL_STATE(7)] = 109,
  [SMALL_STATE(8)] = 120,
  [SMALL_STATE(9)] = 131,
  [SMALL_STATE(10)] = 150,
  [SMALL_STATE(11)] = 161,
  [SMALL_STATE(12)] = 172,
  [SMALL_STATE(13)] = 183,
  [SMALL_STATE(14)] = 202,
  [SMALL_STATE(15)] = 213,
  [SMALL_STATE(16)] = 224,
  [SMALL_STATE(17)] = 232,
  [SMALL_STATE(18)] = 245,
  [SMALL_STATE(19)] = 258,
  [SMALL_STATE(20)] = 267,
  [SMALL_STATE(21)] = 280,
  [SMALL_STATE(22)] = 293,
  [SMALL_STATE(23)] = 306,
  [SMALL_STATE(24)] = 316,
  [SMALL_STATE(25)] = 326,
  [SMALL_STATE(26)] = 336,
  [SMALL_STATE(27)] = 344,
  [SMALL_STATE(28)] = 354,
  [SMALL_STATE(29)] = 364,
  [SMALL_STATE(30)] = 374,
  [SMALL_STATE(31)] = 384,
  [SMALL_STATE(32)] = 394,
  [SMALL_STATE(33)] = 404,
  [SMALL_STATE(34)] = 414,
  [SMALL_STATE(35)] = 424,
  [SMALL_STATE(36)] = 434,
  [SMALL_STATE(37)] = 442,
  [SMALL_STATE(38)] = 447,
  [SMALL_STATE(39)] = 452,
  [SMALL_STATE(40)] = 457,
  [SMALL_STATE(41)] = 462,
  [SMALL_STATE(42)] = 467,
  [SMALL_STATE(43)] = 472,
  [SMALL_STATE(44)] = 479,
  [SMALL_STATE(45)] = 486,
  [SMALL_STATE(46)] = 491,
  [SMALL_STATE(47)] = 498,
  [SMALL_STATE(48)] = 505,
  [SMALL_STATE(49)] = 510,
  [SMALL_STATE(50)] = 515,
  [SMALL_STATE(51)] = 519,
  [SMALL_STATE(52)] = 523,
  [SMALL_STATE(53)] = 527,
  [SMALL_STATE(54)] = 531,
  [SMALL_STATE(55)] = 535,
  [SMALL_STATE(56)] = 539,
  [SMALL_STATE(57)] = 543,
  [SMALL_STATE(58)] = 547,
  [SMALL_STATE(59)] = 551,
  [SMALL_STATE(60)] = 555,
  [SMALL_STATE(61)] = 559,
  [SMALL_STATE(62)] = 563,
  [SMALL_STATE(63)] = 567,
  [SMALL_STATE(64)] = 571,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 3),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 5),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 5),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 4),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 3),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 6),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 6),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_url, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_url, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, .production_id = 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(38),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_value_list_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_value_list_repeat1, 2), SHIFT_REPEAT(28),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_params_repeat1, 2), SHIFT_REPEAT(17),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_list, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_list, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [175] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_http2(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
