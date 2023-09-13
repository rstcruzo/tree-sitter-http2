#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 107
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_HTTP_SLASH = 1,
  aux_sym_http_version_token1 = 2,
  sym_status_code = 3,
  anon_sym_COLON = 4,
  aux_sym_method_token1 = 5,
  anon_sym_COLON_SLASH_SLASH = 6,
  sym_scheme = 7,
  sym__identifier = 8,
  anon_sym_SLASH = 9,
  anon_sym_QMARK = 10,
  anon_sym_AMP = 11,
  anon_sym_EQ = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  anon_sym_COMMA = 15,
  anon_sym_DQUOTE = 16,
  anon_sym_LBRACK = 17,
  anon_sym_RBRACK = 18,
  anon_sym_AT = 19,
  sym_variable_ref = 20,
  sym_rest_of_line = 21,
  sym_domain = 22,
  aux_sym_string_token1 = 23,
  sym__new_line = 24,
  sym_source_file = 25,
  sym_request = 26,
  sym_method_url = 27,
  sym_response = 28,
  sym_status_line = 29,
  sym_http_version = 30,
  sym_reason_phrase = 31,
  sym_header = 32,
  sym_method = 33,
  sym_url = 34,
  sym_path = 35,
  sym_query_params = 36,
  sym_query_param = 37,
  sym_json_body = 38,
  sym_key_value_list = 39,
  sym_key_value = 40,
  sym_key = 41,
  sym_value = 42,
  sym_list = 43,
  sym_list_values = 44,
  sym_variable_declaration = 45,
  sym_identifier = 46,
  sym_string = 47,
  aux_sym_source_file_repeat1 = 48,
  aux_sym_request_repeat1 = 49,
  aux_sym_path_repeat1 = 50,
  aux_sym_query_params_repeat1 = 51,
  aux_sym_key_value_list_repeat1 = 52,
  aux_sym_list_values_repeat1 = 53,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_AT] = "@",
  [sym_variable_ref] = "variable_ref",
  [sym_rest_of_line] = "rest_of_line",
  [sym_domain] = "domain",
  [aux_sym_string_token1] = "string_token1",
  [sym__new_line] = "_new_line",
  [sym_source_file] = "source_file",
  [sym_request] = "request",
  [sym_method_url] = "method_url",
  [sym_response] = "response",
  [sym_status_line] = "status_line",
  [sym_http_version] = "http_version",
  [sym_reason_phrase] = "reason_phrase",
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
  [sym_list] = "list",
  [sym_list_values] = "list_values",
  [sym_variable_declaration] = "variable_declaration",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_query_params_repeat1] = "query_params_repeat1",
  [aux_sym_key_value_list_repeat1] = "key_value_list_repeat1",
  [aux_sym_list_values_repeat1] = "list_values_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_AT] = anon_sym_AT,
  [sym_variable_ref] = sym_variable_ref,
  [sym_rest_of_line] = sym_rest_of_line,
  [sym_domain] = sym_domain,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym__new_line] = sym__new_line,
  [sym_source_file] = sym_source_file,
  [sym_request] = sym_request,
  [sym_method_url] = sym_method_url,
  [sym_response] = sym_response,
  [sym_status_line] = sym_status_line,
  [sym_http_version] = sym_http_version,
  [sym_reason_phrase] = sym_reason_phrase,
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
  [sym_list] = sym_list,
  [sym_list_values] = sym_list_values,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_identifier] = sym_identifier,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_query_params_repeat1] = aux_sym_query_params_repeat1,
  [aux_sym_key_value_list_repeat1] = aux_sym_key_value_list_repeat1,
  [aux_sym_list_values_repeat1] = aux_sym_list_values_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [sym__new_line] = {
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
  [sym_response] = {
    .visible = true,
    .named = true,
  },
  [sym_status_line] = {
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
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_list_values] = {
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
  [aux_sym_list_values_repeat1] = {
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
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_header_name, 0},
    {field_header_value, 2},
  [2] =
    {field_variable_name, 1},
    {field_variable_value, 3},
  [4] =
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
  [7] = 6,
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
  [25] = 23,
  [26] = 26,
  [27] = 27,
  [28] = 22,
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
  [40] = 16,
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
  [51] = 14,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 17,
  [60] = 15,
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
  [71] = 54,
  [72] = 52,
  [73] = 64,
  [74] = 57,
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
  [102] = 102,
  [103] = 78,
  [104] = 89,
  [105] = 90,
  [106] = 106,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(120);
      if (lookahead == '"') ADVANCE(172);
      if (lookahead == '&') ADVANCE(167);
      if (lookahead == ',') ADVANCE(171);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == '=') ADVANCE(168);
      if (lookahead == '?') ADVANCE(166);
      if (lookahead == '@') ADVANCE(175);
      if (lookahead == 'C') ADVANCE(36);
      if (lookahead == 'D') ADVANCE(24);
      if (lookahead == 'G') ADVANCE(25);
      if (lookahead == 'H') ADVANCE(26);
      if (lookahead == 'O') ADVANCE(39);
      if (lookahead == 'P') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(40);
      if (lookahead == '[') ADVANCE(173);
      if (lookahead == ']') ADVANCE(174);
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == 'f') ADVANCE(73);
      if (lookahead == 'g') ADVANCE(67);
      if (lookahead == 'h') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'm') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(74);
      if (lookahead == 'p') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(68);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(97);
      if (lookahead == 'w') ADVANCE(100);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(181);
      if (lookahead != 0) ADVANCE(182);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '{') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(177);
      if (lookahead != 0) ADVANCE(182);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(172);
      if (lookahead == '&') ADVANCE(167);
      if (lookahead == ',') ADVANCE(171);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == '?') ADVANCE(166);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(190);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(172);
      if (lookahead == '&') ADVANCE(167);
      if (lookahead == ',') ADVANCE(171);
      if (lookahead == '/') ADVANCE(165);
      if (lookahead == '?') ADVANCE(166);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(172);
      if (lookahead == '[') ADVANCE(173);
      if (lookahead == ']') ADVANCE(174);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(109);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(121);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(128);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(129);
      END_STATE();
    case 11:
      if (lookahead == '1') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '2') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == '3') ADVANCE(12);
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 14:
      if (lookahead == '3') ADVANCE(129);
      END_STATE();
    case 15:
      if (lookahead == '?') ADVANCE(166);
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(189);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 16:
      if (lookahead == '?') ADVANCE(166);
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(45);
      if (lookahead == 'O') ADVANCE(41);
      if (lookahead == 'U') ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == 'C') ADVANCE(43);
      END_STATE();
    case 21:
      if (lookahead == 'C') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == 'C') ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == 'D') ADVANCE(126);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(43);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(17);
      if (lookahead == 'T') ADVANCE(46);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(126);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(20);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(47);
      END_STATE();
    case 30:
      if (lookahead == 'H') ADVANCE(126);
      END_STATE();
    case 31:
      if (lookahead == 'I') ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == 'L') ADVANCE(29);
      END_STATE();
    case 33:
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == 'N') ADVANCE(42);
      END_STATE();
    case 35:
      if (lookahead == 'N') ADVANCE(28);
      END_STATE();
    case 36:
      if (lookahead == 'O') ADVANCE(33);
      END_STATE();
    case 37:
      if (lookahead == 'O') ADVANCE(34);
      END_STATE();
    case 38:
      if (lookahead == 'P') ADVANCE(7);
      END_STATE();
    case 39:
      if (lookahead == 'P') ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == 'R') ADVANCE(18);
      END_STATE();
    case 41:
      if (lookahead == 'S') ADVANCE(43);
      END_STATE();
    case 42:
      if (lookahead == 'S') ADVANCE(126);
      END_STATE();
    case 43:
      if (lookahead == 'T') ADVANCE(126);
      END_STATE();
    case 44:
      if (lookahead == 'T') ADVANCE(31);
      END_STATE();
    case 45:
      if (lookahead == 'T') ADVANCE(21);
      END_STATE();
    case 46:
      if (lookahead == 'T') ADVANCE(38);
      END_STATE();
    case 47:
      if (lookahead == 'T') ADVANCE(27);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(108);
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == 'k') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(72);
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 57:
      if (lookahead == 'b') ADVANCE(88);
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(98);
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(129);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(86);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(129);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 77:
      if (lookahead == 'k') ADVANCE(65);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(129);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 'p') ADVANCE(92);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(91);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 91:
      if (lookahead == 'p') ADVANCE(80);
      END_STATE();
    case 92:
      if (lookahead == 'p') ADVANCE(129);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 94:
      if (lookahead == 'p') ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 'p') ADVANCE(96);
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == 'w') ADVANCE(99);
      END_STATE();
    case 96:
      if (lookahead == 'p') ADVANCE(96);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == 'w') ADVANCE(99);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(102);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == 'w') ADVANCE(99);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 110:
      if (lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 111:
      if (lookahead == 'x') ADVANCE(54);
      END_STATE();
    case 112:
      if (lookahead == 'y') ADVANCE(106);
      END_STATE();
    case 113:
      if (lookahead == '{') ADVANCE(115);
      END_STATE();
    case 114:
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(114)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 115:
      if (lookahead == '}') ADVANCE(116);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 116:
      if (lookahead == '}') ADVANCE(176);
      END_STATE();
    case 117:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(117)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 118:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(118)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 119:
      if (eof) ADVANCE(120);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '@') ADVANCE(175);
      if (lookahead == 'C') ADVANCE(152);
      if (lookahead == 'D') ADVANCE(140);
      if (lookahead == 'G') ADVANCE(141);
      if (lookahead == 'H') ADVANCE(142);
      if (lookahead == 'O') ADVANCE(155);
      if (lookahead == 'P') ADVANCE(135);
      if (lookahead == 'T') ADVANCE(156);
      if (lookahead == '[') ADVANCE(173);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(119)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_status_code);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_method_token1);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_scheme);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 'h') ADVANCE(129);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '/') ADVANCE(121);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(139);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(138);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(161);
      if (lookahead == 'O') ADVANCE(157);
      if (lookahead == 'U') ADVANCE(159);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(159);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(146);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(143);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(148);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(159);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(133);
      if (lookahead == 'T') ADVANCE(162);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(136);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(163);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(153);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(145);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(151);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(158);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(149);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(150);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(132);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(160);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(134);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(159);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(137);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(154);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(143);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(115);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_variable_ref);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '{') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '{') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '}') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '}') ADVANCE(179);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_domain);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(188);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(188);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(188);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(186);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__new_line);
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__new_line);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(190);
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
  [4] = {.lex_state = 119},
  [5] = {.lex_state = 119},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 119},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 119},
  [12] = {.lex_state = 119},
  [13] = {.lex_state = 119},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 119},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 15},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 15},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 114},
  [64] = {.lex_state = 184},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 184},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 119},
  [93] = {.lex_state = 117},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 118},
  [98] = {.lex_state = 118},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_HTTP_SLASH] = ACTIONS(1),
    [aux_sym_http_version_token1] = ACTIONS(1),
    [sym_status_code] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_method_token1] = ACTIONS(1),
    [sym_scheme] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym_variable_ref] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(100),
    [sym_request] = STATE(2),
    [sym_method_url] = STATE(99),
    [sym_response] = STATE(2),
    [sym_status_line] = STATE(12),
    [sym_http_version] = STATE(98),
    [sym_method] = STATE(53),
    [sym_variable_declaration] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_HTTP_SLASH] = ACTIONS(5),
    [aux_sym_method_token1] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(9),
    [sym_variable_ref] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(5), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym_status_line,
    STATE(53), 1,
      sym_method,
    STATE(98), 1,
      sym_http_version,
    STATE(99), 1,
      sym_method_url,
    ACTIONS(7), 2,
      aux_sym_method_token1,
      sym_variable_ref,
    STATE(3), 4,
      sym_request,
      sym_response,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [32] = 9,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(21), 1,
      anon_sym_AT,
    STATE(12), 1,
      sym_status_line,
    STATE(53), 1,
      sym_method,
    STATE(98), 1,
      sym_http_version,
    STATE(99), 1,
      sym_method_url,
    ACTIONS(18), 2,
      aux_sym_method_token1,
      sym_variable_ref,
    STATE(3), 4,
      sym_request,
      sym_response,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [64] = 10,
    ACTIONS(26), 1,
      aux_sym_method_token1,
    ACTIONS(28), 1,
      sym__identifier,
    ACTIONS(30), 1,
      anon_sym_LBRACE,
    ACTIONS(32), 1,
      anon_sym_LBRACK,
    STATE(8), 1,
      aux_sym_request_repeat1,
    STATE(21), 1,
      sym_json_body,
    STATE(27), 1,
      sym_list,
    STATE(94), 1,
      sym_header,
    STATE(95), 1,
      sym_identifier,
    ACTIONS(24), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [98] = 10,
    ACTIONS(28), 1,
      sym__identifier,
    ACTIONS(30), 1,
      anon_sym_LBRACE,
    ACTIONS(32), 1,
      anon_sym_LBRACK,
    ACTIONS(36), 1,
      aux_sym_method_token1,
    STATE(4), 1,
      aux_sym_request_repeat1,
    STATE(26), 1,
      sym_json_body,
    STATE(27), 1,
      sym_list,
    STATE(94), 1,
      sym_header,
    STATE(95), 1,
      sym_identifier,
    ACTIONS(34), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [132] = 10,
    ACTIONS(30), 1,
      anon_sym_LBRACE,
    ACTIONS(32), 1,
      anon_sym_LBRACK,
    ACTIONS(38), 1,
      sym__identifier,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(42), 1,
      anon_sym_RBRACK,
    ACTIONS(44), 1,
      sym_variable_ref,
    STATE(49), 1,
      sym_value,
    STATE(71), 1,
      sym_list,
    STATE(104), 1,
      sym_list_values,
    STATE(72), 3,
      sym_json_body,
      sym_identifier,
      sym_string,
  [165] = 10,
    ACTIONS(30), 1,
      anon_sym_LBRACE,
    ACTIONS(32), 1,
      anon_sym_LBRACK,
    ACTIONS(38), 1,
      sym__identifier,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      sym_variable_ref,
    ACTIONS(46), 1,
      anon_sym_RBRACK,
    STATE(49), 1,
      sym_value,
    STATE(71), 1,
      sym_list,
    STATE(89), 1,
      sym_list_values,
    STATE(72), 3,
      sym_json_body,
      sym_identifier,
      sym_string,
  [198] = 7,
    ACTIONS(52), 1,
      sym__identifier,
    ACTIONS(55), 1,
      sym_variable_ref,
    STATE(8), 1,
      aux_sym_request_repeat1,
    STATE(94), 1,
      sym_header,
    STATE(95), 1,
      sym_identifier,
    ACTIONS(50), 2,
      aux_sym_method_token1,
      anon_sym_LBRACE,
    ACTIONS(48), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_LBRACK,
      anon_sym_AT,
  [224] = 8,
    ACTIONS(58), 1,
      sym__identifier,
    ACTIONS(60), 1,
      anon_sym_LBRACE,
    ACTIONS(62), 1,
      anon_sym_DQUOTE,
    ACTIONS(64), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      sym_variable_ref,
    STATE(47), 1,
      sym_value,
    STATE(54), 1,
      sym_list,
    STATE(52), 3,
      sym_json_body,
      sym_identifier,
      sym_string,
  [251] = 8,
    ACTIONS(30), 1,
      anon_sym_LBRACE,
    ACTIONS(32), 1,
      anon_sym_LBRACK,
    ACTIONS(38), 1,
      sym__identifier,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      sym_variable_ref,
    STATE(70), 1,
      sym_value,
    STATE(71), 1,
      sym_list,
    STATE(72), 3,
      sym_json_body,
      sym_identifier,
      sym_string,
  [278] = 6,
    ACTIONS(28), 1,
      sym__identifier,
    ACTIONS(70), 1,
      aux_sym_method_token1,
    STATE(8), 1,
      aux_sym_request_repeat1,
    STATE(94), 1,
      sym_header,
    STATE(95), 1,
      sym_identifier,
    ACTIONS(68), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [300] = 6,
    ACTIONS(28), 1,
      sym__identifier,
    ACTIONS(74), 1,
      aux_sym_method_token1,
    STATE(11), 1,
      aux_sym_request_repeat1,
    STATE(94), 1,
      sym_header,
    STATE(95), 1,
      sym_identifier,
    ACTIONS(72), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [322] = 2,
    ACTIONS(50), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
    ACTIONS(48), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_variable_ref,
  [335] = 1,
    ACTIONS(76), 7,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AT,
      sym_variable_ref,
  [345] = 1,
    ACTIONS(78), 7,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AT,
      sym_variable_ref,
  [355] = 1,
    ACTIONS(80), 7,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AT,
      sym_variable_ref,
  [365] = 1,
    ACTIONS(82), 7,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AT,
      sym_variable_ref,
  [375] = 2,
    ACTIONS(86), 2,
      aux_sym_method_token1,
      sym__identifier,
    ACTIONS(84), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [386] = 6,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(90), 1,
      anon_sym_QMARK,
    ACTIONS(92), 1,
      sym__new_line,
    STATE(29), 1,
      aux_sym_path_repeat1,
    STATE(50), 1,
      sym_path,
    STATE(80), 1,
      sym_query_params,
  [405] = 6,
    ACTIONS(88), 1,
      anon_sym_SLASH,
    ACTIONS(90), 1,
      anon_sym_QMARK,
    ACTIONS(94), 1,
      sym__new_line,
    STATE(29), 1,
      aux_sym_path_repeat1,
    STATE(39), 1,
      sym_path,
    STATE(76), 1,
      sym_query_params,
  [424] = 1,
    ACTIONS(96), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [432] = 1,
    ACTIONS(98), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
  [440] = 5,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      sym_key_value,
    STATE(91), 1,
      sym_key,
    STATE(103), 1,
      sym_key_value_list,
  [456] = 1,
    ACTIONS(104), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [464] = 5,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    STATE(38), 1,
      sym_key_value,
    STATE(78), 1,
      sym_key_value_list,
    STATE(91), 1,
      sym_key,
  [480] = 1,
    ACTIONS(24), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [488] = 1,
    ACTIONS(108), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [496] = 2,
    ACTIONS(98), 1,
      sym__new_line,
    ACTIONS(110), 3,
      anon_sym_AMP,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [505] = 4,
    ACTIONS(112), 1,
      anon_sym_SLASH,
    ACTIONS(114), 1,
      anon_sym_QMARK,
    ACTIONS(116), 1,
      sym__new_line,
    STATE(32), 1,
      aux_sym_path_repeat1,
  [518] = 4,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      sym__new_line,
    STATE(61), 1,
      sym_key_value,
    STATE(91), 1,
      sym_key,
  [531] = 4,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    ACTIONS(127), 1,
      sym__new_line,
    STATE(31), 1,
      aux_sym_key_value_list_repeat1,
  [544] = 4,
    ACTIONS(129), 1,
      anon_sym_SLASH,
    ACTIONS(132), 1,
      anon_sym_QMARK,
    ACTIONS(134), 1,
      sym__new_line,
    STATE(32), 1,
      aux_sym_path_repeat1,
  [557] = 2,
    ACTIONS(136), 2,
      sym__identifier,
      sym_variable_ref,
    ACTIONS(138), 2,
      anon_sym_QMARK,
      sym__new_line,
  [566] = 4,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(144), 1,
      sym__new_line,
    STATE(31), 1,
      aux_sym_key_value_list_repeat1,
  [579] = 2,
    ACTIONS(114), 2,
      anon_sym_QMARK,
      sym__new_line,
    ACTIONS(136), 2,
      sym__identifier,
      sym_variable_ref,
  [588] = 4,
    ACTIONS(38), 1,
      sym__identifier,
    ACTIONS(146), 1,
      sym_variable_ref,
    STATE(56), 1,
      sym_query_param,
    STATE(85), 1,
      sym_identifier,
  [601] = 4,
    ACTIONS(38), 1,
      sym__identifier,
    ACTIONS(146), 1,
      sym_variable_ref,
    STATE(68), 1,
      sym_query_param,
    STATE(85), 1,
      sym_identifier,
  [614] = 4,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    ACTIONS(150), 1,
      sym__new_line,
    STATE(34), 1,
      aux_sym_key_value_list_repeat1,
  [627] = 3,
    ACTIONS(90), 1,
      anon_sym_QMARK,
    ACTIONS(152), 1,
      sym__new_line,
    STATE(88), 1,
      sym_query_params,
  [637] = 2,
    ACTIONS(80), 1,
      sym__new_line,
    ACTIONS(154), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [645] = 3,
    ACTIONS(156), 1,
      anon_sym_AMP,
    ACTIONS(158), 1,
      sym__new_line,
    STATE(42), 1,
      aux_sym_query_params_repeat1,
  [655] = 3,
    ACTIONS(160), 1,
      anon_sym_AMP,
    ACTIONS(163), 1,
      sym__new_line,
    STATE(42), 1,
      aux_sym_query_params_repeat1,
  [665] = 3,
    ACTIONS(38), 1,
      sym__identifier,
    ACTIONS(165), 1,
      sym_variable_ref,
    STATE(86), 1,
      sym_identifier,
  [675] = 3,
    ACTIONS(58), 1,
      sym__identifier,
    ACTIONS(167), 1,
      sym_variable_ref,
    STATE(69), 1,
      sym_identifier,
  [685] = 3,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(172), 1,
      anon_sym_RBRACK,
    STATE(45), 1,
      aux_sym_list_values_repeat1,
  [695] = 2,
    ACTIONS(176), 1,
      sym__new_line,
    ACTIONS(174), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [703] = 2,
    ACTIONS(180), 1,
      sym__new_line,
    ACTIONS(178), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [711] = 3,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(184), 1,
      anon_sym_RBRACK,
    STATE(45), 1,
      aux_sym_list_values_repeat1,
  [721] = 3,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(186), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      aux_sym_list_values_repeat1,
  [731] = 3,
    ACTIONS(90), 1,
      anon_sym_QMARK,
    ACTIONS(188), 1,
      sym__new_line,
    STATE(101), 1,
      sym_query_params,
  [741] = 2,
    ACTIONS(76), 1,
      sym__new_line,
    ACTIONS(190), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [749] = 2,
    ACTIONS(194), 1,
      sym__new_line,
    ACTIONS(192), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [757] = 3,
    ACTIONS(196), 1,
      sym_scheme,
    ACTIONS(198), 1,
      sym_variable_ref,
    STATE(77), 1,
      sym_url,
  [767] = 2,
    ACTIONS(194), 1,
      sym__new_line,
    ACTIONS(192), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [775] = 2,
    ACTIONS(134), 1,
      sym__new_line,
    ACTIONS(132), 2,
      anon_sym_SLASH,
      anon_sym_QMARK,
  [783] = 3,
    ACTIONS(156), 1,
      anon_sym_AMP,
    ACTIONS(200), 1,
      sym__new_line,
    STATE(41), 1,
      aux_sym_query_params_repeat1,
  [793] = 2,
    ACTIONS(204), 1,
      sym__new_line,
    ACTIONS(202), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [801] = 3,
    ACTIONS(102), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      sym_key_value,
    STATE(91), 1,
      sym_key,
  [811] = 2,
    ACTIONS(82), 1,
      sym__new_line,
    ACTIONS(206), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [819] = 2,
    ACTIONS(78), 1,
      sym__new_line,
    ACTIONS(208), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [827] = 2,
    ACTIONS(127), 1,
      sym__new_line,
    ACTIONS(122), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [835] = 1,
    ACTIONS(210), 2,
      sym__identifier,
      sym_variable_ref,
  [840] = 1,
    ACTIONS(212), 2,
      sym_variable_ref,
      sym_domain,
  [845] = 1,
    ACTIONS(214), 2,
      sym_variable_ref,
      aux_sym_string_token1,
  [850] = 1,
    ACTIONS(216), 2,
      sym_scheme,
      sym_variable_ref,
  [855] = 2,
    ACTIONS(38), 1,
      sym__identifier,
    STATE(96), 1,
      sym_identifier,
  [862] = 2,
    ACTIONS(218), 1,
      sym_rest_of_line,
    STATE(82), 1,
      sym_reason_phrase,
  [869] = 2,
    ACTIONS(163), 1,
      sym__new_line,
    ACTIONS(220), 1,
      anon_sym_AMP,
  [876] = 2,
    ACTIONS(222), 1,
      anon_sym_AMP,
    ACTIONS(224), 1,
      sym__new_line,
  [883] = 1,
    ACTIONS(172), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [888] = 1,
    ACTIONS(194), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [893] = 1,
    ACTIONS(194), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [898] = 1,
    ACTIONS(226), 2,
      sym_variable_ref,
      aux_sym_string_token1,
  [903] = 1,
    ACTIONS(204), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [908] = 1,
    ACTIONS(228), 2,
      sym_variable_ref,
      sym_rest_of_line,
  [913] = 1,
    ACTIONS(152), 1,
      sym__new_line,
  [917] = 1,
    ACTIONS(230), 1,
      sym__new_line,
  [921] = 1,
    ACTIONS(232), 1,
      anon_sym_RBRACE,
  [925] = 1,
    ACTIONS(234), 1,
      sym__new_line,
  [929] = 1,
    ACTIONS(188), 1,
      sym__new_line,
  [933] = 1,
    ACTIONS(236), 1,
      anon_sym_COLON,
  [937] = 1,
    ACTIONS(238), 1,
      sym__new_line,
  [941] = 1,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
  [945] = 1,
    ACTIONS(242), 1,
      sym__new_line,
  [949] = 1,
    ACTIONS(244), 1,
      anon_sym_EQ,
  [953] = 1,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
  [957] = 1,
    ACTIONS(248), 1,
      sym_rest_of_line,
  [961] = 1,
    ACTIONS(250), 1,
      sym__new_line,
  [965] = 1,
    ACTIONS(252), 1,
      anon_sym_RBRACK,
  [969] = 1,
    ACTIONS(254), 1,
      anon_sym_DQUOTE,
  [973] = 1,
    ACTIONS(256), 1,
      anon_sym_COLON,
  [977] = 1,
    ACTIONS(258), 1,
      anon_sym_COLON_SLASH_SLASH,
  [981] = 1,
    ACTIONS(260), 1,
      aux_sym_http_version_token1,
  [985] = 1,
    ACTIONS(262), 1,
      sym__new_line,
  [989] = 1,
    ACTIONS(264), 1,
      anon_sym_COLON,
  [993] = 1,
    ACTIONS(266), 1,
      anon_sym_EQ,
  [997] = 1,
    ACTIONS(268), 1,
      sym_status_code,
  [1001] = 1,
    ACTIONS(270), 1,
      sym_status_code,
  [1005] = 1,
    ACTIONS(272), 1,
      sym__new_line,
  [1009] = 1,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
  [1013] = 1,
    ACTIONS(94), 1,
      sym__new_line,
  [1017] = 1,
    ACTIONS(276), 1,
      anon_sym_RBRACE,
  [1021] = 1,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
  [1025] = 1,
    ACTIONS(280), 1,
      anon_sym_RBRACK,
  [1029] = 1,
    ACTIONS(282), 1,
      anon_sym_DQUOTE,
  [1033] = 1,
    ACTIONS(284), 1,
      sym__new_line,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 98,
  [SMALL_STATE(6)] = 132,
  [SMALL_STATE(7)] = 165,
  [SMALL_STATE(8)] = 198,
  [SMALL_STATE(9)] = 224,
  [SMALL_STATE(10)] = 251,
  [SMALL_STATE(11)] = 278,
  [SMALL_STATE(12)] = 300,
  [SMALL_STATE(13)] = 322,
  [SMALL_STATE(14)] = 335,
  [SMALL_STATE(15)] = 345,
  [SMALL_STATE(16)] = 355,
  [SMALL_STATE(17)] = 365,
  [SMALL_STATE(18)] = 375,
  [SMALL_STATE(19)] = 386,
  [SMALL_STATE(20)] = 405,
  [SMALL_STATE(21)] = 424,
  [SMALL_STATE(22)] = 432,
  [SMALL_STATE(23)] = 440,
  [SMALL_STATE(24)] = 456,
  [SMALL_STATE(25)] = 464,
  [SMALL_STATE(26)] = 480,
  [SMALL_STATE(27)] = 488,
  [SMALL_STATE(28)] = 496,
  [SMALL_STATE(29)] = 505,
  [SMALL_STATE(30)] = 518,
  [SMALL_STATE(31)] = 531,
  [SMALL_STATE(32)] = 544,
  [SMALL_STATE(33)] = 557,
  [SMALL_STATE(34)] = 566,
  [SMALL_STATE(35)] = 579,
  [SMALL_STATE(36)] = 588,
  [SMALL_STATE(37)] = 601,
  [SMALL_STATE(38)] = 614,
  [SMALL_STATE(39)] = 627,
  [SMALL_STATE(40)] = 637,
  [SMALL_STATE(41)] = 645,
  [SMALL_STATE(42)] = 655,
  [SMALL_STATE(43)] = 665,
  [SMALL_STATE(44)] = 675,
  [SMALL_STATE(45)] = 685,
  [SMALL_STATE(46)] = 695,
  [SMALL_STATE(47)] = 703,
  [SMALL_STATE(48)] = 711,
  [SMALL_STATE(49)] = 721,
  [SMALL_STATE(50)] = 731,
  [SMALL_STATE(51)] = 741,
  [SMALL_STATE(52)] = 749,
  [SMALL_STATE(53)] = 757,
  [SMALL_STATE(54)] = 767,
  [SMALL_STATE(55)] = 775,
  [SMALL_STATE(56)] = 783,
  [SMALL_STATE(57)] = 793,
  [SMALL_STATE(58)] = 801,
  [SMALL_STATE(59)] = 811,
  [SMALL_STATE(60)] = 819,
  [SMALL_STATE(61)] = 827,
  [SMALL_STATE(62)] = 835,
  [SMALL_STATE(63)] = 840,
  [SMALL_STATE(64)] = 845,
  [SMALL_STATE(65)] = 850,
  [SMALL_STATE(66)] = 855,
  [SMALL_STATE(67)] = 862,
  [SMALL_STATE(68)] = 869,
  [SMALL_STATE(69)] = 876,
  [SMALL_STATE(70)] = 883,
  [SMALL_STATE(71)] = 888,
  [SMALL_STATE(72)] = 893,
  [SMALL_STATE(73)] = 898,
  [SMALL_STATE(74)] = 903,
  [SMALL_STATE(75)] = 908,
  [SMALL_STATE(76)] = 913,
  [SMALL_STATE(77)] = 917,
  [SMALL_STATE(78)] = 921,
  [SMALL_STATE(79)] = 925,
  [SMALL_STATE(80)] = 929,
  [SMALL_STATE(81)] = 933,
  [SMALL_STATE(82)] = 937,
  [SMALL_STATE(83)] = 941,
  [SMALL_STATE(84)] = 945,
  [SMALL_STATE(85)] = 949,
  [SMALL_STATE(86)] = 953,
  [SMALL_STATE(87)] = 957,
  [SMALL_STATE(88)] = 961,
  [SMALL_STATE(89)] = 965,
  [SMALL_STATE(90)] = 969,
  [SMALL_STATE(91)] = 973,
  [SMALL_STATE(92)] = 977,
  [SMALL_STATE(93)] = 981,
  [SMALL_STATE(94)] = 985,
  [SMALL_STATE(95)] = 989,
  [SMALL_STATE(96)] = 993,
  [SMALL_STATE(97)] = 997,
  [SMALL_STATE(98)] = 1001,
  [SMALL_STATE(99)] = 1005,
  [SMALL_STATE(100)] = 1009,
  [SMALL_STATE(101)] = 1013,
  [SMALL_STATE(102)] = 1017,
  [SMALL_STATE(103)] = 1021,
  [SMALL_STATE(104)] = 1025,
  [SMALL_STATE(105)] = 1029,
  [SMALL_STATE(106)] = 1033,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(93),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(22),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(95),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status_line, 4),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status_line, 4),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_value_list_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_value_list_repeat1, 2), SHIFT_REPEAT(30),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_value_list_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(62),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value_list, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value_list, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 3),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_params_repeat1, 2), SHIFT_REPEAT(37),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_values_repeat1, 2), SHIFT_REPEAT(10),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_values_repeat1, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_value_list_repeat1, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_value_list_repeat1, 3),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_values, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_values, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 2),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 3),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 3, .production_id = 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3, .production_id = 3),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_url, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_list, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason_phrase, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 5),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [274] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_list, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 1),
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
