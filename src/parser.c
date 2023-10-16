#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 147
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
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
  anon_sym_LBRACE_LBRACE = 21,
  aux_sym_variable_ref_token1 = 22,
  anon_sym_RBRACE_RBRACE = 23,
  sym_request_delimiter = 24,
  sym_rest_of_line = 25,
  aux_sym_rest_of_line_dynamic_token1 = 26,
  sym_domain = 27,
  sym_number = 28,
  sym_boolean = 29,
  aux_sym_string_token1 = 30,
  sym__new_line = 31,
  sym_source_file = 32,
  sym_request = 33,
  sym_method_url = 34,
  sym_response = 35,
  sym_status_line = 36,
  sym_http_version = 37,
  sym_reason_phrase = 38,
  sym_header = 39,
  sym_method = 40,
  sym_url = 41,
  sym_path = 42,
  sym_query_params = 43,
  sym_query_param = 44,
  sym__body = 45,
  sym_json_body = 46,
  sym__key_value_list = 47,
  sym_json_key_value = 48,
  sym__json_key = 49,
  sym__json_value = 50,
  sym_json_list = 51,
  sym__json_list_values = 52,
  sym_url_encoded_body = 53,
  sym_url_encoded_key_value = 54,
  sym_variable_declaration = 55,
  sym_variable_ref = 56,
  sym_identifier = 57,
  sym_rest_of_line_dynamic = 58,
  sym_string = 59,
  aux_sym_source_file_repeat1 = 60,
  aux_sym_request_repeat1 = 61,
  aux_sym_path_repeat1 = 62,
  aux_sym_query_params_repeat1 = 63,
  aux_sym__key_value_list_repeat1 = 64,
  aux_sym__json_list_values_repeat1 = 65,
  aux_sym_url_encoded_body_repeat1 = 66,
  aux_sym_rest_of_line_dynamic_repeat1 = 67,
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
  [anon_sym_LBRACE_LBRACE] = "{{",
  [aux_sym_variable_ref_token1] = "variable_ref_token1",
  [anon_sym_RBRACE_RBRACE] = "}}",
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
  [sym_variable_ref] = "variable_ref",
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
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [aux_sym_variable_ref_token1] = aux_sym_variable_ref_token1,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
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
  [sym_variable_ref] = sym_variable_ref,
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
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_variable_ref_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
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
  [sym_variable_ref] = {
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
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 8,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 11,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 18,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 24,
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
  [40] = 34,
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
  [73] = 60,
  [74] = 74,
  [75] = 47,
  [76] = 59,
  [77] = 66,
  [78] = 58,
  [79] = 51,
  [80] = 9,
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
  [135] = 135,
  [136] = 109,
  [137] = 117,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 121,
  [142] = 142,
  [143] = 133,
  [144] = 127,
  [145] = 119,
  [146] = 138,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(133);
      if (lookahead == ' ') SKIP(130)
      if (lookahead == '"') ADVANCE(188);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '&') ADVANCE(181);
      if (lookahead == ',') ADVANCE(187);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == ':') ADVANCE(138);
      if (lookahead == '=') ADVANCE(182);
      if (lookahead == '?') ADVANCE(142);
      if (lookahead == '@') ADVANCE(191);
      if (lookahead == 'C') ADVANCE(45);
      if (lookahead == 'D') ADVANCE(33);
      if (lookahead == 'G') ADVANCE(34);
      if (lookahead == 'H') ADVANCE(35);
      if (lookahead == 'O') ADVANCE(48);
      if (lookahead == 'P') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(49);
      if (lookahead == '[') ADVANCE(189);
      if (lookahead == ']') ADVANCE(190);
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
      if (lookahead == '{') ADVANCE(185);
      if (lookahead == '}') ADVANCE(186);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(208);
      if (lookahead == '\r') ADVANCE(208);
      if (lookahead == ' ') ADVANCE(200);
      if (lookahead == '{') ADVANCE(201);
      if (lookahead != 0) ADVANCE(199);
      END_STATE();
    case 2:
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '"') ADVANCE(188);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '[') ADVANCE(189);
      if (lookahead == ']') ADVANCE(190);
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == '{') ADVANCE(185);
      if (lookahead == '}') ADVANCE(129);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(208);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 3:
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '"') ADVANCE(188);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == '[') ADVANCE(189);
      if (lookahead == ']') ADVANCE(190);
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 't') ADVANCE(109);
      if (lookahead == '{') ADVANCE(185);
      if (lookahead == '}') ADVANCE(129);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 4:
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '?') ADVANCE(142);
      if (lookahead == 'H') ADVANCE(177);
      if (lookahead == '{') ADVANCE(128);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(208);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 5:
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '?') ADVANCE(142);
      if (lookahead == 'H') ADVANCE(177);
      if (lookahead == '{') ADVANCE(128);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(200);
      if (lookahead == '{') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 7:
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '{') ADVANCE(128);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 8:
      if (lookahead == ' ') SKIP(8)
      if (lookahead == '{') ADVANCE(128);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 9:
      if (lookahead == ' ') SKIP(10)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 10:
      if (lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(198);
      END_STATE();
    case 12:
      if (lookahead == ' ') SKIP(12)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(196);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(196);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(123);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(134);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(141);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == '1') ADVANCE(143);
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
      if (lookahead == '3') ADVANCE(143);
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
      if (lookahead == 'D') ADVANCE(139);
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
      if (lookahead == 'E') ADVANCE(139);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(56);
      END_STATE();
    case 39:
      if (lookahead == 'H') ADVANCE(139);
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
      if (lookahead == 'S') ADVANCE(139);
      END_STATE();
    case 52:
      if (lookahead == 'T') ADVANCE(139);
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
      if (lookahead == 'a') ADVANCE(143);
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
      if (lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == 'm') ADVANCE(112);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(204);
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
      if (lookahead == 'g') ADVANCE(143);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(144);
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
      if (lookahead == 'm') ADVANCE(143);
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(143);
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
      if (lookahead == 'p') ADVANCE(143);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(145);
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
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(145);
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
      if (lookahead == 't') ADVANCE(143);
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
      if (lookahead == '{') ADVANCE(192);
      END_STATE();
    case 129:
      if (lookahead == '}') ADVANCE(195);
      END_STATE();
    case 130:
      if (eof) ADVANCE(133);
      if (lookahead == ' ') SKIP(130)
      if (lookahead == '"') ADVANCE(188);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '&') ADVANCE(181);
      if (lookahead == ',') ADVANCE(187);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == ':') ADVANCE(138);
      if (lookahead == '=') ADVANCE(182);
      if (lookahead == '?') ADVANCE(142);
      if (lookahead == '@') ADVANCE(191);
      if (lookahead == 'C') ADVANCE(45);
      if (lookahead == 'D') ADVANCE(33);
      if (lookahead == 'G') ADVANCE(34);
      if (lookahead == 'H') ADVANCE(35);
      if (lookahead == 'O') ADVANCE(48);
      if (lookahead == 'P') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(49);
      if (lookahead == '[') ADVANCE(189);
      if (lookahead == ']') ADVANCE(190);
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
      if (lookahead == '{') ADVANCE(185);
      if (lookahead == '}') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 131:
      if (eof) ADVANCE(133);
      if (lookahead == ' ') ADVANCE(183);
      if (lookahead == '@') ADVANCE(191);
      if (lookahead == 'C') ADVANCE(166);
      if (lookahead == 'D') ADVANCE(154);
      if (lookahead == 'G') ADVANCE(155);
      if (lookahead == 'H') ADVANCE(156);
      if (lookahead == 'O') ADVANCE(169);
      if (lookahead == 'P') ADVANCE(149);
      if (lookahead == 'T') ADVANCE(170);
      if (lookahead == '[') ADVANCE(189);
      if (lookahead == '{') ADVANCE(185);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 132:
      if (eof) ADVANCE(133);
      if (lookahead == ' ') SKIP(132)
      if (lookahead == '@') ADVANCE(191);
      if (lookahead == 'C') ADVANCE(166);
      if (lookahead == 'D') ADVANCE(154);
      if (lookahead == 'G') ADVANCE(155);
      if (lookahead == 'H') ADVANCE(156);
      if (lookahead == 'O') ADVANCE(169);
      if (lookahead == 'P') ADVANCE(149);
      if (lookahead == 'T') ADVANCE(170);
      if (lookahead == '{') ADVANCE(128);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_status_code);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_method_token1);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_scheme);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 'h') ADVANCE(143);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 's') ADVANCE(143);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '/') ADVANCE(134);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(153);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(152);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(175);
      if (lookahead == 'O') ADVANCE(171);
      if (lookahead == 'U') ADVANCE(173);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(173);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(160);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(157);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(140);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(162);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(173);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(147);
      if (lookahead == 'T') ADVANCE(176);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(140);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(150);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(140);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(167);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(159);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(165);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(158);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(163);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(164);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(146);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(148);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(173);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(140);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(140);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(161);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(151);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(168);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(176);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(157);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == ' ') ADVANCE(183);
      if (lookahead == '@') ADVANCE(191);
      if (lookahead == 'C') ADVANCE(166);
      if (lookahead == 'D') ADVANCE(154);
      if (lookahead == 'G') ADVANCE(155);
      if (lookahead == 'H') ADVANCE(156);
      if (lookahead == 'O') ADVANCE(169);
      if (lookahead == 'P') ADVANCE(149);
      if (lookahead == 'T') ADVANCE(170);
      if (lookahead == '[') ADVANCE(189);
      if (lookahead == '{') ADVANCE(185);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(192);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(207);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_variable_ref_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_request_delimiter);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == ' ') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_rest_of_line_dynamic_token1);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_rest_of_line_dynamic_token1);
      if (lookahead == ' ') ADVANCE(200);
      if (lookahead == '{') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_rest_of_line_dynamic_token1);
      if (lookahead == '{') ADVANCE(192);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_domain);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ' ') ADVANCE(205);
      if (lookahead == '{') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(207);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__new_line);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(208);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 131},
  [3] = {.lex_state = 131},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 131},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 132},
  [16] = {.lex_state = 132},
  [17] = {.lex_state = 132},
  [18] = {.lex_state = 131},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 132},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 132},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 205},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 9},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 11},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 9},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 11},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 194},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 194},
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
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [sym_request_delimiter] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym__new_line] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(129),
    [sym_request] = STATE(7),
    [sym_method_url] = STATE(110),
    [sym_response] = STATE(7),
    [sym_status_line] = STATE(15),
    [sym_http_version] = STATE(116),
    [sym_method] = STATE(61),
    [sym_variable_declaration] = STATE(7),
    [sym_variable_ref] = STATE(99),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_HTTP_SLASH] = ACTIONS(5),
    [aux_sym_method_token1] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(19), 1,
      sym_raw_body,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    STATE(11), 1,
      aux_sym_request_repeat1,
    STATE(88), 1,
      sym_url_encoded_key_value,
    STATE(113), 1,
      sym_json_list,
    STATE(137), 1,
      sym_header,
    STATE(96), 2,
      sym_variable_ref,
      sym_identifier,
    STATE(135), 3,
      sym__body,
      sym_json_body,
      sym_url_encoded_body,
    ACTIONS(15), 4,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
  [43] = 12,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym_raw_body,
    STATE(2), 1,
      aux_sym_request_repeat1,
    STATE(88), 1,
      sym_url_encoded_key_value,
    STATE(113), 1,
      sym_json_list,
    STATE(137), 1,
      sym_header,
    STATE(96), 2,
      sym_variable_ref,
      sym_identifier,
    STATE(114), 3,
      sym__body,
      sym_json_body,
      sym_url_encoded_body,
    ACTIONS(27), 4,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
  [86] = 11,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(36), 1,
      aux_sym_method_token1,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(42), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(15), 1,
      sym_status_line,
    STATE(61), 1,
      sym_method,
    STATE(99), 1,
      sym_variable_ref,
    STATE(110), 1,
      sym_method_url,
    STATE(116), 1,
      sym_http_version,
    STATE(4), 4,
      sym_request,
      sym_response,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [123] = 9,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    ACTIONS(55), 1,
      sym__new_line,
    STATE(143), 1,
      sym__json_list_values,
    ACTIONS(53), 2,
      sym_number,
      sym_boolean,
    STATE(72), 5,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_variable_ref,
      sym_string,
  [156] = 9,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_RBRACK,
    ACTIONS(59), 1,
      sym__new_line,
    STATE(133), 1,
      sym__json_list_values,
    ACTIONS(53), 2,
      sym_number,
      sym_boolean,
    STATE(72), 5,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_variable_ref,
      sym_string,
  [189] = 11,
    ACTIONS(5), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(7), 1,
      aux_sym_method_token1,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      sym_status_line,
    STATE(61), 1,
      sym_method,
    STATE(99), 1,
      sym_variable_ref,
    STATE(110), 1,
      sym_method_url,
    STATE(116), 1,
      sym_http_version,
    STATE(4), 4,
      sym_request,
      sym_response,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [226] = 8,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_RBRACK,
    STATE(145), 1,
      sym__json_list_values,
    ACTIONS(53), 2,
      sym_number,
      sym_boolean,
    STATE(72), 5,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_variable_ref,
      sym_string,
  [256] = 1,
    ACTIONS(65), 13,
      anon_sym_HTTP_SLASH,
      anon_sym_COLON,
      anon_sym_QMARK,
      sym_scheme,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
      anon_sym_LBRACE_LBRACE,
      sym__new_line,
  [272] = 8,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(45), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
    STATE(119), 1,
      sym__json_list_values,
    ACTIONS(53), 2,
      sym_number,
      sym_boolean,
    STATE(72), 5,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_variable_ref,
      sym_string,
  [302] = 7,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      sym__identifier,
    ACTIONS(76), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 1,
      aux_sym_request_repeat1,
    STATE(137), 1,
      sym_header,
    STATE(126), 2,
      sym_variable_ref,
      sym_identifier,
    ACTIONS(71), 6,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      sym_raw_body,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
  [330] = 7,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      sym__new_line,
    ACTIONS(81), 2,
      sym_number,
      sym_boolean,
    STATE(86), 5,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_variable_ref,
      sym_string,
  [357] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(85), 2,
      sym_number,
      sym_boolean,
    STATE(89), 5,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_variable_ref,
      sym_string,
  [381] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 2,
      sym_number,
      sym_boolean,
    STATE(81), 5,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_variable_ref,
      sym_string,
  [405] = 6,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(91), 1,
      aux_sym_method_token1,
    STATE(16), 1,
      aux_sym_request_repeat1,
    STATE(117), 1,
      sym_header,
    STATE(126), 2,
      sym_variable_ref,
      sym_identifier,
    ACTIONS(89), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
  [428] = 6,
    ACTIONS(17), 1,
      sym__identifier,
    ACTIONS(95), 1,
      aux_sym_method_token1,
    STATE(17), 1,
      aux_sym_request_repeat1,
    STATE(117), 1,
      sym_header,
    STATE(126), 2,
      sym_variable_ref,
      sym_identifier,
    ACTIONS(93), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
  [451] = 7,
    ACTIONS(71), 1,
      aux_sym_method_token1,
    ACTIONS(73), 1,
      sym__identifier,
    ACTIONS(97), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(17), 1,
      aux_sym_request_repeat1,
    STATE(117), 1,
      sym_header,
    STATE(126), 2,
      sym_variable_ref,
      sym_identifier,
    ACTIONS(69), 3,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
  [476] = 2,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 8,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      sym__identifier,
      sym_raw_body,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
  [490] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(46), 1,
      sym_query_param,
    STATE(105), 1,
      sym_query_params,
    ACTIONS(100), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
    STATE(132), 2,
      sym_variable_ref,
      sym_identifier,
  [511] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(46), 1,
      sym_query_param,
    STATE(101), 1,
      sym_query_params,
    ACTIONS(102), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
    STATE(132), 2,
      sym_variable_ref,
      sym_identifier,
  [532] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(46), 1,
      sym_query_param,
    STATE(107), 1,
      sym_query_params,
    ACTIONS(104), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
    STATE(132), 2,
      sym_variable_ref,
      sym_identifier,
  [553] = 6,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(17), 1,
      sym__identifier,
    STATE(46), 1,
      sym_query_param,
    STATE(103), 1,
      sym_query_params,
    ACTIONS(106), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
    STATE(132), 2,
      sym_variable_ref,
      sym_identifier,
  [574] = 1,
    ACTIONS(108), 6,
      anon_sym_HTTP_SLASH,
      anon_sym_COLON,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      sym__new_line,
  [583] = 6,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 1,
      sym__new_line,
    STATE(55), 1,
      sym_json_key_value,
    STATE(111), 1,
      sym__json_key,
    STATE(141), 1,
      sym__key_value_list,
  [602] = 2,
    ACTIONS(71), 2,
      aux_sym_method_token1,
      sym__identifier,
    ACTIONS(69), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
  [613] = 5,
    ACTIONS(118), 1,
      anon_sym_QMARK,
    ACTIONS(120), 1,
      anon_sym_SLASH,
    STATE(42), 1,
      aux_sym_path_repeat1,
    STATE(93), 1,
      sym_path,
    ACTIONS(116), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [630] = 4,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(124), 1,
      sym__identifier,
    STATE(45), 1,
      sym_variable_ref,
    ACTIONS(122), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
      sym__new_line,
  [645] = 4,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(124), 1,
      sym__identifier,
    STATE(45), 1,
      sym_variable_ref,
    ACTIONS(126), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
      sym__new_line,
  [660] = 6,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    ACTIONS(130), 1,
      sym__new_line,
    STATE(55), 1,
      sym_json_key_value,
    STATE(111), 1,
      sym__json_key,
    STATE(121), 1,
      sym__key_value_list,
  [679] = 2,
    ACTIONS(134), 2,
      aux_sym_method_token1,
      sym__identifier,
    ACTIONS(132), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
  [690] = 5,
    ACTIONS(120), 1,
      anon_sym_SLASH,
    ACTIONS(136), 1,
      anon_sym_QMARK,
    STATE(42), 1,
      aux_sym_path_repeat1,
    STATE(95), 1,
      sym_path,
    ACTIONS(102), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [707] = 3,
    ACTIONS(140), 1,
      anon_sym_SLASH,
    STATE(32), 1,
      aux_sym_path_repeat1,
    ACTIONS(138), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
      sym__new_line,
  [719] = 4,
    ACTIONS(143), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(146), 1,
      aux_sym_rest_of_line_dynamic_token1,
    ACTIONS(149), 1,
      sym__new_line,
    STATE(33), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_dynamic_repeat1,
  [733] = 5,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym_json_key_value,
    STATE(111), 1,
      sym__json_key,
    STATE(144), 1,
      sym__key_value_list,
  [749] = 4,
    ACTIONS(153), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(155), 1,
      aux_sym_rest_of_line_dynamic_token1,
    ACTIONS(157), 1,
      sym__new_line,
    STATE(33), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_dynamic_repeat1,
  [763] = 4,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(159), 1,
      sym__identifier,
    STATE(97), 1,
      sym_url_encoded_key_value,
    STATE(112), 2,
      sym_variable_ref,
      sym_identifier,
  [777] = 1,
    ACTIONS(161), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
  [785] = 1,
    ACTIONS(163), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
  [793] = 1,
    ACTIONS(165), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      anon_sym_LBRACE_LBRACE,
  [801] = 5,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym_json_key_value,
    STATE(111), 1,
      sym__json_key,
    STATE(127), 1,
      sym__key_value_list,
  [817] = 4,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(159), 1,
      sym__identifier,
    STATE(69), 1,
      sym_query_param,
    STATE(132), 2,
      sym_variable_ref,
      sym_identifier,
  [831] = 3,
    ACTIONS(169), 1,
      anon_sym_SLASH,
    STATE(32), 1,
      aux_sym_path_repeat1,
    ACTIONS(122), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
      sym__new_line,
  [843] = 4,
    ACTIONS(153), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(171), 1,
      aux_sym_rest_of_line_dynamic_token1,
    STATE(134), 1,
      sym_rest_of_line_dynamic,
    STATE(35), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_dynamic_repeat1,
  [857] = 3,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym__key_value_list_repeat1,
    ACTIONS(173), 2,
      anon_sym_RBRACE,
      sym__new_line,
  [868] = 1,
    ACTIONS(138), 4,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
      anon_sym_SLASH,
      sym__new_line,
  [875] = 3,
    ACTIONS(180), 1,
      anon_sym_AMP,
    STATE(50), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(178), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [886] = 1,
    ACTIONS(182), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [893] = 1,
    ACTIONS(182), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [900] = 3,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(159), 1,
      sym__identifier,
    STATE(84), 2,
      sym_variable_ref,
      sym_identifier,
  [911] = 3,
    ACTIONS(180), 1,
      anon_sym_AMP,
    STATE(62), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(184), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [922] = 1,
    ACTIONS(186), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [929] = 3,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(159), 1,
      sym__identifier,
    STATE(130), 2,
      sym_variable_ref,
      sym_identifier,
  [940] = 1,
    ACTIONS(188), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [947] = 1,
    ACTIONS(190), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [954] = 4,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    ACTIONS(196), 1,
      sym__new_line,
    STATE(65), 1,
      aux_sym__key_value_list_repeat1,
  [967] = 4,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(198), 1,
      sym__new_line,
    STATE(91), 1,
      sym_json_key_value,
    STATE(111), 1,
      sym__json_key,
  [980] = 1,
    ACTIONS(200), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [987] = 1,
    ACTIONS(202), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [994] = 1,
    ACTIONS(204), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [1001] = 1,
    ACTIONS(190), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [1008] = 4,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(206), 1,
      sym_scheme,
    STATE(26), 1,
      sym_variable_ref,
    STATE(83), 1,
      sym_url,
  [1021] = 3,
    ACTIONS(210), 1,
      anon_sym_AMP,
    STATE(62), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(208), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1032] = 1,
    ACTIONS(213), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [1039] = 3,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(159), 1,
      sym__identifier,
    STATE(108), 2,
      sym_variable_ref,
      sym_identifier,
  [1050] = 4,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    ACTIONS(217), 1,
      sym__new_line,
    STATE(44), 1,
      aux_sym__key_value_list_repeat1,
  [1063] = 1,
    ACTIONS(213), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [1070] = 1,
    ACTIONS(219), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [1077] = 1,
    ACTIONS(204), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [1084] = 1,
    ACTIONS(208), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_AMP,
      sym__new_line,
  [1090] = 3,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(221), 1,
      sym_domain,
    STATE(31), 1,
      sym_variable_ref,
  [1100] = 3,
    ACTIONS(223), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(225), 1,
      aux_sym_string_token1,
    STATE(120), 1,
      sym_variable_ref,
  [1110] = 3,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(229), 1,
      anon_sym_RBRACK,
    STATE(87), 1,
      aux_sym__json_list_values_repeat1,
  [1120] = 2,
    ACTIONS(231), 1,
      sym__new_line,
    ACTIONS(190), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1128] = 3,
    ACTIONS(233), 1,
      anon_sym_AMP,
    ACTIONS(235), 1,
      sym__new_line,
    STATE(90), 1,
      aux_sym_url_encoded_body_repeat1,
  [1138] = 2,
    ACTIONS(237), 1,
      sym__new_line,
    ACTIONS(182), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1146] = 2,
    ACTIONS(239), 1,
      sym__new_line,
    ACTIONS(204), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1154] = 2,
    ACTIONS(241), 1,
      sym__new_line,
    ACTIONS(213), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1162] = 2,
    ACTIONS(243), 1,
      sym__new_line,
    ACTIONS(202), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1170] = 2,
    ACTIONS(245), 1,
      sym__new_line,
    ACTIONS(186), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1178] = 2,
    ACTIONS(65), 1,
      sym__new_line,
    ACTIONS(247), 2,
      anon_sym_LBRACE_LBRACE,
      aux_sym_rest_of_line_dynamic_token1,
  [1186] = 2,
    ACTIONS(251), 1,
      sym__new_line,
    ACTIONS(249), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1194] = 1,
    ACTIONS(253), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym__new_line,
  [1200] = 3,
    ACTIONS(5), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(255), 1,
      sym__new_line,
    STATE(142), 1,
      sym_http_version,
  [1210] = 1,
    ACTIONS(257), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_AMP,
      sym__new_line,
  [1216] = 3,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(262), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      aux_sym__json_list_values_repeat1,
  [1226] = 2,
    ACTIONS(264), 1,
      sym__new_line,
    ACTIONS(262), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1234] = 3,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      aux_sym__json_list_values_repeat1,
  [1244] = 3,
    ACTIONS(233), 1,
      anon_sym_AMP,
    ACTIONS(268), 1,
      sym__new_line,
    STATE(74), 1,
      aux_sym_url_encoded_body_repeat1,
  [1254] = 1,
    ACTIONS(270), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym__new_line,
  [1260] = 3,
    ACTIONS(272), 1,
      anon_sym_AMP,
    ACTIONS(275), 1,
      sym__new_line,
    STATE(90), 1,
      aux_sym_url_encoded_body_repeat1,
  [1270] = 1,
    ACTIONS(173), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym__new_line,
  [1276] = 3,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    STATE(82), 1,
      sym_json_key_value,
    STATE(111), 1,
      sym__json_key,
  [1286] = 2,
    ACTIONS(277), 1,
      anon_sym_QMARK,
    ACTIONS(106), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1294] = 3,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(279), 1,
      sym__identifier,
    STATE(45), 1,
      sym_variable_ref,
  [1304] = 2,
    ACTIONS(281), 1,
      anon_sym_QMARK,
    ACTIONS(104), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1312] = 2,
    ACTIONS(283), 1,
      anon_sym_COLON,
    ACTIONS(285), 1,
      anon_sym_EQ,
  [1319] = 1,
    ACTIONS(275), 2,
      anon_sym_AMP,
      sym__new_line,
  [1324] = 1,
    ACTIONS(287), 2,
      sym_status_code,
      sym__new_line,
  [1329] = 1,
    ACTIONS(289), 2,
      sym_scheme,
      anon_sym_LBRACE_LBRACE,
  [1334] = 2,
    ACTIONS(291), 1,
      sym_rest_of_line,
    STATE(139), 1,
      sym_reason_phrase,
  [1341] = 1,
    ACTIONS(104), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1346] = 2,
    ACTIONS(159), 1,
      sym__identifier,
    STATE(115), 1,
      sym_identifier,
  [1353] = 1,
    ACTIONS(102), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1358] = 1,
    ACTIONS(293), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1363] = 1,
    ACTIONS(295), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1368] = 1,
    ACTIONS(249), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1373] = 1,
    ACTIONS(100), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1378] = 1,
    ACTIONS(297), 2,
      anon_sym_AMP,
      sym__new_line,
  [1383] = 1,
    ACTIONS(299), 1,
      anon_sym_RBRACE_RBRACE,
  [1387] = 1,
    ACTIONS(301), 1,
      sym__new_line,
  [1391] = 1,
    ACTIONS(303), 1,
      anon_sym_COLON,
  [1395] = 1,
    ACTIONS(285), 1,
      anon_sym_EQ,
  [1399] = 1,
    ACTIONS(305), 1,
      sym__new_line,
  [1403] = 1,
    ACTIONS(307), 1,
      sym__new_line,
  [1407] = 1,
    ACTIONS(309), 1,
      anon_sym_EQ,
  [1411] = 1,
    ACTIONS(311), 1,
      sym_status_code,
  [1415] = 1,
    ACTIONS(313), 1,
      sym__new_line,
  [1419] = 1,
    ACTIONS(315), 1,
      sym_rest_of_line,
  [1423] = 1,
    ACTIONS(317), 1,
      anon_sym_RBRACK,
  [1427] = 1,
    ACTIONS(319), 1,
      anon_sym_DQUOTE,
  [1431] = 1,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
  [1435] = 1,
    ACTIONS(321), 1,
      anon_sym_COLON_SLASH_SLASH,
  [1439] = 1,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
  [1443] = 1,
    ACTIONS(323), 1,
      sym__new_line,
  [1447] = 1,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
  [1451] = 1,
    ACTIONS(283), 1,
      anon_sym_COLON,
  [1455] = 1,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
  [1459] = 1,
    ACTIONS(329), 1,
      sym__new_line,
  [1463] = 1,
    ACTIONS(331), 1,
      ts_builtin_sym_end,
  [1467] = 1,
    ACTIONS(333), 1,
      anon_sym_DQUOTE,
  [1471] = 1,
    ACTIONS(335), 1,
      aux_sym_http_version_token1,
  [1475] = 1,
    ACTIONS(337), 1,
      anon_sym_EQ,
  [1479] = 1,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
  [1483] = 1,
    ACTIONS(339), 1,
      sym__new_line,
  [1487] = 1,
    ACTIONS(341), 1,
      sym__new_line,
  [1491] = 1,
    ACTIONS(343), 1,
      anon_sym_RBRACE_RBRACE,
  [1495] = 1,
    ACTIONS(345), 1,
      sym__new_line,
  [1499] = 1,
    ACTIONS(347), 1,
      aux_sym_variable_ref_token1,
  [1503] = 1,
    ACTIONS(349), 1,
      sym__new_line,
  [1507] = 1,
    ACTIONS(351), 1,
      anon_sym_COLON,
  [1511] = 1,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
  [1515] = 1,
    ACTIONS(353), 1,
      sym__new_line,
  [1519] = 1,
    ACTIONS(63), 1,
      anon_sym_RBRACK,
  [1523] = 1,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
  [1527] = 1,
    ACTIONS(357), 1,
      anon_sym_RBRACK,
  [1531] = 1,
    ACTIONS(359), 1,
      aux_sym_variable_ref_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 86,
  [SMALL_STATE(5)] = 123,
  [SMALL_STATE(6)] = 156,
  [SMALL_STATE(7)] = 189,
  [SMALL_STATE(8)] = 226,
  [SMALL_STATE(9)] = 256,
  [SMALL_STATE(10)] = 272,
  [SMALL_STATE(11)] = 302,
  [SMALL_STATE(12)] = 330,
  [SMALL_STATE(13)] = 357,
  [SMALL_STATE(14)] = 381,
  [SMALL_STATE(15)] = 405,
  [SMALL_STATE(16)] = 428,
  [SMALL_STATE(17)] = 451,
  [SMALL_STATE(18)] = 476,
  [SMALL_STATE(19)] = 490,
  [SMALL_STATE(20)] = 511,
  [SMALL_STATE(21)] = 532,
  [SMALL_STATE(22)] = 553,
  [SMALL_STATE(23)] = 574,
  [SMALL_STATE(24)] = 583,
  [SMALL_STATE(25)] = 602,
  [SMALL_STATE(26)] = 613,
  [SMALL_STATE(27)] = 630,
  [SMALL_STATE(28)] = 645,
  [SMALL_STATE(29)] = 660,
  [SMALL_STATE(30)] = 679,
  [SMALL_STATE(31)] = 690,
  [SMALL_STATE(32)] = 707,
  [SMALL_STATE(33)] = 719,
  [SMALL_STATE(34)] = 733,
  [SMALL_STATE(35)] = 749,
  [SMALL_STATE(36)] = 763,
  [SMALL_STATE(37)] = 777,
  [SMALL_STATE(38)] = 785,
  [SMALL_STATE(39)] = 793,
  [SMALL_STATE(40)] = 801,
  [SMALL_STATE(41)] = 817,
  [SMALL_STATE(42)] = 831,
  [SMALL_STATE(43)] = 843,
  [SMALL_STATE(44)] = 857,
  [SMALL_STATE(45)] = 868,
  [SMALL_STATE(46)] = 875,
  [SMALL_STATE(47)] = 886,
  [SMALL_STATE(48)] = 893,
  [SMALL_STATE(49)] = 900,
  [SMALL_STATE(50)] = 911,
  [SMALL_STATE(51)] = 922,
  [SMALL_STATE(52)] = 929,
  [SMALL_STATE(53)] = 940,
  [SMALL_STATE(54)] = 947,
  [SMALL_STATE(55)] = 954,
  [SMALL_STATE(56)] = 967,
  [SMALL_STATE(57)] = 980,
  [SMALL_STATE(58)] = 987,
  [SMALL_STATE(59)] = 994,
  [SMALL_STATE(60)] = 1001,
  [SMALL_STATE(61)] = 1008,
  [SMALL_STATE(62)] = 1021,
  [SMALL_STATE(63)] = 1032,
  [SMALL_STATE(64)] = 1039,
  [SMALL_STATE(65)] = 1050,
  [SMALL_STATE(66)] = 1063,
  [SMALL_STATE(67)] = 1070,
  [SMALL_STATE(68)] = 1077,
  [SMALL_STATE(69)] = 1084,
  [SMALL_STATE(70)] = 1090,
  [SMALL_STATE(71)] = 1100,
  [SMALL_STATE(72)] = 1110,
  [SMALL_STATE(73)] = 1120,
  [SMALL_STATE(74)] = 1128,
  [SMALL_STATE(75)] = 1138,
  [SMALL_STATE(76)] = 1146,
  [SMALL_STATE(77)] = 1154,
  [SMALL_STATE(78)] = 1162,
  [SMALL_STATE(79)] = 1170,
  [SMALL_STATE(80)] = 1178,
  [SMALL_STATE(81)] = 1186,
  [SMALL_STATE(82)] = 1194,
  [SMALL_STATE(83)] = 1200,
  [SMALL_STATE(84)] = 1210,
  [SMALL_STATE(85)] = 1216,
  [SMALL_STATE(86)] = 1226,
  [SMALL_STATE(87)] = 1234,
  [SMALL_STATE(88)] = 1244,
  [SMALL_STATE(89)] = 1254,
  [SMALL_STATE(90)] = 1260,
  [SMALL_STATE(91)] = 1270,
  [SMALL_STATE(92)] = 1276,
  [SMALL_STATE(93)] = 1286,
  [SMALL_STATE(94)] = 1294,
  [SMALL_STATE(95)] = 1304,
  [SMALL_STATE(96)] = 1312,
  [SMALL_STATE(97)] = 1319,
  [SMALL_STATE(98)] = 1324,
  [SMALL_STATE(99)] = 1329,
  [SMALL_STATE(100)] = 1334,
  [SMALL_STATE(101)] = 1341,
  [SMALL_STATE(102)] = 1346,
  [SMALL_STATE(103)] = 1353,
  [SMALL_STATE(104)] = 1358,
  [SMALL_STATE(105)] = 1363,
  [SMALL_STATE(106)] = 1368,
  [SMALL_STATE(107)] = 1373,
  [SMALL_STATE(108)] = 1378,
  [SMALL_STATE(109)] = 1383,
  [SMALL_STATE(110)] = 1387,
  [SMALL_STATE(111)] = 1391,
  [SMALL_STATE(112)] = 1395,
  [SMALL_STATE(113)] = 1399,
  [SMALL_STATE(114)] = 1403,
  [SMALL_STATE(115)] = 1407,
  [SMALL_STATE(116)] = 1411,
  [SMALL_STATE(117)] = 1415,
  [SMALL_STATE(118)] = 1419,
  [SMALL_STATE(119)] = 1423,
  [SMALL_STATE(120)] = 1427,
  [SMALL_STATE(121)] = 1431,
  [SMALL_STATE(122)] = 1435,
  [SMALL_STATE(123)] = 1439,
  [SMALL_STATE(124)] = 1443,
  [SMALL_STATE(125)] = 1447,
  [SMALL_STATE(126)] = 1451,
  [SMALL_STATE(127)] = 1455,
  [SMALL_STATE(128)] = 1459,
  [SMALL_STATE(129)] = 1463,
  [SMALL_STATE(130)] = 1467,
  [SMALL_STATE(131)] = 1471,
  [SMALL_STATE(132)] = 1475,
  [SMALL_STATE(133)] = 1479,
  [SMALL_STATE(134)] = 1483,
  [SMALL_STATE(135)] = 1487,
  [SMALL_STATE(136)] = 1491,
  [SMALL_STATE(137)] = 1495,
  [SMALL_STATE(138)] = 1499,
  [SMALL_STATE(139)] = 1503,
  [SMALL_STATE(140)] = 1507,
  [SMALL_STATE(141)] = 1511,
  [SMALL_STATE(142)] = 1515,
  [SMALL_STATE(143)] = 1519,
  [SMALL_STATE(144)] = 1523,
  [SMALL_STATE(145)] = 1527,
  [SMALL_STATE(146)] = 1531,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(131),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(99),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(102),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(138),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_ref, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(23),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(138),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(138),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 5),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status_line, 4),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status_line, 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(94),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rest_of_line_dynamic_repeat1, 2), SHIFT_REPEAT(146),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rest_of_line_dynamic_repeat1, 2), SHIFT_REPEAT(33),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rest_of_line_dynamic_repeat1, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_dynamic, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 2), SHIFT_REPEAT(56),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 5),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 4),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2), SHIFT_REPEAT(41),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 5),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_body, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_ref, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_url, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3, .production_id = 4),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2), SHIFT_REPEAT(12),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_body, 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3, .production_id = 3),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_url_encoded_body_repeat1, 2), SHIFT_REPEAT(36),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_encoded_body_repeat1, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 4),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 6),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_key_value, 3, .production_id = 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason_phrase, 1),
  [331] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_key, 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_url, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
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
