#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 59
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
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
  sym_domain = 16,
  aux_sym_string_token1 = 17,
  sym_rest_of_line = 18,
  sym_source_file = 19,
  sym_method_url = 20,
  sym_header = 21,
  sym_method = 22,
  sym_url = 23,
  sym_path = 24,
  sym_query_params = 25,
  sym_query_param = 26,
  sym_json_body = 27,
  sym_key_value_list = 28,
  sym_key_value = 29,
  sym_key = 30,
  sym_value = 31,
  sym_variable_declaration = 32,
  sym_identifier = 33,
  sym_string = 34,
  aux_sym_source_file_repeat1 = 35,
  aux_sym_path_repeat1 = 36,
  aux_sym_query_params_repeat1 = 37,
  aux_sym_key_value_list_repeat1 = 38,
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
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(84);
      if (lookahead == '"') ADVANCE(202);
      if (lookahead == '&') ADVANCE(197);
      if (lookahead == ',') ADVANCE(201);
      if (lookahead == '/') ADVANCE(195);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == '?') ADVANCE(196);
      if (lookahead == '@') ADVANCE(203);
      if (lookahead == 'C') ADVANCE(119);
      if (lookahead == 'D') ADVANCE(107);
      if (lookahead == 'G') ADVANCE(108);
      if (lookahead == 'H') ADVANCE(109);
      if (lookahead == 'O') ADVANCE(121);
      if (lookahead == 'P') ADVANCE(102);
      if (lookahead == 'T') ADVANCE(122);
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead == 'c') ADVANCE(129);
      if (lookahead == 'd') ADVANCE(131);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == 'f') ADVANCE(154);
      if (lookahead == 'g') ADVANCE(148);
      if (lookahead == 'h') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 'm') ADVANCE(136);
      if (lookahead == 'n') ADVANCE(155);
      if (lookahead == 'p') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(149);
      if (lookahead == 's') ADVANCE(145);
      if (lookahead == 't') ADVANCE(134);
      if (lookahead == 'u') ADVANCE(178);
      if (lookahead == 'w') ADVANCE(181);
      if (lookahead == '{') ADVANCE(199);
      if (lookahead == '}') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '{') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(212);
      if (lookahead != 0) ADVANCE(218);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(216);
      if (lookahead != 0) ADVANCE(218);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(202);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '{') ADVANCE(199);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(74);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(87);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '1') ADVANCE(88);
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
      if (lookahead == '3') ADVANCE(88);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(85);
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
      if (lookahead == '{') ADVANCE(78);
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
      if (lookahead == 'a') ADVANCE(88);
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
      if (lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(88);
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
      if (lookahead == 'g') ADVANCE(88);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(90);
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
      if (lookahead == 'm') ADVANCE(88);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(88);
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
      if (lookahead == 'p') ADVANCE(88);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(92);
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
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(92);
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
      if (lookahead == 't') ADVANCE(88);
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
      if (lookahead == '{') ADVANCE(82);
      END_STATE();
    case 79:
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(79)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 80:
      if (lookahead == '}') ADVANCE(81);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      if (lookahead == '}') ADVANCE(204);
      END_STATE();
    case 82:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 83:
      if (eof) ADVANCE(84);
      if (lookahead == '"') ADVANCE(202);
      if (lookahead == '&') ADVANCE(197);
      if (lookahead == ',') ADVANCE(201);
      if (lookahead == '/') ADVANCE(195);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '=') ADVANCE(198);
      if (lookahead == '?') ADVANCE(196);
      if (lookahead == '@') ADVANCE(203);
      if (lookahead == 'C') ADVANCE(119);
      if (lookahead == 'D') ADVANCE(107);
      if (lookahead == 'G') ADVANCE(108);
      if (lookahead == 'H') ADVANCE(109);
      if (lookahead == 'O') ADVANCE(121);
      if (lookahead == 'P') ADVANCE(102);
      if (lookahead == 'T') ADVANCE(122);
      if (lookahead == '{') ADVANCE(199);
      if (lookahead == '}') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(83)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_scheme);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 'h') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 'h') ADVANCE(88);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(190);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '1') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '1') ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '2') ADVANCE(99);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '3') ADVANCE(97);
      if (lookahead == 't') ADVANCE(188);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '3') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(106);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(127);
      if (lookahead == 'O') ADVANCE(123);
      if (lookahead == 'U') ADVANCE(125);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(125);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(110);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(125);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(100);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(103);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(128);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(112);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(118);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(111);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(117);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(126);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(125);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(86);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(114);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(110);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == 'o') ADVANCE(137);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == 'n') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'k') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(164);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(169);
      if (lookahead == 'c') ADVANCE(142);
      if (lookahead == 'r') ADVANCE(139);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(173);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(179);
      if (lookahead == 's') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(185);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == 'm') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(167);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == 't') ADVANCE(173);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(146);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(166);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(187);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(152);
      if (lookahead == 'p') ADVANCE(173);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(150);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(165);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(158);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(130);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(161);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(176);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(177);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == 'w') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(177);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == 'w') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(165);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(151);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == 'w') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(156);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(167);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(132);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(185);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(135);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(187);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(82);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_variable_ref);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_domain);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(211);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(211);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(211);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(208);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(211);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(211);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '{') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(218);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '{') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(218);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '}') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(218);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '}') ADVANCE(214);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(218);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(218);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(218);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 83},
  [2] = {.lex_state = 83},
  [3] = {.lex_state = 83},
  [4] = {.lex_state = 83},
  [5] = {.lex_state = 83},
  [6] = {.lex_state = 83},
  [7] = {.lex_state = 83},
  [8] = {.lex_state = 83},
  [9] = {.lex_state = 83},
  [10] = {.lex_state = 83},
  [11] = {.lex_state = 83},
  [12] = {.lex_state = 83},
  [13] = {.lex_state = 83},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 83},
  [16] = {.lex_state = 83},
  [17] = {.lex_state = 83},
  [18] = {.lex_state = 83},
  [19] = {.lex_state = 83},
  [20] = {.lex_state = 83},
  [21] = {.lex_state = 83},
  [22] = {.lex_state = 83},
  [23] = {.lex_state = 83},
  [24] = {.lex_state = 83},
  [25] = {.lex_state = 83},
  [26] = {.lex_state = 83},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 12},
  [38] = {.lex_state = 79},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 206},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 12},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
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
    [sym_source_file] = STATE(58),
    [sym_method_url] = STATE(3),
    [sym_header] = STATE(3),
    [sym_method] = STATE(36),
    [sym_json_body] = STATE(3),
    [sym_variable_declaration] = STATE(3),
    [sym_identifier] = STATE(57),
    [aux_sym_source_file_repeat1] = STATE(3),
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
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      aux_sym_method_token1,
    ACTIONS(20), 1,
      sym__identifier,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(26), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      sym_variable_ref,
    STATE(36), 1,
      sym_method,
    STATE(57), 1,
      sym_identifier,
    STATE(2), 5,
      sym_method_url,
      sym_header,
      sym_json_body,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [32] = 9,
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
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_method,
    STATE(57), 1,
      sym_identifier,
    STATE(2), 5,
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
    STATE(7), 1,
      aux_sym_path_repeat1,
    STATE(16), 1,
      sym_path,
    STATE(22), 1,
      sym_query_params,
    ACTIONS(38), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_variable_ref,
    ACTIONS(40), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
  [107] = 7,
    ACTIONS(42), 1,
      anon_sym_SLASH,
    ACTIONS(44), 1,
      anon_sym_QMARK,
    STATE(7), 1,
      aux_sym_path_repeat1,
    STATE(12), 1,
      sym_path,
    STATE(25), 1,
      sym_query_params,
    ACTIONS(46), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_variable_ref,
    ACTIONS(48), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
  [133] = 4,
    ACTIONS(54), 1,
      anon_sym_SLASH,
    STATE(8), 1,
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
  [151] = 4,
    ACTIONS(60), 1,
      anon_sym_SLASH,
    STATE(8), 1,
      aux_sym_path_repeat1,
    ACTIONS(58), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_variable_ref,
  [169] = 4,
    ACTIONS(67), 1,
      anon_sym_AMP,
    STATE(9), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_variable_ref,
    ACTIONS(65), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
  [186] = 2,
    ACTIONS(58), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
    ACTIONS(56), 5,
      ts_builtin_sym_end,
      anon_sym_SLASH,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_variable_ref,
  [199] = 4,
    ACTIONS(74), 1,
      anon_sym_AMP,
    STATE(13), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(70), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_variable_ref,
    ACTIONS(72), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
  [216] = 4,
    ACTIONS(44), 1,
      anon_sym_QMARK,
    STATE(24), 1,
      sym_query_params,
    ACTIONS(76), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_variable_ref,
    ACTIONS(78), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
  [233] = 4,
    ACTIONS(74), 1,
      anon_sym_AMP,
    STATE(9), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(80), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_variable_ref,
    ACTIONS(82), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
  [250] = 6,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(84), 1,
      sym__identifier,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      sym_variable_ref,
    STATE(39), 1,
      sym_value,
    STATE(42), 3,
      sym_json_body,
      sym_identifier,
      sym_string,
  [271] = 2,
    ACTIONS(92), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
    ACTIONS(90), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_AT,
      sym_variable_ref,
  [284] = 4,
    ACTIONS(44), 1,
      anon_sym_QMARK,
    STATE(20), 1,
      sym_query_params,
    ACTIONS(94), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_variable_ref,
    ACTIONS(96), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
  [301] = 2,
    ACTIONS(65), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
    ACTIONS(63), 4,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_AT,
      sym_variable_ref,
  [313] = 2,
    ACTIONS(100), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
    ACTIONS(98), 4,
      ts_builtin_sym_end,
      anon_sym_AMP,
      anon_sym_AT,
      sym_variable_ref,
  [325] = 2,
    ACTIONS(104), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
    ACTIONS(102), 4,
      ts_builtin_sym_end,
      anon_sym_QMARK,
      anon_sym_AT,
      sym_variable_ref,
  [337] = 2,
    ACTIONS(106), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_variable_ref,
    ACTIONS(108), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
  [348] = 2,
    ACTIONS(110), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_variable_ref,
    ACTIONS(112), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
  [359] = 2,
    ACTIONS(94), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_variable_ref,
    ACTIONS(96), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
  [370] = 2,
    ACTIONS(114), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_variable_ref,
    ACTIONS(116), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
  [381] = 2,
    ACTIONS(38), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_variable_ref,
    ACTIONS(40), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
  [392] = 2,
    ACTIONS(76), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_variable_ref,
    ACTIONS(78), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
  [403] = 2,
    ACTIONS(118), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_variable_ref,
    ACTIONS(120), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
  [414] = 4,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      sym_key_value,
    STATE(55), 1,
      sym_key,
    STATE(56), 1,
      sym_key_value_list,
  [427] = 4,
    ACTIONS(84), 1,
      sym__identifier,
    ACTIONS(124), 1,
      sym_variable_ref,
    STATE(17), 1,
      sym_query_param,
    STATE(49), 1,
      sym_identifier,
  [440] = 4,
    ACTIONS(84), 1,
      sym__identifier,
    ACTIONS(124), 1,
      sym_variable_ref,
    STATE(11), 1,
      sym_query_param,
    STATE(49), 1,
      sym_identifier,
  [453] = 3,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      sym_key_value,
    STATE(55), 1,
      sym_key,
  [463] = 3,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym_key_value_list_repeat1,
  [473] = 3,
    ACTIONS(84), 1,
      sym__identifier,
    ACTIONS(130), 1,
      sym_variable_ref,
    STATE(18), 1,
      sym_identifier,
  [483] = 3,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym_key_value_list_repeat1,
  [493] = 3,
    ACTIONS(84), 1,
      sym__identifier,
    ACTIONS(134), 1,
      sym_variable_ref,
    STATE(52), 1,
      sym_identifier,
  [503] = 3,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym_key_value_list_repeat1,
  [513] = 3,
    ACTIONS(141), 1,
      sym_scheme,
    ACTIONS(143), 1,
      sym_variable_ref,
    STATE(21), 1,
      sym_url,
  [523] = 2,
    ACTIONS(145), 1,
      anon_sym_COLON,
    ACTIONS(147), 2,
      sym_scheme,
      sym_variable_ref,
  [531] = 1,
    ACTIONS(149), 2,
      sym_variable_ref,
      sym_domain,
  [536] = 1,
    ACTIONS(151), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [541] = 1,
    ACTIONS(136), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [546] = 1,
    ACTIONS(153), 2,
      sym_variable_ref,
      aux_sym_string_token1,
  [551] = 1,
    ACTIONS(155), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [556] = 1,
    ACTIONS(147), 2,
      sym_scheme,
      sym_variable_ref,
  [561] = 1,
    ACTIONS(157), 2,
      sym__identifier,
      sym_variable_ref,
  [566] = 1,
    ACTIONS(159), 2,
      sym_variable_ref,
      sym_rest_of_line,
  [571] = 1,
    ACTIONS(161), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [576] = 2,
    ACTIONS(84), 1,
      sym__identifier,
    STATE(54), 1,
      sym_identifier,
  [583] = 1,
    ACTIONS(163), 1,
      anon_sym_COLON,
  [587] = 1,
    ACTIONS(165), 1,
      anon_sym_EQ,
  [591] = 1,
    ACTIONS(167), 1,
      sym_rest_of_line,
  [595] = 1,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
  [599] = 1,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
  [603] = 1,
    ACTIONS(173), 1,
      anon_sym_COLON_SLASH_SLASH,
  [607] = 1,
    ACTIONS(175), 1,
      anon_sym_EQ,
  [611] = 1,
    ACTIONS(177), 1,
      anon_sym_COLON,
  [615] = 1,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
  [619] = 1,
    ACTIONS(145), 1,
      anon_sym_COLON,
  [623] = 1,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 81,
  [SMALL_STATE(6)] = 107,
  [SMALL_STATE(7)] = 133,
  [SMALL_STATE(8)] = 151,
  [SMALL_STATE(9)] = 169,
  [SMALL_STATE(10)] = 186,
  [SMALL_STATE(11)] = 199,
  [SMALL_STATE(12)] = 216,
  [SMALL_STATE(13)] = 233,
  [SMALL_STATE(14)] = 250,
  [SMALL_STATE(15)] = 271,
  [SMALL_STATE(16)] = 284,
  [SMALL_STATE(17)] = 301,
  [SMALL_STATE(18)] = 313,
  [SMALL_STATE(19)] = 325,
  [SMALL_STATE(20)] = 337,
  [SMALL_STATE(21)] = 348,
  [SMALL_STATE(22)] = 359,
  [SMALL_STATE(23)] = 370,
  [SMALL_STATE(24)] = 381,
  [SMALL_STATE(25)] = 392,
  [SMALL_STATE(26)] = 403,
  [SMALL_STATE(27)] = 414,
  [SMALL_STATE(28)] = 427,
  [SMALL_STATE(29)] = 440,
  [SMALL_STATE(30)] = 453,
  [SMALL_STATE(31)] = 463,
  [SMALL_STATE(32)] = 473,
  [SMALL_STATE(33)] = 483,
  [SMALL_STATE(34)] = 493,
  [SMALL_STATE(35)] = 503,
  [SMALL_STATE(36)] = 513,
  [SMALL_STATE(37)] = 523,
  [SMALL_STATE(38)] = 531,
  [SMALL_STATE(39)] = 536,
  [SMALL_STATE(40)] = 541,
  [SMALL_STATE(41)] = 546,
  [SMALL_STATE(42)] = 551,
  [SMALL_STATE(43)] = 556,
  [SMALL_STATE(44)] = 561,
  [SMALL_STATE(45)] = 566,
  [SMALL_STATE(46)] = 571,
  [SMALL_STATE(47)] = 576,
  [SMALL_STATE(48)] = 583,
  [SMALL_STATE(49)] = 587,
  [SMALL_STATE(50)] = 591,
  [SMALL_STATE(51)] = 595,
  [SMALL_STATE(52)] = 599,
  [SMALL_STATE(53)] = 603,
  [SMALL_STATE(54)] = 607,
  [SMALL_STATE(55)] = 611,
  [SMALL_STATE(56)] = 615,
  [SMALL_STATE(57)] = 619,
  [SMALL_STATE(58)] = 623,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 3),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 3),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(44),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2), SHIFT_REPEAT(28),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_params, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_params, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 5),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 5),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_url, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_url, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 3, .production_id = 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, .production_id = 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_list, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_list, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_value_list_repeat1, 2),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_value_list_repeat1, 2), SHIFT_REPEAT(30),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [181] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
