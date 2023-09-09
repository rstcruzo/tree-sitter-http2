#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 91
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 6

enum {
  aux_sym_request_token1 = 1,
  anon_sym_COLON = 2,
  aux_sym_method_token1 = 3,
  anon_sym_COLON_SLASH_SLASH = 4,
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
  sym_rest_of_line = 17,
  sym_domain = 18,
  aux_sym_string_token1 = 19,
  sym__whitespace = 20,
  sym_source_file = 21,
  sym_request = 22,
  sym_method_url = 23,
  sym_header = 24,
  sym_method = 25,
  sym_url = 26,
  sym_path = 27,
  sym_query_params = 28,
  sym_query_param = 29,
  sym_json_body = 30,
  sym_key_value_list = 31,
  sym_key_value = 32,
  sym_key = 33,
  sym_value = 34,
  sym_variable_declaration = 35,
  sym_identifier = 36,
  sym_string = 37,
  aux_sym_source_file_repeat1 = 38,
  aux_sym_request_repeat1 = 39,
  aux_sym_path_repeat1 = 40,
  aux_sym_query_params_repeat1 = 41,
  aux_sym_key_value_list_repeat1 = 42,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_request_token1] = "request_token1",
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
  [sym_rest_of_line] = "rest_of_line",
  [sym_domain] = "domain",
  [aux_sym_string_token1] = "string_token1",
  [sym__whitespace] = "_whitespace",
  [sym_source_file] = "source_file",
  [sym_request] = "request",
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
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_query_params_repeat1] = "query_params_repeat1",
  [aux_sym_key_value_list_repeat1] = "key_value_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_request_token1] = aux_sym_request_token1,
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
  [sym_rest_of_line] = sym_rest_of_line,
  [sym_domain] = sym_domain,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym__whitespace] = sym__whitespace,
  [sym_source_file] = sym_source_file,
  [sym_request] = sym_request,
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
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_query_params_repeat1] = aux_sym_query_params_repeat1,
  [aux_sym_key_value_list_repeat1] = aux_sym_key_value_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_request_token1] = {
    .visible = false,
    .named = false,
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
  [sym_rest_of_line] = {
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
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_request] = {
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
  [aux_sym_request_repeat1] = {
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
  field_parameter_name = 3,
  field_parameter_value = 4,
  field_variable_name = 5,
  field_variable_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_header_name] = "header_name",
  [field_header_value] = "header_value",
  [field_parameter_name] = "parameter_name",
  [field_parameter_value] = "parameter_value",
  [field_variable_name] = "variable_name",
  [field_variable_value] = "variable_value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 2},
  [5] = {.index = 8, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_variable_name, 1},
    {field_variable_value, 3},
  [2] =
    {field_variable_name, 1},
    {field_variable_value, 4},
  [4] =
    {field_header_name, 0},
    {field_header_value, 3},
  [6] =
    {field_variable_name, 1},
    {field_variable_value, 5},
  [8] =
    {field_parameter_name, 0},
    {field_parameter_value, 2},
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
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(84);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '&') ADVANCE(199);
      if (lookahead == ',') ADVANCE(203);
      if (lookahead == '/') ADVANCE(197);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '=') ADVANCE(200);
      if (lookahead == '?') ADVANCE(198);
      if (lookahead == '@') ADVANCE(205);
      if (lookahead == 'C') ADVANCE(121);
      if (lookahead == 'D') ADVANCE(109);
      if (lookahead == 'G') ADVANCE(110);
      if (lookahead == 'H') ADVANCE(111);
      if (lookahead == 'O') ADVANCE(123);
      if (lookahead == 'P') ADVANCE(104);
      if (lookahead == 'T') ADVANCE(124);
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead == 'c') ADVANCE(131);
      if (lookahead == 'd') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == 'f') ADVANCE(156);
      if (lookahead == 'g') ADVANCE(150);
      if (lookahead == 'h') ADVANCE(100);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(157);
      if (lookahead == 'p') ADVANCE(135);
      if (lookahead == 'r') ADVANCE(151);
      if (lookahead == 's') ADVANCE(147);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == 'u') ADVANCE(180);
      if (lookahead == 'w') ADVANCE(183);
      if (lookahead == '{') ADVANCE(201);
      if (lookahead == '}') ADVANCE(202);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(220);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == '?') ADVANCE(198);
      if (lookahead == '{') ADVANCE(201);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(72);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(89);
      END_STATE();
    case 5:
      if (lookahead == '1') ADVANCE(90);
      END_STATE();
    case 6:
      if (lookahead == '1') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '2') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '3') ADVANCE(7);
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 9:
      if (lookahead == '3') ADVANCE(90);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(11);
      if (lookahead == 'd') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == 'f') ADVANCE(36);
      if (lookahead == 'g') ADVANCE(30);
      if (lookahead == 'h') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead == 'm') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(37);
      if (lookahead == 'p') ADVANCE(15);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == 's') ADVANCE(27);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(60);
      if (lookahead == 'w') ADVANCE(63);
      if (lookahead == '{') ADVANCE(76);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'k') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 20:
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == 'c') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(49);
      END_STATE();
    case 35:
      if (lookahead == 'g') ADVANCE(90);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == 'k') ADVANCE(28);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 46:
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(90);
      END_STATE();
    case 56:
      if (lookahead == 'p') ADVANCE(94);
      END_STATE();
    case 57:
      if (lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(59);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == 'w') ADVANCE(62);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(59);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == 'w') ADVANCE(62);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(6);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == 'w') ADVANCE(62);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(2);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 74:
      if (lookahead == 'x') ADVANCE(17);
      END_STATE();
    case 75:
      if (lookahead == 'y') ADVANCE(69);
      END_STATE();
    case 76:
      if (lookahead == '{') ADVANCE(82);
      END_STATE();
    case 77:
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 78:
      if (lookahead == '{') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 79:
      if (lookahead == '}') ADVANCE(80);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 80:
      if (lookahead == '}') ADVANCE(206);
      END_STATE();
    case 81:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 82:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 83:
      if (eof) ADVANCE(84);
      if (lookahead == '"') ADVANCE(204);
      if (lookahead == '&') ADVANCE(199);
      if (lookahead == ',') ADVANCE(203);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '=') ADVANCE(200);
      if (lookahead == '@') ADVANCE(205);
      if (lookahead == 'C') ADVANCE(121);
      if (lookahead == 'D') ADVANCE(109);
      if (lookahead == 'G') ADVANCE(110);
      if (lookahead == 'H') ADVANCE(111);
      if (lookahead == 'O') ADVANCE(123);
      if (lookahead == 'P') ADVANCE(104);
      if (lookahead == 'T') ADVANCE(124);
      if (lookahead == '{') ADVANCE(201);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(220);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_request_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '/') ADVANCE(4);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_scheme);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 'h') ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 'h') ADVANCE(90);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '1') ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '1') ADVANCE(97);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '2') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '3') ADVANCE(99);
      if (lookahead == 't') ADVANCE(190);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '3') ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(108);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(107);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(129);
      if (lookahead == 'O') ADVANCE(125);
      if (lookahead == 'U') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(112);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(117);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(102);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(130);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(122);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(114);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(126);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(118);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(119);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(128);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(103);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(88);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(106);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(112);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == 'o') ADVANCE(139);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead == 'k') ADVANCE(143);
      if (lookahead == 'r') ADVANCE(149);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(166);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(171);
      if (lookahead == 'c') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(141);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(181);
      if (lookahead == 's') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(187);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == 'm') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(170);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(148);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(168);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(173);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(146);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(189);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 'n') ADVANCE(154);
      if (lookahead == 'p') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(152);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(167);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(193);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(160);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(163);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(179);
      if (lookahead == 's') ADVANCE(185);
      if (lookahead == 't') ADVANCE(141);
      if (lookahead == 'w') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(179);
      if (lookahead == 't') ADVANCE(141);
      if (lookahead == 'w') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(167);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(153);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(185);
      if (lookahead == 't') ADVANCE(141);
      if (lookahead == 'w') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(158);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(95);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(134);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(187);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(137);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(189);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(82);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_variable_ref);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '{') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '}') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '}') ADVANCE(208);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(212);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_domain);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(213);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(219);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(219);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(219);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(216);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(219);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(220);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 83},
  [3] = {.lex_state = 83},
  [4] = {.lex_state = 83},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 83},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 83},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 78},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 77},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 81},
  [54] = {.lex_state = 215},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 81},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 83},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 81},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 83},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 83},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 81},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 83},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_request_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_method_token1] = ACTIONS(1),
    [anon_sym_COLON_SLASH_SLASH] = ACTIONS(1),
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
    [sym__whitespace] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(84),
    [sym_request] = STATE(6),
    [sym_method_url] = STATE(83),
    [sym_method] = STATE(78),
    [sym_variable_declaration] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_method_token1] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
    [sym_variable_ref] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(11), 1,
      aux_sym_method_token1,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    STATE(3), 1,
      aux_sym_request_repeat1,
    STATE(21), 1,
      sym_json_body,
    STATE(58), 1,
      sym_header,
    STATE(67), 1,
      sym_identifier,
    ACTIONS(9), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_variable_ref,
  [27] = 8,
    ACTIONS(13), 1,
      sym__identifier,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      aux_sym_method_token1,
    STATE(4), 1,
      aux_sym_request_repeat1,
    STATE(18), 1,
      sym_json_body,
    STATE(58), 1,
      sym_header,
    STATE(67), 1,
      sym_identifier,
    ACTIONS(17), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_variable_ref,
  [54] = 7,
    ACTIONS(25), 1,
      sym__identifier,
    ACTIONS(28), 1,
      sym_variable_ref,
    STATE(4), 1,
      aux_sym_request_repeat1,
    STATE(58), 1,
      sym_header,
    STATE(67), 1,
      sym_identifier,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      anon_sym_AT,
    ACTIONS(23), 2,
      aux_sym_method_token1,
      anon_sym_LBRACE,
  [78] = 7,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_variable_ref,
    ACTIONS(37), 1,
      sym__whitespace,
    STATE(50), 1,
      sym_value,
    STATE(52), 3,
      sym_json_body,
      sym_identifier,
      sym_string,
  [102] = 6,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(78), 1,
      sym_method,
    STATE(83), 1,
      sym_method_url,
    ACTIONS(5), 2,
      aux_sym_method_token1,
      sym_variable_ref,
    STATE(7), 3,
      sym_request,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [124] = 6,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      anon_sym_AT,
    STATE(78), 1,
      sym_method,
    STATE(83), 1,
      sym_method_url,
    ACTIONS(43), 2,
      aux_sym_method_token1,
      sym_variable_ref,
    STATE(7), 3,
      sym_request,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [146] = 7,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_variable_ref,
    ACTIONS(49), 1,
      sym__whitespace,
    STATE(47), 1,
      sym_value,
    STATE(52), 3,
      sym_json_body,
      sym_identifier,
      sym_string,
  [170] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_variable_ref,
    STATE(47), 1,
      sym_value,
    STATE(52), 3,
      sym_json_body,
      sym_identifier,
      sym_string,
  [191] = 6,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      sym_variable_ref,
    STATE(44), 1,
      sym_value,
    STATE(52), 3,
      sym_json_body,
      sym_identifier,
      sym_string,
  [212] = 1,
    ACTIONS(51), 7,
      aux_sym_request_token1,
      anon_sym_COLON,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__whitespace,
  [222] = 6,
    ACTIONS(53), 1,
      aux_sym_request_token1,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    STATE(22), 1,
      aux_sym_path_repeat1,
    STATE(34), 1,
      sym_path,
    STATE(82), 1,
      sym_query_params,
  [241] = 6,
    ACTIONS(55), 1,
      anon_sym_SLASH,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(59), 1,
      aux_sym_request_token1,
    STATE(22), 1,
      aux_sym_path_repeat1,
    STATE(37), 1,
      sym_path,
    STATE(65), 1,
      sym_query_params,
  [260] = 2,
    ACTIONS(21), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_variable_ref,
    ACTIONS(23), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
  [271] = 1,
    ACTIONS(61), 6,
      ts_builtin_sym_end,
      aux_sym_request_token1,
      aux_sym_method_token1,
      anon_sym_COMMA,
      anon_sym_AT,
      sym_variable_ref,
  [280] = 5,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      sym__whitespace,
    STATE(30), 1,
      sym_key_value,
    STATE(68), 1,
      sym_key_value_list,
    STATE(90), 1,
      sym_key,
  [296] = 4,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(67), 1,
      sym_variable_ref,
    STATE(48), 1,
      sym_query_param,
    STATE(85), 1,
      sym_identifier,
  [309] = 1,
    ACTIONS(69), 4,
      ts_builtin_sym_end,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [316] = 4,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      sym__whitespace,
    STATE(45), 1,
      sym_key_value,
    STATE(90), 1,
      sym_key,
  [329] = 1,
    ACTIONS(71), 4,
      ts_builtin_sym_end,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [336] = 1,
    ACTIONS(17), 4,
      ts_builtin_sym_end,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [343] = 3,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    STATE(25), 1,
      aux_sym_path_repeat1,
    ACTIONS(73), 2,
      aux_sym_request_token1,
      anon_sym_QMARK,
  [354] = 4,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(67), 1,
      sym_variable_ref,
    STATE(33), 1,
      sym_query_param,
    STATE(85), 1,
      sym_identifier,
  [367] = 2,
    ACTIONS(73), 2,
      aux_sym_request_token1,
      anon_sym_QMARK,
    ACTIONS(77), 2,
      sym__identifier,
      sym_variable_ref,
  [376] = 3,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    STATE(25), 1,
      aux_sym_path_repeat1,
    ACTIONS(79), 2,
      aux_sym_request_token1,
      anon_sym_QMARK,
  [387] = 1,
    ACTIONS(84), 4,
      ts_builtin_sym_end,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [394] = 2,
    ACTIONS(77), 2,
      sym__identifier,
      sym_variable_ref,
    ACTIONS(86), 2,
      aux_sym_request_token1,
      anon_sym_QMARK,
  [403] = 1,
    ACTIONS(88), 4,
      ts_builtin_sym_end,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [410] = 3,
    ACTIONS(90), 1,
      aux_sym_request_token1,
    ACTIONS(92), 1,
      anon_sym_AMP,
    STATE(29), 1,
      aux_sym_query_params_repeat1,
  [420] = 3,
    ACTIONS(95), 1,
      aux_sym_request_token1,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym_key_value_list_repeat1,
  [430] = 3,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    ACTIONS(99), 1,
      aux_sym_request_token1,
    STATE(39), 1,
      aux_sym_key_value_list_repeat1,
  [440] = 3,
    ACTIONS(101), 1,
      sym_scheme,
    ACTIONS(103), 1,
      sym_variable_ref,
    STATE(64), 1,
      sym_url,
  [450] = 3,
    ACTIONS(105), 1,
      aux_sym_request_token1,
    ACTIONS(107), 1,
      anon_sym_AMP,
    STATE(36), 1,
      aux_sym_query_params_repeat1,
  [460] = 3,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(109), 1,
      aux_sym_request_token1,
    STATE(81), 1,
      sym_query_params,
  [470] = 1,
    ACTIONS(79), 3,
      aux_sym_request_token1,
      anon_sym_SLASH,
      anon_sym_QMARK,
  [476] = 3,
    ACTIONS(107), 1,
      anon_sym_AMP,
    ACTIONS(111), 1,
      aux_sym_request_token1,
    STATE(29), 1,
      aux_sym_query_params_repeat1,
  [486] = 3,
    ACTIONS(57), 1,
      anon_sym_QMARK,
    ACTIONS(113), 1,
      aux_sym_request_token1,
    STATE(80), 1,
      sym_query_params,
  [496] = 3,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(115), 1,
      sym_variable_ref,
    STATE(49), 1,
      sym_identifier,
  [506] = 3,
    ACTIONS(117), 1,
      aux_sym_request_token1,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_key_value_list_repeat1,
  [516] = 3,
    ACTIONS(31), 1,
      sym__identifier,
    ACTIONS(122), 1,
      sym_variable_ref,
    STATE(76), 1,
      sym_identifier,
  [526] = 2,
    ACTIONS(124), 1,
      sym_variable_ref,
    ACTIONS(126), 1,
      sym_rest_of_line,
  [533] = 2,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    STATE(59), 1,
      sym_key,
  [540] = 1,
    ACTIONS(128), 2,
      aux_sym_request_token1,
      anon_sym_COMMA,
  [545] = 1,
    ACTIONS(130), 2,
      aux_sym_request_token1,
      anon_sym_COMMA,
  [550] = 1,
    ACTIONS(132), 2,
      aux_sym_request_token1,
      anon_sym_COMMA,
  [555] = 2,
    ACTIONS(31), 1,
      sym__identifier,
    STATE(55), 1,
      sym_identifier,
  [562] = 1,
    ACTIONS(134), 2,
      aux_sym_request_token1,
      anon_sym_COMMA,
  [567] = 1,
    ACTIONS(90), 2,
      aux_sym_request_token1,
      anon_sym_AMP,
  [572] = 1,
    ACTIONS(136), 2,
      aux_sym_request_token1,
      anon_sym_AMP,
  [577] = 1,
    ACTIONS(138), 2,
      aux_sym_request_token1,
      anon_sym_COMMA,
  [582] = 1,
    ACTIONS(140), 2,
      sym_variable_ref,
      sym_domain,
  [587] = 1,
    ACTIONS(142), 2,
      aux_sym_request_token1,
      anon_sym_COMMA,
  [592] = 2,
    ACTIONS(144), 1,
      sym_rest_of_line,
    ACTIONS(146), 1,
      sym__whitespace,
  [599] = 2,
    ACTIONS(148), 1,
      sym_variable_ref,
    ACTIONS(150), 1,
      aux_sym_string_token1,
  [606] = 2,
    ACTIONS(152), 1,
      anon_sym_EQ,
    ACTIONS(154), 1,
      sym__whitespace,
  [613] = 2,
    ACTIONS(156), 1,
      sym_rest_of_line,
    ACTIONS(158), 1,
      sym__whitespace,
  [620] = 1,
    ACTIONS(77), 2,
      sym__identifier,
      sym_variable_ref,
  [625] = 1,
    ACTIONS(160), 1,
      aux_sym_request_token1,
  [629] = 1,
    ACTIONS(162), 1,
      anon_sym_COLON,
  [633] = 1,
    ACTIONS(164), 1,
      aux_sym_request_token1,
  [637] = 1,
    ACTIONS(144), 1,
      sym_rest_of_line,
  [641] = 1,
    ACTIONS(166), 1,
      aux_sym_request_token1,
  [645] = 1,
    ACTIONS(168), 1,
      aux_sym_request_token1,
  [649] = 1,
    ACTIONS(170), 1,
      aux_sym_request_token1,
  [653] = 1,
    ACTIONS(113), 1,
      aux_sym_request_token1,
  [657] = 1,
    ACTIONS(172), 1,
      anon_sym_COLON_SLASH_SLASH,
  [661] = 1,
    ACTIONS(174), 1,
      anon_sym_COLON,
  [665] = 1,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
  [669] = 1,
    ACTIONS(178), 1,
      aux_sym_request_token1,
  [673] = 1,
    ACTIONS(180), 1,
      anon_sym_COLON,
  [677] = 1,
    ACTIONS(182), 1,
      anon_sym_EQ,
  [681] = 1,
    ACTIONS(184), 1,
      aux_sym_request_token1,
  [685] = 1,
    ACTIONS(186), 1,
      aux_sym_request_token1,
  [689] = 1,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
  [693] = 1,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
  [697] = 1,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
  [701] = 1,
    ACTIONS(194), 1,
      aux_sym_request_token1,
  [705] = 1,
    ACTIONS(196), 1,
      sym__whitespace,
  [709] = 1,
    ACTIONS(198), 1,
      sym__whitespace,
  [713] = 1,
    ACTIONS(200), 1,
      aux_sym_request_token1,
  [717] = 1,
    ACTIONS(59), 1,
      aux_sym_request_token1,
  [721] = 1,
    ACTIONS(109), 1,
      aux_sym_request_token1,
  [725] = 1,
    ACTIONS(202), 1,
      aux_sym_request_token1,
  [729] = 1,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
  [733] = 1,
    ACTIONS(206), 1,
      anon_sym_EQ,
  [737] = 1,
    ACTIONS(208), 1,
      aux_sym_request_token1,
  [741] = 1,
    ACTIONS(210), 1,
      sym_rest_of_line,
  [745] = 1,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
  [749] = 1,
    ACTIONS(214), 1,
      sym__whitespace,
  [753] = 1,
    ACTIONS(216), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 102,
  [SMALL_STATE(7)] = 124,
  [SMALL_STATE(8)] = 146,
  [SMALL_STATE(9)] = 170,
  [SMALL_STATE(10)] = 191,
  [SMALL_STATE(11)] = 212,
  [SMALL_STATE(12)] = 222,
  [SMALL_STATE(13)] = 241,
  [SMALL_STATE(14)] = 260,
  [SMALL_STATE(15)] = 271,
  [SMALL_STATE(16)] = 280,
  [SMALL_STATE(17)] = 296,
  [SMALL_STATE(18)] = 309,
  [SMALL_STATE(19)] = 316,
  [SMALL_STATE(20)] = 329,
  [SMALL_STATE(21)] = 336,
  [SMALL_STATE(22)] = 343,
  [SMALL_STATE(23)] = 354,
  [SMALL_STATE(24)] = 367,
  [SMALL_STATE(25)] = 376,
  [SMALL_STATE(26)] = 387,
  [SMALL_STATE(27)] = 394,
  [SMALL_STATE(28)] = 403,
  [SMALL_STATE(29)] = 410,
  [SMALL_STATE(30)] = 420,
  [SMALL_STATE(31)] = 430,
  [SMALL_STATE(32)] = 440,
  [SMALL_STATE(33)] = 450,
  [SMALL_STATE(34)] = 460,
  [SMALL_STATE(35)] = 470,
  [SMALL_STATE(36)] = 476,
  [SMALL_STATE(37)] = 486,
  [SMALL_STATE(38)] = 496,
  [SMALL_STATE(39)] = 506,
  [SMALL_STATE(40)] = 516,
  [SMALL_STATE(41)] = 526,
  [SMALL_STATE(42)] = 533,
  [SMALL_STATE(43)] = 540,
  [SMALL_STATE(44)] = 545,
  [SMALL_STATE(45)] = 550,
  [SMALL_STATE(46)] = 555,
  [SMALL_STATE(47)] = 562,
  [SMALL_STATE(48)] = 567,
  [SMALL_STATE(49)] = 572,
  [SMALL_STATE(50)] = 577,
  [SMALL_STATE(51)] = 582,
  [SMALL_STATE(52)] = 587,
  [SMALL_STATE(53)] = 592,
  [SMALL_STATE(54)] = 599,
  [SMALL_STATE(55)] = 606,
  [SMALL_STATE(56)] = 613,
  [SMALL_STATE(57)] = 620,
  [SMALL_STATE(58)] = 625,
  [SMALL_STATE(59)] = 629,
  [SMALL_STATE(60)] = 633,
  [SMALL_STATE(61)] = 637,
  [SMALL_STATE(62)] = 641,
  [SMALL_STATE(63)] = 645,
  [SMALL_STATE(64)] = 649,
  [SMALL_STATE(65)] = 653,
  [SMALL_STATE(66)] = 657,
  [SMALL_STATE(67)] = 661,
  [SMALL_STATE(68)] = 665,
  [SMALL_STATE(69)] = 669,
  [SMALL_STATE(70)] = 673,
  [SMALL_STATE(71)] = 677,
  [SMALL_STATE(72)] = 681,
  [SMALL_STATE(73)] = 685,
  [SMALL_STATE(74)] = 689,
  [SMALL_STATE(75)] = 693,
  [SMALL_STATE(76)] = 697,
  [SMALL_STATE(77)] = 701,
  [SMALL_STATE(78)] = 705,
  [SMALL_STATE(79)] = 709,
  [SMALL_STATE(80)] = 713,
  [SMALL_STATE(81)] = 717,
  [SMALL_STATE(82)] = 721,
  [SMALL_STATE(83)] = 725,
  [SMALL_STATE(84)] = 729,
  [SMALL_STATE(85)] = 733,
  [SMALL_STATE(86)] = 737,
  [SMALL_STATE(87)] = 741,
  [SMALL_STATE(88)] = 745,
  [SMALL_STATE(89)] = 749,
  [SMALL_STATE(90)] = 753,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(11),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(67),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(89),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 6),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(57),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 7, .production_id = 4),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2), SHIFT_REPEAT(17),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_value_list_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_value_list_repeat1, 2), SHIFT_REPEAT(60),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 5),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_value_list_repeat1, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3, .production_id = 5),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_url, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_list, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_list, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 5),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [204] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
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
