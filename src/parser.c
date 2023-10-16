#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 141
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_HTTP_SLASH = 1,
  aux_sym_http_version_token1 = 2,
  sym_status_code = 3,
  anon_sym_COLON = 4,
  aux_sym_method_token1 = 5,
  anon_sym_COLON_SLASH_SLASH = 6,
  anon_sym_QMARK = 7,
  sym_scheme = 8,
  sym__identifier = 9,
  anon_sym_SLASH = 10,
  anon_sym_AMP = 11,
  anon_sym_EQ = 12,
  sym_raw_body = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  anon_sym_COMMA = 16,
  anon_sym_DQUOTE = 17,
  anon_sym_LBRACK = 18,
  anon_sym_RBRACK = 19,
  anon_sym_AT = 20,
  sym_variable_ref = 21,
  sym_request_delimiter = 22,
  sym_rest_of_line = 23,
  aux_sym_rest_of_line_dynamic_token1 = 24,
  sym_domain = 25,
  sym_number = 26,
  sym_boolean = 27,
  aux_sym_string_token1 = 28,
  sym__new_line = 29,
  sym_source_file = 30,
  sym_request = 31,
  sym_method_url = 32,
  sym_response = 33,
  sym_status_line = 34,
  sym_http_version = 35,
  sym_reason_phrase = 36,
  sym_header = 37,
  sym_method = 38,
  sym_url = 39,
  sym_path = 40,
  sym_query_params = 41,
  sym_query_param = 42,
  sym__body = 43,
  sym_json_body = 44,
  sym__key_value_list = 45,
  sym_json_key_value = 46,
  sym__json_key = 47,
  sym__json_value = 48,
  sym_json_list = 49,
  sym__json_list_values = 50,
  sym_url_encoded_body = 51,
  sym_url_encoded_key_value = 52,
  sym_variable_declaration = 53,
  sym_identifier = 54,
  sym_rest_of_line_dynamic = 55,
  sym_string = 56,
  aux_sym_source_file_repeat1 = 57,
  aux_sym_request_repeat1 = 58,
  aux_sym_path_repeat1 = 59,
  aux_sym_query_params_repeat1 = 60,
  aux_sym__key_value_list_repeat1 = 61,
  aux_sym__json_list_values_repeat1 = 62,
  aux_sym_url_encoded_body_repeat1 = 63,
  aux_sym_rest_of_line_dynamic_repeat1 = 64,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_HTTP_SLASH] = "HTTP/",
  [aux_sym_http_version_token1] = "http_version_token1",
  [sym_status_code] = "status_code",
  [anon_sym_COLON] = ":",
  [aux_sym_method_token1] = "method_token1",
  [anon_sym_COLON_SLASH_SLASH] = "://",
  [anon_sym_QMARK] = "\?",
  [sym_scheme] = "scheme",
  [sym__identifier] = "_identifier",
  [anon_sym_SLASH] = "/",
  [anon_sym_AMP] = "&",
  [anon_sym_EQ] = "=",
  [sym_raw_body] = "raw_body",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COMMA] = ",",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_AT] = "@",
  [sym_variable_ref] = "variable_ref",
  [sym_request_delimiter] = "request_delimiter",
  [sym_rest_of_line] = "rest_of_line",
  [aux_sym_rest_of_line_dynamic_token1] = "rest_of_line_dynamic_token1",
  [sym_domain] = "domain",
  [sym_number] = "number",
  [sym_boolean] = "boolean",
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
  [sym__body] = "_body",
  [sym_json_body] = "json_body",
  [sym__key_value_list] = "_key_value_list",
  [sym_json_key_value] = "json_key_value",
  [sym__json_key] = "_json_key",
  [sym__json_value] = "_json_value",
  [sym_json_list] = "json_list",
  [sym__json_list_values] = "_json_list_values",
  [sym_url_encoded_body] = "url_encoded_body",
  [sym_url_encoded_key_value] = "url_encoded_key_value",
  [sym_variable_declaration] = "variable_declaration",
  [sym_identifier] = "identifier",
  [sym_rest_of_line_dynamic] = "rest_of_line_dynamic",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_query_params_repeat1] = "query_params_repeat1",
  [aux_sym__key_value_list_repeat1] = "_key_value_list_repeat1",
  [aux_sym__json_list_values_repeat1] = "_json_list_values_repeat1",
  [aux_sym_url_encoded_body_repeat1] = "url_encoded_body_repeat1",
  [aux_sym_rest_of_line_dynamic_repeat1] = "rest_of_line_dynamic_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_HTTP_SLASH] = anon_sym_HTTP_SLASH,
  [aux_sym_http_version_token1] = aux_sym_http_version_token1,
  [sym_status_code] = sym_status_code,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_method_token1] = aux_sym_method_token1,
  [anon_sym_COLON_SLASH_SLASH] = anon_sym_COLON_SLASH_SLASH,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [sym_scheme] = sym_scheme,
  [sym__identifier] = sym__identifier,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_raw_body] = sym_raw_body,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_AT] = anon_sym_AT,
  [sym_variable_ref] = sym_variable_ref,
  [sym_request_delimiter] = sym_request_delimiter,
  [sym_rest_of_line] = sym_rest_of_line,
  [aux_sym_rest_of_line_dynamic_token1] = aux_sym_rest_of_line_dynamic_token1,
  [sym_domain] = sym_domain,
  [sym_number] = sym_number,
  [sym_boolean] = sym_boolean,
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
  [sym__body] = sym__body,
  [sym_json_body] = sym_json_body,
  [sym__key_value_list] = sym__key_value_list,
  [sym_json_key_value] = sym_json_key_value,
  [sym__json_key] = sym__json_key,
  [sym__json_value] = sym__json_value,
  [sym_json_list] = sym_json_list,
  [sym__json_list_values] = sym__json_list_values,
  [sym_url_encoded_body] = sym_url_encoded_body,
  [sym_url_encoded_key_value] = sym_url_encoded_key_value,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_identifier] = sym_identifier,
  [sym_rest_of_line_dynamic] = sym_rest_of_line_dynamic,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_query_params_repeat1] = aux_sym_query_params_repeat1,
  [aux_sym__key_value_list_repeat1] = aux_sym__key_value_list_repeat1,
  [aux_sym__json_list_values_repeat1] = aux_sym__json_list_values_repeat1,
  [aux_sym_url_encoded_body_repeat1] = aux_sym_url_encoded_body_repeat1,
  [aux_sym_rest_of_line_dynamic_repeat1] = aux_sym_rest_of_line_dynamic_repeat1,
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
  [anon_sym_QMARK] = {
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
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_raw_body] = {
    .visible = true,
    .named = true,
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
  [sym_request_delimiter] = {
    .visible = true,
    .named = true,
  },
  [sym_rest_of_line] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_rest_of_line_dynamic_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_domain] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
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
  [sym__body] = {
    .visible = false,
    .named = true,
  },
  [sym_json_body] = {
    .visible = true,
    .named = true,
  },
  [sym__key_value_list] = {
    .visible = false,
    .named = true,
  },
  [sym_json_key_value] = {
    .visible = true,
    .named = true,
  },
  [sym__json_key] = {
    .visible = false,
    .named = true,
  },
  [sym__json_value] = {
    .visible = false,
    .named = true,
  },
  [sym_json_list] = {
    .visible = true,
    .named = true,
  },
  [sym__json_list_values] = {
    .visible = false,
    .named = true,
  },
  [sym_url_encoded_body] = {
    .visible = true,
    .named = true,
  },
  [sym_url_encoded_key_value] = {
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
  [sym_rest_of_line_dynamic] = {
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
  [aux_sym__key_value_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__json_list_values_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_url_encoded_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rest_of_line_dynamic_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_header_name = 1,
  field_header_value = 2,
  field_key = 3,
  field_parameter_name = 4,
  field_parameter_value = 5,
  field_value = 6,
  field_variable_name = 7,
  field_variable_value = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_header_name] = "header_name",
  [field_header_value] = "header_value",
  [field_key] = "key",
  [field_parameter_name] = "parameter_name",
  [field_parameter_value] = "parameter_value",
  [field_value] = "value",
  [field_variable_name] = "variable_name",
  [field_variable_value] = "variable_value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_header_name, 0},
    {field_header_value, 2},
  [2] =
    {field_variable_name, 1},
    {field_variable_value, 3},
  [4] =
    {field_key, 0},
    {field_value, 2},
  [6] =
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
  [6] = 4,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 8,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 9,
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
  [27] = 16,
  [28] = 23,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 29,
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
  [67] = 43,
  [68] = 68,
  [69] = 69,
  [70] = 47,
  [71] = 53,
  [72] = 59,
  [73] = 57,
  [74] = 51,
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
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
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
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 132,
  [136] = 136,
  [137] = 136,
  [138] = 121,
  [139] = 126,
  [140] = 111,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(134);
      if (lookahead == ' ') SKIP(131)
      if (lookahead == '"') ADVANCE(192);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '&') ADVANCE(182);
      if (lookahead == ',') ADVANCE(191);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(137);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == ':') ADVANCE(139);
      if (lookahead == '=') ADVANCE(183);
      if (lookahead == '?') ADVANCE(143);
      if (lookahead == '@') ADVANCE(195);
      if (lookahead == 'C') ADVANCE(45);
      if (lookahead == 'D') ADVANCE(33);
      if (lookahead == 'G') ADVANCE(34);
      if (lookahead == 'H') ADVANCE(35);
      if (lookahead == 'O') ADVANCE(48);
      if (lookahead == 'P') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(49);
      if (lookahead == '[') ADVANCE(193);
      if (lookahead == ']') ADVANCE(194);
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == 'c') ADVANCE(57);
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(61);
      if (lookahead == 'g') ADVANCE(79);
      if (lookahead == 'h') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(94);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == 'p') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead == 's') ADVANCE(75);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(110);
      if (lookahead == 'w') ADVANCE(113);
      if (lookahead == '{') ADVANCE(188);
      if (lookahead == '}') ADVANCE(190);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead == '\r') ADVANCE(211);
      if (lookahead == ' ') ADVANCE(201);
      if (lookahead == '{') ADVANCE(202);
      if (lookahead != 0) ADVANCE(200);
      END_STATE();
    case 2:
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '"') ADVANCE(192);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '[') ADVANCE(193);
      if (lookahead == ']') ADVANCE(194);
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == '{') ADVANCE(188);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(211);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 3:
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '"') ADVANCE(192);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '[') ADVANCE(193);
      if (lookahead == ']') ADVANCE(194);
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == '{') ADVANCE(188);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 4:
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '?') ADVANCE(143);
      if (lookahead == 'H') ADVANCE(178);
      if (lookahead == '{') ADVANCE(128);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(211);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 5:
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '?') ADVANCE(143);
      if (lookahead == 'H') ADVANCE(178);
      if (lookahead == '{') ADVANCE(128);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(201);
      if (lookahead == '{') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(200);
      END_STATE();
    case 7:
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '{') ADVANCE(128);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 8:
      if (lookahead == ' ') SKIP(8)
      if (lookahead == '{') ADVANCE(128);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 10:
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 11:
      if (lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 12:
      if (lookahead == ' ') SKIP(12)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(197);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(197);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(123);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(135);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(142);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == '1') ADVANCE(144);
      END_STATE();
    case 22:
      if (lookahead == '1') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == '2') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == '3') ADVANCE(23);
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 25:
      if (lookahead == '3') ADVANCE(144);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(54);
      if (lookahead == 'O') ADVANCE(50);
      if (lookahead == 'U') ADVANCE(52);
      END_STATE();
    case 29:
      if (lookahead == 'C') ADVANCE(52);
      END_STATE();
    case 30:
      if (lookahead == 'C') ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == 'C') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 'D') ADVANCE(140);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(41);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(52);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(26);
      if (lookahead == 'T') ADVANCE(55);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(140);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(56);
      END_STATE();
    case 39:
      if (lookahead == 'H') ADVANCE(140);
      END_STATE();
    case 40:
      if (lookahead == 'I') ADVANCE(46);
      END_STATE();
    case 41:
      if (lookahead == 'L') ADVANCE(38);
      END_STATE();
    case 42:
      if (lookahead == 'N') ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == 'N') ADVANCE(51);
      END_STATE();
    case 44:
      if (lookahead == 'N') ADVANCE(37);
      END_STATE();
    case 45:
      if (lookahead == 'O') ADVANCE(42);
      END_STATE();
    case 46:
      if (lookahead == 'O') ADVANCE(43);
      END_STATE();
    case 47:
      if (lookahead == 'P') ADVANCE(18);
      END_STATE();
    case 48:
      if (lookahead == 'P') ADVANCE(53);
      END_STATE();
    case 49:
      if (lookahead == 'R') ADVANCE(27);
      END_STATE();
    case 50:
      if (lookahead == 'S') ADVANCE(52);
      END_STATE();
    case 51:
      if (lookahead == 'S') ADVANCE(140);
      END_STATE();
    case 52:
      if (lookahead == 'T') ADVANCE(140);
      END_STATE();
    case 53:
      if (lookahead == 'T') ADVANCE(40);
      END_STATE();
    case 54:
      if (lookahead == 'T') ADVANCE(30);
      END_STATE();
    case 55:
      if (lookahead == 'T') ADVANCE(47);
      END_STATE();
    case 56:
      if (lookahead == 'T') ADVANCE(36);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(103);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'k') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 68:
      if (lookahead == 'b') ADVANCE(101);
      if (lookahead == 'c') ADVANCE(71);
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(111);
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(144);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == 'm') ADVANCE(112);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 83:
      if (lookahead == 'f') ADVANCE(98);
      END_STATE();
    case 84:
      if (lookahead == 'g') ADVANCE(144);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 88:
      if (lookahead == 'k') ADVANCE(76);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(144);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 105:
      if (lookahead == 'p') ADVANCE(106);
      END_STATE();
    case 106:
      if (lookahead == 'p') ADVANCE(107);
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == 't') ADVANCE(69);
      if (lookahead == 'w') ADVANCE(112);
      END_STATE();
    case 107:
      if (lookahead == 'p') ADVANCE(107);
      if (lookahead == 't') ADVANCE(69);
      if (lookahead == 'w') ADVANCE(112);
      END_STATE();
    case 108:
      if (lookahead == 'p') ADVANCE(92);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(115);
      if (lookahead == 't') ADVANCE(69);
      if (lookahead == 'w') ADVANCE(112);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 125:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 126:
      if (lookahead == 'x') ADVANCE(65);
      END_STATE();
    case 127:
      if (lookahead == 'y') ADVANCE(119);
      END_STATE();
    case 128:
      if (lookahead == '{') ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == '}') ADVANCE(130);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 130:
      if (lookahead == '}') ADVANCE(196);
      END_STATE();
    case 131:
      if (eof) ADVANCE(134);
      if (lookahead == ' ') SKIP(131)
      if (lookahead == '"') ADVANCE(192);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '&') ADVANCE(182);
      if (lookahead == ',') ADVANCE(191);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(137);
      if (lookahead == '/') ADVANCE(181);
      if (lookahead == ':') ADVANCE(139);
      if (lookahead == '=') ADVANCE(183);
      if (lookahead == '?') ADVANCE(143);
      if (lookahead == '@') ADVANCE(195);
      if (lookahead == 'C') ADVANCE(45);
      if (lookahead == 'D') ADVANCE(33);
      if (lookahead == 'G') ADVANCE(34);
      if (lookahead == 'H') ADVANCE(35);
      if (lookahead == 'O') ADVANCE(48);
      if (lookahead == 'P') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(49);
      if (lookahead == '[') ADVANCE(193);
      if (lookahead == ']') ADVANCE(194);
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == 'c') ADVANCE(57);
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(61);
      if (lookahead == 'g') ADVANCE(79);
      if (lookahead == 'h') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(94);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(85);
      if (lookahead == 'p') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(81);
      if (lookahead == 's') ADVANCE(75);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(110);
      if (lookahead == 'w') ADVANCE(113);
      if (lookahead == '{') ADVANCE(188);
      if (lookahead == '}') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 132:
      if (eof) ADVANCE(134);
      if (lookahead == ' ') ADVANCE(184);
      if (lookahead == '@') ADVANCE(195);
      if (lookahead == 'C') ADVANCE(167);
      if (lookahead == 'D') ADVANCE(155);
      if (lookahead == 'G') ADVANCE(156);
      if (lookahead == 'H') ADVANCE(157);
      if (lookahead == 'O') ADVANCE(170);
      if (lookahead == 'P') ADVANCE(150);
      if (lookahead == 'T') ADVANCE(171);
      if (lookahead == '[') ADVANCE(193);
      if (lookahead == '{') ADVANCE(189);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 133:
      if (eof) ADVANCE(134);
      if (lookahead == ' ') SKIP(133)
      if (lookahead == '@') ADVANCE(195);
      if (lookahead == 'C') ADVANCE(167);
      if (lookahead == 'D') ADVANCE(155);
      if (lookahead == 'G') ADVANCE(156);
      if (lookahead == 'H') ADVANCE(157);
      if (lookahead == 'O') ADVANCE(170);
      if (lookahead == 'P') ADVANCE(150);
      if (lookahead == 'T') ADVANCE(171);
      if (lookahead == '{') ADVANCE(128);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_status_code);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_method_token1);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_scheme);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 'h') ADVANCE(144);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '/') ADVANCE(135);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(154);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(153);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(176);
      if (lookahead == 'O') ADVANCE(172);
      if (lookahead == 'U') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(161);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(158);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(141);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(163);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(148);
      if (lookahead == 'T') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(141);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(151);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(141);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(168);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(160);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(166);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(173);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(159);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(164);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(165);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(149);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(141);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(141);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(162);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(152);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(158);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == ' ') ADVANCE(184);
      if (lookahead == '@') ADVANCE(195);
      if (lookahead == 'C') ADVANCE(167);
      if (lookahead == 'D') ADVANCE(155);
      if (lookahead == 'G') ADVANCE(156);
      if (lookahead == 'H') ADVANCE(157);
      if (lookahead == 'O') ADVANCE(170);
      if (lookahead == 'P') ADVANCE(150);
      if (lookahead == 'T') ADVANCE(171);
      if (lookahead == '[') ADVANCE(193);
      if (lookahead == '{') ADVANCE(189);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '}') ADVANCE(185);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(129);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(186);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_variable_ref);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_request_delimiter);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == ' ') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_rest_of_line_dynamic_token1);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_rest_of_line_dynamic_token1);
      if (lookahead == ' ') ADVANCE(201);
      if (lookahead == '{') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(200);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_rest_of_line_dynamic_token1);
      if (lookahead == '{') ADVANCE(129);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_domain);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ' ') ADVANCE(206);
      if (lookahead == '{') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(210);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(210);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(210);
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
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(210);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__new_line);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(211);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 132},
  [3] = {.lex_state = 132},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 132},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 133},
  [15] = {.lex_state = 133},
  [16] = {.lex_state = 132},
  [17] = {.lex_state = 133},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 133},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 133},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
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
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 9},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 206},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 10},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 12},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_HTTP_SLASH] = ACTIONS(1),
    [aux_sym_http_version_token1] = ACTIONS(1),
    [sym_status_code] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_method_token1] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [sym_scheme] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
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
    [sym_request_delimiter] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym__new_line] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(134),
    [sym_request] = STATE(5),
    [sym_method_url] = STATE(133),
    [sym_response] = STATE(5),
    [sym_status_line] = STATE(15),
    [sym_http_version] = STATE(117),
    [sym_method] = STATE(75),
    [sym_variable_declaration] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_HTTP_SLASH] = ACTIONS(5),
    [aux_sym_method_token1] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(9),
    [sym_variable_ref] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(17), 1,
      sym_raw_body,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      aux_sym_request_repeat1,
    STATE(79), 1,
      sym_url_encoded_key_value,
    STATE(92), 1,
      sym_identifier,
    STATE(125), 1,
      sym_json_list,
    STATE(132), 1,
      sym_header,
    STATE(131), 3,
      sym__body,
      sym_json_body,
      sym_url_encoded_body,
    ACTIONS(13), 4,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [42] = 12,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym_raw_body,
    STATE(2), 1,
      aux_sym_request_repeat1,
    STATE(79), 1,
      sym_url_encoded_key_value,
    STATE(92), 1,
      sym_identifier,
    STATE(125), 1,
      sym_json_list,
    STATE(132), 1,
      sym_header,
    STATE(119), 3,
      sym__body,
      sym_json_body,
      sym_url_encoded_body,
    ACTIONS(25), 4,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [84] = 8,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    ACTIONS(39), 1,
      sym__new_line,
    STATE(138), 1,
      sym__json_list_values,
    ACTIONS(37), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(66), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [114] = 9,
    ACTIONS(5), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      sym_status_line,
    STATE(75), 1,
      sym_method,
    STATE(117), 1,
      sym_http_version,
    STATE(133), 1,
      sym_method_url,
    ACTIONS(7), 2,
      aux_sym_method_token1,
      sym_variable_ref,
    STATE(7), 4,
      sym_request,
      sym_response,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [146] = 8,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_RBRACK,
    ACTIONS(45), 1,
      sym__new_line,
    STATE(121), 1,
      sym__json_list_values,
    ACTIONS(37), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(66), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [176] = 9,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(55), 1,
      anon_sym_AT,
    STATE(15), 1,
      sym_status_line,
    STATE(75), 1,
      sym_method,
    STATE(117), 1,
      sym_http_version,
    STATE(133), 1,
      sym_method_url,
    ACTIONS(52), 2,
      aux_sym_method_token1,
      sym_variable_ref,
    STATE(7), 4,
      sym_request,
      sym_response,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [208] = 7,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(58), 1,
      anon_sym_RBRACK,
    STATE(140), 1,
      sym__json_list_values,
    ACTIONS(37), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(66), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [235] = 7,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 1,
      sym__identifier,
    ACTIONS(67), 1,
      sym_variable_ref,
    STATE(9), 1,
      aux_sym_request_repeat1,
    STATE(112), 1,
      sym_identifier,
    STATE(132), 1,
      sym_header,
    ACTIONS(62), 6,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      sym_raw_body,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
  [262] = 7,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(70), 1,
      anon_sym_RBRACK,
    STATE(111), 1,
      sym__json_list_values,
    ACTIONS(37), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(66), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [289] = 6,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      sym__new_line,
    ACTIONS(74), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(82), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [313] = 5,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(78), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(76), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [334] = 5,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(80), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(83), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [355] = 7,
    ACTIONS(62), 1,
      aux_sym_method_token1,
    ACTIONS(64), 1,
      sym__identifier,
    ACTIONS(82), 1,
      sym_variable_ref,
    STATE(14), 1,
      aux_sym_request_repeat1,
    STATE(112), 1,
      sym_identifier,
    STATE(135), 1,
      sym_header,
    ACTIONS(60), 3,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
  [379] = 6,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(87), 1,
      aux_sym_method_token1,
    STATE(17), 1,
      aux_sym_request_repeat1,
    STATE(112), 1,
      sym_identifier,
    STATE(135), 1,
      sym_header,
    ACTIONS(85), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [401] = 2,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 8,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      sym__identifier,
      sym_raw_body,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_variable_ref,
  [415] = 6,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(91), 1,
      aux_sym_method_token1,
    STATE(14), 1,
      aux_sym_request_repeat1,
    STATE(112), 1,
      sym_identifier,
    STATE(135), 1,
      sym_header,
    ACTIONS(89), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [437] = 6,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(95), 1,
      sym_variable_ref,
    STATE(60), 1,
      sym_query_param,
    STATE(99), 1,
      sym_query_params,
    STATE(129), 1,
      sym_identifier,
    ACTIONS(93), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [457] = 6,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(95), 1,
      sym_variable_ref,
    STATE(60), 1,
      sym_query_param,
    STATE(106), 1,
      sym_query_params,
    STATE(129), 1,
      sym_identifier,
    ACTIONS(97), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [477] = 6,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(95), 1,
      sym_variable_ref,
    STATE(60), 1,
      sym_query_param,
    STATE(96), 1,
      sym_query_params,
    STATE(129), 1,
      sym_identifier,
    ACTIONS(99), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [497] = 6,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(95), 1,
      sym_variable_ref,
    STATE(60), 1,
      sym_query_param,
    STATE(95), 1,
      sym_query_params,
    STATE(129), 1,
      sym_identifier,
    ACTIONS(101), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [517] = 5,
    ACTIONS(105), 1,
      anon_sym_QMARK,
    ACTIONS(107), 1,
      anon_sym_SLASH,
    STATE(33), 1,
      aux_sym_path_repeat1,
    STATE(87), 1,
      sym_path,
    ACTIONS(103), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [534] = 6,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      sym__new_line,
    STATE(54), 1,
      sym_json_key_value,
    STATE(123), 1,
      sym__json_key,
    STATE(137), 1,
      sym__key_value_list,
  [553] = 2,
    ACTIONS(117), 2,
      aux_sym_method_token1,
      sym__identifier,
    ACTIONS(115), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [564] = 5,
    ACTIONS(107), 1,
      anon_sym_SLASH,
    ACTIONS(119), 1,
      anon_sym_QMARK,
    STATE(33), 1,
      aux_sym_path_repeat1,
    STATE(89), 1,
      sym_path,
    ACTIONS(99), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [581] = 1,
    ACTIONS(121), 6,
      anon_sym_HTTP_SLASH,
      anon_sym_COLON,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      sym__new_line,
  [590] = 2,
    ACTIONS(62), 2,
      aux_sym_method_token1,
      sym__identifier,
    ACTIONS(60), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [601] = 6,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      anon_sym_RBRACE,
    ACTIONS(125), 1,
      sym__new_line,
    STATE(54), 1,
      sym_json_key_value,
    STATE(123), 1,
      sym__json_key,
    STATE(136), 1,
      sym__key_value_list,
  [620] = 5,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym_json_key_value,
    STATE(123), 1,
      sym__json_key,
    STATE(139), 1,
      sym__key_value_list,
  [636] = 1,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [644] = 1,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [652] = 1,
    ACTIONS(133), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [660] = 3,
    ACTIONS(137), 1,
      anon_sym_SLASH,
    STATE(35), 1,
      aux_sym_path_repeat1,
    ACTIONS(135), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
      sym__new_line,
  [672] = 3,
    ACTIONS(139), 1,
      sym__identifier,
    ACTIONS(141), 1,
      sym_variable_ref,
    ACTIONS(135), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
      sym__new_line,
  [684] = 3,
    ACTIONS(145), 1,
      anon_sym_SLASH,
    STATE(35), 1,
      aux_sym_path_repeat1,
    ACTIONS(143), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
      sym__new_line,
  [696] = 5,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym_json_key_value,
    STATE(123), 1,
      sym__json_key,
    STATE(126), 1,
      sym__key_value_list,
  [712] = 3,
    ACTIONS(139), 1,
      sym__identifier,
    ACTIONS(141), 1,
      sym_variable_ref,
    ACTIONS(150), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
      sym__new_line,
  [724] = 1,
    ACTIONS(152), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [731] = 1,
    ACTIONS(154), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [738] = 1,
    ACTIONS(156), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [745] = 1,
    ACTIONS(158), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [752] = 3,
    ACTIONS(162), 1,
      anon_sym_AMP,
    STATE(42), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(160), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [763] = 1,
    ACTIONS(165), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [770] = 3,
    STATE(56), 1,
      aux_sym_rest_of_line_dynamic_repeat1,
    STATE(130), 1,
      sym_rest_of_line_dynamic,
    ACTIONS(167), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_dynamic_token1,
  [781] = 1,
    ACTIONS(165), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [788] = 3,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym__key_value_list_repeat1,
    ACTIONS(169), 2,
      anon_sym_RBRACE,
      sym__new_line,
  [799] = 1,
    ACTIONS(174), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [806] = 1,
    ACTIONS(174), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [813] = 3,
    ACTIONS(178), 1,
      anon_sym_AMP,
    STATE(42), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(176), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [824] = 4,
    ACTIONS(95), 1,
      sym_variable_ref,
    ACTIONS(180), 1,
      sym__identifier,
    STATE(64), 1,
      sym_query_param,
    STATE(129), 1,
      sym_identifier,
  [837] = 1,
    ACTIONS(182), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [844] = 3,
    ACTIONS(187), 1,
      sym__new_line,
    STATE(52), 1,
      aux_sym_rest_of_line_dynamic_repeat1,
    ACTIONS(184), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_dynamic_token1,
  [855] = 1,
    ACTIONS(189), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [862] = 4,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      sym__new_line,
    STATE(63), 1,
      aux_sym__key_value_list_repeat1,
  [875] = 1,
    ACTIONS(189), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [882] = 3,
    ACTIONS(199), 1,
      sym__new_line,
    STATE(52), 1,
      aux_sym_rest_of_line_dynamic_repeat1,
    ACTIONS(197), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_dynamic_token1,
  [893] = 1,
    ACTIONS(201), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [900] = 4,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(203), 1,
      sym__new_line,
    STATE(85), 1,
      sym_json_key_value,
    STATE(123), 1,
      sym__json_key,
  [913] = 1,
    ACTIONS(154), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [920] = 3,
    ACTIONS(178), 1,
      anon_sym_AMP,
    STATE(49), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(205), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [931] = 4,
    ACTIONS(180), 1,
      sym__identifier,
    ACTIONS(207), 1,
      sym_variable_ref,
    STATE(101), 1,
      sym_url_encoded_key_value,
    STATE(116), 1,
      sym_identifier,
  [944] = 1,
    ACTIONS(143), 4,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
      anon_sym_SLASH,
      sym__new_line,
  [951] = 4,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    ACTIONS(211), 1,
      sym__new_line,
    STATE(46), 1,
      aux_sym__key_value_list_repeat1,
  [964] = 1,
    ACTIONS(160), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_AMP,
      sym__new_line,
  [970] = 3,
    ACTIONS(180), 1,
      sym__identifier,
    ACTIONS(213), 1,
      sym_variable_ref,
    STATE(108), 1,
      sym_identifier,
  [980] = 3,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(217), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      aux_sym__json_list_values_repeat1,
  [990] = 2,
    ACTIONS(219), 1,
      sym__new_line,
    ACTIONS(165), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [998] = 3,
    ACTIONS(180), 1,
      sym__identifier,
    ACTIONS(221), 1,
      sym_variable_ref,
    STATE(105), 1,
      sym_identifier,
  [1008] = 3,
    ACTIONS(223), 1,
      anon_sym_AMP,
    ACTIONS(225), 1,
      sym__new_line,
    STATE(88), 1,
      aux_sym_url_encoded_body_repeat1,
  [1018] = 2,
    ACTIONS(227), 1,
      sym__new_line,
    ACTIONS(174), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1026] = 2,
    ACTIONS(229), 1,
      sym__new_line,
    ACTIONS(189), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1034] = 2,
    ACTIONS(231), 1,
      sym__new_line,
    ACTIONS(154), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1042] = 2,
    ACTIONS(233), 1,
      sym__new_line,
    ACTIONS(201), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1050] = 2,
    ACTIONS(235), 1,
      sym__new_line,
    ACTIONS(182), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1058] = 3,
    ACTIONS(237), 1,
      sym_scheme,
    ACTIONS(239), 1,
      sym_variable_ref,
    STATE(78), 1,
      sym_url,
  [1068] = 2,
    ACTIONS(243), 1,
      sym__new_line,
    ACTIONS(241), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1076] = 1,
    ACTIONS(245), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym__new_line,
  [1082] = 3,
    ACTIONS(5), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(247), 1,
      sym__new_line,
    STATE(122), 1,
      sym_http_version,
  [1092] = 3,
    ACTIONS(223), 1,
      anon_sym_AMP,
    ACTIONS(249), 1,
      sym__new_line,
    STATE(69), 1,
      aux_sym_url_encoded_body_repeat1,
  [1102] = 1,
    ACTIONS(251), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_AMP,
      sym__new_line,
  [1108] = 3,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    ACTIONS(256), 1,
      anon_sym_RBRACK,
    STATE(81), 1,
      aux_sym__json_list_values_repeat1,
  [1118] = 2,
    ACTIONS(258), 1,
      sym__new_line,
    ACTIONS(256), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1126] = 1,
    ACTIONS(260), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym__new_line,
  [1132] = 3,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(262), 1,
      anon_sym_RBRACK,
    STATE(81), 1,
      aux_sym__json_list_values_repeat1,
  [1142] = 1,
    ACTIONS(169), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym__new_line,
  [1148] = 3,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_json_key_value,
    STATE(123), 1,
      sym__json_key,
  [1158] = 2,
    ACTIONS(264), 1,
      anon_sym_QMARK,
    ACTIONS(101), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1166] = 3,
    ACTIONS(266), 1,
      anon_sym_AMP,
    ACTIONS(269), 1,
      sym__new_line,
    STATE(88), 1,
      aux_sym_url_encoded_body_repeat1,
  [1176] = 2,
    ACTIONS(271), 1,
      anon_sym_QMARK,
    ACTIONS(97), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1184] = 3,
    ACTIONS(180), 1,
      sym__identifier,
    ACTIONS(273), 1,
      sym_variable_ref,
    STATE(80), 1,
      sym_identifier,
  [1194] = 1,
    ACTIONS(275), 2,
      sym_variable_ref,
      sym_domain,
  [1199] = 2,
    ACTIONS(277), 1,
      anon_sym_COLON,
    ACTIONS(279), 1,
      anon_sym_EQ,
  [1206] = 1,
    ACTIONS(281), 2,
      sym_scheme,
      sym_variable_ref,
  [1211] = 2,
    ACTIONS(180), 1,
      sym__identifier,
    STATE(109), 1,
      sym_identifier,
  [1218] = 1,
    ACTIONS(99), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1223] = 1,
    ACTIONS(97), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1228] = 1,
    ACTIONS(141), 2,
      sym__identifier,
      sym_variable_ref,
  [1233] = 1,
    ACTIONS(283), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1238] = 1,
    ACTIONS(285), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1243] = 1,
    ACTIONS(241), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1248] = 1,
    ACTIONS(269), 2,
      anon_sym_AMP,
      sym__new_line,
  [1253] = 2,
    ACTIONS(287), 1,
      sym_rest_of_line,
    STATE(114), 1,
      sym_reason_phrase,
  [1260] = 1,
    ACTIONS(289), 2,
      sym_status_code,
      sym__new_line,
  [1265] = 1,
    ACTIONS(291), 2,
      sym_variable_ref,
      aux_sym_string_token1,
  [1270] = 1,
    ACTIONS(293), 2,
      anon_sym_AMP,
      sym__new_line,
  [1275] = 1,
    ACTIONS(93), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1280] = 1,
    ACTIONS(295), 1,
      anon_sym_COLON,
  [1284] = 1,
    ACTIONS(297), 1,
      anon_sym_DQUOTE,
  [1288] = 1,
    ACTIONS(299), 1,
      anon_sym_EQ,
  [1292] = 1,
    ACTIONS(301), 1,
      anon_sym_COLON_SLASH_SLASH,
  [1296] = 1,
    ACTIONS(303), 1,
      anon_sym_RBRACK,
  [1300] = 1,
    ACTIONS(277), 1,
      anon_sym_COLON,
  [1304] = 1,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
  [1308] = 1,
    ACTIONS(307), 1,
      sym__new_line,
  [1312] = 1,
    ACTIONS(309), 1,
      sym_rest_of_line,
  [1316] = 1,
    ACTIONS(279), 1,
      anon_sym_EQ,
  [1320] = 1,
    ACTIONS(311), 1,
      sym_status_code,
  [1324] = 1,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
  [1328] = 1,
    ACTIONS(315), 1,
      sym__new_line,
  [1332] = 1,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
  [1336] = 1,
    ACTIONS(70), 1,
      anon_sym_RBRACK,
  [1340] = 1,
    ACTIONS(317), 1,
      sym__new_line,
  [1344] = 1,
    ACTIONS(319), 1,
      anon_sym_COLON,
  [1348] = 1,
    ACTIONS(321), 1,
      sym__new_line,
  [1352] = 1,
    ACTIONS(323), 1,
      sym__new_line,
  [1356] = 1,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
  [1360] = 1,
    ACTIONS(327), 1,
      aux_sym_http_version_token1,
  [1364] = 1,
    ACTIONS(329), 1,
      sym__new_line,
  [1368] = 1,
    ACTIONS(331), 1,
      anon_sym_EQ,
  [1372] = 1,
    ACTIONS(333), 1,
      sym__new_line,
  [1376] = 1,
    ACTIONS(335), 1,
      sym__new_line,
  [1380] = 1,
    ACTIONS(337), 1,
      sym__new_line,
  [1384] = 1,
    ACTIONS(339), 1,
      sym__new_line,
  [1388] = 1,
    ACTIONS(341), 1,
      ts_builtin_sym_end,
  [1392] = 1,
    ACTIONS(343), 1,
      sym__new_line,
  [1396] = 1,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
  [1400] = 1,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
  [1404] = 1,
    ACTIONS(58), 1,
      anon_sym_RBRACK,
  [1408] = 1,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
  [1412] = 1,
    ACTIONS(347), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 114,
  [SMALL_STATE(6)] = 146,
  [SMALL_STATE(7)] = 176,
  [SMALL_STATE(8)] = 208,
  [SMALL_STATE(9)] = 235,
  [SMALL_STATE(10)] = 262,
  [SMALL_STATE(11)] = 289,
  [SMALL_STATE(12)] = 313,
  [SMALL_STATE(13)] = 334,
  [SMALL_STATE(14)] = 355,
  [SMALL_STATE(15)] = 379,
  [SMALL_STATE(16)] = 401,
  [SMALL_STATE(17)] = 415,
  [SMALL_STATE(18)] = 437,
  [SMALL_STATE(19)] = 457,
  [SMALL_STATE(20)] = 477,
  [SMALL_STATE(21)] = 497,
  [SMALL_STATE(22)] = 517,
  [SMALL_STATE(23)] = 534,
  [SMALL_STATE(24)] = 553,
  [SMALL_STATE(25)] = 564,
  [SMALL_STATE(26)] = 581,
  [SMALL_STATE(27)] = 590,
  [SMALL_STATE(28)] = 601,
  [SMALL_STATE(29)] = 620,
  [SMALL_STATE(30)] = 636,
  [SMALL_STATE(31)] = 644,
  [SMALL_STATE(32)] = 652,
  [SMALL_STATE(33)] = 660,
  [SMALL_STATE(34)] = 672,
  [SMALL_STATE(35)] = 684,
  [SMALL_STATE(36)] = 696,
  [SMALL_STATE(37)] = 712,
  [SMALL_STATE(38)] = 724,
  [SMALL_STATE(39)] = 731,
  [SMALL_STATE(40)] = 738,
  [SMALL_STATE(41)] = 745,
  [SMALL_STATE(42)] = 752,
  [SMALL_STATE(43)] = 763,
  [SMALL_STATE(44)] = 770,
  [SMALL_STATE(45)] = 781,
  [SMALL_STATE(46)] = 788,
  [SMALL_STATE(47)] = 799,
  [SMALL_STATE(48)] = 806,
  [SMALL_STATE(49)] = 813,
  [SMALL_STATE(50)] = 824,
  [SMALL_STATE(51)] = 837,
  [SMALL_STATE(52)] = 844,
  [SMALL_STATE(53)] = 855,
  [SMALL_STATE(54)] = 862,
  [SMALL_STATE(55)] = 875,
  [SMALL_STATE(56)] = 882,
  [SMALL_STATE(57)] = 893,
  [SMALL_STATE(58)] = 900,
  [SMALL_STATE(59)] = 913,
  [SMALL_STATE(60)] = 920,
  [SMALL_STATE(61)] = 931,
  [SMALL_STATE(62)] = 944,
  [SMALL_STATE(63)] = 951,
  [SMALL_STATE(64)] = 964,
  [SMALL_STATE(65)] = 970,
  [SMALL_STATE(66)] = 980,
  [SMALL_STATE(67)] = 990,
  [SMALL_STATE(68)] = 998,
  [SMALL_STATE(69)] = 1008,
  [SMALL_STATE(70)] = 1018,
  [SMALL_STATE(71)] = 1026,
  [SMALL_STATE(72)] = 1034,
  [SMALL_STATE(73)] = 1042,
  [SMALL_STATE(74)] = 1050,
  [SMALL_STATE(75)] = 1058,
  [SMALL_STATE(76)] = 1068,
  [SMALL_STATE(77)] = 1076,
  [SMALL_STATE(78)] = 1082,
  [SMALL_STATE(79)] = 1092,
  [SMALL_STATE(80)] = 1102,
  [SMALL_STATE(81)] = 1108,
  [SMALL_STATE(82)] = 1118,
  [SMALL_STATE(83)] = 1126,
  [SMALL_STATE(84)] = 1132,
  [SMALL_STATE(85)] = 1142,
  [SMALL_STATE(86)] = 1148,
  [SMALL_STATE(87)] = 1158,
  [SMALL_STATE(88)] = 1166,
  [SMALL_STATE(89)] = 1176,
  [SMALL_STATE(90)] = 1184,
  [SMALL_STATE(91)] = 1194,
  [SMALL_STATE(92)] = 1199,
  [SMALL_STATE(93)] = 1206,
  [SMALL_STATE(94)] = 1211,
  [SMALL_STATE(95)] = 1218,
  [SMALL_STATE(96)] = 1223,
  [SMALL_STATE(97)] = 1228,
  [SMALL_STATE(98)] = 1233,
  [SMALL_STATE(99)] = 1238,
  [SMALL_STATE(100)] = 1243,
  [SMALL_STATE(101)] = 1248,
  [SMALL_STATE(102)] = 1253,
  [SMALL_STATE(103)] = 1260,
  [SMALL_STATE(104)] = 1265,
  [SMALL_STATE(105)] = 1270,
  [SMALL_STATE(106)] = 1275,
  [SMALL_STATE(107)] = 1280,
  [SMALL_STATE(108)] = 1284,
  [SMALL_STATE(109)] = 1288,
  [SMALL_STATE(110)] = 1292,
  [SMALL_STATE(111)] = 1296,
  [SMALL_STATE(112)] = 1300,
  [SMALL_STATE(113)] = 1304,
  [SMALL_STATE(114)] = 1308,
  [SMALL_STATE(115)] = 1312,
  [SMALL_STATE(116)] = 1316,
  [SMALL_STATE(117)] = 1320,
  [SMALL_STATE(118)] = 1324,
  [SMALL_STATE(119)] = 1328,
  [SMALL_STATE(120)] = 1332,
  [SMALL_STATE(121)] = 1336,
  [SMALL_STATE(122)] = 1340,
  [SMALL_STATE(123)] = 1344,
  [SMALL_STATE(124)] = 1348,
  [SMALL_STATE(125)] = 1352,
  [SMALL_STATE(126)] = 1356,
  [SMALL_STATE(127)] = 1360,
  [SMALL_STATE(128)] = 1364,
  [SMALL_STATE(129)] = 1368,
  [SMALL_STATE(130)] = 1372,
  [SMALL_STATE(131)] = 1376,
  [SMALL_STATE(132)] = 1380,
  [SMALL_STATE(133)] = 1384,
  [SMALL_STATE(134)] = 1388,
  [SMALL_STATE(135)] = 1392,
  [SMALL_STATE(136)] = 1396,
  [SMALL_STATE(137)] = 1400,
  [SMALL_STATE(138)] = 1404,
  [SMALL_STATE(139)] = 1408,
  [SMALL_STATE(140)] = 1412,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(127),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(93),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(94),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(26),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(112),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(112),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 5),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status_line, 4),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status_line, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(97),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 5),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 5),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2), SHIFT_REPEAT(50),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 4),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 2),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 2), SHIFT_REPEAT(58),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 4),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 2),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rest_of_line_dynamic_repeat1, 2), SHIFT_REPEAT(52),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rest_of_line_dynamic_repeat1, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_dynamic, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_body, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_url, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_body, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3, .production_id = 4),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2), SHIFT_REPEAT(11),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3, .production_id = 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_url_encoded_body_repeat1, 2), SHIFT_REPEAT(61),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_encoded_body_repeat1, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 4),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 6),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_key_value, 3, .production_id = 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_key, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_url, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason_phrase, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [341] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
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
