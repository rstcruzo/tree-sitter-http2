#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 54
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_COLON = 1,
  aux_sym_method_token1 = 2,
  anon_sym_COLON_SLASH_SLASH = 3,
  sym_scheme = 4,
  sym__identifier = 5,
  anon_sym_SLASH = 6,
  anon_sym_QMARK = 7,
  anon_sym_AMP = 8,
  anon_sym_EQ = 9,
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  anon_sym_COMMA = 12,
  anon_sym_DQUOTE = 13,
  anon_sym_AT = 14,
  sym_variable_ref = 15,
  aux_sym_string_token1 = 16,
  sym_rest_of_line = 17,
  sym_source_file = 18,
  sym_method_url = 19,
  sym_header = 20,
  sym_method = 21,
  sym_url = 22,
  sym_path = 23,
  sym_query_params = 24,
  sym_query_param = 25,
  sym_json_body = 26,
  sym_key_value_list = 27,
  sym_key_value = 28,
  sym_key = 29,
  sym_value = 30,
  sym_variable_declaration = 31,
  sym_identifier = 32,
  sym_string = 33,
  aux_sym_source_file_repeat1 = 34,
  aux_sym_path_repeat1 = 35,
  aux_sym_query_params_repeat1 = 36,
  aux_sym_key_value_list_repeat1 = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [aux_sym_method_token1] = "method_token1",
  [anon_sym_COLON_SLASH_SLASH] = "://",
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
  [43] = 43,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(82);
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '&') ADVANCE(195);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '=') ADVANCE(196);
      if (lookahead == '?') ADVANCE(194);
      if (lookahead == '@') ADVANCE(201);
      if (lookahead == 'C') ADVANCE(117);
      if (lookahead == 'D') ADVANCE(105);
      if (lookahead == 'G') ADVANCE(106);
      if (lookahead == 'H') ADVANCE(107);
      if (lookahead == 'O') ADVANCE(119);
      if (lookahead == 'P') ADVANCE(100);
      if (lookahead == 'T') ADVANCE(120);
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'c') ADVANCE(127);
      if (lookahead == 'd') ADVANCE(129);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == 'f') ADVANCE(152);
      if (lookahead == 'g') ADVANCE(146);
      if (lookahead == 'h') ADVANCE(96);
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == 'm') ADVANCE(134);
      if (lookahead == 'n') ADVANCE(153);
      if (lookahead == 'p') ADVANCE(131);
      if (lookahead == 'r') ADVANCE(147);
      if (lookahead == 's') ADVANCE(143);
      if (lookahead == 't') ADVANCE(132);
      if (lookahead == 'u') ADVANCE(176);
      if (lookahead == 'w') ADVANCE(179);
      if (lookahead == '{') ADVANCE(197);
      if (lookahead == '}') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '{') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(209);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(213);
      if (lookahead != 0) ADVANCE(215);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '{') ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(74);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(85);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '1') ADVANCE(86);
      END_STATE();
    case 8:
      if (lookahead == '1') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '2') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == '3') ADVANCE(9);
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 11:
      if (lookahead == '3') ADVANCE(86);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == 'f') ADVANCE(38);
      if (lookahead == 'g') ADVANCE(32);
      if (lookahead == 'h') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'm') ADVANCE(20);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 'p') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(33);
      if (lookahead == 's') ADVANCE(29);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(62);
      if (lookahead == 'w') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == 'k') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(53);
      if (lookahead == 'c') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(24);
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(51);
      END_STATE();
    case 37:
      if (lookahead == 'g') ADVANCE(86);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 42:
      if (lookahead == 'k') ADVANCE(30);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 56:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 57:
      if (lookahead == 'p') ADVANCE(86);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(90);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(61);
      if (lookahead == 's') ADVANCE(67);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == 'w') ADVANCE(64);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(61);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == 'w') ADVANCE(64);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(8);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(67);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == 'w') ADVANCE(64);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 75:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 76:
      if (lookahead == 'x') ADVANCE(19);
      END_STATE();
    case 77:
      if (lookahead == 'y') ADVANCE(71);
      END_STATE();
    case 78:
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 79:
      if (lookahead == '}') ADVANCE(202);
      END_STATE();
    case 80:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 81:
      if (eof) ADVANCE(82);
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '&') ADVANCE(195);
      if (lookahead == ',') ADVANCE(199);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '=') ADVANCE(196);
      if (lookahead == '?') ADVANCE(194);
      if (lookahead == '@') ADVANCE(201);
      if (lookahead == 'C') ADVANCE(117);
      if (lookahead == 'D') ADVANCE(105);
      if (lookahead == 'G') ADVANCE(106);
      if (lookahead == 'H') ADVANCE(107);
      if (lookahead == 'O') ADVANCE(119);
      if (lookahead == 'P') ADVANCE(100);
      if (lookahead == 'T') ADVANCE(120);
      if (lookahead == '{') ADVANCE(197);
      if (lookahead == '}') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(81)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_scheme);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 'h') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 'h') ADVANCE(86);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '1') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '1') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '2') ADVANCE(97);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '3') ADVANCE(95);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '3') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(103);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(125);
      if (lookahead == 'O') ADVANCE(121);
      if (lookahead == 'U') ADVANCE(123);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(123);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(108);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(84);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(123);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(84);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(126);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(84);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(118);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(110);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(122);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(109);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(114);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(99);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(123);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(84);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(84);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(112);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(102);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(108);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == 'i') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(135);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(187);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'k') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(145);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 'i') ADVANCE(141);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(167);
      if (lookahead == 'c') ADVANCE(140);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(177);
      if (lookahead == 's') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(183);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == 'm') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(165);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(166);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(164);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(142);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(185);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(150);
      if (lookahead == 'p') ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(170);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(148);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(163);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(189);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(156);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(159);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(89);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(175);
      if (lookahead == 's') ADVANCE(181);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead == 'w') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(175);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead == 'w') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(163);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(149);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(181);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead == 'w') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(154);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(165);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(168);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(183);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(133);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(185);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(80);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_variable_ref);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(208);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(208);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(208);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(205);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(208);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '{') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '{') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '}') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '}') ADVANCE(211);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 81},
  [2] = {.lex_state = 81},
  [3] = {.lex_state = 81},
  [4] = {.lex_state = 81},
  [5] = {.lex_state = 81},
  [6] = {.lex_state = 81},
  [7] = {.lex_state = 81},
  [8] = {.lex_state = 81},
  [9] = {.lex_state = 81},
  [10] = {.lex_state = 81},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 81},
  [13] = {.lex_state = 81},
  [14] = {.lex_state = 81},
  [15] = {.lex_state = 81},
  [16] = {.lex_state = 81},
  [17] = {.lex_state = 81},
  [18] = {.lex_state = 81},
  [19] = {.lex_state = 81},
  [20] = {.lex_state = 81},
  [21] = {.lex_state = 81},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 203},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
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
    [sym_source_file] = STATE(51),
    [sym_method_url] = STATE(2),
    [sym_header] = STATE(2),
    [sym_method] = STATE(39),
    [sym_json_body] = STATE(2),
    [sym_variable_declaration] = STATE(2),
    [sym_identifier] = STATE(49),
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
    STATE(39), 1,
      sym_method,
    STATE(49), 1,
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
    STATE(39), 1,
      sym_method,
    STATE(49), 1,
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
    ACTIONS(34), 9,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_variable_ref,
  [81] = 7,
    ACTIONS(42), 1,
      anon_sym_SLASH,
    ACTIONS(44), 1,
      anon_sym_QMARK,
    STATE(6), 1,
      aux_sym_path_repeat1,
    STATE(10), 1,
      sym_path,
    STATE(19), 1,
      sym_query_params,
    ACTIONS(38), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_variable_ref,
    ACTIONS(40), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
  [107] = 4,
    ACTIONS(42), 1,
      anon_sym_SLASH,
    STATE(7), 1,
      aux_sym_path_repeat1,
    ACTIONS(48), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
    ACTIONS(46), 4,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_variable_ref,
  [125] = 4,
    ACTIONS(54), 1,
      anon_sym_SLASH,
    STATE(7), 1,
      aux_sym_path_repeat1,
    ACTIONS(52), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
    ACTIONS(50), 4,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_variable_ref,
  [143] = 2,
    ACTIONS(59), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
    ACTIONS(57), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_AT,
      sym_variable_ref,
  [156] = 4,
    ACTIONS(65), 1,
      anon_sym_AMP,
    STATE(12), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(61), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_variable_ref,
    ACTIONS(63), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
  [173] = 4,
    ACTIONS(44), 1,
      anon_sym_QMARK,
    STATE(17), 1,
      sym_query_params,
    ACTIONS(67), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_variable_ref,
    ACTIONS(69), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
  [190] = 6,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      sym__identifier,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      sym_variable_ref,
    STATE(33), 1,
      sym_value,
    STATE(41), 3,
      sym_json_body,
      sym_identifier,
      sym_string,
  [211] = 4,
    ACTIONS(65), 1,
      anon_sym_AMP,
    STATE(14), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(77), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_variable_ref,
    ACTIONS(79), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
  [228] = 2,
    ACTIONS(52), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
    ACTIONS(50), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_variable_ref,
  [241] = 4,
    ACTIONS(85), 1,
      anon_sym_AMP,
    STATE(14), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(81), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_variable_ref,
    ACTIONS(83), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
  [258] = 2,
    ACTIONS(90), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
    ACTIONS(88), 4,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_AT,
      sym_variable_ref,
  [270] = 2,
    ACTIONS(83), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
    ACTIONS(81), 4,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_AT,
      sym_variable_ref,
  [282] = 2,
    ACTIONS(92), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_variable_ref,
    ACTIONS(94), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
  [293] = 2,
    ACTIONS(96), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_variable_ref,
    ACTIONS(98), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
  [304] = 2,
    ACTIONS(67), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_variable_ref,
    ACTIONS(69), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
  [315] = 2,
    ACTIONS(100), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_variable_ref,
    ACTIONS(102), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
  [326] = 2,
    ACTIONS(104), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_variable_ref,
    ACTIONS(106), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
  [337] = 4,
    ACTIONS(71), 1,
      sym__identifier,
    ACTIONS(108), 1,
      sym_variable_ref,
    STATE(16), 1,
      sym_query_param,
    STATE(44), 1,
      sym_identifier,
  [350] = 4,
    ACTIONS(71), 1,
      sym__identifier,
    ACTIONS(108), 1,
      sym_variable_ref,
    STATE(9), 1,
      sym_query_param,
    STATE(44), 1,
      sym_identifier,
  [363] = 4,
    ACTIONS(110), 1,
      anon_sym_DQUOTE,
    STATE(25), 1,
      sym_key_value,
    STATE(47), 1,
      sym_key,
    STATE(48), 1,
      sym_key_value_list,
  [376] = 3,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_key_value_list_repeat1,
  [386] = 3,
    ACTIONS(110), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_key_value,
    STATE(47), 1,
      sym_key,
  [396] = 3,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym_key_value_list_repeat1,
  [406] = 3,
    ACTIONS(71), 1,
      sym__identifier,
    ACTIONS(118), 1,
      sym_variable_ref,
    STATE(42), 1,
      sym_identifier,
  [416] = 3,
    ACTIONS(71), 1,
      sym__identifier,
    ACTIONS(120), 1,
      sym_variable_ref,
    STATE(15), 1,
      sym_identifier,
  [426] = 3,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym_key_value_list_repeat1,
  [436] = 1,
    ACTIONS(127), 2,
      sym__identifier,
      sym_variable_ref,
  [441] = 1,
    ACTIONS(129), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [446] = 1,
    ACTIONS(131), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [451] = 1,
    ACTIONS(122), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [456] = 2,
    ACTIONS(71), 1,
      sym__identifier,
    STATE(46), 1,
      sym_identifier,
  [463] = 2,
    ACTIONS(133), 1,
      anon_sym_COLON,
    ACTIONS(135), 1,
      sym_scheme,
  [470] = 1,
    ACTIONS(137), 2,
      sym__identifier,
      sym_variable_ref,
  [475] = 1,
    ACTIONS(139), 2,
      sym_variable_ref,
      aux_sym_string_token1,
  [480] = 2,
    ACTIONS(141), 1,
      sym_scheme,
    STATE(18), 1,
      sym_url,
  [487] = 1,
    ACTIONS(143), 2,
      sym_variable_ref,
      sym_rest_of_line,
  [492] = 1,
    ACTIONS(145), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [497] = 1,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
  [501] = 1,
    ACTIONS(149), 1,
      anon_sym_COLON_SLASH_SLASH,
  [505] = 1,
    ACTIONS(151), 1,
      anon_sym_EQ,
  [509] = 1,
    ACTIONS(153), 1,
      sym_rest_of_line,
  [513] = 1,
    ACTIONS(155), 1,
      anon_sym_EQ,
  [517] = 1,
    ACTIONS(157), 1,
      anon_sym_COLON,
  [521] = 1,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
  [525] = 1,
    ACTIONS(133), 1,
      anon_sym_COLON,
  [529] = 1,
    ACTIONS(135), 1,
      sym_scheme,
  [533] = 1,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
  [537] = 1,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
  [541] = 1,
    ACTIONS(165), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 107,
  [SMALL_STATE(7)] = 125,
  [SMALL_STATE(8)] = 143,
  [SMALL_STATE(9)] = 156,
  [SMALL_STATE(10)] = 173,
  [SMALL_STATE(11)] = 190,
  [SMALL_STATE(12)] = 211,
  [SMALL_STATE(13)] = 228,
  [SMALL_STATE(14)] = 241,
  [SMALL_STATE(15)] = 258,
  [SMALL_STATE(16)] = 270,
  [SMALL_STATE(17)] = 282,
  [SMALL_STATE(18)] = 293,
  [SMALL_STATE(19)] = 304,
  [SMALL_STATE(20)] = 315,
  [SMALL_STATE(21)] = 326,
  [SMALL_STATE(22)] = 337,
  [SMALL_STATE(23)] = 350,
  [SMALL_STATE(24)] = 363,
  [SMALL_STATE(25)] = 376,
  [SMALL_STATE(26)] = 386,
  [SMALL_STATE(27)] = 396,
  [SMALL_STATE(28)] = 406,
  [SMALL_STATE(29)] = 416,
  [SMALL_STATE(30)] = 426,
  [SMALL_STATE(31)] = 436,
  [SMALL_STATE(32)] = 441,
  [SMALL_STATE(33)] = 446,
  [SMALL_STATE(34)] = 451,
  [SMALL_STATE(35)] = 456,
  [SMALL_STATE(36)] = 463,
  [SMALL_STATE(37)] = 470,
  [SMALL_STATE(38)] = 475,
  [SMALL_STATE(39)] = 480,
  [SMALL_STATE(40)] = 487,
  [SMALL_STATE(41)] = 492,
  [SMALL_STATE(42)] = 497,
  [SMALL_STATE(43)] = 501,
  [SMALL_STATE(44)] = 505,
  [SMALL_STATE(45)] = 509,
  [SMALL_STATE(46)] = 513,
  [SMALL_STATE(47)] = 517,
  [SMALL_STATE(48)] = 521,
  [SMALL_STATE(49)] = 525,
  [SMALL_STATE(50)] = 529,
  [SMALL_STATE(51)] = 533,
  [SMALL_STATE(52)] = 537,
  [SMALL_STATE(53)] = 541,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 3),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 3),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(37),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_params, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_params, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2), SHIFT_REPEAT(22),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 5),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 5),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_url, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_url, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, .production_id = 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_list, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_list, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_value_list_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_value_list_repeat1, 2), SHIFT_REPEAT(26),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [161] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 3),
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
