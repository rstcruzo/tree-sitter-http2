#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 144
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
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
  sym__kill_leading_whitespace = 22,
  sym_request_delimiter = 23,
  sym_rest_of_line = 24,
  aux_sym_rest_of_line_dynamic_token1 = 25,
  sym_domain = 26,
  sym_number = 27,
  sym_boolean = 28,
  aux_sym_string_token1 = 29,
  sym__new_line = 30,
  sym_source_file = 31,
  sym_request = 32,
  sym_method_url = 33,
  sym_response = 34,
  sym_status_line = 35,
  sym_http_version = 36,
  sym_reason_phrase = 37,
  sym_header = 38,
  sym_method = 39,
  sym_url = 40,
  sym_path = 41,
  sym_query_params = 42,
  sym_query_param = 43,
  sym__body = 44,
  sym_json_body = 45,
  sym__key_value_list = 46,
  sym_json_key_value = 47,
  sym__json_key = 48,
  sym__json_value = 49,
  sym_json_list = 50,
  sym__json_list_values = 51,
  sym_url_encoded_body = 52,
  sym_url_encoded_key_value = 53,
  sym_variable_declaration = 54,
  sym_identifier = 55,
  sym_rest_of_line_dynamic = 56,
  sym_string = 57,
  aux_sym_source_file_repeat1 = 58,
  aux_sym_request_repeat1 = 59,
  aux_sym_path_repeat1 = 60,
  aux_sym_query_params_repeat1 = 61,
  aux_sym__key_value_list_repeat1 = 62,
  aux_sym__json_list_values_repeat1 = 63,
  aux_sym_url_encoded_body_repeat1 = 64,
  aux_sym_rest_of_line_dynamic_repeat1 = 65,
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
  [sym__kill_leading_whitespace] = "_kill_leading_whitespace",
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
  [sym__kill_leading_whitespace] = sym__kill_leading_whitespace,
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
  [sym__kill_leading_whitespace] = {
    .visible = false,
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
  [2] = {.index = 2, .length = 3},
  [3] = {.index = 5, .length = 3},
  [4] = {.index = 8, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_value, 2},
  [2] =
    {field_header_name, 0},
    {field_header_value, 2},
    {field_header_value, 3},
  [5] =
    {field_variable_name, 1},
    {field_variable_value, 3},
    {field_variable_value, 4},
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
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 9,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 8,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 15,
  [27] = 27,
  [28] = 23,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 32,
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
  [77] = 59,
  [78] = 78,
  [79] = 79,
  [80] = 51,
  [81] = 57,
  [82] = 49,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 44,
  [87] = 87,
  [88] = 43,
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
  [135] = 129,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 122,
  [140] = 140,
  [141] = 119,
  [142] = 112,
  [143] = 124,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(130);
      if (lookahead == ' ') SKIP(125)
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '&') ADVANCE(260);
      if (lookahead == ',') ADVANCE(269);
      if (lookahead == '-') ADVANCE(149);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '/') ADVANCE(259);
      if (lookahead == ':') ADVANCE(137);
      if (lookahead == '=') ADVANCE(261);
      if (lookahead == '?') ADVANCE(141);
      if (lookahead == '@') ADVANCE(273);
      if (lookahead == 'C') ADVANCE(176);
      if (lookahead == 'D') ADVANCE(164);
      if (lookahead == 'G') ADVANCE(165);
      if (lookahead == 'H') ADVANCE(166);
      if (lookahead == 'O') ADVANCE(179);
      if (lookahead == 'P') ADVANCE(159);
      if (lookahead == 'T') ADVANCE(180);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == ']') ADVANCE(272);
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'c') ADVANCE(189);
      if (lookahead == 'd') ADVANCE(191);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'g') ADVANCE(210);
      if (lookahead == 'h') ADVANCE(155);
      if (lookahead == 'i') ADVANCE(225);
      if (lookahead == 'm') ADVANCE(197);
      if (lookahead == 'n') ADVANCE(216);
      if (lookahead == 'p') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(212);
      if (lookahead == 's') ADVANCE(207);
      if (lookahead == 't') ADVANCE(195);
      if (lookahead == 'u') ADVANCE(240);
      if (lookahead == 'w') ADVANCE(243);
      if (lookahead == '{') ADVANCE(266);
      if (lookahead == '}') ADVANCE(268);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(291);
      if (lookahead == '\r') ADVANCE(291);
      if (lookahead == ' ') ADVANCE(281);
      if (lookahead == '{') ADVANCE(282);
      if (lookahead != 0) ADVANCE(280);
      END_STATE();
    case 2:
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '?') ADVANCE(141);
      if (lookahead == 'H') ADVANCE(187);
      if (lookahead == '{') ADVANCE(122);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(291);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 3:
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '?') ADVANCE(141);
      if (lookahead == 'H') ADVANCE(187);
      if (lookahead == '{') ADVANCE(122);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(281);
      if (lookahead == '{') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 5:
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '{') ADVANCE(122);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 6:
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 7:
      if (lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 8:
      if (lookahead == ' ') SKIP(8)
      if (lookahead == '{') ADVANCE(122);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 9:
      if (lookahead == ' ') SKIP(9)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(277);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(117);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(140);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(131);
      END_STATE();
    case 17:
      if (lookahead == '1') ADVANCE(142);
      END_STATE();
    case 18:
      if (lookahead == '1') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == '3') ADVANCE(19);
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 21:
      if (lookahead == '3') ADVANCE(142);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'O') ADVANCE(46);
      if (lookahead == 'U') ADVANCE(48);
      END_STATE();
    case 25:
      if (lookahead == 'C') ADVANCE(48);
      END_STATE();
    case 26:
      if (lookahead == 'C') ADVANCE(35);
      END_STATE();
    case 27:
      if (lookahead == 'C') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == 'D') ADVANCE(138);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(37);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(48);
      END_STATE();
    case 31:
      if (lookahead == 'E') ADVANCE(22);
      if (lookahead == 'T') ADVANCE(51);
      END_STATE();
    case 32:
      if (lookahead == 'E') ADVANCE(138);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(25);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(52);
      END_STATE();
    case 35:
      if (lookahead == 'H') ADVANCE(138);
      END_STATE();
    case 36:
      if (lookahead == 'I') ADVANCE(42);
      END_STATE();
    case 37:
      if (lookahead == 'L') ADVANCE(34);
      END_STATE();
    case 38:
      if (lookahead == 'N') ADVANCE(40);
      END_STATE();
    case 39:
      if (lookahead == 'N') ADVANCE(47);
      END_STATE();
    case 40:
      if (lookahead == 'N') ADVANCE(33);
      END_STATE();
    case 41:
      if (lookahead == 'O') ADVANCE(38);
      END_STATE();
    case 42:
      if (lookahead == 'O') ADVANCE(39);
      END_STATE();
    case 43:
      if (lookahead == 'P') ADVANCE(16);
      END_STATE();
    case 44:
      if (lookahead == 'P') ADVANCE(49);
      END_STATE();
    case 45:
      if (lookahead == 'R') ADVANCE(23);
      END_STATE();
    case 46:
      if (lookahead == 'S') ADVANCE(48);
      END_STATE();
    case 47:
      if (lookahead == 'S') ADVANCE(138);
      END_STATE();
    case 48:
      if (lookahead == 'T') ADVANCE(138);
      END_STATE();
    case 49:
      if (lookahead == 'T') ADVANCE(36);
      END_STATE();
    case 50:
      if (lookahead == 'T') ADVANCE(26);
      END_STATE();
    case 51:
      if (lookahead == 'T') ADVANCE(43);
      END_STATE();
    case 52:
      if (lookahead == 'T') ADVANCE(32);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == 'k') ADVANCE(67);
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 63:
      if (lookahead == 'b') ADVANCE(96);
      if (lookahead == 'c') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(105);
      if (lookahead == 's') ADVANCE(110);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 68:
      if (lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 78:
      if (lookahead == 'f') ADVANCE(93);
      END_STATE();
    case 79:
      if (lookahead == 'g') ADVANCE(142);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 83:
      if (lookahead == 'k') ADVANCE(71);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(142);
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(103);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 98:
      if (lookahead == 'p') ADVANCE(142);
      END_STATE();
    case 99:
      if (lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'p') ADVANCE(102);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead == 'w') ADVANCE(106);
      END_STATE();
    case 102:
      if (lookahead == 'p') ADVANCE(102);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead == 'w') ADVANCE(106);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(87);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == 't') ADVANCE(64);
      if (lookahead == 'w') ADVANCE(106);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 119:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 120:
      if (lookahead == 'x') ADVANCE(60);
      END_STATE();
    case 121:
      if (lookahead == 'y') ADVANCE(114);
      END_STATE();
    case 122:
      if (lookahead == '{') ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead == '}') ADVANCE(124);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 124:
      if (lookahead == '}') ADVANCE(274);
      END_STATE();
    case 125:
      if (eof) ADVANCE(130);
      if (lookahead == ' ') SKIP(125)
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '#') ADVANCE(12);
      if (lookahead == '&') ADVANCE(260);
      if (lookahead == ',') ADVANCE(269);
      if (lookahead == '-') ADVANCE(149);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '/') ADVANCE(259);
      if (lookahead == ':') ADVANCE(137);
      if (lookahead == '=') ADVANCE(261);
      if (lookahead == '?') ADVANCE(141);
      if (lookahead == '@') ADVANCE(273);
      if (lookahead == 'C') ADVANCE(176);
      if (lookahead == 'D') ADVANCE(164);
      if (lookahead == 'G') ADVANCE(165);
      if (lookahead == 'H') ADVANCE(166);
      if (lookahead == 'O') ADVANCE(179);
      if (lookahead == 'P') ADVANCE(159);
      if (lookahead == 'T') ADVANCE(180);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == ']') ADVANCE(272);
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'c') ADVANCE(189);
      if (lookahead == 'd') ADVANCE(191);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == 'f') ADVANCE(192);
      if (lookahead == 'g') ADVANCE(210);
      if (lookahead == 'h') ADVANCE(155);
      if (lookahead == 'i') ADVANCE(225);
      if (lookahead == 'm') ADVANCE(197);
      if (lookahead == 'n') ADVANCE(216);
      if (lookahead == 'p') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(212);
      if (lookahead == 's') ADVANCE(207);
      if (lookahead == 't') ADVANCE(195);
      if (lookahead == 'u') ADVANCE(240);
      if (lookahead == 'w') ADVANCE(243);
      if (lookahead == '{') ADVANCE(266);
      if (lookahead == '}') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 126:
      if (eof) ADVANCE(130);
      if (lookahead == ' ') SKIP(127)
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '&') ADVANCE(260);
      if (lookahead == ':') ADVANCE(136);
      if (lookahead == '=') ADVANCE(261);
      if (lookahead == '@') ADVANCE(273);
      if (lookahead == 'C') ADVANCE(41);
      if (lookahead == 'D') ADVANCE(29);
      if (lookahead == 'G') ADVANCE(30);
      if (lookahead == 'H') ADVANCE(31);
      if (lookahead == 'O') ADVANCE(44);
      if (lookahead == 'P') ADVANCE(24);
      if (lookahead == 'T') ADVANCE(45);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == ']') ADVANCE(272);
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'c') ADVANCE(53);
      if (lookahead == 'd') ADVANCE(55);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 'g') ADVANCE(74);
      if (lookahead == 'h') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'm') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == 'p') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(104);
      if (lookahead == 'w') ADVANCE(107);
      if (lookahead == '{') ADVANCE(266);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(291);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 127:
      if (eof) ADVANCE(130);
      if (lookahead == ' ') SKIP(127)
      if (lookahead == '"') ADVANCE(270);
      if (lookahead == '&') ADVANCE(260);
      if (lookahead == ':') ADVANCE(136);
      if (lookahead == '=') ADVANCE(261);
      if (lookahead == '@') ADVANCE(273);
      if (lookahead == 'C') ADVANCE(41);
      if (lookahead == 'D') ADVANCE(29);
      if (lookahead == 'G') ADVANCE(30);
      if (lookahead == 'H') ADVANCE(31);
      if (lookahead == 'O') ADVANCE(44);
      if (lookahead == 'P') ADVANCE(24);
      if (lookahead == 'T') ADVANCE(45);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == ']') ADVANCE(272);
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'c') ADVANCE(53);
      if (lookahead == 'd') ADVANCE(55);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 'g') ADVANCE(74);
      if (lookahead == 'h') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'm') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(80);
      if (lookahead == 'p') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(104);
      if (lookahead == 'w') ADVANCE(107);
      if (lookahead == '{') ADVANCE(266);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 128:
      if (eof) ADVANCE(130);
      if (lookahead == ' ') ADVANCE(262);
      if (lookahead == '@') ADVANCE(273);
      if (lookahead == 'C') ADVANCE(176);
      if (lookahead == 'D') ADVANCE(164);
      if (lookahead == 'G') ADVANCE(165);
      if (lookahead == 'H') ADVANCE(166);
      if (lookahead == 'O') ADVANCE(179);
      if (lookahead == 'P') ADVANCE(159);
      if (lookahead == 'T') ADVANCE(180);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == '{') ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 129:
      if (eof) ADVANCE(130);
      if (lookahead == ' ') SKIP(129)
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '@') ADVANCE(273);
      if (lookahead == 'C') ADVANCE(176);
      if (lookahead == 'D') ADVANCE(164);
      if (lookahead == 'G') ADVANCE(165);
      if (lookahead == 'H') ADVANCE(166);
      if (lookahead == 'O') ADVANCE(179);
      if (lookahead == 'P') ADVANCE(159);
      if (lookahead == 'T') ADVANCE(180);
      if (lookahead == '{') ADVANCE(122);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_status_code);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '/') ADVANCE(15);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_method_token1);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_scheme);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 'h') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 'h') ADVANCE(142);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 's') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(258);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(148);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(253);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '/') ADVANCE(131);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '1') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '1') ADVANCE(152);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '2') ADVANCE(156);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '3') ADVANCE(154);
      if (lookahead == 't') ADVANCE(251);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '3') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(163);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(162);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(185);
      if (lookahead == 'O') ADVANCE(181);
      if (lookahead == 'U') ADVANCE(183);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(183);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(170);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(167);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(139);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(183);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(157);
      if (lookahead == 'T') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(139);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(160);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(188);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(139);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(168);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(173);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(151);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(158);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(183);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(139);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(139);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(161);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(167);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == 'o') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(252);
      if (lookahead == 'n') ADVANCE(242);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead == 't') ADVANCE(234);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(257);
      if (lookahead == 'k') ADVANCE(203);
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead == 'r') ADVANCE(255);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(226);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(218);
      if (lookahead == 'i') ADVANCE(204);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(236);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(232);
      if (lookahead == 'c') ADVANCE(202);
      if (lookahead == 'r') ADVANCE(200);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(234);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(241);
      if (lookahead == 's') ADVANCE(246);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(248);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(244);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(258);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == 'm') ADVANCE(242);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(229);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(222);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(229);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(230);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(224);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(208);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(228);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(247);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(206);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(249);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(147);
      if (lookahead == 'n') ADVANCE(214);
      if (lookahead == 'p') ADVANCE(234);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(239);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(211);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(227);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(219);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(254);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(190);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(145);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(237);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(238);
      if (lookahead == 's') ADVANCE(245);
      if (lookahead == 't') ADVANCE(200);
      if (lookahead == 'w') ADVANCE(242);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(238);
      if (lookahead == 't') ADVANCE(200);
      if (lookahead == 'w') ADVANCE(242);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(223);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(227);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(213);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(145);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(153);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(245);
      if (lookahead == 't') ADVANCE(200);
      if (lookahead == 'w') ADVANCE(242);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(217);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(205);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(229);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(150);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(235);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(193);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(231);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(248);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(205);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(196);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(249);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == ' ') ADVANCE(262);
      if (lookahead == '@') ADVANCE(273);
      if (lookahead == 'C') ADVANCE(176);
      if (lookahead == 'D') ADVANCE(164);
      if (lookahead == 'G') ADVANCE(165);
      if (lookahead == 'H') ADVANCE(166);
      if (lookahead == 'O') ADVANCE(179);
      if (lookahead == 'P') ADVANCE(159);
      if (lookahead == 'T') ADVANCE(180);
      if (lookahead == '[') ADVANCE(271);
      if (lookahead == '{') ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '}') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '}') ADVANCE(263);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(123);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(264);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_variable_ref);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__kill_leading_whitespace);
      if (lookahead == ' ') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(276);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__kill_leading_whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_request_delimiter);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == ' ') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_rest_of_line_dynamic_token1);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_rest_of_line_dynamic_token1);
      if (lookahead == ' ') ADVANCE(281);
      if (lookahead == '{') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(280);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_rest_of_line_dynamic_token1);
      if (lookahead == '{') ADVANCE(123);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_domain);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ' ') ADVANCE(286);
      if (lookahead == '{') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(290);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(290);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(290);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(288);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(290);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__new_line);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(291);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 126},
  [2] = {.lex_state = 128},
  [3] = {.lex_state = 128},
  [4] = {.lex_state = 126},
  [5] = {.lex_state = 126},
  [6] = {.lex_state = 126},
  [7] = {.lex_state = 126},
  [8] = {.lex_state = 128},
  [9] = {.lex_state = 126},
  [10] = {.lex_state = 126},
  [11] = {.lex_state = 126},
  [12] = {.lex_state = 126},
  [13] = {.lex_state = 126},
  [14] = {.lex_state = 129},
  [15] = {.lex_state = 128},
  [16] = {.lex_state = 129},
  [17] = {.lex_state = 129},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 129},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 129},
  [27] = {.lex_state = 126},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 126},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 126},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 126},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 126},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 5},
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
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 275},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 126},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 126},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 286},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 126},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 126},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 275},
  [121] = {.lex_state = 126},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 10},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 275},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 129},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_HTTP_SLASH] = ACTIONS(1),
    [aux_sym_http_version_token1] = ACTIONS(1),
    [sym_status_code] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_method_token1] = ACTIONS(1),
    [anon_sym_COLON_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [sym_scheme] = ACTIONS(1),
    [sym__identifier] = ACTIONS(1),
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
    [sym_number] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym__new_line] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(137),
    [sym_request] = STATE(4),
    [sym_method_url] = STATE(136),
    [sym_response] = STATE(4),
    [sym_status_line] = STATE(14),
    [sym_http_version] = STATE(128),
    [sym_method] = STATE(65),
    [sym_variable_declaration] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
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
    STATE(8), 1,
      aux_sym_request_repeat1,
    STATE(85), 1,
      sym_url_encoded_key_value,
    STATE(93), 1,
      sym_identifier,
    STATE(133), 1,
      sym_json_list,
    STATE(135), 1,
      sym_header,
    STATE(107), 3,
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
    STATE(85), 1,
      sym_url_encoded_key_value,
    STATE(93), 1,
      sym_identifier,
    STATE(133), 1,
      sym_json_list,
    STATE(135), 1,
      sym_header,
    STATE(134), 3,
      sym__body,
      sym_json_body,
      sym_url_encoded_body,
    ACTIONS(25), 4,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [84] = 9,
    ACTIONS(5), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym_status_line,
    STATE(65), 1,
      sym_method,
    STATE(128), 1,
      sym_http_version,
    STATE(136), 1,
      sym_method_url,
    ACTIONS(7), 2,
      aux_sym_method_token1,
      sym_variable_ref,
    STATE(7), 4,
      sym_request,
      sym_response,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [116] = 8,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      anon_sym_RBRACK,
    ACTIONS(41), 1,
      sym__new_line,
    STATE(119), 1,
      sym__json_list_values,
    ACTIONS(39), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(72), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [146] = 8,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_RBRACK,
    ACTIONS(45), 1,
      sym__new_line,
    STATE(141), 1,
      sym__json_list_values,
    ACTIONS(39), 3,
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
    STATE(14), 1,
      sym_status_line,
    STATE(65), 1,
      sym_method,
    STATE(128), 1,
      sym_http_version,
    STATE(136), 1,
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
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      sym__identifier,
    ACTIONS(65), 1,
      sym_variable_ref,
    STATE(8), 1,
      aux_sym_request_repeat1,
    STATE(113), 1,
      sym_identifier,
    STATE(135), 1,
      sym_header,
    ACTIONS(60), 6,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      sym_raw_body,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
  [235] = 7,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(68), 1,
      anon_sym_RBRACK,
    STATE(143), 1,
      sym__json_list_values,
    ACTIONS(39), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(72), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [262] = 7,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(70), 1,
      anon_sym_RBRACK,
    STATE(124), 1,
      sym__json_list_values,
    ACTIONS(39), 3,
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
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      sym__new_line,
    ACTIONS(74), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(67), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [313] = 5,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(78), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(75), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [334] = 5,
    ACTIONS(19), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(80), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(74), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [355] = 6,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(84), 1,
      aux_sym_method_token1,
    STATE(17), 1,
      aux_sym_request_repeat1,
    STATE(113), 1,
      sym_identifier,
    STATE(129), 1,
      sym_header,
    ACTIONS(82), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [377] = 2,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 8,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      sym__identifier,
      sym_raw_body,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_variable_ref,
  [391] = 7,
    ACTIONS(60), 1,
      aux_sym_method_token1,
    ACTIONS(62), 1,
      sym__identifier,
    ACTIONS(86), 1,
      sym_variable_ref,
    STATE(16), 1,
      aux_sym_request_repeat1,
    STATE(113), 1,
      sym_identifier,
    STATE(129), 1,
      sym_header,
    ACTIONS(58), 3,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
  [415] = 6,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(91), 1,
      aux_sym_method_token1,
    STATE(16), 1,
      aux_sym_request_repeat1,
    STATE(113), 1,
      sym_identifier,
    STATE(129), 1,
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
    STATE(62), 1,
      sym_query_param,
    STATE(94), 1,
      sym_query_params,
    STATE(117), 1,
      sym_identifier,
    ACTIONS(93), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [457] = 6,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(95), 1,
      sym_variable_ref,
    STATE(62), 1,
      sym_query_param,
    STATE(102), 1,
      sym_query_params,
    STATE(117), 1,
      sym_identifier,
    ACTIONS(97), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [477] = 6,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(95), 1,
      sym_variable_ref,
    STATE(62), 1,
      sym_query_param,
    STATE(97), 1,
      sym_query_params,
    STATE(117), 1,
      sym_identifier,
    ACTIONS(99), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [497] = 6,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(95), 1,
      sym_variable_ref,
    STATE(62), 1,
      sym_query_param,
    STATE(106), 1,
      sym_query_params,
    STATE(117), 1,
      sym_identifier,
    ACTIONS(101), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [517] = 2,
    ACTIONS(105), 2,
      aux_sym_method_token1,
      sym__identifier,
    ACTIONS(103), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [528] = 6,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      sym__new_line,
    STATE(54), 1,
      sym_json_key_value,
    STATE(121), 1,
      sym__json_key,
    STATE(122), 1,
      sym__key_value_list,
  [547] = 5,
    ACTIONS(115), 1,
      anon_sym_QMARK,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    STATE(30), 1,
      aux_sym_path_repeat1,
    STATE(76), 1,
      sym_path,
    ACTIONS(113), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [564] = 5,
    ACTIONS(117), 1,
      anon_sym_SLASH,
    ACTIONS(119), 1,
      anon_sym_QMARK,
    STATE(30), 1,
      aux_sym_path_repeat1,
    STATE(89), 1,
      sym_path,
    ACTIONS(93), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [581] = 2,
    ACTIONS(60), 2,
      aux_sym_method_token1,
      sym__identifier,
    ACTIONS(58), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [592] = 1,
    ACTIONS(121), 6,
      anon_sym_HTTP_SLASH,
      anon_sym_COLON,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      sym__new_line,
  [601] = 6,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      anon_sym_RBRACE,
    ACTIONS(125), 1,
      sym__new_line,
    STATE(54), 1,
      sym_json_key_value,
    STATE(121), 1,
      sym__json_key,
    STATE(139), 1,
      sym__key_value_list,
  [620] = 1,
    ACTIONS(127), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [628] = 3,
    ACTIONS(131), 1,
      anon_sym_SLASH,
    STATE(34), 1,
      aux_sym_path_repeat1,
    ACTIONS(129), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
      sym__new_line,
  [640] = 3,
    ACTIONS(133), 1,
      sym__identifier,
    ACTIONS(135), 1,
      sym_variable_ref,
    ACTIONS(129), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
      sym__new_line,
  [652] = 5,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym_json_key_value,
    STATE(121), 1,
      sym__json_key,
    STATE(142), 1,
      sym__key_value_list,
  [668] = 1,
    ACTIONS(139), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [676] = 3,
    ACTIONS(143), 1,
      anon_sym_SLASH,
    STATE(34), 1,
      aux_sym_path_repeat1,
    ACTIONS(141), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
      sym__new_line,
  [688] = 1,
    ACTIONS(146), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [696] = 5,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      sym_json_key_value,
    STATE(112), 1,
      sym__key_value_list,
    STATE(121), 1,
      sym__json_key,
  [712] = 3,
    ACTIONS(133), 1,
      sym__identifier,
    ACTIONS(135), 1,
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
    STATE(40), 1,
      aux_sym_rest_of_line_dynamic_repeat1,
    STATE(138), 1,
      sym_rest_of_line_dynamic,
    ACTIONS(154), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_dynamic_token1,
  [742] = 3,
    ACTIONS(158), 1,
      sym__new_line,
    STATE(63), 1,
      aux_sym_rest_of_line_dynamic_repeat1,
    ACTIONS(156), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_dynamic_token1,
  [753] = 3,
    ACTIONS(162), 1,
      anon_sym_AMP,
    STATE(56), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(160), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [764] = 1,
    ACTIONS(164), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [771] = 1,
    ACTIONS(164), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [778] = 1,
    ACTIONS(166), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [785] = 1,
    ACTIONS(166), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [792] = 4,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    ACTIONS(172), 1,
      sym__new_line,
    STATE(47), 1,
      aux_sym__key_value_list_repeat1,
  [805] = 3,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      aux_sym__key_value_list_repeat1,
    ACTIONS(174), 2,
      anon_sym_RBRACE,
      sym__new_line,
  [816] = 4,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(179), 1,
      sym__new_line,
    STATE(78), 1,
      sym_json_key_value,
    STATE(121), 1,
      sym__json_key,
  [829] = 1,
    ACTIONS(181), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [836] = 1,
    ACTIONS(183), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [843] = 1,
    ACTIONS(185), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [850] = 4,
    ACTIONS(95), 1,
      sym_variable_ref,
    ACTIONS(187), 1,
      sym__identifier,
    STATE(71), 1,
      sym_query_param,
    STATE(117), 1,
      sym_identifier,
  [863] = 1,
    ACTIONS(189), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [870] = 4,
    ACTIONS(170), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    ACTIONS(193), 1,
      sym__new_line,
    STATE(46), 1,
      aux_sym__key_value_list_repeat1,
  [883] = 1,
    ACTIONS(195), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [890] = 3,
    ACTIONS(199), 1,
      anon_sym_AMP,
    STATE(56), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(197), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [901] = 1,
    ACTIONS(202), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [908] = 1,
    ACTIONS(181), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [915] = 1,
    ACTIONS(152), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [922] = 1,
    ACTIONS(141), 4,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
      anon_sym_SLASH,
      sym__new_line,
  [929] = 4,
    ACTIONS(187), 1,
      sym__identifier,
    ACTIONS(204), 1,
      sym_variable_ref,
    STATE(105), 1,
      sym_url_encoded_key_value,
    STATE(125), 1,
      sym_identifier,
  [942] = 3,
    ACTIONS(162), 1,
      anon_sym_AMP,
    STATE(41), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(206), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [953] = 3,
    ACTIONS(211), 1,
      sym__new_line,
    STATE(63), 1,
      aux_sym_rest_of_line_dynamic_repeat1,
    ACTIONS(208), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_dynamic_token1,
  [964] = 3,
    ACTIONS(187), 1,
      sym__identifier,
    ACTIONS(213), 1,
      sym_variable_ref,
    STATE(114), 1,
      sym_identifier,
  [974] = 3,
    ACTIONS(215), 1,
      sym_scheme,
    ACTIONS(217), 1,
      sym_variable_ref,
    STATE(83), 1,
      sym_url,
  [984] = 3,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(222), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      aux_sym__json_list_values_repeat1,
  [994] = 2,
    ACTIONS(224), 1,
      sym__new_line,
    ACTIONS(222), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1002] = 1,
    ACTIONS(226), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_AMP,
      sym__new_line,
  [1008] = 3,
    ACTIONS(228), 1,
      anon_sym_AMP,
    ACTIONS(230), 1,
      sym__new_line,
    STATE(87), 1,
      aux_sym_url_encoded_body_repeat1,
  [1018] = 3,
    ACTIONS(187), 1,
      sym__identifier,
    ACTIONS(232), 1,
      sym_variable_ref,
    STATE(96), 1,
      sym_identifier,
  [1028] = 1,
    ACTIONS(197), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_AMP,
      sym__new_line,
  [1034] = 3,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(236), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      aux_sym__json_list_values_repeat1,
  [1044] = 1,
    ACTIONS(238), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym__new_line,
  [1050] = 1,
    ACTIONS(240), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym__new_line,
  [1056] = 2,
    ACTIONS(244), 1,
      sym__new_line,
    ACTIONS(242), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1064] = 2,
    ACTIONS(246), 1,
      anon_sym_QMARK,
    ACTIONS(99), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1072] = 2,
    ACTIONS(248), 1,
      sym__new_line,
    ACTIONS(152), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1080] = 1,
    ACTIONS(174), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym__new_line,
  [1086] = 3,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_json_key_value,
    STATE(121), 1,
      sym__json_key,
  [1096] = 2,
    ACTIONS(250), 1,
      sym__new_line,
    ACTIONS(185), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1104] = 2,
    ACTIONS(252), 1,
      sym__new_line,
    ACTIONS(202), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1112] = 2,
    ACTIONS(254), 1,
      sym__new_line,
    ACTIONS(181), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1120] = 3,
    ACTIONS(5), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(256), 1,
      sym__new_line,
    STATE(127), 1,
      sym_http_version,
  [1130] = 3,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(258), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      aux_sym__json_list_values_repeat1,
  [1140] = 3,
    ACTIONS(228), 1,
      anon_sym_AMP,
    ACTIONS(260), 1,
      sym__new_line,
    STATE(69), 1,
      aux_sym_url_encoded_body_repeat1,
  [1150] = 2,
    ACTIONS(262), 1,
      sym__new_line,
    ACTIONS(166), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1158] = 3,
    ACTIONS(264), 1,
      anon_sym_AMP,
    ACTIONS(267), 1,
      sym__new_line,
    STATE(87), 1,
      aux_sym_url_encoded_body_repeat1,
  [1168] = 2,
    ACTIONS(269), 1,
      sym__new_line,
    ACTIONS(164), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1176] = 2,
    ACTIONS(271), 1,
      anon_sym_QMARK,
    ACTIONS(101), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1184] = 3,
    ACTIONS(187), 1,
      sym__identifier,
    ACTIONS(273), 1,
      sym_variable_ref,
    STATE(68), 1,
      sym_identifier,
  [1194] = 2,
    ACTIONS(275), 1,
      sym__kill_leading_whitespace,
    STATE(130), 1,
      sym_reason_phrase,
  [1201] = 1,
    ACTIONS(277), 2,
      sym_status_code,
      sym__new_line,
  [1206] = 2,
    ACTIONS(279), 1,
      anon_sym_COLON,
    ACTIONS(281), 1,
      anon_sym_EQ,
  [1213] = 1,
    ACTIONS(101), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1218] = 1,
    ACTIONS(135), 2,
      sym__identifier,
      sym_variable_ref,
  [1223] = 1,
    ACTIONS(283), 2,
      anon_sym_AMP,
      sym__new_line,
  [1228] = 1,
    ACTIONS(93), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1233] = 1,
    ACTIONS(285), 2,
      sym_scheme,
      sym_variable_ref,
  [1238] = 2,
    ACTIONS(187), 1,
      sym__identifier,
    STATE(115), 1,
      sym_identifier,
  [1245] = 1,
    ACTIONS(287), 2,
      sym_variable_ref,
      sym_domain,
  [1250] = 1,
    ACTIONS(289), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1255] = 1,
    ACTIONS(291), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1260] = 1,
    ACTIONS(242), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1265] = 1,
    ACTIONS(293), 2,
      sym_variable_ref,
      aux_sym_string_token1,
  [1270] = 1,
    ACTIONS(267), 2,
      anon_sym_AMP,
      sym__new_line,
  [1275] = 1,
    ACTIONS(97), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1280] = 1,
    ACTIONS(295), 1,
      sym__new_line,
  [1284] = 1,
    ACTIONS(297), 1,
      anon_sym_COLON,
  [1288] = 1,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
  [1292] = 1,
    ACTIONS(301), 1,
      aux_sym_http_version_token1,
  [1296] = 1,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
  [1300] = 1,
    ACTIONS(303), 1,
      anon_sym_RBRACE,
  [1304] = 1,
    ACTIONS(279), 1,
      anon_sym_COLON,
  [1308] = 1,
    ACTIONS(305), 1,
      anon_sym_DQUOTE,
  [1312] = 1,
    ACTIONS(307), 1,
      anon_sym_EQ,
  [1316] = 1,
    ACTIONS(309), 1,
      sym__new_line,
  [1320] = 1,
    ACTIONS(311), 1,
      anon_sym_EQ,
  [1324] = 1,
    ACTIONS(313), 1,
      sym__new_line,
  [1328] = 1,
    ACTIONS(70), 1,
      anon_sym_RBRACK,
  [1332] = 1,
    ACTIONS(315), 1,
      sym__kill_leading_whitespace,
  [1336] = 1,
    ACTIONS(317), 1,
      anon_sym_COLON,
  [1340] = 1,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
  [1344] = 1,
    ACTIONS(319), 1,
      sym_rest_of_line,
  [1348] = 1,
    ACTIONS(321), 1,
      anon_sym_RBRACK,
  [1352] = 1,
    ACTIONS(281), 1,
      anon_sym_EQ,
  [1356] = 1,
    ACTIONS(323), 1,
      anon_sym_DQUOTE,
  [1360] = 1,
    ACTIONS(325), 1,
      sym__new_line,
  [1364] = 1,
    ACTIONS(327), 1,
      sym_status_code,
  [1368] = 1,
    ACTIONS(329), 1,
      sym__new_line,
  [1372] = 1,
    ACTIONS(331), 1,
      sym__new_line,
  [1376] = 1,
    ACTIONS(333), 1,
      sym_rest_of_line,
  [1380] = 1,
    ACTIONS(335), 1,
      sym__kill_leading_whitespace,
  [1384] = 1,
    ACTIONS(337), 1,
      sym__new_line,
  [1388] = 1,
    ACTIONS(339), 1,
      sym__new_line,
  [1392] = 1,
    ACTIONS(341), 1,
      sym__new_line,
  [1396] = 1,
    ACTIONS(343), 1,
      sym__new_line,
  [1400] = 1,
    ACTIONS(345), 1,
      ts_builtin_sym_end,
  [1404] = 1,
    ACTIONS(347), 1,
      sym__new_line,
  [1408] = 1,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
  [1412] = 1,
    ACTIONS(349), 1,
      anon_sym_COLON_SLASH_SLASH,
  [1416] = 1,
    ACTIONS(68), 1,
      anon_sym_RBRACK,
  [1420] = 1,
    ACTIONS(351), 1,
      anon_sym_RBRACE,
  [1424] = 1,
    ACTIONS(353), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 116,
  [SMALL_STATE(6)] = 146,
  [SMALL_STATE(7)] = 176,
  [SMALL_STATE(8)] = 208,
  [SMALL_STATE(9)] = 235,
  [SMALL_STATE(10)] = 262,
  [SMALL_STATE(11)] = 289,
  [SMALL_STATE(12)] = 313,
  [SMALL_STATE(13)] = 334,
  [SMALL_STATE(14)] = 355,
  [SMALL_STATE(15)] = 377,
  [SMALL_STATE(16)] = 391,
  [SMALL_STATE(17)] = 415,
  [SMALL_STATE(18)] = 437,
  [SMALL_STATE(19)] = 457,
  [SMALL_STATE(20)] = 477,
  [SMALL_STATE(21)] = 497,
  [SMALL_STATE(22)] = 517,
  [SMALL_STATE(23)] = 528,
  [SMALL_STATE(24)] = 547,
  [SMALL_STATE(25)] = 564,
  [SMALL_STATE(26)] = 581,
  [SMALL_STATE(27)] = 592,
  [SMALL_STATE(28)] = 601,
  [SMALL_STATE(29)] = 620,
  [SMALL_STATE(30)] = 628,
  [SMALL_STATE(31)] = 640,
  [SMALL_STATE(32)] = 652,
  [SMALL_STATE(33)] = 668,
  [SMALL_STATE(34)] = 676,
  [SMALL_STATE(35)] = 688,
  [SMALL_STATE(36)] = 696,
  [SMALL_STATE(37)] = 712,
  [SMALL_STATE(38)] = 724,
  [SMALL_STATE(39)] = 731,
  [SMALL_STATE(40)] = 742,
  [SMALL_STATE(41)] = 753,
  [SMALL_STATE(42)] = 764,
  [SMALL_STATE(43)] = 771,
  [SMALL_STATE(44)] = 778,
  [SMALL_STATE(45)] = 785,
  [SMALL_STATE(46)] = 792,
  [SMALL_STATE(47)] = 805,
  [SMALL_STATE(48)] = 816,
  [SMALL_STATE(49)] = 829,
  [SMALL_STATE(50)] = 836,
  [SMALL_STATE(51)] = 843,
  [SMALL_STATE(52)] = 850,
  [SMALL_STATE(53)] = 863,
  [SMALL_STATE(54)] = 870,
  [SMALL_STATE(55)] = 883,
  [SMALL_STATE(56)] = 890,
  [SMALL_STATE(57)] = 901,
  [SMALL_STATE(58)] = 908,
  [SMALL_STATE(59)] = 915,
  [SMALL_STATE(60)] = 922,
  [SMALL_STATE(61)] = 929,
  [SMALL_STATE(62)] = 942,
  [SMALL_STATE(63)] = 953,
  [SMALL_STATE(64)] = 964,
  [SMALL_STATE(65)] = 974,
  [SMALL_STATE(66)] = 984,
  [SMALL_STATE(67)] = 994,
  [SMALL_STATE(68)] = 1002,
  [SMALL_STATE(69)] = 1008,
  [SMALL_STATE(70)] = 1018,
  [SMALL_STATE(71)] = 1028,
  [SMALL_STATE(72)] = 1034,
  [SMALL_STATE(73)] = 1044,
  [SMALL_STATE(74)] = 1050,
  [SMALL_STATE(75)] = 1056,
  [SMALL_STATE(76)] = 1064,
  [SMALL_STATE(77)] = 1072,
  [SMALL_STATE(78)] = 1080,
  [SMALL_STATE(79)] = 1086,
  [SMALL_STATE(80)] = 1096,
  [SMALL_STATE(81)] = 1104,
  [SMALL_STATE(82)] = 1112,
  [SMALL_STATE(83)] = 1120,
  [SMALL_STATE(84)] = 1130,
  [SMALL_STATE(85)] = 1140,
  [SMALL_STATE(86)] = 1150,
  [SMALL_STATE(87)] = 1158,
  [SMALL_STATE(88)] = 1168,
  [SMALL_STATE(89)] = 1176,
  [SMALL_STATE(90)] = 1184,
  [SMALL_STATE(91)] = 1194,
  [SMALL_STATE(92)] = 1201,
  [SMALL_STATE(93)] = 1206,
  [SMALL_STATE(94)] = 1213,
  [SMALL_STATE(95)] = 1218,
  [SMALL_STATE(96)] = 1223,
  [SMALL_STATE(97)] = 1228,
  [SMALL_STATE(98)] = 1233,
  [SMALL_STATE(99)] = 1238,
  [SMALL_STATE(100)] = 1245,
  [SMALL_STATE(101)] = 1250,
  [SMALL_STATE(102)] = 1255,
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
  [SMALL_STATE(141)] = 1416,
  [SMALL_STATE(142)] = 1420,
  [SMALL_STATE(143)] = 1424,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(110),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(98),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(99),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(27),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(113),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 1),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(113),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 5),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status_line, 4),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status_line, 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(95),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 4),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line_dynamic, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 2),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 2), SHIFT_REPEAT(48),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 5),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 5),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2), SHIFT_REPEAT(52),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 1),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rest_of_line_dynamic_repeat1, 2), SHIFT_REPEAT(63),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rest_of_line_dynamic_repeat1, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2), SHIFT_REPEAT(11),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3, .production_id = 4),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_body, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3, .production_id = 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_url, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_body, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_url_encoded_body_repeat1, 2), SHIFT_REPEAT(61),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_encoded_body_repeat1, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_key_value, 3, .production_id = 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 4),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 6),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_key, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason_phrase, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_url, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [345] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
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
