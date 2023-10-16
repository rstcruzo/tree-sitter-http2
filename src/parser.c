#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 142
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 66
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
  aux_sym_string_repeat1 = 65,
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
  [aux_sym_string_repeat1] = "string_repeat1",
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
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
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
  [aux_sym_string_repeat1] = {
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
  [78] = 47,
  [79] = 79,
  [80] = 80,
  [81] = 51,
  [82] = 82,
  [83] = 57,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 56,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 40,
  [93] = 58,
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
  [133] = 124,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 121,
  [138] = 138,
  [139] = 119,
  [140] = 111,
  [141] = 123,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(135);
      if (lookahead == ' ') SKIP(132)
      if (lookahead == '"') ADVANCE(193);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '&') ADVANCE(183);
      if (lookahead == ',') ADVANCE(192);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == ':') ADVANCE(140);
      if (lookahead == '=') ADVANCE(184);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == '@') ADVANCE(196);
      if (lookahead == 'C') ADVANCE(46);
      if (lookahead == 'D') ADVANCE(34);
      if (lookahead == 'G') ADVANCE(35);
      if (lookahead == 'H') ADVANCE(36);
      if (lookahead == 'O') ADVANCE(49);
      if (lookahead == 'P') ADVANCE(29);
      if (lookahead == 'T') ADVANCE(50);
      if (lookahead == '[') ADVANCE(194);
      if (lookahead == ']') ADVANCE(195);
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(58);
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 'g') ADVANCE(80);
      if (lookahead == 'h') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'm') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == 'p') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == 's') ADVANCE(76);
      if (lookahead == 't') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(111);
      if (lookahead == 'w') ADVANCE(114);
      if (lookahead == '{') ADVANCE(189);
      if (lookahead == '}') ADVANCE(191);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '\r') ADVANCE(210);
      if (lookahead == ' ') ADVANCE(202);
      if (lookahead == '{') ADVANCE(203);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 2:
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '"') ADVANCE(193);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '[') ADVANCE(194);
      if (lookahead == ']') ADVANCE(195);
      if (lookahead == 'f') ADVANCE(61);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == '{') ADVANCE(189);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(210);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 3:
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '"') ADVANCE(193);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '[') ADVANCE(194);
      if (lookahead == ']') ADVANCE(195);
      if (lookahead == 'f') ADVANCE(61);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == '{') ADVANCE(189);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 4:
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'H') ADVANCE(179);
      if (lookahead == '{') ADVANCE(129);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(210);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 5:
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == 'H') ADVANCE(179);
      if (lookahead == '{') ADVANCE(129);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(208);
      if (lookahead == '"') ADVANCE(193);
      if (lookahead == '{') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(207);
      END_STATE();
    case 7:
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '{') ADVANCE(129);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(202);
      if (lookahead == '{') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(200);
      END_STATE();
    case 10:
      if (lookahead == ' ') SKIP(10)
      if (lookahead == '{') ADVANCE(129);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 11:
      if (lookahead == ' ') SKIP(12)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 12:
      if (lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 13:
      if (lookahead == ' ') SKIP(13)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(198);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(198);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(124);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(136);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(143);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == '1') ADVANCE(145);
      END_STATE();
    case 23:
      if (lookahead == '1') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == '2') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == '3') ADVANCE(24);
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 26:
      if (lookahead == '3') ADVANCE(145);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(55);
      if (lookahead == 'O') ADVANCE(51);
      if (lookahead == 'U') ADVANCE(53);
      END_STATE();
    case 30:
      if (lookahead == 'C') ADVANCE(53);
      END_STATE();
    case 31:
      if (lookahead == 'C') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == 'C') ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == 'D') ADVANCE(141);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(42);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(53);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(27);
      if (lookahead == 'T') ADVANCE(56);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(141);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(30);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(57);
      END_STATE();
    case 40:
      if (lookahead == 'H') ADVANCE(141);
      END_STATE();
    case 41:
      if (lookahead == 'I') ADVANCE(47);
      END_STATE();
    case 42:
      if (lookahead == 'L') ADVANCE(39);
      END_STATE();
    case 43:
      if (lookahead == 'N') ADVANCE(45);
      END_STATE();
    case 44:
      if (lookahead == 'N') ADVANCE(52);
      END_STATE();
    case 45:
      if (lookahead == 'N') ADVANCE(38);
      END_STATE();
    case 46:
      if (lookahead == 'O') ADVANCE(43);
      END_STATE();
    case 47:
      if (lookahead == 'O') ADVANCE(44);
      END_STATE();
    case 48:
      if (lookahead == 'P') ADVANCE(19);
      END_STATE();
    case 49:
      if (lookahead == 'P') ADVANCE(54);
      END_STATE();
    case 50:
      if (lookahead == 'R') ADVANCE(28);
      END_STATE();
    case 51:
      if (lookahead == 'S') ADVANCE(53);
      END_STATE();
    case 52:
      if (lookahead == 'S') ADVANCE(141);
      END_STATE();
    case 53:
      if (lookahead == 'T') ADVANCE(141);
      END_STATE();
    case 54:
      if (lookahead == 'T') ADVANCE(41);
      END_STATE();
    case 55:
      if (lookahead == 'T') ADVANCE(31);
      END_STATE();
    case 56:
      if (lookahead == 'T') ADVANCE(48);
      END_STATE();
    case 57:
      if (lookahead == 'T') ADVANCE(37);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == 'k') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 69:
      if (lookahead == 'b') ADVANCE(102);
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(112);
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(119);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(145);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 84:
      if (lookahead == 'f') ADVANCE(99);
      END_STATE();
    case 85:
      if (lookahead == 'g') ADVANCE(145);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 89:
      if (lookahead == 'k') ADVANCE(77);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(98);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(118);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(145);
      if (lookahead == 'n') ADVANCE(84);
      if (lookahead == 'p') ADVANCE(104);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(109);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(145);
      END_STATE();
    case 105:
      if (lookahead == 'p') ADVANCE(147);
      END_STATE();
    case 106:
      if (lookahead == 'p') ADVANCE(107);
      END_STATE();
    case 107:
      if (lookahead == 'p') ADVANCE(108);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == 'w') ADVANCE(113);
      END_STATE();
    case 108:
      if (lookahead == 'p') ADVANCE(108);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == 'w') ADVANCE(113);
      END_STATE();
    case 109:
      if (lookahead == 'p') ADVANCE(93);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(147);
      END_STATE();
    case 115:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 116:
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == 'w') ADVANCE(113);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(78);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 125:
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 126:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 127:
      if (lookahead == 'x') ADVANCE(66);
      END_STATE();
    case 128:
      if (lookahead == 'y') ADVANCE(120);
      END_STATE();
    case 129:
      if (lookahead == '{') ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead == '}') ADVANCE(131);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 131:
      if (lookahead == '}') ADVANCE(197);
      END_STATE();
    case 132:
      if (eof) ADVANCE(135);
      if (lookahead == ' ') SKIP(132)
      if (lookahead == '"') ADVANCE(193);
      if (lookahead == '#') ADVANCE(15);
      if (lookahead == '&') ADVANCE(183);
      if (lookahead == ',') ADVANCE(192);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == '/') ADVANCE(182);
      if (lookahead == ':') ADVANCE(140);
      if (lookahead == '=') ADVANCE(184);
      if (lookahead == '?') ADVANCE(144);
      if (lookahead == '@') ADVANCE(196);
      if (lookahead == 'C') ADVANCE(46);
      if (lookahead == 'D') ADVANCE(34);
      if (lookahead == 'G') ADVANCE(35);
      if (lookahead == 'H') ADVANCE(36);
      if (lookahead == 'O') ADVANCE(49);
      if (lookahead == 'P') ADVANCE(29);
      if (lookahead == 'T') ADVANCE(50);
      if (lookahead == '[') ADVANCE(194);
      if (lookahead == ']') ADVANCE(195);
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(58);
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 'g') ADVANCE(80);
      if (lookahead == 'h') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'm') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(86);
      if (lookahead == 'p') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == 's') ADVANCE(76);
      if (lookahead == 't') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(111);
      if (lookahead == 'w') ADVANCE(114);
      if (lookahead == '{') ADVANCE(189);
      if (lookahead == '}') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 133:
      if (eof) ADVANCE(135);
      if (lookahead == ' ') ADVANCE(185);
      if (lookahead == '@') ADVANCE(196);
      if (lookahead == 'C') ADVANCE(168);
      if (lookahead == 'D') ADVANCE(156);
      if (lookahead == 'G') ADVANCE(157);
      if (lookahead == 'H') ADVANCE(158);
      if (lookahead == 'O') ADVANCE(171);
      if (lookahead == 'P') ADVANCE(151);
      if (lookahead == 'T') ADVANCE(172);
      if (lookahead == '[') ADVANCE(194);
      if (lookahead == '{') ADVANCE(190);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 134:
      if (eof) ADVANCE(135);
      if (lookahead == ' ') SKIP(134)
      if (lookahead == '@') ADVANCE(196);
      if (lookahead == 'C') ADVANCE(168);
      if (lookahead == 'D') ADVANCE(156);
      if (lookahead == 'G') ADVANCE(157);
      if (lookahead == 'H') ADVANCE(158);
      if (lookahead == 'O') ADVANCE(171);
      if (lookahead == 'P') ADVANCE(151);
      if (lookahead == 'T') ADVANCE(172);
      if (lookahead == '{') ADVANCE(129);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_status_code);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_method_token1);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_scheme);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 'h') ADVANCE(145);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '/') ADVANCE(136);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(155);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(154);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(177);
      if (lookahead == 'O') ADVANCE(173);
      if (lookahead == 'U') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(162);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(159);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(142);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(164);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(149);
      if (lookahead == 'T') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(142);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(152);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(142);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(161);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(167);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(160);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(165);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(166);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(148);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(176);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(150);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(142);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(142);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(163);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(153);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(170);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(159);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == ' ') ADVANCE(185);
      if (lookahead == '@') ADVANCE(196);
      if (lookahead == 'C') ADVANCE(168);
      if (lookahead == 'D') ADVANCE(156);
      if (lookahead == 'G') ADVANCE(157);
      if (lookahead == 'H') ADVANCE(158);
      if (lookahead == 'O') ADVANCE(171);
      if (lookahead == 'P') ADVANCE(151);
      if (lookahead == 'T') ADVANCE(172);
      if (lookahead == '[') ADVANCE(194);
      if (lookahead == '{') ADVANCE(190);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '}') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '}') ADVANCE(186);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(130);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(187);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_variable_ref);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_request_delimiter);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == ' ') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_rest_of_line_dynamic_token1);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_rest_of_line_dynamic_token1);
      if (lookahead == ' ') ADVANCE(202);
      if (lookahead == '{') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(201);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_rest_of_line_dynamic_token1);
      if (lookahead == '{') ADVANCE(130);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_domain);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ' ') ADVANCE(208);
      if (lookahead == '{') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(207);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(130);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__new_line);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(210);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 133},
  [3] = {.lex_state = 133},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 133},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 134},
  [15] = {.lex_state = 134},
  [16] = {.lex_state = 133},
  [17] = {.lex_state = 134},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 134},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 134},
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
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 7},
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
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 11},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 11},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 13},
  [115] = {.lex_state = 9},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 2},
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
  [141] = {.lex_state = 0},
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
    [sym_source_file] = STATE(135),
    [sym_request] = STATE(5),
    [sym_method_url] = STATE(134),
    [sym_response] = STATE(5),
    [sym_status_line] = STATE(15),
    [sym_http_version] = STATE(110),
    [sym_method] = STATE(77),
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
    STATE(90), 1,
      sym_url_encoded_key_value,
    STATE(102), 1,
      sym_identifier,
    STATE(131), 1,
      sym_json_list,
    STATE(133), 1,
      sym_header,
    STATE(118), 3,
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
    STATE(90), 1,
      sym_url_encoded_key_value,
    STATE(102), 1,
      sym_identifier,
    STATE(131), 1,
      sym_json_list,
    STATE(133), 1,
      sym_header,
    STATE(132), 3,
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
    STATE(139), 1,
      sym__json_list_values,
    ACTIONS(37), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(72), 4,
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
    STATE(77), 1,
      sym_method,
    STATE(110), 1,
      sym_http_version,
    STATE(134), 1,
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
    STATE(119), 1,
      sym__json_list_values,
    ACTIONS(37), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(72), 4,
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
    STATE(77), 1,
      sym_method,
    STATE(110), 1,
      sym_http_version,
    STATE(134), 1,
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
    STATE(141), 1,
      sym__json_list_values,
    ACTIONS(37), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(72), 4,
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
    STATE(109), 1,
      sym_identifier,
    STATE(133), 1,
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
    STATE(123), 1,
      sym__json_list_values,
    ACTIONS(37), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(72), 4,
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
    STATE(70), 4,
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
    STATE(67), 4,
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
    STATE(82), 4,
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
    STATE(109), 1,
      sym_identifier,
    STATE(124), 1,
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
    STATE(109), 1,
      sym_identifier,
    STATE(124), 1,
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
    STATE(109), 1,
      sym_identifier,
    STATE(124), 1,
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
    STATE(64), 1,
      sym_query_param,
    STATE(106), 1,
      sym_query_params,
    STATE(116), 1,
      sym_identifier,
    ACTIONS(93), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [457] = 6,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(95), 1,
      sym_variable_ref,
    STATE(64), 1,
      sym_query_param,
    STATE(94), 1,
      sym_query_params,
    STATE(116), 1,
      sym_identifier,
    ACTIONS(97), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [477] = 6,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(95), 1,
      sym_variable_ref,
    STATE(64), 1,
      sym_query_param,
    STATE(96), 1,
      sym_query_params,
    STATE(116), 1,
      sym_identifier,
    ACTIONS(99), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [497] = 6,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(95), 1,
      sym_variable_ref,
    STATE(64), 1,
      sym_query_param,
    STATE(95), 1,
      sym_query_params,
    STATE(116), 1,
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
    STATE(66), 1,
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
    STATE(120), 1,
      sym__json_key,
    STATE(121), 1,
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
    STATE(88), 1,
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
    STATE(120), 1,
      sym__json_key,
    STATE(137), 1,
      sym__key_value_list,
  [620] = 5,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym_json_key_value,
    STATE(120), 1,
      sym__json_key,
    STATE(140), 1,
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
    STATE(111), 1,
      sym__key_value_list,
    STATE(120), 1,
      sym__json_key,
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
  [731] = 3,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      aux_sym_string_repeat1,
    ACTIONS(156), 2,
      sym_variable_ref,
      aux_sym_string_token1,
  [742] = 1,
    ACTIONS(158), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [749] = 1,
    ACTIONS(158), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [756] = 3,
    ACTIONS(162), 1,
      anon_sym_AMP,
    STATE(63), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(160), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [767] = 4,
    ACTIONS(95), 1,
      sym_variable_ref,
    ACTIONS(164), 1,
      sym__identifier,
    STATE(68), 1,
      sym_query_param,
    STATE(116), 1,
      sym_identifier,
  [780] = 3,
    STATE(65), 1,
      aux_sym_rest_of_line_dynamic_repeat1,
    STATE(117), 1,
      sym_rest_of_line_dynamic,
    ACTIONS(166), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_dynamic_token1,
  [791] = 3,
    ACTIONS(171), 1,
      sym__new_line,
    STATE(45), 1,
      aux_sym_rest_of_line_dynamic_repeat1,
    ACTIONS(168), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_dynamic_token1,
  [802] = 3,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym__key_value_list_repeat1,
    ACTIONS(173), 2,
      anon_sym_RBRACE,
      sym__new_line,
  [813] = 1,
    ACTIONS(178), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [820] = 1,
    ACTIONS(178), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [827] = 4,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(184), 1,
      sym__new_line,
    STATE(46), 1,
      aux_sym__key_value_list_repeat1,
  [840] = 3,
    ACTIONS(186), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      aux_sym_string_repeat1,
    ACTIONS(188), 2,
      sym_variable_ref,
      aux_sym_string_token1,
  [851] = 1,
    ACTIONS(191), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [858] = 4,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      sym__new_line,
    STATE(85), 1,
      sym_json_key_value,
    STATE(120), 1,
      sym__json_key,
  [871] = 1,
    ACTIONS(195), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [878] = 4,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    ACTIONS(199), 1,
      sym__new_line,
    STATE(49), 1,
      aux_sym__key_value_list_repeat1,
  [891] = 1,
    ACTIONS(201), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [898] = 1,
    ACTIONS(203), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [905] = 1,
    ACTIONS(205), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [912] = 1,
    ACTIONS(201), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [919] = 1,
    ACTIONS(207), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [926] = 1,
    ACTIONS(203), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [933] = 4,
    ACTIONS(164), 1,
      sym__identifier,
    ACTIONS(209), 1,
      sym_variable_ref,
    STATE(101), 1,
      sym_url_encoded_key_value,
    STATE(138), 1,
      sym_identifier,
  [946] = 1,
    ACTIONS(143), 4,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
      anon_sym_SLASH,
      sym__new_line,
  [953] = 3,
    ACTIONS(213), 1,
      anon_sym_AMP,
    STATE(63), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(211), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [964] = 3,
    ACTIONS(162), 1,
      anon_sym_AMP,
    STATE(42), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(216), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [975] = 3,
    ACTIONS(220), 1,
      sym__new_line,
    STATE(45), 1,
      aux_sym_rest_of_line_dynamic_repeat1,
    ACTIONS(218), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_dynamic_token1,
  [986] = 2,
    ACTIONS(222), 1,
      anon_sym_QMARK,
    ACTIONS(101), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [994] = 2,
    ACTIONS(226), 1,
      sym__new_line,
    ACTIONS(224), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1002] = 1,
    ACTIONS(211), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_AMP,
      sym__new_line,
  [1008] = 3,
    ACTIONS(228), 1,
      anon_sym_AMP,
    ACTIONS(230), 1,
      sym__new_line,
    STATE(86), 1,
      aux_sym_url_encoded_body_repeat1,
  [1018] = 2,
    ACTIONS(234), 1,
      sym__new_line,
    ACTIONS(232), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1026] = 3,
    ACTIONS(164), 1,
      sym__identifier,
    ACTIONS(236), 1,
      sym_variable_ref,
    STATE(104), 1,
      sym_identifier,
  [1036] = 3,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    ACTIONS(240), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      aux_sym__json_list_values_repeat1,
  [1046] = 2,
    STATE(39), 1,
      aux_sym_string_repeat1,
    ACTIONS(242), 2,
      sym_variable_ref,
      aux_sym_string_token1,
  [1054] = 1,
    ACTIONS(244), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym__new_line,
  [1060] = 3,
    ACTIONS(164), 1,
      sym__identifier,
    ACTIONS(246), 1,
      sym_variable_ref,
    STATE(113), 1,
      sym_identifier,
  [1070] = 3,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      sym_json_key_value,
    STATE(120), 1,
      sym__json_key,
  [1080] = 3,
    ACTIONS(248), 1,
      sym_scheme,
    ACTIONS(250), 1,
      sym_variable_ref,
    STATE(91), 1,
      sym_url,
  [1090] = 2,
    ACTIONS(252), 1,
      sym__new_line,
    ACTIONS(178), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1098] = 1,
    ACTIONS(254), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_AMP,
      sym__new_line,
  [1104] = 3,
    ACTIONS(232), 1,
      anon_sym_RBRACK,
    ACTIONS(256), 1,
      anon_sym_COMMA,
    STATE(80), 1,
      aux_sym__json_list_values_repeat1,
  [1114] = 2,
    ACTIONS(259), 1,
      sym__new_line,
    ACTIONS(191), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1122] = 1,
    ACTIONS(261), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym__new_line,
  [1128] = 2,
    ACTIONS(263), 1,
      sym__new_line,
    ACTIONS(205), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1136] = 3,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
    STATE(80), 1,
      aux_sym__json_list_values_repeat1,
  [1146] = 1,
    ACTIONS(173), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym__new_line,
  [1152] = 3,
    ACTIONS(267), 1,
      anon_sym_AMP,
    ACTIONS(270), 1,
      sym__new_line,
    STATE(86), 1,
      aux_sym_url_encoded_body_repeat1,
  [1162] = 2,
    ACTIONS(272), 1,
      sym__new_line,
    ACTIONS(203), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1170] = 2,
    ACTIONS(274), 1,
      anon_sym_QMARK,
    ACTIONS(97), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1178] = 3,
    ACTIONS(164), 1,
      sym__identifier,
    ACTIONS(276), 1,
      sym_variable_ref,
    STATE(79), 1,
      sym_identifier,
  [1188] = 3,
    ACTIONS(228), 1,
      anon_sym_AMP,
    ACTIONS(278), 1,
      sym__new_line,
    STATE(69), 1,
      aux_sym_url_encoded_body_repeat1,
  [1198] = 3,
    ACTIONS(5), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(280), 1,
      sym__new_line,
    STATE(127), 1,
      sym_http_version,
  [1208] = 2,
    ACTIONS(282), 1,
      sym__new_line,
    ACTIONS(158), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1216] = 2,
    ACTIONS(284), 1,
      sym__new_line,
    ACTIONS(201), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1224] = 1,
    ACTIONS(93), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1229] = 1,
    ACTIONS(99), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1234] = 1,
    ACTIONS(97), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1239] = 1,
    ACTIONS(141), 2,
      sym__identifier,
      sym_variable_ref,
  [1244] = 1,
    ACTIONS(286), 2,
      sym_scheme,
      sym_variable_ref,
  [1249] = 2,
    ACTIONS(164), 1,
      sym__identifier,
    STATE(112), 1,
      sym_identifier,
  [1256] = 2,
    ACTIONS(288), 1,
      sym_rest_of_line,
    STATE(129), 1,
      sym_reason_phrase,
  [1263] = 1,
    ACTIONS(270), 2,
      anon_sym_AMP,
      sym__new_line,
  [1268] = 2,
    ACTIONS(290), 1,
      anon_sym_COLON,
    ACTIONS(292), 1,
      anon_sym_EQ,
  [1275] = 1,
    ACTIONS(294), 2,
      sym_variable_ref,
      sym_domain,
  [1280] = 1,
    ACTIONS(296), 2,
      anon_sym_AMP,
      sym__new_line,
  [1285] = 1,
    ACTIONS(298), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1290] = 1,
    ACTIONS(300), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1295] = 1,
    ACTIONS(224), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1300] = 1,
    ACTIONS(302), 2,
      sym_status_code,
      sym__new_line,
  [1305] = 1,
    ACTIONS(290), 1,
      anon_sym_COLON,
  [1309] = 1,
    ACTIONS(304), 1,
      sym_status_code,
  [1313] = 1,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
  [1317] = 1,
    ACTIONS(308), 1,
      anon_sym_EQ,
  [1321] = 1,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
  [1325] = 1,
    ACTIONS(312), 1,
      aux_sym_http_version_token1,
  [1329] = 1,
    ACTIONS(314), 1,
      sym_rest_of_line,
  [1333] = 1,
    ACTIONS(316), 1,
      anon_sym_EQ,
  [1337] = 1,
    ACTIONS(318), 1,
      sym__new_line,
  [1341] = 1,
    ACTIONS(320), 1,
      sym__new_line,
  [1345] = 1,
    ACTIONS(70), 1,
      anon_sym_RBRACK,
  [1349] = 1,
    ACTIONS(322), 1,
      anon_sym_COLON,
  [1353] = 1,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
  [1357] = 1,
    ACTIONS(324), 1,
      anon_sym_COLON,
  [1361] = 1,
    ACTIONS(326), 1,
      anon_sym_RBRACK,
  [1365] = 1,
    ACTIONS(328), 1,
      sym__new_line,
  [1369] = 1,
    ACTIONS(330), 1,
      sym__new_line,
  [1373] = 1,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
  [1377] = 1,
    ACTIONS(332), 1,
      sym__new_line,
  [1381] = 1,
    ACTIONS(334), 1,
      anon_sym_COLON_SLASH_SLASH,
  [1385] = 1,
    ACTIONS(336), 1,
      sym__new_line,
  [1389] = 1,
    ACTIONS(338), 1,
      sym__new_line,
  [1393] = 1,
    ACTIONS(340), 1,
      sym__new_line,
  [1397] = 1,
    ACTIONS(342), 1,
      sym__new_line,
  [1401] = 1,
    ACTIONS(344), 1,
      sym__new_line,
  [1405] = 1,
    ACTIONS(346), 1,
      sym__new_line,
  [1409] = 1,
    ACTIONS(348), 1,
      ts_builtin_sym_end,
  [1413] = 1,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
  [1417] = 1,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
  [1421] = 1,
    ACTIONS(292), 1,
      anon_sym_EQ,
  [1425] = 1,
    ACTIONS(58), 1,
      anon_sym_RBRACK,
  [1429] = 1,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
  [1433] = 1,
    ACTIONS(354), 1,
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
  [SMALL_STATE(40)] = 742,
  [SMALL_STATE(41)] = 749,
  [SMALL_STATE(42)] = 756,
  [SMALL_STATE(43)] = 767,
  [SMALL_STATE(44)] = 780,
  [SMALL_STATE(45)] = 791,
  [SMALL_STATE(46)] = 802,
  [SMALL_STATE(47)] = 813,
  [SMALL_STATE(48)] = 820,
  [SMALL_STATE(49)] = 827,
  [SMALL_STATE(50)] = 840,
  [SMALL_STATE(51)] = 851,
  [SMALL_STATE(52)] = 858,
  [SMALL_STATE(53)] = 871,
  [SMALL_STATE(54)] = 878,
  [SMALL_STATE(55)] = 891,
  [SMALL_STATE(56)] = 898,
  [SMALL_STATE(57)] = 905,
  [SMALL_STATE(58)] = 912,
  [SMALL_STATE(59)] = 919,
  [SMALL_STATE(60)] = 926,
  [SMALL_STATE(61)] = 933,
  [SMALL_STATE(62)] = 946,
  [SMALL_STATE(63)] = 953,
  [SMALL_STATE(64)] = 964,
  [SMALL_STATE(65)] = 975,
  [SMALL_STATE(66)] = 986,
  [SMALL_STATE(67)] = 994,
  [SMALL_STATE(68)] = 1002,
  [SMALL_STATE(69)] = 1008,
  [SMALL_STATE(70)] = 1018,
  [SMALL_STATE(71)] = 1026,
  [SMALL_STATE(72)] = 1036,
  [SMALL_STATE(73)] = 1046,
  [SMALL_STATE(74)] = 1054,
  [SMALL_STATE(75)] = 1060,
  [SMALL_STATE(76)] = 1070,
  [SMALL_STATE(77)] = 1080,
  [SMALL_STATE(78)] = 1090,
  [SMALL_STATE(79)] = 1098,
  [SMALL_STATE(80)] = 1104,
  [SMALL_STATE(81)] = 1114,
  [SMALL_STATE(82)] = 1122,
  [SMALL_STATE(83)] = 1128,
  [SMALL_STATE(84)] = 1136,
  [SMALL_STATE(85)] = 1146,
  [SMALL_STATE(86)] = 1152,
  [SMALL_STATE(87)] = 1162,
  [SMALL_STATE(88)] = 1170,
  [SMALL_STATE(89)] = 1178,
  [SMALL_STATE(90)] = 1188,
  [SMALL_STATE(91)] = 1198,
  [SMALL_STATE(92)] = 1208,
  [SMALL_STATE(93)] = 1216,
  [SMALL_STATE(94)] = 1224,
  [SMALL_STATE(95)] = 1229,
  [SMALL_STATE(96)] = 1234,
  [SMALL_STATE(97)] = 1239,
  [SMALL_STATE(98)] = 1244,
  [SMALL_STATE(99)] = 1249,
  [SMALL_STATE(100)] = 1256,
  [SMALL_STATE(101)] = 1263,
  [SMALL_STATE(102)] = 1268,
  [SMALL_STATE(103)] = 1275,
  [SMALL_STATE(104)] = 1280,
  [SMALL_STATE(105)] = 1285,
  [SMALL_STATE(106)] = 1290,
  [SMALL_STATE(107)] = 1295,
  [SMALL_STATE(108)] = 1300,
  [SMALL_STATE(109)] = 1305,
  [SMALL_STATE(110)] = 1309,
  [SMALL_STATE(111)] = 1313,
  [SMALL_STATE(112)] = 1317,
  [SMALL_STATE(113)] = 1321,
  [SMALL_STATE(114)] = 1325,
  [SMALL_STATE(115)] = 1329,
  [SMALL_STATE(116)] = 1333,
  [SMALL_STATE(117)] = 1337,
  [SMALL_STATE(118)] = 1341,
  [SMALL_STATE(119)] = 1345,
  [SMALL_STATE(120)] = 1349,
  [SMALL_STATE(121)] = 1353,
  [SMALL_STATE(122)] = 1357,
  [SMALL_STATE(123)] = 1361,
  [SMALL_STATE(124)] = 1365,
  [SMALL_STATE(125)] = 1369,
  [SMALL_STATE(126)] = 1373,
  [SMALL_STATE(127)] = 1377,
  [SMALL_STATE(128)] = 1381,
  [SMALL_STATE(129)] = 1385,
  [SMALL_STATE(130)] = 1389,
  [SMALL_STATE(131)] = 1393,
  [SMALL_STATE(132)] = 1397,
  [SMALL_STATE(133)] = 1401,
  [SMALL_STATE(134)] = 1405,
  [SMALL_STATE(135)] = 1409,
  [SMALL_STATE(136)] = 1413,
  [SMALL_STATE(137)] = 1417,
  [SMALL_STATE(138)] = 1421,
  [SMALL_STATE(139)] = 1425,
  [SMALL_STATE(140)] = 1429,
  [SMALL_STATE(141)] = 1433,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(114),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(98),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(99),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(26),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(109),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(109),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 5),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status_line, 4),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status_line, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(97),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 4),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rest_of_line_dynamic_repeat1, 2), SHIFT_REPEAT(45),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rest_of_line_dynamic_repeat1, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 2), SHIFT_REPEAT(52),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(50),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 5),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 4),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 5),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2), SHIFT_REPEAT(43),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_dynamic, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_body, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3, .production_id = 4),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2), SHIFT_REPEAT(11),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3, .production_id = 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 2),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_url_encoded_body_repeat1, 2), SHIFT_REPEAT(61),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_encoded_body_repeat1, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_body, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_url, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_key_value, 3, .production_id = 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 4),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 6),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_key, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_url, 3),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason_phrase, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [348] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
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
