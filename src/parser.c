#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 149
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
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

enum ts_field_identifiers {
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
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_parameter_name, 0},
  [1] =
    {field_header_name, 0},
    {field_header_value, 2},
  [3] =
    {field_variable_name, 1},
    {field_variable_value, 3},
  [5] =
    {field_parameter_name, 0},
    {field_parameter_value, 2},
  [7] =
    {field_key, 0},
    {field_value, 2},
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
  [8] = 6,
  [9] = 9,
  [10] = 9,
  [11] = 11,
  [12] = 12,
  [13] = 7,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 18,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 17,
  [27] = 27,
  [28] = 28,
  [29] = 21,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 31,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 42,
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
  [81] = 71,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 52,
  [86] = 47,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 63,
  [92] = 75,
  [93] = 93,
  [94] = 94,
  [95] = 65,
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
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 139,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 129,
  [145] = 145,
  [146] = 134,
  [147] = 137,
  [148] = 128,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(108);
      if (lookahead == ' ') SKIP(105)
      if (lookahead == '"') ADVANCE(208);
      if (lookahead == '&') ADVANCE(121);
      if (lookahead == ',') ADVANCE(207);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == '=') ADVANCE(122);
      if (lookahead == '?') ADVANCE(116);
      if (lookahead == '@') ADVANCE(214);
      if (lookahead == 'C') ADVANCE(227);
      if (lookahead == 'D') ADVANCE(221);
      if (lookahead == 'G') ADVANCE(222);
      if (lookahead == 'H') ADVANCE(223);
      if (lookahead == 'O') ADVANCE(229);
      if (lookahead == 'P') ADVANCE(219);
      if (lookahead == 'T') ADVANCE(231);
      if (lookahead == '[') ADVANCE(212);
      if (lookahead == ']') ADVANCE(213);
      if (lookahead == 'a') ADVANCE(244);
      if (lookahead == 'c') ADVANCE(234);
      if (lookahead == 'd') ADVANCE(235);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == 'f') ADVANCE(252);
      if (lookahead == 'g') ADVANCE(248);
      if (lookahead == 'h') ADVANCE(217);
      if (lookahead == 'i') ADVANCE(255);
      if (lookahead == 'm') ADVANCE(236);
      if (lookahead == 'n') ADVANCE(253);
      if (lookahead == 'p') ADVANCE(237);
      if (lookahead == 'r') ADVANCE(249);
      if (lookahead == 's') ADVANCE(246);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == 'u') ADVANCE(257);
      if (lookahead == 'w') ADVANCE(259);
      if (lookahead == '{') ADVANCE(209);
      if (lookahead == '}') ADVANCE(211);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == '\r') ADVANCE(271);
      if (lookahead == ' ') ADVANCE(263);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead != 0) ADVANCE(262);
      END_STATE();
    case 2:
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '"') ADVANCE(208);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '[') ADVANCE(212);
      if (lookahead == ']') ADVANCE(213);
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == '{') ADVANCE(209);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(271);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 3:
      if (lookahead == ' ') SKIP(3)
      if (lookahead == '"') ADVANCE(208);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '[') ADVANCE(212);
      if (lookahead == ']') ADVANCE(213);
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead == '{') ADVANCE(209);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 4:
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '&') ADVANCE(121);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == '=') ADVANCE(122);
      if (lookahead == '?') ADVANCE(116);
      if (lookahead == 'H') ADVANCE(233);
      if (lookahead == '{') ADVANCE(102);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(271);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 5:
      if (lookahead == ' ') SKIP(5)
      if (lookahead == '&') ADVANCE(121);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == '=') ADVANCE(122);
      if (lookahead == '?') ADVANCE(116);
      if (lookahead == 'H') ADVANCE(233);
      if (lookahead == '{') ADVANCE(102);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 6:
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '"') ADVANCE(208);
      if (lookahead == '&') ADVANCE(121);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == '=') ADVANCE(122);
      if (lookahead == '{') ADVANCE(102);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(271);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 7:
      if (lookahead == ' ') SKIP(7)
      if (lookahead == '"') ADVANCE(208);
      if (lookahead == '&') ADVANCE(121);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == '=') ADVANCE(122);
      if (lookahead == '{') ADVANCE(102);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(263);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(262);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(269);
      if (lookahead == '"') ADVANCE(208);
      if (lookahead == '{') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(268);
      END_STATE();
    case 10:
      if (lookahead == ' ') SKIP(11)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 11:
      if (lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 12:
      if (lookahead == ' ') SKIP(12)
      if (lookahead == '{') ADVANCE(102);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 13:
      if (lookahead == ' ') SKIP(13)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(98);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(109);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(115);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '1') ADVANCE(117);
      END_STATE();
    case 19:
      if (lookahead == '1') ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '3') ADVANCE(117);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == 'C') ADVANCE(41);
      END_STATE();
    case 25:
      if (lookahead == 'C') ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == 'C') ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == 'D') ADVANCE(114);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(114);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(24);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(45);
      END_STATE();
    case 31:
      if (lookahead == 'H') ADVANCE(114);
      END_STATE();
    case 32:
      if (lookahead == 'I') ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == 'L') ADVANCE(30);
      END_STATE();
    case 34:
      if (lookahead == 'N') ADVANCE(36);
      END_STATE();
    case 35:
      if (lookahead == 'N') ADVANCE(40);
      END_STATE();
    case 36:
      if (lookahead == 'N') ADVANCE(29);
      END_STATE();
    case 37:
      if (lookahead == 'O') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == 'P') ADVANCE(15);
      END_STATE();
    case 39:
      if (lookahead == 'S') ADVANCE(41);
      END_STATE();
    case 40:
      if (lookahead == 'S') ADVANCE(114);
      END_STATE();
    case 41:
      if (lookahead == 'T') ADVANCE(114);
      END_STATE();
    case 42:
      if (lookahead == 'T') ADVANCE(38);
      END_STATE();
    case 43:
      if (lookahead == 'T') ADVANCE(32);
      END_STATE();
    case 44:
      if (lookahead == 'T') ADVANCE(25);
      END_STATE();
    case 45:
      if (lookahead == 'T') ADVANCE(28);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 62:
      if (lookahead == 'f') ADVANCE(75);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(117);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 66:
      if (lookahead == 'k') ADVANCE(58);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 80:
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 81:
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 82:
      if (lookahead == 'p') ADVANCE(119);
      END_STATE();
    case 83:
      if (lookahead == 'p') ADVANCE(84);
      END_STATE();
    case 84:
      if (lookahead == 'p') ADVANCE(85);
      if (lookahead == 's') ADVANCE(90);
      if (lookahead == 't') ADVANCE(51);
      if (lookahead == 'w') ADVANCE(88);
      END_STATE();
    case 85:
      if (lookahead == 'p') ADVANCE(85);
      if (lookahead == 't') ADVANCE(51);
      if (lookahead == 'w') ADVANCE(88);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 89:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 90:
      if (lookahead == 's') ADVANCE(90);
      if (lookahead == 't') ADVANCE(51);
      if (lookahead == 'w') ADVANCE(88);
      END_STATE();
    case 91:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 92:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 100:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 101:
      if (lookahead == 'y') ADVANCE(95);
      END_STATE();
    case 102:
      if (lookahead == '{') ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == '}') ADVANCE(104);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 104:
      if (lookahead == '}') ADVANCE(215);
      END_STATE();
    case 105:
      if (eof) ADVANCE(108);
      if (lookahead == ' ') SKIP(105)
      if (lookahead == '"') ADVANCE(208);
      if (lookahead == '&') ADVANCE(121);
      if (lookahead == ',') ADVANCE(207);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == ':') ADVANCE(113);
      if (lookahead == '=') ADVANCE(122);
      if (lookahead == '?') ADVANCE(116);
      if (lookahead == '@') ADVANCE(214);
      if (lookahead == 'C') ADVANCE(227);
      if (lookahead == 'D') ADVANCE(221);
      if (lookahead == 'G') ADVANCE(222);
      if (lookahead == 'H') ADVANCE(223);
      if (lookahead == 'O') ADVANCE(229);
      if (lookahead == 'P') ADVANCE(219);
      if (lookahead == 'T') ADVANCE(231);
      if (lookahead == '[') ADVANCE(212);
      if (lookahead == ']') ADVANCE(213);
      if (lookahead == 'a') ADVANCE(244);
      if (lookahead == 'c') ADVANCE(234);
      if (lookahead == 'd') ADVANCE(235);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == 'f') ADVANCE(252);
      if (lookahead == 'g') ADVANCE(248);
      if (lookahead == 'h') ADVANCE(217);
      if (lookahead == 'i') ADVANCE(255);
      if (lookahead == 'm') ADVANCE(236);
      if (lookahead == 'n') ADVANCE(253);
      if (lookahead == 'p') ADVANCE(237);
      if (lookahead == 'r') ADVANCE(249);
      if (lookahead == 's') ADVANCE(246);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == 'u') ADVANCE(257);
      if (lookahead == 'w') ADVANCE(259);
      if (lookahead == '{') ADVANCE(209);
      if (lookahead == '}') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 106:
      if (eof) ADVANCE(108);
      if (lookahead == ' ') ADVANCE(123);
      if (lookahead == '@') ADVANCE(214);
      if (lookahead == 'C') ADVANCE(228);
      if (lookahead == 'D') ADVANCE(224);
      if (lookahead == 'G') ADVANCE(225);
      if (lookahead == 'H') ADVANCE(226);
      if (lookahead == 'O') ADVANCE(230);
      if (lookahead == 'P') ADVANCE(220);
      if (lookahead == 'T') ADVANCE(232);
      if (lookahead == '[') ADVANCE(212);
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'c') ADVANCE(239);
      if (lookahead == 'd') ADVANCE(240);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == 'f') ADVANCE(254);
      if (lookahead == 'g') ADVANCE(250);
      if (lookahead == 'h') ADVANCE(218);
      if (lookahead == 'i') ADVANCE(256);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == 'n') ADVANCE(253);
      if (lookahead == 'p') ADVANCE(242);
      if (lookahead == 'r') ADVANCE(251);
      if (lookahead == 's') ADVANCE(247);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == 'u') ADVANCE(258);
      if (lookahead == 'w') ADVANCE(259);
      if (lookahead == '{') ADVANCE(210);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 107:
      if (eof) ADVANCE(108);
      if (lookahead == ' ') SKIP(107)
      if (lookahead == '@') ADVANCE(214);
      if (lookahead == 'C') ADVANCE(227);
      if (lookahead == 'D') ADVANCE(221);
      if (lookahead == 'G') ADVANCE(222);
      if (lookahead == 'H') ADVANCE(223);
      if (lookahead == 'O') ADVANCE(229);
      if (lookahead == 'P') ADVANCE(219);
      if (lookahead == 'T') ADVANCE(231);
      if (lookahead == 'a') ADVANCE(244);
      if (lookahead == 'c') ADVANCE(234);
      if (lookahead == 'd') ADVANCE(235);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == 'f') ADVANCE(252);
      if (lookahead == 'g') ADVANCE(248);
      if (lookahead == 'h') ADVANCE(217);
      if (lookahead == 'i') ADVANCE(255);
      if (lookahead == 'm') ADVANCE(236);
      if (lookahead == 'n') ADVANCE(253);
      if (lookahead == 'p') ADVANCE(237);
      if (lookahead == 'r') ADVANCE(249);
      if (lookahead == 's') ADVANCE(246);
      if (lookahead == 't') ADVANCE(238);
      if (lookahead == 'u') ADVANCE(257);
      if (lookahead == 'w') ADVANCE(259);
      if (lookahead == '{') ADVANCE(102);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_status_code);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_method_token1);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_scheme);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 'h') ADVANCE(117);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == ' ') ADVANCE(123);
      if (lookahead == '@') ADVANCE(214);
      if (lookahead == 'C') ADVANCE(228);
      if (lookahead == 'D') ADVANCE(224);
      if (lookahead == 'G') ADVANCE(225);
      if (lookahead == 'H') ADVANCE(226);
      if (lookahead == 'O') ADVANCE(230);
      if (lookahead == 'P') ADVANCE(220);
      if (lookahead == 'T') ADVANCE(232);
      if (lookahead == '[') ADVANCE(212);
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'c') ADVANCE(239);
      if (lookahead == 'd') ADVANCE(240);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == 'f') ADVANCE(254);
      if (lookahead == 'g') ADVANCE(250);
      if (lookahead == 'h') ADVANCE(218);
      if (lookahead == 'i') ADVANCE(256);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == 'n') ADVANCE(253);
      if (lookahead == 'p') ADVANCE(242);
      if (lookahead == 'r') ADVANCE(251);
      if (lookahead == 's') ADVANCE(247);
      if (lookahead == 't') ADVANCE(243);
      if (lookahead == 'u') ADVANCE(258);
      if (lookahead == 'w') ADVANCE(259);
      if (lookahead == '{') ADVANCE(210);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '1') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '1') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '2') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '3') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'A') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'A') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'C') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'C') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'C') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'D') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'E') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'E') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'E') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'H') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'I') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'L') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'N') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'N') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'N') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'O') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'P') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'S') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'S') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'T') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'T') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'T') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'T') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'T') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'a') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'c') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'c') ADVANCE(191);
      if (lookahead == 's') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'c') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'c') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'd') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'e') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'f') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'g') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'k') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'l') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'l') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'l') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'm') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'o') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'o') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'o') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'o') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'o') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'p') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'p') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'p') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'p') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'p') ADVANCE(190);
      if (lookahead == 's') ADVANCE(194);
      if (lookahead == 't') ADVANCE(158);
      if (lookahead == 'w') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'p') ADVANCE(190);
      if (lookahead == 't') ADVANCE(158);
      if (lookahead == 'w') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'r') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 's') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 's') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 's') ADVANCE(194);
      if (lookahead == 't') ADVANCE(158);
      if (lookahead == 'w') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 's') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 't') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 't') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 't') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'u') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == 'y') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '}') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '}') ADVANCE(204);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(103);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(205);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_variable_ref);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '3') ADVANCE(20);
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == '3') ADVANCE(128);
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'A') ADVANCE(44);
      if (lookahead == 'O') ADVANCE(39);
      if (lookahead == 'U') ADVANCE(41);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'A') ADVANCE(152);
      if (lookahead == 'O') ADVANCE(148);
      if (lookahead == 'U') ADVANCE(149);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'E') ADVANCE(33);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'E') ADVANCE(41);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'E') ADVANCE(22);
      if (lookahead == 'T') ADVANCE(42);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'E') ADVANCE(141);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'E') ADVANCE(149);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'E') ADVANCE(130);
      if (lookahead == 'T') ADVANCE(150);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'O') ADVANCE(34);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'O') ADVANCE(142);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'P') ADVANCE(43);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'P') ADVANCE(151);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'R') ADVANCE(23);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'R') ADVANCE(131);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'T') ADVANCE(42);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == 'k') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'o') ADVANCE(157);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'n') ADVANCE(192);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == 'k') ADVANCE(160);
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'b') ADVANCE(77);
      if (lookahead == 'c') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'b') ADVANCE(182);
      if (lookahead == 'c') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == 'm') ADVANCE(192);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'i') ADVANCE(173);
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'm') ADVANCE(117);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'p') ADVANCE(81);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'm') ADVANCE(117);
      if (lookahead == 'n') ADVANCE(168);
      if (lookahead == 'p') ADVANCE(185);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'x') ADVANCE(48);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__identifier_token1);
      if (lookahead == 'x') ADVANCE(156);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == ' ') ADVANCE(263);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(262);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == '{') ADVANCE(103);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_domain);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ' ') ADVANCE(269);
      if (lookahead == '{') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(268);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(103);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__new_line);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(271);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 106},
  [3] = {.lex_state = 106},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 106},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 107},
  [13] = {.lex_state = 107},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 107},
  [17] = {.lex_state = 106},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 107},
  [27] = {.lex_state = 107},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 9},
  [70] = {.lex_state = 9},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 6},
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
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 12},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 13},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 10},
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
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
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
    [sym_source_file] = STATE(133),
    [sym_request] = STATE(5),
    [sym_method_url] = STATE(132),
    [sym_response] = STATE(5),
    [sym_status_line] = STATE(12),
    [sym_http_version] = STATE(131),
    [sym_method] = STATE(96),
    [sym_url] = STATE(82),
    [sym_variable_declaration] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_HTTP_SLASH] = ACTIONS(5),
    [aux_sym_method_token1] = ACTIONS(7),
    [sym_scheme] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(11),
    [sym_variable_ref] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      sym_raw_body,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      aux_sym__identifier_token1,
    STATE(3), 1,
      aux_sym_request_repeat1,
    STATE(21), 1,
      aux_sym__identifier,
    STATE(104), 1,
      sym_url_encoded_key_value,
    STATE(117), 1,
      sym_identifier,
    STATE(140), 1,
      sym_header,
    STATE(51), 2,
      sym_json_object,
      sym_json_list,
    STATE(126), 3,
      sym__body,
      sym_json_body,
      sym_url_encoded_body,
    ACTIONS(17), 5,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      sym_scheme,
      anon_sym_AT,
      sym_variable_ref,
  [47] = 13,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      aux_sym__identifier_token1,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      sym_raw_body,
    STATE(7), 1,
      aux_sym_request_repeat1,
    STATE(21), 1,
      aux_sym__identifier,
    STATE(104), 1,
      sym_url_encoded_key_value,
    STATE(117), 1,
      sym_identifier,
    STATE(140), 1,
      sym_header,
    STATE(51), 2,
      sym_json_object,
      sym_json_list,
    STATE(145), 3,
      sym__body,
      sym_json_body,
      sym_url_encoded_body,
    ACTIONS(29), 5,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      sym_scheme,
      anon_sym_AT,
      sym_variable_ref,
  [94] = 12,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(38), 1,
      aux_sym_method_token1,
    ACTIONS(41), 1,
      sym_scheme,
    ACTIONS(44), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      sym_variable_ref,
    STATE(12), 1,
      sym_status_line,
    STATE(82), 1,
      sym_url,
    STATE(96), 1,
      sym_method,
    STATE(131), 1,
      sym_http_version,
    STATE(132), 1,
      sym_method_url,
    STATE(4), 4,
      sym_request,
      sym_response,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [134] = 12,
    ACTIONS(5), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(7), 1,
      aux_sym_method_token1,
    ACTIONS(9), 1,
      sym_scheme,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(13), 1,
      sym_variable_ref,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym_status_line,
    STATE(82), 1,
      sym_url,
    STATE(96), 1,
      sym_method,
    STATE(131), 1,
      sym_http_version,
    STATE(132), 1,
      sym_method_url,
    STATE(4), 4,
      sym_request,
      sym_response,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [174] = 9,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(54), 1,
      anon_sym_LBRACE,
    ACTIONS(56), 1,
      anon_sym_LBRACK,
    ACTIONS(58), 1,
      anon_sym_RBRACK,
    ACTIONS(62), 1,
      sym__new_line,
    STATE(51), 1,
      sym_json_object,
    STATE(146), 1,
      sym__json_list_values,
    ACTIONS(60), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(97), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [207] = 7,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_request_repeat1,
    STATE(21), 1,
      aux_sym__identifier,
    STATE(124), 1,
      sym_identifier,
    STATE(140), 1,
      sym_header,
    ACTIONS(68), 2,
      sym_variable_ref,
      aux_sym__identifier_token1,
    ACTIONS(66), 7,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      sym_scheme,
      sym_raw_body,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
  [236] = 9,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(54), 1,
      anon_sym_LBRACE,
    ACTIONS(56), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_RBRACK,
    ACTIONS(73), 1,
      sym__new_line,
    STATE(51), 1,
      sym_json_object,
    STATE(134), 1,
      sym__json_list_values,
    ACTIONS(60), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(97), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [269] = 8,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(54), 1,
      anon_sym_LBRACE,
    ACTIONS(56), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      sym_json_object,
    STATE(148), 1,
      sym__json_list_values,
    ACTIONS(60), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(97), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [299] = 8,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(54), 1,
      anon_sym_LBRACE,
    ACTIONS(56), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      sym_json_object,
    STATE(128), 1,
      sym__json_list_values,
    ACTIONS(60), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(97), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [329] = 7,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(83), 1,
      sym__new_line,
    STATE(51), 1,
      sym_json_object,
    ACTIONS(81), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(80), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [356] = 6,
    ACTIONS(25), 1,
      aux_sym__identifier_token1,
    STATE(16), 1,
      aux_sym_request_repeat1,
    STATE(21), 1,
      aux_sym__identifier,
    STATE(124), 1,
      sym_identifier,
    STATE(139), 1,
      sym_header,
    ACTIONS(85), 6,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      sym_scheme,
      anon_sym_AT,
      sym_variable_ref,
  [380] = 7,
    ACTIONS(68), 1,
      aux_sym__identifier_token1,
    ACTIONS(87), 1,
      sym_variable_ref,
    STATE(13), 1,
      aux_sym_request_repeat1,
    STATE(21), 1,
      aux_sym__identifier,
    STATE(124), 1,
      sym_identifier,
    STATE(139), 1,
      sym_header,
    ACTIONS(64), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      sym_scheme,
      anon_sym_AT,
  [406] = 6,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    STATE(51), 1,
      sym_json_object,
    ACTIONS(90), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(100), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [430] = 6,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    STATE(51), 1,
      sym_json_object,
    ACTIONS(92), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(87), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [454] = 6,
    ACTIONS(25), 1,
      aux_sym__identifier_token1,
    STATE(13), 1,
      aux_sym_request_repeat1,
    STATE(21), 1,
      aux_sym__identifier,
    STATE(124), 1,
      sym_identifier,
    STATE(139), 1,
      sym_header,
    ACTIONS(94), 6,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      sym_scheme,
      anon_sym_AT,
      sym_variable_ref,
  [478] = 2,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 9,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      sym_scheme,
      sym_raw_body,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_variable_ref,
      aux_sym__identifier_token1,
  [493] = 4,
    ACTIONS(98), 1,
      sym_variable_ref,
    ACTIONS(101), 1,
      aux_sym__identifier_token1,
    STATE(18), 1,
      aux_sym__identifier,
    ACTIONS(96), 6,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
      anon_sym_SLASH,
      anon_sym_AMP,
      anon_sym_EQ,
      sym__new_line,
  [511] = 7,
    ACTIONS(106), 1,
      sym_variable_ref,
    ACTIONS(108), 1,
      aux_sym__identifier_token1,
    STATE(29), 1,
      aux_sym__identifier,
    STATE(49), 1,
      sym_identifier,
    STATE(64), 1,
      sym_query_param,
    STATE(108), 1,
      sym_query_params,
    ACTIONS(104), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [534] = 7,
    ACTIONS(106), 1,
      sym_variable_ref,
    ACTIONS(108), 1,
      aux_sym__identifier_token1,
    STATE(29), 1,
      aux_sym__identifier,
    STATE(49), 1,
      sym_identifier,
    STATE(64), 1,
      sym_query_param,
    STATE(116), 1,
      sym_query_params,
    ACTIONS(110), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [557] = 3,
    STATE(22), 1,
      aux_sym__identifier,
    ACTIONS(114), 2,
      sym_variable_ref,
      aux_sym__identifier_token1,
    ACTIONS(112), 5,
      anon_sym_COLON,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      sym__new_line,
  [572] = 3,
    STATE(22), 1,
      aux_sym__identifier,
    ACTIONS(116), 2,
      sym_variable_ref,
      aux_sym__identifier_token1,
    ACTIONS(96), 5,
      anon_sym_COLON,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      sym__new_line,
  [587] = 7,
    ACTIONS(106), 1,
      sym_variable_ref,
    ACTIONS(108), 1,
      aux_sym__identifier_token1,
    STATE(29), 1,
      aux_sym__identifier,
    STATE(49), 1,
      sym_identifier,
    STATE(64), 1,
      sym_query_param,
    STATE(115), 1,
      sym_query_params,
    ACTIONS(119), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [610] = 6,
    ACTIONS(123), 1,
      anon_sym_QMARK,
    ACTIONS(127), 1,
      anon_sym_SLASH,
    STATE(43), 1,
      aux_sym_path_repeat1,
    STATE(88), 1,
      sym_path,
    ACTIONS(121), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
    ACTIONS(125), 2,
      sym_scheme,
      sym_variable_ref,
  [631] = 7,
    ACTIONS(106), 1,
      sym_variable_ref,
    ACTIONS(108), 1,
      aux_sym__identifier_token1,
    STATE(29), 1,
      aux_sym__identifier,
    STATE(49), 1,
      sym_identifier,
    STATE(64), 1,
      sym_query_param,
    STATE(111), 1,
      sym_query_params,
    ACTIONS(129), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [654] = 2,
    ACTIONS(66), 1,
      aux_sym__identifier_token1,
    ACTIONS(64), 6,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      sym_scheme,
      anon_sym_AT,
      sym_variable_ref,
  [666] = 2,
    ACTIONS(133), 1,
      aux_sym__identifier_token1,
    ACTIONS(131), 6,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      sym_scheme,
      anon_sym_AT,
      sym_variable_ref,
  [678] = 5,
    ACTIONS(106), 1,
      sym_variable_ref,
    ACTIONS(108), 1,
      aux_sym__identifier_token1,
    STATE(29), 1,
      aux_sym__identifier,
    STATE(90), 1,
      sym_identifier,
    ACTIONS(135), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_AMP,
      sym__new_line,
  [696] = 4,
    ACTIONS(137), 1,
      sym_variable_ref,
    ACTIONS(139), 1,
      aux_sym__identifier_token1,
    STATE(18), 1,
      aux_sym__identifier,
    ACTIONS(112), 4,
      anon_sym_HTTP_SLASH,
      anon_sym_AMP,
      anon_sym_EQ,
      sym__new_line,
  [712] = 4,
    ACTIONS(137), 1,
      sym_variable_ref,
    ACTIONS(139), 1,
      aux_sym__identifier_token1,
    STATE(18), 1,
      aux_sym__identifier,
    ACTIONS(141), 4,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
      anon_sym_SLASH,
      sym__new_line,
  [728] = 6,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    ACTIONS(147), 1,
      sym__new_line,
    STATE(68), 1,
      sym_json_key_value,
    STATE(130), 1,
      sym__json_key,
    STATE(144), 1,
      sym__key_value_list,
  [747] = 4,
    ACTIONS(151), 1,
      sym_variable_ref,
    ACTIONS(153), 1,
      aux_sym__identifier_token1,
    STATE(30), 1,
      aux_sym__identifier,
    ACTIONS(149), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
      sym__new_line,
  [762] = 1,
    ACTIONS(155), 6,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      sym_scheme,
      anon_sym_AT,
      sym_variable_ref,
  [771] = 6,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    ACTIONS(159), 1,
      sym__new_line,
    STATE(68), 1,
      sym_json_key_value,
    STATE(129), 1,
      sym__key_value_list,
    STATE(130), 1,
      sym__json_key,
  [790] = 5,
    ACTIONS(123), 1,
      anon_sym_QMARK,
    ACTIONS(127), 1,
      anon_sym_SLASH,
    STATE(43), 1,
      aux_sym_path_repeat1,
    STATE(88), 1,
      sym_path,
    ACTIONS(121), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [807] = 1,
    ACTIONS(161), 6,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      sym_scheme,
      anon_sym_AT,
      sym_variable_ref,
  [816] = 5,
    ACTIONS(127), 1,
      anon_sym_SLASH,
    ACTIONS(163), 1,
      anon_sym_QMARK,
    STATE(43), 1,
      aux_sym_path_repeat1,
    STATE(84), 1,
      sym_path,
    ACTIONS(129), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [833] = 1,
    ACTIONS(165), 6,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      sym_scheme,
      anon_sym_AT,
      sym_variable_ref,
  [842] = 4,
    ACTIONS(151), 1,
      sym_variable_ref,
    ACTIONS(153), 1,
      aux_sym__identifier_token1,
    STATE(30), 1,
      aux_sym__identifier,
    ACTIONS(167), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
      sym__new_line,
  [857] = 4,
    STATE(21), 1,
      aux_sym__identifier,
    STATE(110), 1,
      sym_url_encoded_key_value,
    STATE(127), 1,
      sym_identifier,
    ACTIONS(169), 2,
      sym_variable_ref,
      aux_sym__identifier_token1,
  [871] = 4,
    STATE(56), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(119), 1,
      sym_rest_of_line,
    STATE(120), 1,
      sym_reason_phrase,
    ACTIONS(171), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [885] = 5,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      sym_json_key_value,
    STATE(130), 1,
      sym__json_key,
    STATE(147), 1,
      sym__key_value_list,
  [901] = 3,
    ACTIONS(175), 1,
      anon_sym_SLASH,
    STATE(46), 1,
      aux_sym_path_repeat1,
    ACTIONS(149), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
      sym__new_line,
  [913] = 5,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      sym_json_key_value,
    STATE(130), 1,
      sym__json_key,
    STATE(137), 1,
      sym__key_value_list,
  [929] = 4,
    STATE(29), 1,
      aux_sym__identifier,
    STATE(49), 1,
      sym_identifier,
    STATE(89), 1,
      sym_query_param,
    ACTIONS(106), 2,
      sym_variable_ref,
      aux_sym__identifier_token1,
  [943] = 3,
    ACTIONS(179), 1,
      anon_sym_SLASH,
    STATE(46), 1,
      aux_sym_path_repeat1,
    ACTIONS(141), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
      sym__new_line,
  [955] = 1,
    ACTIONS(182), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__new_line,
  [962] = 3,
    STATE(21), 1,
      aux_sym__identifier,
    STATE(138), 1,
      sym_identifier,
    ACTIONS(169), 2,
      sym_variable_ref,
      aux_sym__identifier_token1,
  [973] = 2,
    ACTIONS(186), 1,
      anon_sym_EQ,
    ACTIONS(184), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_AMP,
      sym__new_line,
  [982] = 1,
    ACTIONS(188), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__new_line,
  [989] = 1,
    ACTIONS(190), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__new_line,
  [996] = 1,
    ACTIONS(192), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__new_line,
  [1003] = 3,
    STATE(56), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(141), 1,
      sym_rest_of_line,
    ACTIONS(171), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [1014] = 1,
    ACTIONS(192), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__new_line,
  [1021] = 3,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      aux_sym_string_repeat1,
    ACTIONS(196), 2,
      sym_variable_ref,
      aux_sym_string_token1,
  [1032] = 3,
    ACTIONS(201), 1,
      sym__new_line,
    STATE(74), 1,
      aux_sym_rest_of_line_repeat1,
    ACTIONS(199), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [1043] = 1,
    ACTIONS(203), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__new_line,
  [1050] = 3,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym__key_value_list_repeat1,
    ACTIONS(208), 2,
      anon_sym_RBRACE,
      sym__new_line,
  [1061] = 3,
    ACTIONS(212), 1,
      anon_sym_AMP,
    STATE(59), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(210), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1072] = 3,
    STATE(21), 1,
      aux_sym__identifier,
    STATE(135), 1,
      sym_identifier,
    ACTIONS(169), 2,
      sym_variable_ref,
      aux_sym__identifier_token1,
  [1083] = 3,
    ACTIONS(217), 1,
      anon_sym_AMP,
    STATE(59), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(215), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1094] = 1,
    ACTIONS(182), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__new_line,
  [1101] = 1,
    ACTIONS(219), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__new_line,
  [1108] = 3,
    ACTIONS(217), 1,
      anon_sym_AMP,
    STATE(61), 1,
      aux_sym_query_params_repeat1,
    ACTIONS(221), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1119] = 1,
    ACTIONS(223), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__new_line,
  [1126] = 1,
    ACTIONS(225), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__new_line,
  [1133] = 1,
    ACTIONS(219), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__new_line,
  [1140] = 4,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    ACTIONS(231), 1,
      sym__new_line,
    STATE(73), 1,
      aux_sym__key_value_list_repeat1,
  [1153] = 3,
    ACTIONS(233), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      aux_sym_string_repeat1,
    ACTIONS(235), 2,
      sym_variable_ref,
      aux_sym_string_token1,
  [1164] = 3,
    ACTIONS(237), 1,
      anon_sym_DQUOTE,
    STATE(69), 1,
      aux_sym_string_repeat1,
    ACTIONS(239), 2,
      sym_variable_ref,
      aux_sym_string_token1,
  [1175] = 1,
    ACTIONS(241), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__new_line,
  [1182] = 1,
    ACTIONS(243), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__new_line,
  [1189] = 4,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    ACTIONS(247), 1,
      sym__new_line,
    STATE(58), 1,
      aux_sym__key_value_list_repeat1,
  [1202] = 3,
    ACTIONS(252), 1,
      sym__new_line,
    STATE(74), 1,
      aux_sym_rest_of_line_repeat1,
    ACTIONS(249), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [1213] = 1,
    ACTIONS(254), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__new_line,
  [1220] = 3,
    STATE(56), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(122), 1,
      sym_rest_of_line,
    ACTIONS(171), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [1231] = 3,
    STATE(21), 1,
      aux_sym__identifier,
    STATE(112), 1,
      sym_identifier,
    ACTIONS(169), 2,
      sym_variable_ref,
      aux_sym__identifier_token1,
  [1242] = 4,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    ACTIONS(256), 1,
      sym__new_line,
    STATE(98), 1,
      sym_json_key_value,
    STATE(130), 1,
      sym__json_key,
  [1255] = 1,
    ACTIONS(254), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__new_line,
  [1262] = 2,
    ACTIONS(260), 1,
      sym__new_line,
    ACTIONS(258), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1270] = 2,
    ACTIONS(262), 1,
      sym__new_line,
    ACTIONS(241), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1278] = 3,
    ACTIONS(5), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(264), 1,
      sym__new_line,
    STATE(143), 1,
      sym_http_version,
  [1288] = 3,
    ACTIONS(266), 1,
      anon_sym_AMP,
    ACTIONS(268), 1,
      sym__new_line,
    STATE(103), 1,
      aux_sym_url_encoded_body_repeat1,
  [1298] = 2,
    ACTIONS(270), 1,
      anon_sym_QMARK,
    ACTIONS(119), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1306] = 2,
    ACTIONS(272), 1,
      sym__new_line,
    ACTIONS(192), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1314] = 2,
    ACTIONS(274), 1,
      sym__new_line,
    ACTIONS(182), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1322] = 1,
    ACTIONS(276), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__new_line,
  [1328] = 2,
    ACTIONS(278), 1,
      anon_sym_QMARK,
    ACTIONS(110), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1336] = 1,
    ACTIONS(210), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_AMP,
      sym__new_line,
  [1342] = 1,
    ACTIONS(280), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_AMP,
      sym__new_line,
  [1348] = 2,
    ACTIONS(282), 1,
      sym__new_line,
    ACTIONS(219), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1356] = 2,
    ACTIONS(284), 1,
      sym__new_line,
    ACTIONS(254), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1364] = 3,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      sym_json_key_value,
    STATE(130), 1,
      sym__json_key,
  [1374] = 3,
    ACTIONS(5), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(286), 1,
      sym__new_line,
    STATE(123), 1,
      sym_http_version,
  [1384] = 2,
    ACTIONS(288), 1,
      sym__new_line,
    ACTIONS(223), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1392] = 3,
    ACTIONS(9), 1,
      sym_scheme,
    ACTIONS(290), 1,
      sym_variable_ref,
    STATE(94), 1,
      sym_url,
  [1402] = 3,
    ACTIONS(292), 1,
      anon_sym_COMMA,
    ACTIONS(294), 1,
      anon_sym_RBRACK,
    STATE(101), 1,
      aux_sym__json_list_values_repeat1,
  [1412] = 1,
    ACTIONS(208), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__new_line,
  [1418] = 3,
    ACTIONS(258), 1,
      anon_sym_RBRACK,
    ACTIONS(296), 1,
      anon_sym_COMMA,
    STATE(99), 1,
      aux_sym__json_list_values_repeat1,
  [1428] = 2,
    ACTIONS(301), 1,
      sym__new_line,
    ACTIONS(299), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1436] = 3,
    ACTIONS(292), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      anon_sym_RBRACK,
    STATE(99), 1,
      aux_sym__json_list_values_repeat1,
  [1446] = 1,
    ACTIONS(305), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__new_line,
  [1452] = 3,
    ACTIONS(307), 1,
      anon_sym_AMP,
    ACTIONS(310), 1,
      sym__new_line,
    STATE(103), 1,
      aux_sym_url_encoded_body_repeat1,
  [1462] = 3,
    ACTIONS(266), 1,
      anon_sym_AMP,
    ACTIONS(312), 1,
      sym__new_line,
    STATE(83), 1,
      aux_sym_url_encoded_body_repeat1,
  [1472] = 2,
    STATE(30), 1,
      aux_sym__identifier,
    ACTIONS(151), 2,
      sym_variable_ref,
      aux_sym__identifier_token1,
  [1480] = 1,
    ACTIONS(299), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1485] = 1,
    ACTIONS(314), 2,
      sym_status_code,
      sym__new_line,
  [1490] = 1,
    ACTIONS(316), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1495] = 1,
    ACTIONS(318), 2,
      sym_variable_ref,
      sym_domain,
  [1500] = 1,
    ACTIONS(310), 2,
      anon_sym_AMP,
      sym__new_line,
  [1505] = 1,
    ACTIONS(119), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1510] = 1,
    ACTIONS(320), 2,
      anon_sym_AMP,
      sym__new_line,
  [1515] = 1,
    ACTIONS(125), 2,
      sym_scheme,
      sym_variable_ref,
  [1520] = 1,
    ACTIONS(322), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1525] = 1,
    ACTIONS(104), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1530] = 1,
    ACTIONS(129), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [1535] = 2,
    ACTIONS(324), 1,
      anon_sym_COLON,
    ACTIONS(326), 1,
      anon_sym_EQ,
  [1542] = 1,
    ACTIONS(328), 1,
      anon_sym_RBRACE,
  [1546] = 1,
    ACTIONS(330), 1,
      sym__new_line,
  [1550] = 1,
    ACTIONS(332), 1,
      sym__new_line,
  [1554] = 1,
    ACTIONS(334), 1,
      aux_sym_http_version_token1,
  [1558] = 1,
    ACTIONS(336), 1,
      sym__new_line,
  [1562] = 1,
    ACTIONS(338), 1,
      sym__new_line,
  [1566] = 1,
    ACTIONS(324), 1,
      anon_sym_COLON,
  [1570] = 1,
    ACTIONS(340), 1,
      anon_sym_COLON,
  [1574] = 1,
    ACTIONS(342), 1,
      sym__new_line,
  [1578] = 1,
    ACTIONS(326), 1,
      anon_sym_EQ,
  [1582] = 1,
    ACTIONS(344), 1,
      anon_sym_RBRACK,
  [1586] = 1,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
  [1590] = 1,
    ACTIONS(346), 1,
      anon_sym_COLON,
  [1594] = 1,
    ACTIONS(348), 1,
      sym_status_code,
  [1598] = 1,
    ACTIONS(350), 1,
      sym__new_line,
  [1602] = 1,
    ACTIONS(352), 1,
      ts_builtin_sym_end,
  [1606] = 1,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
  [1610] = 1,
    ACTIONS(354), 1,
      anon_sym_EQ,
  [1614] = 1,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
  [1618] = 1,
    ACTIONS(356), 1,
      anon_sym_RBRACE,
  [1622] = 1,
    ACTIONS(358), 1,
      anon_sym_DQUOTE,
  [1626] = 1,
    ACTIONS(360), 1,
      sym__new_line,
  [1630] = 1,
    ACTIONS(362), 1,
      sym__new_line,
  [1634] = 1,
    ACTIONS(364), 1,
      sym__new_line,
  [1638] = 1,
    ACTIONS(366), 1,
      anon_sym_COLON_SLASH_SLASH,
  [1642] = 1,
    ACTIONS(286), 1,
      sym__new_line,
  [1646] = 1,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
  [1650] = 1,
    ACTIONS(368), 1,
      sym__new_line,
  [1654] = 1,
    ACTIONS(75), 1,
      anon_sym_RBRACK,
  [1658] = 1,
    ACTIONS(370), 1,
      anon_sym_RBRACE,
  [1662] = 1,
    ACTIONS(372), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 134,
  [SMALL_STATE(6)] = 174,
  [SMALL_STATE(7)] = 207,
  [SMALL_STATE(8)] = 236,
  [SMALL_STATE(9)] = 269,
  [SMALL_STATE(10)] = 299,
  [SMALL_STATE(11)] = 329,
  [SMALL_STATE(12)] = 356,
  [SMALL_STATE(13)] = 380,
  [SMALL_STATE(14)] = 406,
  [SMALL_STATE(15)] = 430,
  [SMALL_STATE(16)] = 454,
  [SMALL_STATE(17)] = 478,
  [SMALL_STATE(18)] = 493,
  [SMALL_STATE(19)] = 511,
  [SMALL_STATE(20)] = 534,
  [SMALL_STATE(21)] = 557,
  [SMALL_STATE(22)] = 572,
  [SMALL_STATE(23)] = 587,
  [SMALL_STATE(24)] = 610,
  [SMALL_STATE(25)] = 631,
  [SMALL_STATE(26)] = 654,
  [SMALL_STATE(27)] = 666,
  [SMALL_STATE(28)] = 678,
  [SMALL_STATE(29)] = 696,
  [SMALL_STATE(30)] = 712,
  [SMALL_STATE(31)] = 728,
  [SMALL_STATE(32)] = 747,
  [SMALL_STATE(33)] = 762,
  [SMALL_STATE(34)] = 771,
  [SMALL_STATE(35)] = 790,
  [SMALL_STATE(36)] = 807,
  [SMALL_STATE(37)] = 816,
  [SMALL_STATE(38)] = 833,
  [SMALL_STATE(39)] = 842,
  [SMALL_STATE(40)] = 857,
  [SMALL_STATE(41)] = 871,
  [SMALL_STATE(42)] = 885,
  [SMALL_STATE(43)] = 901,
  [SMALL_STATE(44)] = 913,
  [SMALL_STATE(45)] = 929,
  [SMALL_STATE(46)] = 943,
  [SMALL_STATE(47)] = 955,
  [SMALL_STATE(48)] = 962,
  [SMALL_STATE(49)] = 973,
  [SMALL_STATE(50)] = 982,
  [SMALL_STATE(51)] = 989,
  [SMALL_STATE(52)] = 996,
  [SMALL_STATE(53)] = 1003,
  [SMALL_STATE(54)] = 1014,
  [SMALL_STATE(55)] = 1021,
  [SMALL_STATE(56)] = 1032,
  [SMALL_STATE(57)] = 1043,
  [SMALL_STATE(58)] = 1050,
  [SMALL_STATE(59)] = 1061,
  [SMALL_STATE(60)] = 1072,
  [SMALL_STATE(61)] = 1083,
  [SMALL_STATE(62)] = 1094,
  [SMALL_STATE(63)] = 1101,
  [SMALL_STATE(64)] = 1108,
  [SMALL_STATE(65)] = 1119,
  [SMALL_STATE(66)] = 1126,
  [SMALL_STATE(67)] = 1133,
  [SMALL_STATE(68)] = 1140,
  [SMALL_STATE(69)] = 1153,
  [SMALL_STATE(70)] = 1164,
  [SMALL_STATE(71)] = 1175,
  [SMALL_STATE(72)] = 1182,
  [SMALL_STATE(73)] = 1189,
  [SMALL_STATE(74)] = 1202,
  [SMALL_STATE(75)] = 1213,
  [SMALL_STATE(76)] = 1220,
  [SMALL_STATE(77)] = 1231,
  [SMALL_STATE(78)] = 1242,
  [SMALL_STATE(79)] = 1255,
  [SMALL_STATE(80)] = 1262,
  [SMALL_STATE(81)] = 1270,
  [SMALL_STATE(82)] = 1278,
  [SMALL_STATE(83)] = 1288,
  [SMALL_STATE(84)] = 1298,
  [SMALL_STATE(85)] = 1306,
  [SMALL_STATE(86)] = 1314,
  [SMALL_STATE(87)] = 1322,
  [SMALL_STATE(88)] = 1328,
  [SMALL_STATE(89)] = 1336,
  [SMALL_STATE(90)] = 1342,
  [SMALL_STATE(91)] = 1348,
  [SMALL_STATE(92)] = 1356,
  [SMALL_STATE(93)] = 1364,
  [SMALL_STATE(94)] = 1374,
  [SMALL_STATE(95)] = 1384,
  [SMALL_STATE(96)] = 1392,
  [SMALL_STATE(97)] = 1402,
  [SMALL_STATE(98)] = 1412,
  [SMALL_STATE(99)] = 1418,
  [SMALL_STATE(100)] = 1428,
  [SMALL_STATE(101)] = 1436,
  [SMALL_STATE(102)] = 1446,
  [SMALL_STATE(103)] = 1452,
  [SMALL_STATE(104)] = 1462,
  [SMALL_STATE(105)] = 1472,
  [SMALL_STATE(106)] = 1480,
  [SMALL_STATE(107)] = 1485,
  [SMALL_STATE(108)] = 1490,
  [SMALL_STATE(109)] = 1495,
  [SMALL_STATE(110)] = 1500,
  [SMALL_STATE(111)] = 1505,
  [SMALL_STATE(112)] = 1510,
  [SMALL_STATE(113)] = 1515,
  [SMALL_STATE(114)] = 1520,
  [SMALL_STATE(115)] = 1525,
  [SMALL_STATE(116)] = 1530,
  [SMALL_STATE(117)] = 1535,
  [SMALL_STATE(118)] = 1542,
  [SMALL_STATE(119)] = 1546,
  [SMALL_STATE(120)] = 1550,
  [SMALL_STATE(121)] = 1554,
  [SMALL_STATE(122)] = 1558,
  [SMALL_STATE(123)] = 1562,
  [SMALL_STATE(124)] = 1566,
  [SMALL_STATE(125)] = 1570,
  [SMALL_STATE(126)] = 1574,
  [SMALL_STATE(127)] = 1578,
  [SMALL_STATE(128)] = 1582,
  [SMALL_STATE(129)] = 1586,
  [SMALL_STATE(130)] = 1590,
  [SMALL_STATE(131)] = 1594,
  [SMALL_STATE(132)] = 1598,
  [SMALL_STATE(133)] = 1602,
  [SMALL_STATE(134)] = 1606,
  [SMALL_STATE(135)] = 1610,
  [SMALL_STATE(136)] = 1614,
  [SMALL_STATE(137)] = 1618,
  [SMALL_STATE(138)] = 1622,
  [SMALL_STATE(139)] = 1626,
  [SMALL_STATE(140)] = 1630,
  [SMALL_STATE(141)] = 1634,
  [SMALL_STATE(142)] = 1638,
  [SMALL_STATE(143)] = 1642,
  [SMALL_STATE(144)] = 1646,
  [SMALL_STATE(145)] = 1650,
  [SMALL_STATE(146)] = 1654,
  [SMALL_STATE(147)] = 1658,
  [SMALL_STATE(148)] = 1662,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(121),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(113),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(142),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(21),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 1),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(21),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__identifier, 2),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier, 2), SHIFT_REPEAT(18),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__identifier, 2), SHIFT_REPEAT(18),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 5),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__identifier, 2), SHIFT_REPEAT(22),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status_line, 4),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status_line, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 2, .production_id = 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(105),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 1, .production_id = 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 5),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 4),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(55),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 2), SHIFT_REPEAT(78),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2), SHIFT_REPEAT(45),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 5),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rest_of_line_repeat1, 2), SHIFT_REPEAT(74),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rest_of_line_repeat1, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_url, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_body, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3, .production_id = 5),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3, .production_id = 4),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_url, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 1),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2), SHIFT_REPEAT(11),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 3),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_url_encoded_body_repeat1, 2), SHIFT_REPEAT(40),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_encoded_body_repeat1, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_body, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 6),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_key_value, 3, .production_id = 5),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 4),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason_phrase, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_url, 3),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_key, 3),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [352] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 2),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_http2() {
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
