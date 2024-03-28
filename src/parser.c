#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 146
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_HTTP_SLASH = 1,
  aux_sym_http_version_token1 = 2,
  sym_status_code = 3,
  anon_sym_COLON = 4,
  aux_sym_method_token1 = 5,
  anon_sym_COLON_SLASH_SLASH = 6,
  anon_sym_QMARK = 7,
  sym_scheme = 8,
  anon_sym_SLASH = 9,
  anon_sym_AMP = 10,
  anon_sym_EQ = 11,
  sym_raw_body = 12,
  anon_sym_COMMA = 13,
  anon_sym_DQUOTE = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  anon_sym_LBRACK = 17,
  anon_sym_RBRACK = 18,
  anon_sym_AT = 19,
  sym_variable_ref = 20,
  aux_sym__identifier_token1 = 21,
  aux_sym_rest_of_line_token1 = 22,
  sym_domain = 23,
  sym_number = 24,
  sym_boolean = 25,
  aux_sym_string_token1 = 26,
  sym__new_line = 27,
  sym_source_file = 28,
  sym_request = 29,
  sym_method_url = 30,
  sym_response = 31,
  sym_status_line = 32,
  sym_http_version = 33,
  sym_reason_phrase = 34,
  sym_header = 35,
  sym_method = 36,
  sym_url = 37,
  sym_path = 38,
  sym_query_params = 39,
  sym_query_param = 40,
  sym__body = 41,
  sym_json_body = 42,
  sym__key_value_list = 43,
  sym_json_key_value = 44,
  sym__json_key = 45,
  sym__json_value = 46,
  sym_json_object = 47,
  sym_json_list = 48,
  sym__json_list_values = 49,
  sym_url_encoded_body = 50,
  sym_url_encoded_key_value = 51,
  sym_variable_declaration = 52,
  sym_identifier = 53,
  aux_sym__identifier = 54,
  sym_rest_of_line = 55,
  sym_string = 56,
  aux_sym_source_file_repeat1 = 57,
  aux_sym_request_repeat1 = 58,
  aux_sym_path_repeat1 = 59,
  aux_sym_query_params_repeat1 = 60,
  aux_sym__key_value_list_repeat1 = 61,
  aux_sym__json_list_values_repeat1 = 62,
  aux_sym_url_encoded_body_repeat1 = 63,
  aux_sym_rest_of_line_repeat1 = 64,
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
  [anon_sym_SLASH] = "/",
  [anon_sym_AMP] = "&",
  [anon_sym_EQ] = "=",
  [sym_raw_body] = "raw_body",
  [anon_sym_COMMA] = ",",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_AT] = "@",
  [sym_variable_ref] = "variable_ref",
  [aux_sym__identifier_token1] = "_identifier_token1",
  [aux_sym_rest_of_line_token1] = "rest_of_line_token1",
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
  [sym_json_object] = "json_object",
  [sym_json_list] = "json_list",
  [sym__json_list_values] = "_json_list_values",
  [sym_url_encoded_body] = "url_encoded_body",
  [sym_url_encoded_key_value] = "url_encoded_key_value",
  [sym_variable_declaration] = "variable_declaration",
  [sym_identifier] = "identifier",
  [aux_sym__identifier] = "_identifier",
  [sym_rest_of_line] = "rest_of_line",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_query_params_repeat1] = "query_params_repeat1",
  [aux_sym__key_value_list_repeat1] = "_key_value_list_repeat1",
  [aux_sym__json_list_values_repeat1] = "_json_list_values_repeat1",
  [aux_sym_url_encoded_body_repeat1] = "url_encoded_body_repeat1",
  [aux_sym_rest_of_line_repeat1] = "rest_of_line_repeat1",
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
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_raw_body] = sym_raw_body,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_AT] = anon_sym_AT,
  [sym_variable_ref] = sym_variable_ref,
  [aux_sym__identifier_token1] = aux_sym__identifier_token1,
  [aux_sym_rest_of_line_token1] = aux_sym_rest_of_line_token1,
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
  [sym_json_object] = sym_json_object,
  [sym_json_list] = sym_json_list,
  [sym__json_list_values] = sym__json_list_values,
  [sym_url_encoded_body] = sym_url_encoded_body,
  [sym_url_encoded_key_value] = sym_url_encoded_key_value,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_identifier] = sym_identifier,
  [aux_sym__identifier] = aux_sym__identifier,
  [sym_rest_of_line] = sym_rest_of_line,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_query_params_repeat1] = aux_sym_query_params_repeat1,
  [aux_sym__key_value_list_repeat1] = aux_sym__key_value_list_repeat1,
  [aux_sym__json_list_values_repeat1] = aux_sym__json_list_values_repeat1,
  [aux_sym_url_encoded_body_repeat1] = aux_sym_url_encoded_body_repeat1,
  [aux_sym_rest_of_line_repeat1] = aux_sym_rest_of_line_repeat1,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
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
  [aux_sym__identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rest_of_line_token1] = {
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
  [sym_json_object] = {
    .visible = true,
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
  [aux_sym__identifier] = {
    .visible = false,
    .named = false,
  },
  [sym_rest_of_line] = {
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
  [aux_sym_rest_of_line_repeat1] = {
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
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_header_name, 0},
    {field_header_value, 2},
  [2] =
    {field_parameter_name, 0},
  [3] =
    {field_variable_name, 1},
    {field_variable_value, 3},
  [5] =
    {field_key, 0},
    {field_value, 2},
  [7] =
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
  [5] = 4,
  [6] = 6,
  [7] = 6,
  [8] = 8,
  [9] = 9,
  [10] = 10,
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
  [24] = 17,
  [25] = 20,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 18,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 28,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 37,
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
  [80] = 53,
  [81] = 62,
  [82] = 69,
  [83] = 75,
  [84] = 61,
  [85] = 56,
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
  [136] = 136,
  [137] = 118,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 120,
  [142] = 142,
  [143] = 125,
  [144] = 136,
  [145] = 119,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(122);
      if (lookahead == ' ') SKIP(119)
      if (lookahead == '"') ADVANCE(167);
      if (lookahead == '&') ADVANCE(135);
      if (lookahead == ',') ADVANCE(166);
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '=') ADVANCE(136);
      if (lookahead == '?') ADVANCE(130);
      if (lookahead == '@') ADVANCE(173);
      if (lookahead == 'C') ADVANCE(184);
      if (lookahead == 'D') ADVANCE(178);
      if (lookahead == 'G') ADVANCE(179);
      if (lookahead == 'H') ADVANCE(180);
      if (lookahead == 'O') ADVANCE(186);
      if (lookahead == 'P') ADVANCE(176);
      if (lookahead == 'T') ADVANCE(188);
      if (lookahead == '[') ADVANCE(171);
      if (lookahead == ']') ADVANCE(172);
      if (lookahead == '{') ADVANCE(168);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(200);
      if (lookahead == '\r') ADVANCE(200);
      if (lookahead == ' ') ADVANCE(192);
      if (lookahead == '{') ADVANCE(193);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 2:
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '"') ADVANCE(167);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '[') ADVANCE(171);
      if (lookahead == ']') ADVANCE(172);
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'c') ADVANCE(47);
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'g') ADVANCE(68);
      if (lookahead == 'h') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'm') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(74);
      if (lookahead == 'p') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(70);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(98);
      if (lookahead == 'w') ADVANCE(101);
      if (lookahead == '{') ADVANCE(168);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(200);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 3:
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '"') ADVANCE(167);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '[') ADVANCE(171);
      if (lookahead == ']') ADVANCE(172);
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'c') ADVANCE(47);
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'g') ADVANCE(68);
      if (lookahead == 'h') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'm') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(74);
      if (lookahead == 'p') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(70);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == 't') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(98);
      if (lookahead == 'w') ADVANCE(101);
      if (lookahead == '{') ADVANCE(168);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 4:
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '&') ADVANCE(135);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == '=') ADVANCE(136);
      if (lookahead == '?') ADVANCE(130);
      if (lookahead == 'H') ADVANCE(190);
      if (lookahead == '{') ADVANCE(116);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(200);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 5:
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '&') ADVANCE(135);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == '=') ADVANCE(136);
      if (lookahead == '?') ADVANCE(130);
      if (lookahead == 'H') ADVANCE(190);
      if (lookahead == '{') ADVANCE(116);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 6:
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '"') ADVANCE(167);
      if (lookahead == '&') ADVANCE(135);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '=') ADVANCE(136);
      if (lookahead == '{') ADVANCE(116);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(200);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 7:
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '"') ADVANCE(167);
      if (lookahead == '&') ADVANCE(135);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '=') ADVANCE(136);
      if (lookahead == '{') ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(192);
      if (lookahead == '{') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(198);
      if (lookahead == '"') ADVANCE(167);
      if (lookahead == '{') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 10:
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 11:
      if (lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 12:
      if (lookahead == ' ') SKIP(12)
      if (lookahead == '{') ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 13:
      if (lookahead == ' ') SKIP(13)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(111);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(123);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(129);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '1') ADVANCE(131);
      END_STATE();
    case 19:
      if (lookahead == '1') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == '3') ADVANCE(20);
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 22:
      if (lookahead == '3') ADVANCE(131);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 'C') ADVANCE(42);
      END_STATE();
    case 26:
      if (lookahead == 'C') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 'C') ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == 'D') ADVANCE(128);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(128);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(25);
      END_STATE();
    case 31:
      if (lookahead == 'E') ADVANCE(46);
      END_STATE();
    case 32:
      if (lookahead == 'H') ADVANCE(128);
      END_STATE();
    case 33:
      if (lookahead == 'I') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == 'L') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == 'N') ADVANCE(37);
      END_STATE();
    case 36:
      if (lookahead == 'N') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 'N') ADVANCE(30);
      END_STATE();
    case 38:
      if (lookahead == 'O') ADVANCE(36);
      END_STATE();
    case 39:
      if (lookahead == 'P') ADVANCE(15);
      END_STATE();
    case 40:
      if (lookahead == 'S') ADVANCE(42);
      END_STATE();
    case 41:
      if (lookahead == 'S') ADVANCE(128);
      END_STATE();
    case 42:
      if (lookahead == 'T') ADVANCE(128);
      END_STATE();
    case 43:
      if (lookahead == 'T') ADVANCE(39);
      END_STATE();
    case 44:
      if (lookahead == 'T') ADVANCE(33);
      END_STATE();
    case 45:
      if (lookahead == 'T') ADVANCE(26);
      END_STATE();
    case 46:
      if (lookahead == 'T') ADVANCE(29);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'i') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead == 'k') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 57:
      if (lookahead == 'b') ADVANCE(90);
      if (lookahead == 'c') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(92);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(99);
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(131);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(59);
      if (lookahead == 'm') ADVANCE(100);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 72:
      if (lookahead == 'f') ADVANCE(87);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(131);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 77:
      if (lookahead == 'k') ADVANCE(65);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(86);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(131);
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 'p') ADVANCE(92);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(97);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(112);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 92:
      if (lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 94:
      if (lookahead == 'p') ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 'p') ADVANCE(96);
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == 'w') ADVANCE(100);
      END_STATE();
    case 96:
      if (lookahead == 'p') ADVANCE(96);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == 'w') ADVANCE(100);
      END_STATE();
    case 97:
      if (lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(103);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == 'w') ADVANCE(100);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(89);
      END_STATE();
    case 112:
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 113:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 114:
      if (lookahead == 'x') ADVANCE(54);
      END_STATE();
    case 115:
      if (lookahead == 'y') ADVANCE(108);
      END_STATE();
    case 116:
      if (lookahead == '{') ADVANCE(117);
      END_STATE();
    case 117:
      if (lookahead == '}') ADVANCE(118);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 118:
      if (lookahead == '}') ADVANCE(174);
      END_STATE();
    case 119:
      if (eof) ADVANCE(122);
      if (lookahead == ' ') SKIP(119)
      if (lookahead == '"') ADVANCE(167);
      if (lookahead == '&') ADVANCE(135);
      if (lookahead == ',') ADVANCE(166);
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '=') ADVANCE(136);
      if (lookahead == '?') ADVANCE(130);
      if (lookahead == '@') ADVANCE(173);
      if (lookahead == 'C') ADVANCE(184);
      if (lookahead == 'D') ADVANCE(178);
      if (lookahead == 'G') ADVANCE(179);
      if (lookahead == 'H') ADVANCE(180);
      if (lookahead == 'O') ADVANCE(186);
      if (lookahead == 'P') ADVANCE(176);
      if (lookahead == 'T') ADVANCE(188);
      if (lookahead == '[') ADVANCE(171);
      if (lookahead == ']') ADVANCE(172);
      if (lookahead == '{') ADVANCE(168);
      if (lookahead == '}') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 120:
      if (eof) ADVANCE(122);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == '@') ADVANCE(173);
      if (lookahead == 'C') ADVANCE(185);
      if (lookahead == 'D') ADVANCE(181);
      if (lookahead == 'G') ADVANCE(182);
      if (lookahead == 'H') ADVANCE(183);
      if (lookahead == 'O') ADVANCE(187);
      if (lookahead == 'P') ADVANCE(177);
      if (lookahead == 'T') ADVANCE(189);
      if (lookahead == '[') ADVANCE(171);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 121:
      if (eof) ADVANCE(122);
      if (lookahead == ' ') SKIP(121)
      if (lookahead == '@') ADVANCE(173);
      if (lookahead == 'C') ADVANCE(184);
      if (lookahead == 'D') ADVANCE(178);
      if (lookahead == 'G') ADVANCE(179);
      if (lookahead == 'H') ADVANCE(180);
      if (lookahead == 'O') ADVANCE(186);
      if (lookahead == 'P') ADVANCE(176);
      if (lookahead == 'T') ADVANCE(188);
      if (lookahead == '{') ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_status_code);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_method_token1);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_scheme);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 'h') ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == '@') ADVANCE(173);
      if (lookahead == 'C') ADVANCE(185);
      if (lookahead == 'D') ADVANCE(181);
      if (lookahead == 'G') ADVANCE(182);
      if (lookahead == 'H') ADVANCE(183);
      if (lookahead == 'O') ADVANCE(187);
      if (lookahead == 'P') ADVANCE(177);
      if (lookahead == 'T') ADVANCE(189);
      if (lookahead == '[') ADVANCE(171);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '/') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'A') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'A') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'C') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'C') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'C') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'D') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'E') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'E') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'E') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'H') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'I') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'L') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'N') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'N') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'N') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'O') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'P') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'S') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'S') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'T') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'T') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'T') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'T') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'T') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '}') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '}') ADVANCE(163);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(117);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(164);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_variable_ref);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'A') ADVANCE(45);
      if (lookahead == 'O') ADVANCE(40);
      if (lookahead == 'U') ADVANCE(42);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'A') ADVANCE(161);
      if (lookahead == 'O') ADVANCE(157);
      if (lookahead == 'U') ADVANCE(158);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'E') ADVANCE(34);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'E') ADVANCE(42);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'E') ADVANCE(23);
      if (lookahead == 'T') ADVANCE(43);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'E') ADVANCE(150);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'E') ADVANCE(158);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'E') ADVANCE(139);
      if (lookahead == 'T') ADVANCE(159);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'O') ADVANCE(35);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'O') ADVANCE(151);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'P') ADVANCE(44);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'P') ADVANCE(160);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'R') ADVANCE(24);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'R') ADVANCE(140);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'T') ADVANCE(43);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == ' ') ADVANCE(192);
      if (lookahead == '{') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == '{') ADVANCE(117);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_domain);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ' ') ADVANCE(198);
      if (lookahead == '{') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(197);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(117);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__new_line);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(200);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 120},
  [3] = {.lex_state = 120},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 120},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 121},
  [15] = {.lex_state = 121},
  [16] = {.lex_state = 121},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 120},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 121},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 121},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 9},
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
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 12},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 10},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 13},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
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
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym_variable_ref] = ACTIONS(1),
    [aux_sym__identifier_token1] = ACTIONS(1),
    [sym__new_line] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(139),
    [sym_request] = STATE(10),
    [sym_method_url] = STATE(138),
    [sym_response] = STATE(10),
    [sym_status_line] = STATE(16),
    [sym_http_version] = STATE(116),
    [sym_method] = STATE(88),
    [sym_variable_declaration] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_HTTP_SLASH] = ACTIONS(5),
    [aux_sym_method_token1] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(9),
    [sym_variable_ref] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym_raw_body,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      aux_sym__identifier_token1,
    STATE(3), 1,
      aux_sym_request_repeat1,
    STATE(20), 1,
      aux_sym__identifier,
    STATE(86), 1,
      sym_url_encoded_key_value,
    STATE(113), 1,
      sym_identifier,
    STATE(137), 1,
      sym_header,
    STATE(67), 2,
      sym_json_object,
      sym_json_list,
    STATE(132), 3,
      sym__body,
      sym_json_body,
      sym_url_encoded_body,
    ACTIONS(13), 4,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [46] = 13,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      aux_sym__identifier_token1,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym_raw_body,
    STATE(9), 1,
      aux_sym_request_repeat1,
    STATE(20), 1,
      aux_sym__identifier,
    STATE(86), 1,
      sym_url_encoded_key_value,
    STATE(113), 1,
      sym_identifier,
    STATE(137), 1,
      sym_header,
    STATE(67), 2,
      sym_json_object,
      sym_json_list,
    STATE(130), 3,
      sym__body,
      sym_json_body,
      sym_url_encoded_body,
    ACTIONS(25), 4,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [92] = 9,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    ACTIONS(39), 1,
      sym__new_line,
    STATE(67), 1,
      sym_json_object,
    STATE(143), 1,
      sym__json_list_values,
    ACTIONS(37), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(102), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [125] = 9,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_RBRACK,
    ACTIONS(43), 1,
      sym__new_line,
    STATE(67), 1,
      sym_json_object,
    STATE(125), 1,
      sym__json_list_values,
    ACTIONS(37), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(102), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [158] = 8,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      sym_json_object,
    STATE(145), 1,
      sym__json_list_values,
    ACTIONS(37), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(102), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [188] = 8,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      sym_json_object,
    STATE(119), 1,
      sym__json_list_values,
    ACTIONS(37), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(102), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [218] = 9,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(57), 1,
      anon_sym_AT,
    STATE(16), 1,
      sym_status_line,
    STATE(88), 1,
      sym_method,
    STATE(116), 1,
      sym_http_version,
    STATE(138), 1,
      sym_method_url,
    ACTIONS(54), 2,
      aux_sym_method_token1,
      sym_variable_ref,
    STATE(8), 4,
      sym_request,
      sym_response,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [250] = 7,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_request_repeat1,
    STATE(20), 1,
      aux_sym__identifier,
    STATE(117), 1,
      sym_identifier,
    STATE(137), 1,
      sym_header,
    ACTIONS(64), 2,
      sym_variable_ref,
      aux_sym__identifier_token1,
    ACTIONS(62), 6,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      sym_raw_body,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
  [278] = 9,
    ACTIONS(5), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      sym_status_line,
    STATE(88), 1,
      sym_method,
    STATE(116), 1,
      sym_http_version,
    STATE(138), 1,
      sym_method_url,
    ACTIONS(7), 2,
      aux_sym_method_token1,
      sym_variable_ref,
    STATE(8), 4,
      sym_request,
      sym_response,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [310] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      sym__new_line,
    STATE(67), 1,
      sym_json_object,
    ACTIONS(71), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(100), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [337] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    STATE(67), 1,
      sym_json_object,
    ACTIONS(75), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(101), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [361] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    STATE(67), 1,
      sym_json_object,
    ACTIONS(77), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(89), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [385] = 7,
    ACTIONS(64), 1,
      aux_sym__identifier_token1,
    ACTIONS(79), 1,
      sym_variable_ref,
    STATE(14), 1,
      aux_sym_request_repeat1,
    STATE(20), 1,
      aux_sym__identifier,
    STATE(117), 1,
      sym_identifier,
    STATE(118), 1,
      sym_header,
    ACTIONS(60), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
  [410] = 6,
    ACTIONS(21), 1,
      aux_sym__identifier_token1,
    STATE(14), 1,
      aux_sym_request_repeat1,
    STATE(20), 1,
      aux_sym__identifier,
    STATE(117), 1,
      sym_identifier,
    STATE(118), 1,
      sym_header,
    ACTIONS(82), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [433] = 6,
    ACTIONS(21), 1,
      aux_sym__identifier_token1,
    STATE(15), 1,
      aux_sym_request_repeat1,
    STATE(20), 1,
      aux_sym__identifier,
    STATE(117), 1,
      sym_identifier,
    STATE(118), 1,
      sym_header,
    ACTIONS(84), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [456] = 4,
    ACTIONS(88), 1,
      sym_variable_ref,
    ACTIONS(91), 1,
      aux_sym__identifier_token1,
    STATE(17), 1,
      aux_sym__identifier,
    ACTIONS(86), 6,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_EQ,
      sym__new_line,
  [474] = 2,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 8,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      sym_raw_body,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_variable_ref,
      aux_sym__identifier_token1,
  [488] = 7,
    ACTIONS(96), 1,
      sym_variable_ref,
    ACTIONS(98), 1,
      aux_sym__identifier_token1,
    STATE(25), 1,
      aux_sym__identifier,
    STATE(70), 1,
      sym_query_param,
    STATE(71), 1,
      sym_identifier,
    STATE(107), 1,
      sym_query_params,
    ACTIONS(94), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [511] = 3,
    STATE(24), 1,
      aux_sym__identifier,
    ACTIONS(102), 2,
      sym_variable_ref,
      aux_sym__identifier_token1,
    ACTIONS(100), 5,
      anon_sym_COLON,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      sym__new_line,
  [526] = 7,
    ACTIONS(96), 1,
      sym_variable_ref,
    ACTIONS(98), 1,
      aux_sym__identifier_token1,
    STATE(25), 1,
      aux_sym__identifier,
    STATE(70), 1,
      sym_query_param,
    STATE(71), 1,
      sym_identifier,
    STATE(105), 1,
      sym_query_params,
    ACTIONS(104), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [549] = 7,
    ACTIONS(96), 1,
      sym_variable_ref,
    ACTIONS(98), 1,
      aux_sym__identifier_token1,
    STATE(25), 1,
      aux_sym__identifier,
    STATE(70), 1,
      sym_query_param,
    STATE(71), 1,
      sym_identifier,
    STATE(114), 1,
      sym_query_params,
    ACTIONS(106), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [572] = 7,
    ACTIONS(96), 1,
      sym_variable_ref,
    ACTIONS(98), 1,
      aux_sym__identifier_token1,
    STATE(25), 1,
      aux_sym__identifier,
    STATE(70), 1,
      sym_query_param,
    STATE(71), 1,
      sym_identifier,
    STATE(115), 1,
      sym_query_params,
    ACTIONS(108), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [595] = 3,
    STATE(24), 1,
      aux_sym__identifier,
    ACTIONS(110), 2,
      sym_variable_ref,
      aux_sym__identifier_token1,
    ACTIONS(86), 5,
      anon_sym_COLON,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      sym__new_line,
  [610] = 4,
    ACTIONS(113), 1,
      sym_variable_ref,
    ACTIONS(115), 1,
      aux_sym__identifier_token1,
    STATE(17), 1,
      aux_sym__identifier,
    ACTIONS(100), 4,
      anon_sym_HTTP_SLASH,
      anon_sym_AMP,
      anon_sym_EQ,
      sym__new_line,
  [626] = 5,
    ACTIONS(96), 1,
      sym_variable_ref,
    ACTIONS(98), 1,
      aux_sym__identifier_token1,
    STATE(25), 1,
      aux_sym__identifier,
    STATE(92), 1,
      sym_identifier,
    ACTIONS(117), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_AMP,
      sym__new_line,
  [644] = 4,
    ACTIONS(113), 1,
      sym_variable_ref,
    ACTIONS(115), 1,
      aux_sym__identifier_token1,
    STATE(17), 1,
      aux_sym__identifier,
    ACTIONS(119), 4,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
      anon_sym_SLASH,
      sym__new_line,
  [660] = 6,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      anon_sym_RBRACE,
    ACTIONS(125), 1,
      sym__new_line,
    STATE(58), 1,
      sym_json_key_value,
    STATE(120), 1,
      sym__key_value_list,
    STATE(133), 1,
      sym__json_key,
  [679] = 5,
    ACTIONS(129), 1,
      anon_sym_QMARK,
    ACTIONS(131), 1,
      anon_sym_SLASH,
    STATE(45), 1,
      aux_sym_path_repeat1,
    STATE(93), 1,
      sym_path,
    ACTIONS(127), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [696] = 2,
    ACTIONS(62), 1,
      aux_sym__identifier_token1,
    ACTIONS(60), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [707] = 5,
    ACTIONS(131), 1,
      anon_sym_SLASH,
    ACTIONS(133), 1,
      anon_sym_QMARK,
    STATE(45), 1,
      aux_sym_path_repeat1,
    STATE(94), 1,
      sym_path,
    ACTIONS(106), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [724] = 4,
    ACTIONS(137), 1,
      sym_variable_ref,
    ACTIONS(139), 1,
      aux_sym__identifier_token1,
    STATE(27), 1,
      aux_sym__identifier,
    ACTIONS(135), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
      sym__new_line,
  [739] = 4,
    ACTIONS(137), 1,
      sym_variable_ref,
    ACTIONS(139), 1,
      aux_sym__identifier_token1,
    STATE(27), 1,
      aux_sym__identifier,
    ACTIONS(141), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
      sym__new_line,
  [754] = 6,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    ACTIONS(145), 1,
      sym__new_line,
    STATE(58), 1,
      sym_json_key_value,
    STATE(133), 1,
      sym__json_key,
    STATE(141), 1,
      sym__key_value_list,
  [773] = 2,
    ACTIONS(149), 1,
      aux_sym__identifier_token1,
    ACTIONS(147), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [784] = 1,
    ACTIONS(151), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [792] = 5,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      sym_json_key_value,
    STATE(133), 1,
      sym__json_key,
    STATE(144), 1,
      sym__key_value_list,
  [808] = 4,
    STATE(25), 1,
      aux_sym__identifier,
    STATE(71), 1,
      sym_identifier,
    STATE(95), 1,
      sym_query_param,
    ACTIONS(96), 2,
      sym_variable_ref,
      aux_sym__identifier_token1,
  [822] = 1,
    ACTIONS(155), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [830] = 5,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      sym_json_key_value,
    STATE(133), 1,
      sym__json_key,
    STATE(136), 1,
      sym__key_value_list,
  [846] = 4,
    STATE(20), 1,
      aux_sym__identifier,
    STATE(108), 1,
      sym_url_encoded_key_value,
    STATE(129), 1,
      sym_identifier,
    ACTIONS(159), 2,
      sym_variable_ref,
      aux_sym__identifier_token1,
  [860] = 4,
    STATE(50), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(122), 1,
      sym_rest_of_line,
    STATE(140), 1,
      sym_reason_phrase,
    ACTIONS(161), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [874] = 1,
    ACTIONS(163), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [882] = 3,
    ACTIONS(165), 1,
      anon_sym_SLASH,
    STATE(44), 1,
      aux_sym_path_repeat1,
    ACTIONS(119), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
      sym__new_line,
  [894] = 3,
    ACTIONS(168), 1,
      anon_sym_SLASH,
    STATE(44), 1,
      aux_sym_path_repeat1,
    ACTIONS(141), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
      sym__new_line,
  [906] = 3,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      aux_sym_string_repeat1,
    ACTIONS(172), 2,
      sym_variable_ref,
      aux_sym_string_token1,
  [917] = 3,
    ACTIONS(177), 1,
      anon_sym_AMP,
    STATE(52), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(175), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [928] = 3,
    STATE(20), 1,
      aux_sym__identifier,
    STATE(127), 1,
      sym_identifier,
    ACTIONS(159), 2,
      sym_variable_ref,
      aux_sym__identifier_token1,
  [939] = 1,
    ACTIONS(179), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__new_line,
  [946] = 3,
    ACTIONS(183), 1,
      sym__new_line,
    STATE(68), 1,
      aux_sym_rest_of_line_repeat1,
    ACTIONS(181), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [957] = 1,
    ACTIONS(185), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__new_line,
  [964] = 3,
    ACTIONS(189), 1,
      anon_sym_AMP,
    STATE(52), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(187), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [975] = 1,
    ACTIONS(192), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__new_line,
  [982] = 1,
    ACTIONS(192), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__new_line,
  [989] = 3,
    STATE(20), 1,
      aux_sym__identifier,
    STATE(135), 1,
      sym_identifier,
    ACTIONS(159), 2,
      sym_variable_ref,
      aux_sym__identifier_token1,
  [1000] = 1,
    ACTIONS(194), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__new_line,
  [1007] = 1,
    ACTIONS(196), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__new_line,
  [1014] = 4,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    ACTIONS(202), 1,
      sym__new_line,
    STATE(78), 1,
      aux_sym__key_value_list_repeat1,
  [1027] = 3,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      aux_sym__key_value_list_repeat1,
    ACTIONS(207), 2,
      anon_sym_RBRACE,
      sym__new_line,
  [1038] = 3,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      aux_sym_string_repeat1,
    ACTIONS(211), 2,
      sym_variable_ref,
      aux_sym_string_token1,
  [1049] = 1,
    ACTIONS(213), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__new_line,
  [1056] = 1,
    ACTIONS(215), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__new_line,
  [1063] = 1,
    ACTIONS(215), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__new_line,
  [1070] = 3,
    STATE(50), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(121), 1,
      sym_rest_of_line,
    ACTIONS(161), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [1081] = 3,
    STATE(20), 1,
      aux_sym__identifier,
    STATE(111), 1,
      sym_identifier,
    ACTIONS(159), 2,
      sym_variable_ref,
      aux_sym__identifier_token1,
  [1092] = 3,
    STATE(50), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(124), 1,
      sym_rest_of_line,
    ACTIONS(161), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [1103] = 1,
    ACTIONS(217), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__new_line,
  [1110] = 3,
    ACTIONS(222), 1,
      sym__new_line,
    STATE(68), 1,
      aux_sym_rest_of_line_repeat1,
    ACTIONS(219), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [1121] = 1,
    ACTIONS(224), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__new_line,
  [1128] = 3,
    ACTIONS(177), 1,
      anon_sym_AMP,
    STATE(47), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(226), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1139] = 2,
    ACTIONS(230), 1,
      anon_sym_EQ,
    ACTIONS(228), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_AMP,
      sym__new_line,
  [1148] = 1,
    ACTIONS(224), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__new_line,
  [1155] = 3,
    ACTIONS(232), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      aux_sym_string_repeat1,
    ACTIONS(234), 2,
      sym_variable_ref,
      aux_sym_string_token1,
  [1166] = 1,
    ACTIONS(236), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__new_line,
  [1173] = 1,
    ACTIONS(236), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__new_line,
  [1180] = 1,
    ACTIONS(238), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__new_line,
  [1187] = 4,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(240), 1,
      sym__new_line,
    STATE(79), 1,
      sym_json_key_value,
    STATE(133), 1,
      sym__json_key,
  [1200] = 4,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    ACTIONS(244), 1,
      sym__new_line,
    STATE(59), 1,
      aux_sym__key_value_list_repeat1,
  [1213] = 1,
    ACTIONS(207), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__new_line,
  [1219] = 2,
    ACTIONS(246), 1,
      sym__new_line,
    ACTIONS(192), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1227] = 2,
    ACTIONS(248), 1,
      sym__new_line,
    ACTIONS(215), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1235] = 2,
    ACTIONS(250), 1,
      sym__new_line,
    ACTIONS(224), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1243] = 2,
    ACTIONS(252), 1,
      sym__new_line,
    ACTIONS(236), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1251] = 2,
    ACTIONS(254), 1,
      sym__new_line,
    ACTIONS(213), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1259] = 2,
    ACTIONS(256), 1,
      sym__new_line,
    ACTIONS(194), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1267] = 3,
    ACTIONS(258), 1,
      anon_sym_AMP,
    ACTIONS(260), 1,
      sym__new_line,
    STATE(96), 1,
      aux_sym_url_encoded_body_repeat1,
  [1277] = 3,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    ACTIONS(264), 1,
      anon_sym_RBRACK,
    STATE(98), 1,
      aux_sym__json_list_values_repeat1,
  [1287] = 3,
    ACTIONS(266), 1,
      sym_scheme,
    ACTIONS(268), 1,
      sym_variable_ref,
    STATE(97), 1,
      sym_url,
  [1297] = 2,
    ACTIONS(272), 1,
      sym__new_line,
    ACTIONS(270), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1305] = 3,
    ACTIONS(274), 1,
      anon_sym_AMP,
    ACTIONS(277), 1,
      sym__new_line,
    STATE(90), 1,
      aux_sym_url_encoded_body_repeat1,
  [1315] = 1,
    ACTIONS(279), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__new_line,
  [1321] = 1,
    ACTIONS(281), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_AMP,
      sym__new_line,
  [1327] = 2,
    ACTIONS(283), 1,
      anon_sym_QMARK,
    ACTIONS(94), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1335] = 2,
    ACTIONS(285), 1,
      anon_sym_QMARK,
    ACTIONS(108), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1343] = 1,
    ACTIONS(187), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_AMP,
      sym__new_line,
  [1349] = 3,
    ACTIONS(258), 1,
      anon_sym_AMP,
    ACTIONS(287), 1,
      sym__new_line,
    STATE(90), 1,
      aux_sym_url_encoded_body_repeat1,
  [1359] = 3,
    ACTIONS(5), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(289), 1,
      sym__new_line,
    STATE(123), 1,
      sym_http_version,
  [1369] = 3,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(294), 1,
      anon_sym_RBRACK,
    STATE(98), 1,
      aux_sym__json_list_values_repeat1,
  [1379] = 2,
    STATE(27), 1,
      aux_sym__identifier,
    ACTIONS(137), 2,
      sym_variable_ref,
      aux_sym__identifier_token1,
  [1387] = 2,
    ACTIONS(296), 1,
      sym__new_line,
    ACTIONS(294), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1395] = 1,
    ACTIONS(298), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__new_line,
  [1401] = 3,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    ACTIONS(300), 1,
      anon_sym_RBRACK,
    STATE(87), 1,
      aux_sym__json_list_values_repeat1,
  [1411] = 3,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      sym_json_key_value,
    STATE(133), 1,
      sym__json_key,
  [1421] = 1,
    ACTIONS(302), 2,
      sym_status_code,
      sym__new_line,
  [1426] = 1,
    ACTIONS(304), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1431] = 1,
    ACTIONS(306), 2,
      sym_scheme,
      sym_variable_ref,
  [1436] = 1,
    ACTIONS(106), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1441] = 1,
    ACTIONS(277), 2,
      anon_sym_AMP,
      sym__new_line,
  [1446] = 1,
    ACTIONS(308), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1451] = 1,
    ACTIONS(270), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1456] = 1,
    ACTIONS(310), 2,
      anon_sym_AMP,
      sym__new_line,
  [1461] = 1,
    ACTIONS(312), 2,
      sym_variable_ref,
      sym_domain,
  [1466] = 2,
    ACTIONS(314), 1,
      anon_sym_COLON,
    ACTIONS(316), 1,
      anon_sym_EQ,
  [1473] = 1,
    ACTIONS(108), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1478] = 1,
    ACTIONS(104), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1483] = 1,
    ACTIONS(318), 1,
      sym_status_code,
  [1487] = 1,
    ACTIONS(314), 1,
      anon_sym_COLON,
  [1491] = 1,
    ACTIONS(320), 1,
      sym__new_line,
  [1495] = 1,
    ACTIONS(322), 1,
      anon_sym_RBRACK,
  [1499] = 1,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
  [1503] = 1,
    ACTIONS(324), 1,
      sym__new_line,
  [1507] = 1,
    ACTIONS(326), 1,
      sym__new_line,
  [1511] = 1,
    ACTIONS(328), 1,
      sym__new_line,
  [1515] = 1,
    ACTIONS(330), 1,
      sym__new_line,
  [1519] = 1,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
  [1523] = 1,
    ACTIONS(332), 1,
      anon_sym_COLON_SLASH_SLASH,
  [1527] = 1,
    ACTIONS(334), 1,
      anon_sym_EQ,
  [1531] = 1,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
  [1535] = 1,
    ACTIONS(316), 1,
      anon_sym_EQ,
  [1539] = 1,
    ACTIONS(336), 1,
      sym__new_line,
  [1543] = 1,
    ACTIONS(338), 1,
      anon_sym_COLON,
  [1547] = 1,
    ACTIONS(340), 1,
      sym__new_line,
  [1551] = 1,
    ACTIONS(342), 1,
      anon_sym_COLON,
  [1555] = 1,
    ACTIONS(344), 1,
      aux_sym_http_version_token1,
  [1559] = 1,
    ACTIONS(346), 1,
      anon_sym_DQUOTE,
  [1563] = 1,
    ACTIONS(348), 1,
      anon_sym_RBRACE,
  [1567] = 1,
    ACTIONS(350), 1,
      sym__new_line,
  [1571] = 1,
    ACTIONS(352), 1,
      sym__new_line,
  [1575] = 1,
    ACTIONS(354), 1,
      ts_builtin_sym_end,
  [1579] = 1,
    ACTIONS(356), 1,
      sym__new_line,
  [1583] = 1,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
  [1587] = 1,
    ACTIONS(358), 1,
      anon_sym_RBRACE,
  [1591] = 1,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
  [1595] = 1,
    ACTIONS(360), 1,
      anon_sym_RBRACE,
  [1599] = 1,
    ACTIONS(362), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 125,
  [SMALL_STATE(6)] = 158,
  [SMALL_STATE(7)] = 188,
  [SMALL_STATE(8)] = 218,
  [SMALL_STATE(9)] = 250,
  [SMALL_STATE(10)] = 278,
  [SMALL_STATE(11)] = 310,
  [SMALL_STATE(12)] = 337,
  [SMALL_STATE(13)] = 361,
  [SMALL_STATE(14)] = 385,
  [SMALL_STATE(15)] = 410,
  [SMALL_STATE(16)] = 433,
  [SMALL_STATE(17)] = 456,
  [SMALL_STATE(18)] = 474,
  [SMALL_STATE(19)] = 488,
  [SMALL_STATE(20)] = 511,
  [SMALL_STATE(21)] = 526,
  [SMALL_STATE(22)] = 549,
  [SMALL_STATE(23)] = 572,
  [SMALL_STATE(24)] = 595,
  [SMALL_STATE(25)] = 610,
  [SMALL_STATE(26)] = 626,
  [SMALL_STATE(27)] = 644,
  [SMALL_STATE(28)] = 660,
  [SMALL_STATE(29)] = 679,
  [SMALL_STATE(30)] = 696,
  [SMALL_STATE(31)] = 707,
  [SMALL_STATE(32)] = 724,
  [SMALL_STATE(33)] = 739,
  [SMALL_STATE(34)] = 754,
  [SMALL_STATE(35)] = 773,
  [SMALL_STATE(36)] = 784,
  [SMALL_STATE(37)] = 792,
  [SMALL_STATE(38)] = 808,
  [SMALL_STATE(39)] = 822,
  [SMALL_STATE(40)] = 830,
  [SMALL_STATE(41)] = 846,
  [SMALL_STATE(42)] = 860,
  [SMALL_STATE(43)] = 874,
  [SMALL_STATE(44)] = 882,
  [SMALL_STATE(45)] = 894,
  [SMALL_STATE(46)] = 906,
  [SMALL_STATE(47)] = 917,
  [SMALL_STATE(48)] = 928,
  [SMALL_STATE(49)] = 939,
  [SMALL_STATE(50)] = 946,
  [SMALL_STATE(51)] = 957,
  [SMALL_STATE(52)] = 964,
  [SMALL_STATE(53)] = 975,
  [SMALL_STATE(54)] = 982,
  [SMALL_STATE(55)] = 989,
  [SMALL_STATE(56)] = 1000,
  [SMALL_STATE(57)] = 1007,
  [SMALL_STATE(58)] = 1014,
  [SMALL_STATE(59)] = 1027,
  [SMALL_STATE(60)] = 1038,
  [SMALL_STATE(61)] = 1049,
  [SMALL_STATE(62)] = 1056,
  [SMALL_STATE(63)] = 1063,
  [SMALL_STATE(64)] = 1070,
  [SMALL_STATE(65)] = 1081,
  [SMALL_STATE(66)] = 1092,
  [SMALL_STATE(67)] = 1103,
  [SMALL_STATE(68)] = 1110,
  [SMALL_STATE(69)] = 1121,
  [SMALL_STATE(70)] = 1128,
  [SMALL_STATE(71)] = 1139,
  [SMALL_STATE(72)] = 1148,
  [SMALL_STATE(73)] = 1155,
  [SMALL_STATE(74)] = 1166,
  [SMALL_STATE(75)] = 1173,
  [SMALL_STATE(76)] = 1180,
  [SMALL_STATE(77)] = 1187,
  [SMALL_STATE(78)] = 1200,
  [SMALL_STATE(79)] = 1213,
  [SMALL_STATE(80)] = 1219,
  [SMALL_STATE(81)] = 1227,
  [SMALL_STATE(82)] = 1235,
  [SMALL_STATE(83)] = 1243,
  [SMALL_STATE(84)] = 1251,
  [SMALL_STATE(85)] = 1259,
  [SMALL_STATE(86)] = 1267,
  [SMALL_STATE(87)] = 1277,
  [SMALL_STATE(88)] = 1287,
  [SMALL_STATE(89)] = 1297,
  [SMALL_STATE(90)] = 1305,
  [SMALL_STATE(91)] = 1315,
  [SMALL_STATE(92)] = 1321,
  [SMALL_STATE(93)] = 1327,
  [SMALL_STATE(94)] = 1335,
  [SMALL_STATE(95)] = 1343,
  [SMALL_STATE(96)] = 1349,
  [SMALL_STATE(97)] = 1359,
  [SMALL_STATE(98)] = 1369,
  [SMALL_STATE(99)] = 1379,
  [SMALL_STATE(100)] = 1387,
  [SMALL_STATE(101)] = 1395,
  [SMALL_STATE(102)] = 1401,
  [SMALL_STATE(103)] = 1411,
  [SMALL_STATE(104)] = 1421,
  [SMALL_STATE(105)] = 1426,
  [SMALL_STATE(106)] = 1431,
  [SMALL_STATE(107)] = 1436,
  [SMALL_STATE(108)] = 1441,
  [SMALL_STATE(109)] = 1446,
  [SMALL_STATE(110)] = 1451,
  [SMALL_STATE(111)] = 1456,
  [SMALL_STATE(112)] = 1461,
  [SMALL_STATE(113)] = 1466,
  [SMALL_STATE(114)] = 1473,
  [SMALL_STATE(115)] = 1478,
  [SMALL_STATE(116)] = 1483,
  [SMALL_STATE(117)] = 1487,
  [SMALL_STATE(118)] = 1491,
  [SMALL_STATE(119)] = 1495,
  [SMALL_STATE(120)] = 1499,
  [SMALL_STATE(121)] = 1503,
  [SMALL_STATE(122)] = 1507,
  [SMALL_STATE(123)] = 1511,
  [SMALL_STATE(124)] = 1515,
  [SMALL_STATE(125)] = 1519,
  [SMALL_STATE(126)] = 1523,
  [SMALL_STATE(127)] = 1527,
  [SMALL_STATE(128)] = 1531,
  [SMALL_STATE(129)] = 1535,
  [SMALL_STATE(130)] = 1539,
  [SMALL_STATE(131)] = 1543,
  [SMALL_STATE(132)] = 1547,
  [SMALL_STATE(133)] = 1551,
  [SMALL_STATE(134)] = 1555,
  [SMALL_STATE(135)] = 1559,
  [SMALL_STATE(136)] = 1563,
  [SMALL_STATE(137)] = 1567,
  [SMALL_STATE(138)] = 1571,
  [SMALL_STATE(139)] = 1575,
  [SMALL_STATE(140)] = 1579,
  [SMALL_STATE(141)] = 1583,
  [SMALL_STATE(142)] = 1587,
  [SMALL_STATE(143)] = 1591,
  [SMALL_STATE(144)] = 1595,
  [SMALL_STATE(145)] = 1599,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(134),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(106),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(20),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(20),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier, 2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier, 2), SHIFT_REPEAT(17),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier, 2), SHIFT_REPEAT(17),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 5),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier, 2), SHIFT_REPEAT(24),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 2, .production_id = 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status_line, 4),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status_line, 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(99),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(46),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 5),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 5),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2), SHIFT_REPEAT(38),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 4),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 2), SHIFT_REPEAT(77),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 4),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 1),
  [219] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rest_of_line_repeat1, 2), SHIFT_REPEAT(68),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rest_of_line_repeat1, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 1, .production_id = 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_body, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_url_encoded_body_repeat1, 2), SHIFT_REPEAT(41),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_encoded_body_repeat1, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3, .production_id = 5),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_body, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_url, 2),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2), SHIFT_REPEAT(11),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3, .production_id = 4),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 6),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 4),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_key_value, 3, .production_id = 4),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason_phrase, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_url, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_key, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [354] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 3),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
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
