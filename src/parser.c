#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 102
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 6

enum {
  aux_sym_status_line_token1 = 1,
  anon_sym_HTTP_SLASH = 2,
  aux_sym_http_version_token1 = 3,
  sym_status_code = 4,
  anon_sym_COLON = 5,
  aux_sym_method_token1 = 6,
  anon_sym_COLON_SLASH_SLASH = 7,
  sym_scheme = 8,
  sym__identifier = 9,
  anon_sym_SLASH = 10,
  anon_sym_QMARK = 11,
  anon_sym_AMP = 12,
  anon_sym_EQ = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  anon_sym_COMMA = 16,
  anon_sym_DQUOTE = 17,
  anon_sym_AT = 18,
  sym_variable_ref = 19,
  sym_rest_of_line = 20,
  sym_domain = 21,
  aux_sym_string_token1 = 22,
  sym__whitespace = 23,
  sym_source_file = 24,
  sym_status_line = 25,
  sym_response = 26,
  sym_http_version = 27,
  sym_reason_phrase = 28,
  sym_request = 29,
  sym_method_url = 30,
  sym_header = 31,
  sym_method = 32,
  sym_url = 33,
  sym_path = 34,
  sym_query_params = 35,
  sym_query_param = 36,
  sym_json_body = 37,
  sym_key_value_list = 38,
  sym_key_value = 39,
  sym_key = 40,
  sym_value = 41,
  sym_variable_declaration = 42,
  sym_identifier = 43,
  sym_string = 44,
  aux_sym_source_file_repeat1 = 45,
  aux_sym_response_repeat1 = 46,
  aux_sym_path_repeat1 = 47,
  aux_sym_query_params_repeat1 = 48,
  aux_sym_key_value_list_repeat1 = 49,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_status_line_token1] = "status_line_token1",
  [anon_sym_HTTP_SLASH] = "HTTP/",
  [aux_sym_http_version_token1] = "http_version_token1",
  [sym_status_code] = "status_code",
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
  [sym_status_line] = "status_line",
  [sym_response] = "response",
  [sym_http_version] = "http_version",
  [sym_reason_phrase] = "reason_phrase",
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
  [aux_sym_response_repeat1] = "response_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_query_params_repeat1] = "query_params_repeat1",
  [aux_sym_key_value_list_repeat1] = "key_value_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_status_line_token1] = aux_sym_status_line_token1,
  [anon_sym_HTTP_SLASH] = anon_sym_HTTP_SLASH,
  [aux_sym_http_version_token1] = aux_sym_http_version_token1,
  [sym_status_code] = sym_status_code,
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
  [sym_status_line] = sym_status_line,
  [sym_response] = sym_response,
  [sym_http_version] = sym_http_version,
  [sym_reason_phrase] = sym_reason_phrase,
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
  [aux_sym_response_repeat1] = aux_sym_response_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_query_params_repeat1] = aux_sym_query_params_repeat1,
  [aux_sym_key_value_list_repeat1] = aux_sym_key_value_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_status_line_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_HTTP_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_http_version_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_status_code] = {
    .visible = true,
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
  [sym_status_line] = {
    .visible = true,
    .named = true,
  },
  [sym_response] = {
    .visible = true,
    .named = true,
  },
  [sym_http_version] = {
    .visible = true,
    .named = true,
  },
  [sym_reason_phrase] = {
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
  [aux_sym_response_repeat1] = {
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
    {field_header_name, 0},
    {field_header_value, 3},
  [4] =
    {field_variable_name, 1},
    {field_variable_value, 4},
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
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(85);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '&') ADVANCE(208);
      if (lookahead == ',') ADVANCE(212);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == '=') ADVANCE(209);
      if (lookahead == '?') ADVANCE(207);
      if (lookahead == '@') ADVANCE(214);
      if (lookahead == 'C') ADVANCE(128);
      if (lookahead == 'D') ADVANCE(116);
      if (lookahead == 'G') ADVANCE(117);
      if (lookahead == 'H') ADVANCE(118);
      if (lookahead == 'O') ADVANCE(131);
      if (lookahead == 'P') ADVANCE(111);
      if (lookahead == 'T') ADVANCE(132);
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == 'c') ADVANCE(140);
      if (lookahead == 'd') ADVANCE(142);
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == 'f') ADVANCE(165);
      if (lookahead == 'g') ADVANCE(159);
      if (lookahead == 'h') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead == 'm') ADVANCE(147);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == 'p') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(160);
      if (lookahead == 's') ADVANCE(156);
      if (lookahead == 't') ADVANCE(145);
      if (lookahead == 'u') ADVANCE(189);
      if (lookahead == 'w') ADVANCE(192);
      if (lookahead == '{') ADVANCE(210);
      if (lookahead == '}') ADVANCE(211);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(86);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == '?') ADVANCE(207);
      if (lookahead == '{') ADVANCE(210);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(86);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(229);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(72);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(95);
      END_STATE();
    case 5:
      if (lookahead == '1') ADVANCE(96);
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
      if (lookahead == '3') ADVANCE(96);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
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
      if (lookahead == 'a') ADVANCE(96);
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
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(96);
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
      if (lookahead == 'g') ADVANCE(96);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(98);
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
      if (lookahead == 'm') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(34);
      if (lookahead == 'p') ADVANCE(55);
      END_STATE();
    case 46:
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(96);
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
      if (lookahead == 'p') ADVANCE(96);
      END_STATE();
    case 56:
      if (lookahead == 'p') ADVANCE(100);
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
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(100);
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
      if (lookahead == 't') ADVANCE(96);
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
      if (lookahead == '{') ADVANCE(83);
      END_STATE();
    case 77:
      if (lookahead == '{') ADVANCE(76);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 78:
      if (lookahead == '{') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(221);
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
      if (lookahead == '}') ADVANCE(215);
      END_STATE();
    case 81:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(221);
      END_STATE();
    case 82:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 83:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 84:
      if (eof) ADVANCE(85);
      if (lookahead == '"') ADVANCE(213);
      if (lookahead == '&') ADVANCE(208);
      if (lookahead == ',') ADVANCE(212);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == '=') ADVANCE(209);
      if (lookahead == '@') ADVANCE(214);
      if (lookahead == 'C') ADVANCE(128);
      if (lookahead == 'D') ADVANCE(116);
      if (lookahead == 'G') ADVANCE(117);
      if (lookahead == 'H') ADVANCE(118);
      if (lookahead == 'O') ADVANCE(131);
      if (lookahead == 'P') ADVANCE(111);
      if (lookahead == 'T') ADVANCE(132);
      if (lookahead == '{') ADVANCE(210);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(86);
      if (('\t' <= lookahead && lookahead <= 11) ||
          lookahead == ' ') ADVANCE(229);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_status_line_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_status_code);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '/') ADVANCE(4);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_scheme);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 'h') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 'h') ADVANCE(96);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '/') ADVANCE(87);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '1') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '1') ADVANCE(104);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '2') ADVANCE(108);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '3') ADVANCE(106);
      if (lookahead == 't') ADVANCE(199);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '3') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(115);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(114);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(137);
      if (lookahead == 'O') ADVANCE(133);
      if (lookahead == 'U') ADVANCE(135);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(135);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(122);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(119);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(124);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(135);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(109);
      if (lookahead == 'T') ADVANCE(138);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(112);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(139);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(129);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(121);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(134);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(125);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(126);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(103);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(136);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(110);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(135);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(94);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(123);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(113);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(130);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(119);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == 'o') ADVANCE(148);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'n') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == 'k') ADVANCE(152);
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(164);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(180);
      if (lookahead == 'c') ADVANCE(153);
      if (lookahead == 'r') ADVANCE(150);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(190);
      if (lookahead == 's') ADVANCE(195);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(193);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(196);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == 'm') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(173);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(157);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(155);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead == 'p') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(183);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(176);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(202);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(99);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(187);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(188);
      if (lookahead == 's') ADVANCE(194);
      if (lookahead == 't') ADVANCE(150);
      if (lookahead == 'w') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(188);
      if (lookahead == 't') ADVANCE(150);
      if (lookahead == 'w') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(176);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(162);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(194);
      if (lookahead == 't') ADVANCE(150);
      if (lookahead == 'w') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(167);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(101);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(196);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(146);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(83);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_variable_ref);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '{') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(221);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '}') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(221);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(221);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(221);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(221);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_domain);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(228);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(228);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(228);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(225);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(228);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(228);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(229);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 84},
  [5] = {.lex_state = 84},
  [6] = {.lex_state = 84},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 84},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 84},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 84},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 84},
  [16] = {.lex_state = 84},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 77},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 224},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 81},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 78},
  [55] = {.lex_state = 81},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 81},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 84},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 84},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 84},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 82},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 84},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 81},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 81},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_status_line_token1] = ACTIONS(1),
    [anon_sym_HTTP_SLASH] = ACTIONS(1),
    [aux_sym_http_version_token1] = ACTIONS(1),
    [sym_status_code] = ACTIONS(1),
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
    [sym_source_file] = STATE(89),
    [sym_status_line] = STATE(8),
    [sym_response] = STATE(3),
    [sym_http_version] = STATE(84),
    [sym_request] = STATE(3),
    [sym_method_url] = STATE(82),
    [sym_method] = STATE(80),
    [sym_variable_declaration] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_HTTP_SLASH] = ACTIONS(5),
    [aux_sym_method_token1] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(9),
    [sym_variable_ref] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(19), 1,
      anon_sym_AT,
    STATE(8), 1,
      sym_status_line,
    STATE(80), 1,
      sym_method,
    STATE(82), 1,
      sym_method_url,
    STATE(84), 1,
      sym_http_version,
    ACTIONS(16), 2,
      aux_sym_method_token1,
      sym_variable_ref,
    STATE(2), 4,
      sym_response,
      sym_request,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [32] = 9,
    ACTIONS(5), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_status_line,
    STATE(80), 1,
      sym_method,
    STATE(82), 1,
      sym_method_url,
    STATE(84), 1,
      sym_http_version,
    ACTIONS(7), 2,
      aux_sym_method_token1,
      sym_variable_ref,
    STATE(2), 4,
      sym_response,
      sym_request,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [64] = 8,
    ACTIONS(26), 1,
      aux_sym_method_token1,
    ACTIONS(28), 1,
      sym__identifier,
    ACTIONS(30), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      aux_sym_response_repeat1,
    STATE(20), 1,
      sym_json_body,
    STATE(66), 1,
      sym_header,
    STATE(73), 1,
      sym_identifier,
    ACTIONS(24), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [92] = 8,
    ACTIONS(28), 1,
      sym__identifier,
    ACTIONS(30), 1,
      anon_sym_LBRACE,
    ACTIONS(34), 1,
      aux_sym_method_token1,
    STATE(4), 1,
      aux_sym_response_repeat1,
    STATE(24), 1,
      sym_json_body,
    STATE(66), 1,
      sym_header,
    STATE(73), 1,
      sym_identifier,
    ACTIONS(32), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [120] = 7,
    ACTIONS(40), 1,
      sym__identifier,
    ACTIONS(43), 1,
      sym_variable_ref,
    STATE(6), 1,
      aux_sym_response_repeat1,
    STATE(66), 1,
      sym_header,
    STATE(73), 1,
      sym_identifier,
    ACTIONS(38), 2,
      aux_sym_method_token1,
      anon_sym_LBRACE,
    ACTIONS(36), 3,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
  [145] = 7,
    ACTIONS(30), 1,
      anon_sym_LBRACE,
    ACTIONS(46), 1,
      sym__identifier,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      sym_variable_ref,
    ACTIONS(52), 1,
      sym__whitespace,
    STATE(47), 1,
      sym_value,
    STATE(48), 3,
      sym_json_body,
      sym_identifier,
      sym_string,
  [169] = 6,
    ACTIONS(28), 1,
      sym__identifier,
    ACTIONS(56), 1,
      aux_sym_method_token1,
    STATE(10), 1,
      aux_sym_response_repeat1,
    STATE(66), 1,
      sym_header,
    STATE(73), 1,
      sym_identifier,
    ACTIONS(54), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [191] = 7,
    ACTIONS(30), 1,
      anon_sym_LBRACE,
    ACTIONS(46), 1,
      sym__identifier,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      sym_variable_ref,
    ACTIONS(58), 1,
      sym__whitespace,
    STATE(59), 1,
      sym_value,
    STATE(48), 3,
      sym_json_body,
      sym_identifier,
      sym_string,
  [215] = 6,
    ACTIONS(28), 1,
      sym__identifier,
    ACTIONS(62), 1,
      aux_sym_method_token1,
    STATE(6), 1,
      aux_sym_response_repeat1,
    STATE(66), 1,
      sym_header,
    STATE(73), 1,
      sym_identifier,
    ACTIONS(60), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [237] = 6,
    ACTIONS(30), 1,
      anon_sym_LBRACE,
    ACTIONS(46), 1,
      sym__identifier,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      sym_variable_ref,
    STATE(61), 1,
      sym_value,
    STATE(48), 3,
      sym_json_body,
      sym_identifier,
      sym_string,
  [258] = 6,
    ACTIONS(30), 1,
      anon_sym_LBRACE,
    ACTIONS(46), 1,
      sym__identifier,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      sym_variable_ref,
    STATE(59), 1,
      sym_value,
    STATE(48), 3,
      sym_json_body,
      sym_identifier,
      sym_string,
  [279] = 2,
    ACTIONS(38), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
    ACTIONS(36), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [291] = 1,
    ACTIONS(64), 7,
      ts_builtin_sym_end,
      aux_sym_status_line_token1,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_COMMA,
      anon_sym_AT,
      sym_variable_ref,
  [301] = 1,
    ACTIONS(66), 7,
      aux_sym_status_line_token1,
      anon_sym_COLON,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      sym__whitespace,
  [311] = 2,
    ACTIONS(70), 2,
      aux_sym_method_token1,
      sym__identifier,
    ACTIONS(68), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [322] = 6,
    ACTIONS(72), 1,
      aux_sym_status_line_token1,
    ACTIONS(74), 1,
      anon_sym_SLASH,
    ACTIONS(76), 1,
      anon_sym_QMARK,
    STATE(31), 1,
      aux_sym_path_repeat1,
    STATE(38), 1,
      sym_path,
    STATE(75), 1,
      sym_query_params,
  [341] = 6,
    ACTIONS(74), 1,
      anon_sym_SLASH,
    ACTIONS(76), 1,
      anon_sym_QMARK,
    ACTIONS(78), 1,
      aux_sym_status_line_token1,
    STATE(31), 1,
      aux_sym_path_repeat1,
    STATE(33), 1,
      sym_path,
    STATE(93), 1,
      sym_query_params,
  [360] = 1,
    ACTIONS(80), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [368] = 1,
    ACTIONS(82), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [376] = 1,
    ACTIONS(84), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [384] = 5,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      sym__whitespace,
    STATE(40), 1,
      sym_key_value,
    STATE(78), 1,
      sym_key,
    STATE(79), 1,
      sym_key_value_list,
  [400] = 1,
    ACTIONS(90), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [408] = 1,
    ACTIONS(24), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [416] = 3,
    ACTIONS(94), 1,
      anon_sym_SLASH,
    STATE(25), 1,
      aux_sym_path_repeat1,
    ACTIONS(92), 2,
      aux_sym_status_line_token1,
      anon_sym_QMARK,
  [427] = 2,
    ACTIONS(97), 2,
      aux_sym_status_line_token1,
      anon_sym_QMARK,
    ACTIONS(99), 2,
      sym__identifier,
      sym_variable_ref,
  [436] = 4,
    ACTIONS(46), 1,
      sym__identifier,
    ACTIONS(101), 1,
      sym_variable_ref,
    STATE(44), 1,
      sym_query_param,
    STATE(74), 1,
      sym_identifier,
  [449] = 2,
    ACTIONS(99), 2,
      sym__identifier,
      sym_variable_ref,
    ACTIONS(103), 2,
      aux_sym_status_line_token1,
      anon_sym_QMARK,
  [458] = 4,
    ACTIONS(46), 1,
      sym__identifier,
    ACTIONS(101), 1,
      sym_variable_ref,
    STATE(35), 1,
      sym_query_param,
    STATE(74), 1,
      sym_identifier,
  [471] = 4,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      sym__whitespace,
    STATE(60), 1,
      sym_key_value,
    STATE(78), 1,
      sym_key,
  [484] = 3,
    ACTIONS(105), 1,
      anon_sym_SLASH,
    STATE(25), 1,
      aux_sym_path_repeat1,
    ACTIONS(103), 2,
      aux_sym_status_line_token1,
      anon_sym_QMARK,
  [495] = 3,
    ACTIONS(46), 1,
      sym__identifier,
    ACTIONS(107), 1,
      sym_variable_ref,
    STATE(46), 1,
      sym_identifier,
  [505] = 3,
    ACTIONS(76), 1,
      anon_sym_QMARK,
    ACTIONS(109), 1,
      aux_sym_status_line_token1,
    STATE(81), 1,
      sym_query_params,
  [515] = 3,
    ACTIONS(111), 1,
      sym_scheme,
    ACTIONS(113), 1,
      sym_variable_ref,
    STATE(96), 1,
      sym_url,
  [525] = 3,
    ACTIONS(115), 1,
      aux_sym_status_line_token1,
    ACTIONS(117), 1,
      anon_sym_AMP,
    STATE(41), 1,
      aux_sym_query_params_repeat1,
  [535] = 3,
    ACTIONS(119), 1,
      aux_sym_status_line_token1,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    STATE(43), 1,
      aux_sym_key_value_list_repeat1,
  [545] = 1,
    ACTIONS(92), 3,
      aux_sym_status_line_token1,
      anon_sym_SLASH,
      anon_sym_QMARK,
  [551] = 3,
    ACTIONS(76), 1,
      anon_sym_QMARK,
    ACTIONS(123), 1,
      aux_sym_status_line_token1,
    STATE(91), 1,
      sym_query_params,
  [561] = 3,
    ACTIONS(125), 1,
      aux_sym_status_line_token1,
    ACTIONS(127), 1,
      anon_sym_AMP,
    STATE(39), 1,
      aux_sym_query_params_repeat1,
  [571] = 3,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    ACTIONS(130), 1,
      aux_sym_status_line_token1,
    STATE(36), 1,
      aux_sym_key_value_list_repeat1,
  [581] = 3,
    ACTIONS(117), 1,
      anon_sym_AMP,
    ACTIONS(132), 1,
      aux_sym_status_line_token1,
    STATE(39), 1,
      aux_sym_query_params_repeat1,
  [591] = 3,
    ACTIONS(46), 1,
      sym__identifier,
    ACTIONS(134), 1,
      sym_variable_ref,
    STATE(62), 1,
      sym_identifier,
  [601] = 3,
    ACTIONS(136), 1,
      aux_sym_status_line_token1,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    STATE(43), 1,
      aux_sym_key_value_list_repeat1,
  [611] = 1,
    ACTIONS(125), 2,
      aux_sym_status_line_token1,
      anon_sym_AMP,
  [616] = 1,
    ACTIONS(141), 2,
      sym_variable_ref,
      sym_domain,
  [621] = 1,
    ACTIONS(143), 2,
      aux_sym_status_line_token1,
      anon_sym_AMP,
  [626] = 1,
    ACTIONS(145), 2,
      aux_sym_status_line_token1,
      anon_sym_COMMA,
  [631] = 1,
    ACTIONS(147), 2,
      aux_sym_status_line_token1,
      anon_sym_COMMA,
  [636] = 2,
    ACTIONS(149), 1,
      sym_variable_ref,
    ACTIONS(151), 1,
      aux_sym_string_token1,
  [643] = 1,
    ACTIONS(153), 2,
      aux_sym_status_line_token1,
      anon_sym_COMMA,
  [648] = 1,
    ACTIONS(99), 2,
      sym__identifier,
      sym_variable_ref,
  [653] = 2,
    ACTIONS(155), 1,
      sym_rest_of_line,
    STATE(86), 1,
      sym_reason_phrase,
  [660] = 2,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      sym_key,
  [667] = 2,
    ACTIONS(157), 1,
      sym_variable_ref,
    ACTIONS(159), 1,
      sym_rest_of_line,
  [674] = 2,
    ACTIONS(161), 1,
      sym_rest_of_line,
    ACTIONS(163), 1,
      sym__whitespace,
  [681] = 2,
    ACTIONS(165), 1,
      anon_sym_EQ,
    ACTIONS(167), 1,
      sym__whitespace,
  [688] = 2,
    ACTIONS(169), 1,
      sym_rest_of_line,
    ACTIONS(171), 1,
      sym__whitespace,
  [695] = 2,
    ACTIONS(46), 1,
      sym__identifier,
    STATE(56), 1,
      sym_identifier,
  [702] = 1,
    ACTIONS(173), 2,
      aux_sym_status_line_token1,
      anon_sym_COMMA,
  [707] = 1,
    ACTIONS(175), 2,
      aux_sym_status_line_token1,
      anon_sym_COMMA,
  [712] = 1,
    ACTIONS(177), 2,
      aux_sym_status_line_token1,
      anon_sym_COMMA,
  [717] = 1,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
  [721] = 1,
    ACTIONS(181), 1,
      anon_sym_COLON,
  [725] = 1,
    ACTIONS(183), 1,
      sym_status_code,
  [729] = 1,
    ACTIONS(185), 1,
      aux_sym_status_line_token1,
  [733] = 1,
    ACTIONS(187), 1,
      aux_sym_status_line_token1,
  [737] = 1,
    ACTIONS(189), 1,
      anon_sym_EQ,
  [741] = 1,
    ACTIONS(191), 1,
      anon_sym_COLON,
  [745] = 1,
    ACTIONS(193), 1,
      aux_sym_status_line_token1,
  [749] = 1,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
  [753] = 1,
    ACTIONS(197), 1,
      aux_sym_status_line_token1,
  [757] = 1,
    ACTIONS(199), 1,
      sym__whitespace,
  [761] = 1,
    ACTIONS(201), 1,
      anon_sym_COLON,
  [765] = 1,
    ACTIONS(203), 1,
      anon_sym_EQ,
  [769] = 1,
    ACTIONS(123), 1,
      aux_sym_status_line_token1,
  [773] = 1,
    ACTIONS(205), 1,
      aux_sym_http_version_token1,
  [777] = 1,
    ACTIONS(207), 1,
      sym__whitespace,
  [781] = 1,
    ACTIONS(209), 1,
      anon_sym_COLON,
  [785] = 1,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
  [789] = 1,
    ACTIONS(213), 1,
      sym__whitespace,
  [793] = 1,
    ACTIONS(72), 1,
      aux_sym_status_line_token1,
  [797] = 1,
    ACTIONS(215), 1,
      aux_sym_status_line_token1,
  [801] = 1,
    ACTIONS(217), 1,
      aux_sym_status_line_token1,
  [805] = 1,
    ACTIONS(219), 1,
      sym__whitespace,
  [809] = 1,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
  [813] = 1,
    ACTIONS(223), 1,
      aux_sym_status_line_token1,
  [817] = 1,
    ACTIONS(225), 1,
      aux_sym_status_line_token1,
  [821] = 1,
    ACTIONS(227), 1,
      aux_sym_status_line_token1,
  [825] = 1,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
  [829] = 1,
    ACTIONS(231), 1,
      sym_rest_of_line,
  [833] = 1,
    ACTIONS(233), 1,
      aux_sym_status_line_token1,
  [837] = 1,
    ACTIONS(235), 1,
      aux_sym_status_line_token1,
  [841] = 1,
    ACTIONS(109), 1,
      aux_sym_status_line_token1,
  [845] = 1,
    ACTIONS(161), 1,
      sym_rest_of_line,
  [849] = 1,
    ACTIONS(237), 1,
      aux_sym_status_line_token1,
  [853] = 1,
    ACTIONS(239), 1,
      aux_sym_status_line_token1,
  [857] = 1,
    ACTIONS(241), 1,
      sym__whitespace,
  [861] = 1,
    ACTIONS(243), 1,
      anon_sym_COLON_SLASH_SLASH,
  [865] = 1,
    ACTIONS(245), 1,
      anon_sym_DQUOTE,
  [869] = 1,
    ACTIONS(247), 1,
      aux_sym_status_line_token1,
  [873] = 1,
    ACTIONS(249), 1,
      sym__whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 92,
  [SMALL_STATE(6)] = 120,
  [SMALL_STATE(7)] = 145,
  [SMALL_STATE(8)] = 169,
  [SMALL_STATE(9)] = 191,
  [SMALL_STATE(10)] = 215,
  [SMALL_STATE(11)] = 237,
  [SMALL_STATE(12)] = 258,
  [SMALL_STATE(13)] = 279,
  [SMALL_STATE(14)] = 291,
  [SMALL_STATE(15)] = 301,
  [SMALL_STATE(16)] = 311,
  [SMALL_STATE(17)] = 322,
  [SMALL_STATE(18)] = 341,
  [SMALL_STATE(19)] = 360,
  [SMALL_STATE(20)] = 368,
  [SMALL_STATE(21)] = 376,
  [SMALL_STATE(22)] = 384,
  [SMALL_STATE(23)] = 400,
  [SMALL_STATE(24)] = 408,
  [SMALL_STATE(25)] = 416,
  [SMALL_STATE(26)] = 427,
  [SMALL_STATE(27)] = 436,
  [SMALL_STATE(28)] = 449,
  [SMALL_STATE(29)] = 458,
  [SMALL_STATE(30)] = 471,
  [SMALL_STATE(31)] = 484,
  [SMALL_STATE(32)] = 495,
  [SMALL_STATE(33)] = 505,
  [SMALL_STATE(34)] = 515,
  [SMALL_STATE(35)] = 525,
  [SMALL_STATE(36)] = 535,
  [SMALL_STATE(37)] = 545,
  [SMALL_STATE(38)] = 551,
  [SMALL_STATE(39)] = 561,
  [SMALL_STATE(40)] = 571,
  [SMALL_STATE(41)] = 581,
  [SMALL_STATE(42)] = 591,
  [SMALL_STATE(43)] = 601,
  [SMALL_STATE(44)] = 611,
  [SMALL_STATE(45)] = 616,
  [SMALL_STATE(46)] = 621,
  [SMALL_STATE(47)] = 626,
  [SMALL_STATE(48)] = 631,
  [SMALL_STATE(49)] = 636,
  [SMALL_STATE(50)] = 643,
  [SMALL_STATE(51)] = 648,
  [SMALL_STATE(52)] = 653,
  [SMALL_STATE(53)] = 660,
  [SMALL_STATE(54)] = 667,
  [SMALL_STATE(55)] = 674,
  [SMALL_STATE(56)] = 681,
  [SMALL_STATE(57)] = 688,
  [SMALL_STATE(58)] = 695,
  [SMALL_STATE(59)] = 702,
  [SMALL_STATE(60)] = 707,
  [SMALL_STATE(61)] = 712,
  [SMALL_STATE(62)] = 717,
  [SMALL_STATE(63)] = 721,
  [SMALL_STATE(64)] = 725,
  [SMALL_STATE(65)] = 729,
  [SMALL_STATE(66)] = 733,
  [SMALL_STATE(67)] = 737,
  [SMALL_STATE(68)] = 741,
  [SMALL_STATE(69)] = 745,
  [SMALL_STATE(70)] = 749,
  [SMALL_STATE(71)] = 753,
  [SMALL_STATE(72)] = 757,
  [SMALL_STATE(73)] = 761,
  [SMALL_STATE(74)] = 765,
  [SMALL_STATE(75)] = 769,
  [SMALL_STATE(76)] = 773,
  [SMALL_STATE(77)] = 777,
  [SMALL_STATE(78)] = 781,
  [SMALL_STATE(79)] = 785,
  [SMALL_STATE(80)] = 789,
  [SMALL_STATE(81)] = 793,
  [SMALL_STATE(82)] = 797,
  [SMALL_STATE(83)] = 801,
  [SMALL_STATE(84)] = 805,
  [SMALL_STATE(85)] = 809,
  [SMALL_STATE(86)] = 813,
  [SMALL_STATE(87)] = 817,
  [SMALL_STATE(88)] = 821,
  [SMALL_STATE(89)] = 825,
  [SMALL_STATE(90)] = 829,
  [SMALL_STATE(91)] = 833,
  [SMALL_STATE(92)] = 837,
  [SMALL_STATE(93)] = 841,
  [SMALL_STATE(94)] = 845,
  [SMALL_STATE(95)] = 849,
  [SMALL_STATE(96)] = 853,
  [SMALL_STATE(97)] = 857,
  [SMALL_STATE(98)] = 861,
  [SMALL_STATE(99)] = 865,
  [SMALL_STATE(100)] = 869,
  [SMALL_STATE(101)] = 873,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(97),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_response_repeat1, 2),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_response_repeat1, 2), SHIFT_REPEAT(15),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_response_repeat1, 2), SHIFT_REPEAT(73),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 6),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status_line, 6),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status_line, 6),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 7, .production_id = 4),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(51),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2), SHIFT_REPEAT(27),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_value_list_repeat1, 2),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_value_list_repeat1, 2), SHIFT_REPEAT(71),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3, .production_id = 5),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_value_list_repeat1, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 5),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_list, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_list, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason_phrase, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 2),
  [229] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 5),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_url, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
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
