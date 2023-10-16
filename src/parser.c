#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 145
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
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
  anon_sym_SLASH = 9,
  anon_sym_AMP = 10,
  anon_sym_EQ = 11,
  sym_raw_body = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  anon_sym_COMMA = 15,
  anon_sym_DQUOTE = 16,
  anon_sym_LBRACK = 17,
  anon_sym_RBRACK = 18,
  anon_sym_AT = 19,
  sym_variable_ref = 20,
  aux_sym_rest_of_line_token1 = 21,
  sym_domain = 22,
  sym_number = 23,
  sym_boolean = 24,
  aux_sym_string_token1 = 25,
  aux_sym__identifier_token1 = 26,
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
  sym_json_list = 47,
  sym__json_list_values = 48,
  sym_url_encoded_body = 49,
  sym_url_encoded_key_value = 50,
  sym_variable_declaration = 51,
  sym_identifier = 52,
  sym_rest_of_line = 53,
  sym_string = 54,
  aux_sym__identifier = 55,
  aux_sym_source_file_repeat1 = 56,
  aux_sym_request_repeat1 = 57,
  aux_sym_path_repeat1 = 58,
  aux_sym_query_params_repeat1 = 59,
  aux_sym__key_value_list_repeat1 = 60,
  aux_sym__json_list_values_repeat1 = 61,
  aux_sym_url_encoded_body_repeat1 = 62,
  aux_sym_rest_of_line_repeat1 = 63,
  aux_sym_string_repeat1 = 64,
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
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COMMA] = ",",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_AT] = "@",
  [sym_variable_ref] = "variable_ref",
  [aux_sym_rest_of_line_token1] = "rest_of_line_token1",
  [sym_domain] = "domain",
  [sym_number] = "number",
  [sym_boolean] = "boolean",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym__identifier_token1] = "_identifier_token1",
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
  [sym_rest_of_line] = "rest_of_line",
  [sym_string] = "string",
  [aux_sym__identifier] = "_identifier",
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
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_AT] = anon_sym_AT,
  [sym_variable_ref] = sym_variable_ref,
  [aux_sym_rest_of_line_token1] = aux_sym_rest_of_line_token1,
  [sym_domain] = sym_domain,
  [sym_number] = sym_number,
  [sym_boolean] = sym_boolean,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym__identifier_token1] = aux_sym__identifier_token1,
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
  [sym_rest_of_line] = sym_rest_of_line,
  [sym_string] = sym_string,
  [aux_sym__identifier] = aux_sym__identifier,
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
  [aux_sym__identifier_token1] = {
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
  [sym_rest_of_line] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__identifier] = {
    .visible = false,
    .named = false,
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
  [10] = 9,
  [11] = 11,
  [12] = 5,
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
  [24] = 23,
  [25] = 25,
  [26] = 22,
  [27] = 27,
  [28] = 17,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 27,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 38,
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
  [77] = 53,
  [78] = 60,
  [79] = 69,
  [80] = 46,
  [81] = 61,
  [82] = 55,
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
  [136] = 118,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 128,
  [141] = 141,
  [142] = 141,
  [143] = 131,
  [144] = 114,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(122);
      if (lookahead == ' ') SKIP(119)
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == '&') ADVANCE(135);
      if (lookahead == ',') ADVANCE(169);
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '=') ADVANCE(136);
      if (lookahead == '?') ADVANCE(130);
      if (lookahead == '@') ADVANCE(173);
      if (lookahead == 'C') ADVANCE(193);
      if (lookahead == 'D') ADVANCE(187);
      if (lookahead == 'G') ADVANCE(188);
      if (lookahead == 'H') ADVANCE(189);
      if (lookahead == 'O') ADVANCE(195);
      if (lookahead == 'P') ADVANCE(185);
      if (lookahead == 'T') ADVANCE(197);
      if (lookahead == '[') ADVANCE(171);
      if (lookahead == ']') ADVANCE(172);
      if (lookahead == '{') ADVANCE(166);
      if (lookahead == '}') ADVANCE(168);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(200);
      if (lookahead == '\r') ADVANCE(200);
      if (lookahead == ' ') ADVANCE(176);
      if (lookahead == '{') ADVANCE(177);
      if (lookahead != 0) ADVANCE(175);
      END_STATE();
    case 2:
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '"') ADVANCE(170);
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
      if (lookahead == '{') ADVANCE(166);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(200);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 3:
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '"') ADVANCE(170);
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
      if (lookahead == '{') ADVANCE(166);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 4:
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '&') ADVANCE(135);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == '?') ADVANCE(130);
      if (lookahead == 'H') ADVANCE(199);
      if (lookahead == '{') ADVANCE(116);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(200);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 5:
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '&') ADVANCE(135);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == '?') ADVANCE(130);
      if (lookahead == 'H') ADVANCE(199);
      if (lookahead == '{') ADVANCE(116);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 6:
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '"') ADVANCE(170);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 7:
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == '&') ADVANCE(135);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '=') ADVANCE(136);
      if (lookahead == '{') ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(176);
      if (lookahead == '{') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(175);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(182);
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == '{') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(181);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
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
      if (lookahead == 'e') ADVANCE(180);
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
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == '&') ADVANCE(135);
      if (lookahead == ',') ADVANCE(169);
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '=') ADVANCE(136);
      if (lookahead == '?') ADVANCE(130);
      if (lookahead == '@') ADVANCE(173);
      if (lookahead == 'C') ADVANCE(193);
      if (lookahead == 'D') ADVANCE(187);
      if (lookahead == 'G') ADVANCE(188);
      if (lookahead == 'H') ADVANCE(189);
      if (lookahead == 'O') ADVANCE(195);
      if (lookahead == 'P') ADVANCE(185);
      if (lookahead == 'T') ADVANCE(197);
      if (lookahead == '[') ADVANCE(171);
      if (lookahead == ']') ADVANCE(172);
      if (lookahead == '{') ADVANCE(166);
      if (lookahead == '}') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 120:
      if (eof) ADVANCE(122);
      if (lookahead == ' ') ADVANCE(137);
      if (lookahead == '@') ADVANCE(173);
      if (lookahead == 'C') ADVANCE(194);
      if (lookahead == 'D') ADVANCE(190);
      if (lookahead == 'G') ADVANCE(191);
      if (lookahead == 'H') ADVANCE(192);
      if (lookahead == 'O') ADVANCE(196);
      if (lookahead == 'P') ADVANCE(186);
      if (lookahead == 'T') ADVANCE(198);
      if (lookahead == '[') ADVANCE(171);
      if (lookahead == '{') ADVANCE(167);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 121:
      if (eof) ADVANCE(122);
      if (lookahead == ' ') SKIP(121)
      if (lookahead == '@') ADVANCE(173);
      if (lookahead == 'C') ADVANCE(193);
      if (lookahead == 'D') ADVANCE(187);
      if (lookahead == 'G') ADVANCE(188);
      if (lookahead == 'H') ADVANCE(189);
      if (lookahead == 'O') ADVANCE(195);
      if (lookahead == 'P') ADVANCE(185);
      if (lookahead == 'T') ADVANCE(197);
      if (lookahead == '{') ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
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
      if (lookahead == 'C') ADVANCE(194);
      if (lookahead == 'D') ADVANCE(190);
      if (lookahead == 'G') ADVANCE(191);
      if (lookahead == 'H') ADVANCE(192);
      if (lookahead == 'O') ADVANCE(196);
      if (lookahead == 'P') ADVANCE(186);
      if (lookahead == 'T') ADVANCE(198);
      if (lookahead == '[') ADVANCE(171);
      if (lookahead == '{') ADVANCE(167);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
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
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(117);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(164);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
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
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == ' ') ADVANCE(176);
      if (lookahead == '{') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(175);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == '{') ADVANCE(117);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_domain);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ' ') ADVANCE(182);
      if (lookahead == '{') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(181);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(117);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'A') ADVANCE(45);
      if (lookahead == 'O') ADVANCE(40);
      if (lookahead == 'U') ADVANCE(42);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'A') ADVANCE(161);
      if (lookahead == 'O') ADVANCE(157);
      if (lookahead == 'U') ADVANCE(158);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'E') ADVANCE(34);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'E') ADVANCE(42);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'E') ADVANCE(23);
      if (lookahead == 'T') ADVANCE(43);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'E') ADVANCE(150);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'E') ADVANCE(158);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'E') ADVANCE(139);
      if (lookahead == 'T') ADVANCE(159);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'O') ADVANCE(35);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'O') ADVANCE(151);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'P') ADVANCE(44);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'P') ADVANCE(160);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'R') ADVANCE(24);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'R') ADVANCE(140);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'T') ADVANCE(43);
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
  [5] = {.lex_state = 120},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 121},
  [13] = {.lex_state = 121},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 121},
  [17] = {.lex_state = 120},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 121},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 121},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 2},
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
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 10},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 12},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 13},
  [134] = {.lex_state = 0},
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym_variable_ref] = ACTIONS(1),
    [aux_sym__identifier_token1] = ACTIONS(1),
    [sym__new_line] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(138),
    [sym_request] = STATE(7),
    [sym_method_url] = STATE(137),
    [sym_response] = STATE(7),
    [sym_status_line] = STATE(13),
    [sym_http_version] = STATE(129),
    [sym_method] = STATE(83),
    [sym_variable_declaration] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
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
    STATE(5), 1,
      aux_sym_request_repeat1,
    STATE(22), 1,
      aux_sym__identifier,
    STATE(84), 1,
      sym_url_encoded_key_value,
    STATE(102), 1,
      sym_identifier,
    STATE(113), 1,
      sym_json_list,
    STATE(136), 1,
      sym_header,
    STATE(127), 3,
      sym__body,
      sym_json_body,
      sym_url_encoded_body,
    ACTIONS(13), 4,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [45] = 13,
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
    STATE(2), 1,
      aux_sym_request_repeat1,
    STATE(22), 1,
      aux_sym__identifier,
    STATE(84), 1,
      sym_url_encoded_key_value,
    STATE(102), 1,
      sym_identifier,
    STATE(113), 1,
      sym_json_list,
    STATE(136), 1,
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
  [90] = 8,
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
    STATE(142), 1,
      sym__json_list_values,
    ACTIONS(37), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(76), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [120] = 7,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym_request_repeat1,
    STATE(22), 1,
      aux_sym__identifier,
    STATE(116), 1,
      sym_identifier,
    STATE(136), 1,
      sym_header,
    ACTIONS(45), 2,
      sym_variable_ref,
      aux_sym__identifier_token1,
    ACTIONS(43), 6,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      sym_raw_body,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
  [148] = 8,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(48), 1,
      anon_sym_RBRACK,
    ACTIONS(50), 1,
      sym__new_line,
    STATE(141), 1,
      sym__json_list_values,
    ACTIONS(37), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(76), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [178] = 9,
    ACTIONS(5), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      sym_status_line,
    STATE(83), 1,
      sym_method,
    STATE(129), 1,
      sym_http_version,
    STATE(137), 1,
      sym_method_url,
    ACTIONS(7), 2,
      aux_sym_method_token1,
      sym_variable_ref,
    STATE(8), 4,
      sym_request,
      sym_response,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [210] = 9,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(62), 1,
      anon_sym_AT,
    STATE(13), 1,
      sym_status_line,
    STATE(83), 1,
      sym_method,
    STATE(129), 1,
      sym_http_version,
    STATE(137), 1,
      sym_method_url,
    ACTIONS(59), 2,
      aux_sym_method_token1,
      sym_variable_ref,
    STATE(8), 4,
      sym_request,
      sym_response,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [242] = 7,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
    STATE(144), 1,
      sym__json_list_values,
    ACTIONS(37), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(76), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [269] = 7,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
    STATE(114), 1,
      sym__json_list_values,
    ACTIONS(37), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(76), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [296] = 6,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      sym__new_line,
    ACTIONS(71), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(93), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [320] = 7,
    ACTIONS(45), 1,
      aux_sym__identifier_token1,
    ACTIONS(75), 1,
      sym_variable_ref,
    STATE(12), 1,
      aux_sym_request_repeat1,
    STATE(22), 1,
      aux_sym__identifier,
    STATE(116), 1,
      sym_identifier,
    STATE(118), 1,
      sym_header,
    ACTIONS(41), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
  [345] = 6,
    ACTIONS(21), 1,
      aux_sym__identifier_token1,
    STATE(16), 1,
      aux_sym_request_repeat1,
    STATE(22), 1,
      aux_sym__identifier,
    STATE(116), 1,
      sym_identifier,
    STATE(118), 1,
      sym_header,
    ACTIONS(78), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [368] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(80), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(95), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [389] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(82), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(85), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [410] = 6,
    ACTIONS(21), 1,
      aux_sym__identifier_token1,
    STATE(12), 1,
      aux_sym_request_repeat1,
    STATE(22), 1,
      aux_sym__identifier,
    STATE(116), 1,
      sym_identifier,
    STATE(118), 1,
      sym_header,
    ACTIONS(84), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [433] = 2,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 8,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      sym_raw_body,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_variable_ref,
      aux_sym__identifier_token1,
  [447] = 7,
    ACTIONS(21), 1,
      aux_sym__identifier_token1,
    ACTIONS(88), 1,
      sym_variable_ref,
    STATE(22), 1,
      aux_sym__identifier,
    STATE(70), 1,
      sym_query_param,
    STATE(106), 1,
      sym_query_params,
    STATE(134), 1,
      sym_identifier,
    ACTIONS(86), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [470] = 7,
    ACTIONS(21), 1,
      aux_sym__identifier_token1,
    ACTIONS(88), 1,
      sym_variable_ref,
    STATE(22), 1,
      aux_sym__identifier,
    STATE(70), 1,
      sym_query_param,
    STATE(108), 1,
      sym_query_params,
    STATE(134), 1,
      sym_identifier,
    ACTIONS(90), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [493] = 7,
    ACTIONS(21), 1,
      aux_sym__identifier_token1,
    ACTIONS(88), 1,
      sym_variable_ref,
    STATE(22), 1,
      aux_sym__identifier,
    STATE(70), 1,
      sym_query_param,
    STATE(104), 1,
      sym_query_params,
    STATE(134), 1,
      sym_identifier,
    ACTIONS(92), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [516] = 7,
    ACTIONS(21), 1,
      aux_sym__identifier_token1,
    ACTIONS(88), 1,
      sym_variable_ref,
    STATE(22), 1,
      aux_sym__identifier,
    STATE(70), 1,
      sym_query_param,
    STATE(109), 1,
      sym_query_params,
    STATE(134), 1,
      sym_identifier,
    ACTIONS(94), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [539] = 3,
    STATE(23), 1,
      aux_sym__identifier,
    ACTIONS(98), 2,
      sym_variable_ref,
      aux_sym__identifier_token1,
    ACTIONS(96), 5,
      anon_sym_COLON,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      sym__new_line,
  [554] = 3,
    STATE(23), 1,
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
  [569] = 4,
    ACTIONS(105), 1,
      sym_variable_ref,
    ACTIONS(108), 1,
      aux_sym__identifier_token1,
    STATE(24), 1,
      aux_sym__identifier,
    ACTIONS(100), 5,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
      anon_sym_SLASH,
      anon_sym_AMP,
      sym__new_line,
  [586] = 4,
    ACTIONS(113), 1,
      sym_variable_ref,
    ACTIONS(115), 1,
      aux_sym__identifier_token1,
    STATE(24), 1,
      aux_sym__identifier,
    ACTIONS(111), 4,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
      anon_sym_SLASH,
      sym__new_line,
  [602] = 4,
    ACTIONS(113), 1,
      sym_variable_ref,
    ACTIONS(115), 1,
      aux_sym__identifier_token1,
    STATE(24), 1,
      aux_sym__identifier,
    ACTIONS(96), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_AMP,
      sym__new_line,
  [617] = 6,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      sym__new_line,
    STATE(58), 1,
      sym_json_key_value,
    STATE(124), 1,
      sym__json_key,
    STATE(128), 1,
      sym__key_value_list,
  [636] = 2,
    ACTIONS(43), 1,
      aux_sym__identifier_token1,
    ACTIONS(41), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [647] = 5,
    ACTIONS(125), 1,
      anon_sym_QMARK,
    ACTIONS(127), 1,
      anon_sym_SLASH,
    STATE(44), 1,
      aux_sym_path_repeat1,
    STATE(88), 1,
      sym_path,
    ACTIONS(123), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [664] = 5,
    ACTIONS(127), 1,
      anon_sym_SLASH,
    ACTIONS(129), 1,
      anon_sym_QMARK,
    STATE(44), 1,
      aux_sym_path_repeat1,
    STATE(75), 1,
      sym_path,
    ACTIONS(90), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [681] = 4,
    ACTIONS(133), 1,
      sym_variable_ref,
    ACTIONS(135), 1,
      aux_sym__identifier_token1,
    STATE(25), 1,
      aux_sym__identifier,
    ACTIONS(131), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
      sym__new_line,
  [696] = 4,
    ACTIONS(133), 1,
      sym_variable_ref,
    ACTIONS(135), 1,
      aux_sym__identifier_token1,
    STATE(25), 1,
      aux_sym__identifier,
    ACTIONS(137), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
      sym__new_line,
  [711] = 6,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    ACTIONS(141), 1,
      sym__new_line,
    STATE(58), 1,
      sym_json_key_value,
    STATE(124), 1,
      sym__json_key,
    STATE(140), 1,
      sym__key_value_list,
  [730] = 2,
    ACTIONS(145), 1,
      aux_sym__identifier_token1,
    ACTIONS(143), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [741] = 1,
    ACTIONS(147), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [749] = 1,
    ACTIONS(149), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [757] = 1,
    ACTIONS(151), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [765] = 5,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      sym_json_key_value,
    STATE(124), 1,
      sym__json_key,
    STATE(143), 1,
      sym__key_value_list,
  [781] = 5,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    STATE(58), 1,
      sym_json_key_value,
    STATE(124), 1,
      sym__json_key,
    STATE(131), 1,
      sym__key_value_list,
  [797] = 4,
    STATE(22), 1,
      aux_sym__identifier,
    STATE(112), 1,
      sym_url_encoded_key_value,
    STATE(121), 1,
      sym_identifier,
    ACTIONS(88), 2,
      sym_variable_ref,
      aux_sym__identifier_token1,
  [811] = 4,
    STATE(22), 1,
      aux_sym__identifier,
    STATE(91), 1,
      sym_query_param,
    STATE(134), 1,
      sym_identifier,
    ACTIONS(88), 2,
      sym_variable_ref,
      aux_sym__identifier_token1,
  [825] = 4,
    STATE(50), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(117), 1,
      sym_reason_phrase,
    STATE(139), 1,
      sym_rest_of_line,
    ACTIONS(157), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [839] = 3,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    STATE(43), 1,
      aux_sym_path_repeat1,
    ACTIONS(111), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
      sym__new_line,
  [851] = 3,
    ACTIONS(162), 1,
      anon_sym_SLASH,
    STATE(43), 1,
      aux_sym_path_repeat1,
    ACTIONS(137), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
      sym__new_line,
  [863] = 3,
    ACTIONS(164), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      aux_sym_string_repeat1,
    ACTIONS(166), 2,
      sym_variable_ref,
      aux_sym_string_token1,
  [874] = 1,
    ACTIONS(169), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [881] = 3,
    STATE(50), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(125), 1,
      sym_rest_of_line,
    ACTIONS(157), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [892] = 3,
    STATE(22), 1,
      aux_sym__identifier,
    STATE(126), 1,
      sym_identifier,
    ACTIONS(88), 2,
      sym_variable_ref,
      aux_sym__identifier_token1,
  [903] = 1,
    ACTIONS(171), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [910] = 3,
    ACTIONS(175), 1,
      sym__new_line,
    STATE(68), 1,
      aux_sym_rest_of_line_repeat1,
    ACTIONS(173), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [921] = 1,
    ACTIONS(177), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [928] = 3,
    ACTIONS(181), 1,
      anon_sym_AMP,
    STATE(52), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(179), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [939] = 1,
    ACTIONS(184), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [946] = 1,
    ACTIONS(184), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [953] = 1,
    ACTIONS(186), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [960] = 3,
    STATE(22), 1,
      aux_sym__identifier,
    STATE(132), 1,
      sym_identifier,
    ACTIONS(88), 2,
      sym_variable_ref,
      aux_sym__identifier_token1,
  [971] = 1,
    ACTIONS(188), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [978] = 4,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(194), 1,
      sym__new_line,
    STATE(71), 1,
      aux_sym__key_value_list_repeat1,
  [991] = 3,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      aux_sym__key_value_list_repeat1,
    ACTIONS(196), 2,
      anon_sym_RBRACE,
      sym__new_line,
  [1002] = 1,
    ACTIONS(201), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [1009] = 1,
    ACTIONS(203), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [1016] = 1,
    ACTIONS(201), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [1023] = 3,
    STATE(26), 1,
      aux_sym__identifier,
    STATE(89), 1,
      sym_identifier,
    ACTIONS(205), 2,
      sym_variable_ref,
      aux_sym__identifier_token1,
  [1034] = 3,
    ACTIONS(209), 1,
      anon_sym_AMP,
    STATE(52), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(207), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1045] = 3,
    STATE(22), 1,
      aux_sym__identifier,
    STATE(110), 1,
      sym_identifier,
    ACTIONS(88), 2,
      sym_variable_ref,
      aux_sym__identifier_token1,
  [1056] = 1,
    ACTIONS(211), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [1063] = 4,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      sym__new_line,
    STATE(99), 1,
      sym_json_key_value,
    STATE(124), 1,
      sym__json_key,
  [1076] = 3,
    ACTIONS(218), 1,
      sym__new_line,
    STATE(68), 1,
      aux_sym_rest_of_line_repeat1,
    ACTIONS(215), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [1087] = 1,
    ACTIONS(211), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [1094] = 3,
    ACTIONS(209), 1,
      anon_sym_AMP,
    STATE(64), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(220), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1105] = 4,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
    ACTIONS(224), 1,
      sym__new_line,
    STATE(59), 1,
      aux_sym__key_value_list_repeat1,
  [1118] = 3,
    STATE(50), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(115), 1,
      sym_rest_of_line,
    ACTIONS(157), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [1129] = 1,
    ACTIONS(169), 4,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__new_line,
  [1136] = 3,
    ACTIONS(226), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      aux_sym_string_repeat1,
    ACTIONS(228), 2,
      sym_variable_ref,
      aux_sym_string_token1,
  [1147] = 2,
    ACTIONS(230), 1,
      anon_sym_QMARK,
    ACTIONS(94), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1155] = 3,
    ACTIONS(232), 1,
      anon_sym_COMMA,
    ACTIONS(234), 1,
      anon_sym_RBRACK,
    STATE(87), 1,
      aux_sym__json_list_values_repeat1,
  [1165] = 2,
    ACTIONS(236), 1,
      sym__new_line,
    ACTIONS(184), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1173] = 2,
    ACTIONS(238), 1,
      sym__new_line,
    ACTIONS(201), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1181] = 2,
    ACTIONS(240), 1,
      sym__new_line,
    ACTIONS(211), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1189] = 2,
    ACTIONS(242), 1,
      sym__new_line,
    ACTIONS(169), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1197] = 2,
    ACTIONS(244), 1,
      sym__new_line,
    ACTIONS(203), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1205] = 2,
    ACTIONS(246), 1,
      sym__new_line,
    ACTIONS(186), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1213] = 3,
    ACTIONS(248), 1,
      sym_scheme,
    ACTIONS(250), 1,
      sym_variable_ref,
    STATE(94), 1,
      sym_url,
  [1223] = 3,
    ACTIONS(252), 1,
      anon_sym_AMP,
    ACTIONS(254), 1,
      sym__new_line,
    STATE(96), 1,
      aux_sym_url_encoded_body_repeat1,
  [1233] = 2,
    ACTIONS(258), 1,
      sym__new_line,
    ACTIONS(256), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1241] = 1,
    ACTIONS(260), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym__new_line,
  [1247] = 3,
    ACTIONS(232), 1,
      anon_sym_COMMA,
    ACTIONS(262), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      aux_sym__json_list_values_repeat1,
  [1257] = 2,
    ACTIONS(264), 1,
      anon_sym_QMARK,
    ACTIONS(92), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1265] = 1,
    ACTIONS(266), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_AMP,
      sym__new_line,
  [1271] = 3,
    ACTIONS(268), 1,
      anon_sym_AMP,
    ACTIONS(271), 1,
      sym__new_line,
    STATE(90), 1,
      aux_sym_url_encoded_body_repeat1,
  [1281] = 1,
    ACTIONS(179), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_AMP,
      sym__new_line,
  [1287] = 3,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    ACTIONS(276), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      aux_sym__json_list_values_repeat1,
  [1297] = 2,
    ACTIONS(278), 1,
      sym__new_line,
    ACTIONS(276), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1305] = 3,
    ACTIONS(5), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(280), 1,
      sym__new_line,
    STATE(120), 1,
      sym_http_version,
  [1315] = 1,
    ACTIONS(282), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym__new_line,
  [1321] = 3,
    ACTIONS(252), 1,
      anon_sym_AMP,
    ACTIONS(284), 1,
      sym__new_line,
    STATE(90), 1,
      aux_sym_url_encoded_body_repeat1,
  [1331] = 3,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    STATE(86), 1,
      sym_json_key_value,
    STATE(124), 1,
      sym__json_key,
  [1341] = 2,
    STATE(25), 1,
      aux_sym__identifier,
    ACTIONS(133), 2,
      sym_variable_ref,
      aux_sym__identifier_token1,
  [1349] = 1,
    ACTIONS(196), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym__new_line,
  [1355] = 2,
    STATE(74), 1,
      aux_sym_string_repeat1,
    ACTIONS(286), 2,
      sym_variable_ref,
      aux_sym_string_token1,
  [1363] = 1,
    ACTIONS(288), 2,
      sym_status_code,
      sym__new_line,
  [1368] = 2,
    ACTIONS(290), 1,
      anon_sym_COLON,
    ACTIONS(292), 1,
      anon_sym_EQ,
  [1375] = 1,
    ACTIONS(294), 2,
      sym_scheme,
      sym_variable_ref,
  [1380] = 1,
    ACTIONS(90), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1385] = 1,
    ACTIONS(296), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1390] = 1,
    ACTIONS(298), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1395] = 1,
    ACTIONS(256), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1400] = 1,
    ACTIONS(94), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1405] = 1,
    ACTIONS(86), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1410] = 1,
    ACTIONS(300), 2,
      anon_sym_AMP,
      sym__new_line,
  [1415] = 1,
    ACTIONS(302), 2,
      sym_variable_ref,
      sym_domain,
  [1420] = 1,
    ACTIONS(271), 2,
      anon_sym_AMP,
      sym__new_line,
  [1425] = 1,
    ACTIONS(304), 1,
      sym__new_line,
  [1429] = 1,
    ACTIONS(306), 1,
      anon_sym_RBRACK,
  [1433] = 1,
    ACTIONS(308), 1,
      sym__new_line,
  [1437] = 1,
    ACTIONS(290), 1,
      anon_sym_COLON,
  [1441] = 1,
    ACTIONS(310), 1,
      sym__new_line,
  [1445] = 1,
    ACTIONS(312), 1,
      sym__new_line,
  [1449] = 1,
    ACTIONS(314), 1,
      sym__new_line,
  [1453] = 1,
    ACTIONS(316), 1,
      sym__new_line,
  [1457] = 1,
    ACTIONS(292), 1,
      anon_sym_EQ,
  [1461] = 1,
    ACTIONS(318), 1,
      anon_sym_COLON,
  [1465] = 1,
    ACTIONS(320), 1,
      anon_sym_COLON_SLASH_SLASH,
  [1469] = 1,
    ACTIONS(322), 1,
      anon_sym_COLON,
  [1473] = 1,
    ACTIONS(324), 1,
      sym__new_line,
  [1477] = 1,
    ACTIONS(326), 1,
      anon_sym_EQ,
  [1481] = 1,
    ACTIONS(328), 1,
      sym__new_line,
  [1485] = 1,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
  [1489] = 1,
    ACTIONS(330), 1,
      sym_status_code,
  [1493] = 1,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
  [1497] = 1,
    ACTIONS(332), 1,
      anon_sym_RBRACE,
  [1501] = 1,
    ACTIONS(334), 1,
      anon_sym_DQUOTE,
  [1505] = 1,
    ACTIONS(336), 1,
      aux_sym_http_version_token1,
  [1509] = 1,
    ACTIONS(338), 1,
      anon_sym_EQ,
  [1513] = 1,
    ACTIONS(340), 1,
      anon_sym_RBRACE,
  [1517] = 1,
    ACTIONS(342), 1,
      sym__new_line,
  [1521] = 1,
    ACTIONS(344), 1,
      sym__new_line,
  [1525] = 1,
    ACTIONS(346), 1,
      ts_builtin_sym_end,
  [1529] = 1,
    ACTIONS(348), 1,
      sym__new_line,
  [1533] = 1,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
  [1537] = 1,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
  [1541] = 1,
    ACTIONS(65), 1,
      anon_sym_RBRACK,
  [1545] = 1,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
  [1549] = 1,
    ACTIONS(352), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 120,
  [SMALL_STATE(6)] = 148,
  [SMALL_STATE(7)] = 178,
  [SMALL_STATE(8)] = 210,
  [SMALL_STATE(9)] = 242,
  [SMALL_STATE(10)] = 269,
  [SMALL_STATE(11)] = 296,
  [SMALL_STATE(12)] = 320,
  [SMALL_STATE(13)] = 345,
  [SMALL_STATE(14)] = 368,
  [SMALL_STATE(15)] = 389,
  [SMALL_STATE(16)] = 410,
  [SMALL_STATE(17)] = 433,
  [SMALL_STATE(18)] = 447,
  [SMALL_STATE(19)] = 470,
  [SMALL_STATE(20)] = 493,
  [SMALL_STATE(21)] = 516,
  [SMALL_STATE(22)] = 539,
  [SMALL_STATE(23)] = 554,
  [SMALL_STATE(24)] = 569,
  [SMALL_STATE(25)] = 586,
  [SMALL_STATE(26)] = 602,
  [SMALL_STATE(27)] = 617,
  [SMALL_STATE(28)] = 636,
  [SMALL_STATE(29)] = 647,
  [SMALL_STATE(30)] = 664,
  [SMALL_STATE(31)] = 681,
  [SMALL_STATE(32)] = 696,
  [SMALL_STATE(33)] = 711,
  [SMALL_STATE(34)] = 730,
  [SMALL_STATE(35)] = 741,
  [SMALL_STATE(36)] = 749,
  [SMALL_STATE(37)] = 757,
  [SMALL_STATE(38)] = 765,
  [SMALL_STATE(39)] = 781,
  [SMALL_STATE(40)] = 797,
  [SMALL_STATE(41)] = 811,
  [SMALL_STATE(42)] = 825,
  [SMALL_STATE(43)] = 839,
  [SMALL_STATE(44)] = 851,
  [SMALL_STATE(45)] = 863,
  [SMALL_STATE(46)] = 874,
  [SMALL_STATE(47)] = 881,
  [SMALL_STATE(48)] = 892,
  [SMALL_STATE(49)] = 903,
  [SMALL_STATE(50)] = 910,
  [SMALL_STATE(51)] = 921,
  [SMALL_STATE(52)] = 928,
  [SMALL_STATE(53)] = 939,
  [SMALL_STATE(54)] = 946,
  [SMALL_STATE(55)] = 953,
  [SMALL_STATE(56)] = 960,
  [SMALL_STATE(57)] = 971,
  [SMALL_STATE(58)] = 978,
  [SMALL_STATE(59)] = 991,
  [SMALL_STATE(60)] = 1002,
  [SMALL_STATE(61)] = 1009,
  [SMALL_STATE(62)] = 1016,
  [SMALL_STATE(63)] = 1023,
  [SMALL_STATE(64)] = 1034,
  [SMALL_STATE(65)] = 1045,
  [SMALL_STATE(66)] = 1056,
  [SMALL_STATE(67)] = 1063,
  [SMALL_STATE(68)] = 1076,
  [SMALL_STATE(69)] = 1087,
  [SMALL_STATE(70)] = 1094,
  [SMALL_STATE(71)] = 1105,
  [SMALL_STATE(72)] = 1118,
  [SMALL_STATE(73)] = 1129,
  [SMALL_STATE(74)] = 1136,
  [SMALL_STATE(75)] = 1147,
  [SMALL_STATE(76)] = 1155,
  [SMALL_STATE(77)] = 1165,
  [SMALL_STATE(78)] = 1173,
  [SMALL_STATE(79)] = 1181,
  [SMALL_STATE(80)] = 1189,
  [SMALL_STATE(81)] = 1197,
  [SMALL_STATE(82)] = 1205,
  [SMALL_STATE(83)] = 1213,
  [SMALL_STATE(84)] = 1223,
  [SMALL_STATE(85)] = 1233,
  [SMALL_STATE(86)] = 1241,
  [SMALL_STATE(87)] = 1247,
  [SMALL_STATE(88)] = 1257,
  [SMALL_STATE(89)] = 1265,
  [SMALL_STATE(90)] = 1271,
  [SMALL_STATE(91)] = 1281,
  [SMALL_STATE(92)] = 1287,
  [SMALL_STATE(93)] = 1297,
  [SMALL_STATE(94)] = 1305,
  [SMALL_STATE(95)] = 1315,
  [SMALL_STATE(96)] = 1321,
  [SMALL_STATE(97)] = 1331,
  [SMALL_STATE(98)] = 1341,
  [SMALL_STATE(99)] = 1349,
  [SMALL_STATE(100)] = 1355,
  [SMALL_STATE(101)] = 1363,
  [SMALL_STATE(102)] = 1368,
  [SMALL_STATE(103)] = 1375,
  [SMALL_STATE(104)] = 1380,
  [SMALL_STATE(105)] = 1385,
  [SMALL_STATE(106)] = 1390,
  [SMALL_STATE(107)] = 1395,
  [SMALL_STATE(108)] = 1400,
  [SMALL_STATE(109)] = 1405,
  [SMALL_STATE(110)] = 1410,
  [SMALL_STATE(111)] = 1415,
  [SMALL_STATE(112)] = 1420,
  [SMALL_STATE(113)] = 1425,
  [SMALL_STATE(114)] = 1429,
  [SMALL_STATE(115)] = 1433,
  [SMALL_STATE(116)] = 1437,
  [SMALL_STATE(117)] = 1441,
  [SMALL_STATE(118)] = 1445,
  [SMALL_STATE(119)] = 1449,
  [SMALL_STATE(120)] = 1453,
  [SMALL_STATE(121)] = 1457,
  [SMALL_STATE(122)] = 1461,
  [SMALL_STATE(123)] = 1465,
  [SMALL_STATE(124)] = 1469,
  [SMALL_STATE(125)] = 1473,
  [SMALL_STATE(126)] = 1477,
  [SMALL_STATE(127)] = 1481,
  [SMALL_STATE(128)] = 1485,
  [SMALL_STATE(129)] = 1489,
  [SMALL_STATE(130)] = 1493,
  [SMALL_STATE(131)] = 1497,
  [SMALL_STATE(132)] = 1501,
  [SMALL_STATE(133)] = 1505,
  [SMALL_STATE(134)] = 1509,
  [SMALL_STATE(135)] = 1513,
  [SMALL_STATE(136)] = 1517,
  [SMALL_STATE(137)] = 1521,
  [SMALL_STATE(138)] = 1525,
  [SMALL_STATE(139)] = 1529,
  [SMALL_STATE(140)] = 1533,
  [SMALL_STATE(141)] = 1537,
  [SMALL_STATE(142)] = 1541,
  [SMALL_STATE(143)] = 1545,
  [SMALL_STATE(144)] = 1549,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(22),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(133),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(103),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(22),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 5),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier, 2),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier, 2), SHIFT_REPEAT(23),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier, 2), SHIFT_REPEAT(24),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier, 2), SHIFT_REPEAT(24),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status_line, 4),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status_line, 4),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(98),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(45),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 5),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 5),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2), SHIFT_REPEAT(41),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 4),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 2),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 2), SHIFT_REPEAT(67),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 4),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rest_of_line_repeat1, 2), SHIFT_REPEAT(68),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rest_of_line_repeat1, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_body, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 3),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3, .production_id = 4),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_url_encoded_body_repeat1, 2), SHIFT_REPEAT(40),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_encoded_body_repeat1, 2),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2), SHIFT_REPEAT(11),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_url, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3, .production_id = 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_body, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 4),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 6),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_key_value, 3, .production_id = 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_url, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_key, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [346] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason_phrase, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
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
