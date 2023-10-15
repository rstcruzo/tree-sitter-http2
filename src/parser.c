#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 121
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 61
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
  sym__identifier = 9,
  anon_sym_SLASH = 10,
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
  sym__kill_leading_whitespace = 21,
  sym_rest_of_line = 22,
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
  sym_json_list = 47,
  sym__json_list_values = 48,
  sym_url_encoded_body = 49,
  sym_url_encoded_key_value = 50,
  sym_variable_declaration = 51,
  sym_identifier = 52,
  sym_string = 53,
  aux_sym_source_file_repeat1 = 54,
  aux_sym_request_repeat1 = 55,
  aux_sym_path_repeat1 = 56,
  aux_sym_query_params_repeat1 = 57,
  aux_sym__key_value_list_repeat1 = 58,
  aux_sym__json_list_values_repeat1 = 59,
  aux_sym_url_encoded_body_repeat1 = 60,
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
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COMMA] = ",",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_AT] = "@",
  [sym_variable_ref] = "variable_ref",
  [sym__kill_leading_whitespace] = "_kill_leading_whitespace",
  [sym_rest_of_line] = "rest_of_line",
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
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_query_params_repeat1] = "query_params_repeat1",
  [aux_sym__key_value_list_repeat1] = "_key_value_list_repeat1",
  [aux_sym__json_list_values_repeat1] = "_json_list_values_repeat1",
  [aux_sym_url_encoded_body_repeat1] = "url_encoded_body_repeat1",
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
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_AT] = anon_sym_AT,
  [sym_variable_ref] = sym_variable_ref,
  [sym__kill_leading_whitespace] = sym__kill_leading_whitespace,
  [sym_rest_of_line] = sym_rest_of_line,
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
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_query_params_repeat1] = aux_sym_query_params_repeat1,
  [aux_sym__key_value_list_repeat1] = aux_sym__key_value_list_repeat1,
  [aux_sym__json_list_values_repeat1] = aux_sym__json_list_values_repeat1,
  [aux_sym_url_encoded_body_repeat1] = aux_sym_url_encoded_body_repeat1,
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
  [sym_rest_of_line] = {
    .visible = true,
    .named = true,
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
  [66] = 13,
  [67] = 22,
  [68] = 68,
  [69] = 21,
  [70] = 25,
  [71] = 71,
  [72] = 16,
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
  [85] = 75,
  [86] = 58,
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
  [110] = 107,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 104,
  [115] = 115,
  [116] = 116,
  [117] = 91,
  [118] = 105,
  [119] = 97,
  [120] = 120,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(126);
      if (lookahead == '"') ADVANCE(259);
      if (lookahead == '&') ADVANCE(254);
      if (lookahead == ',') ADVANCE(258);
      if (lookahead == '.') ADVANCE(129);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == ':') ADVANCE(133);
      if (lookahead == '=') ADVANCE(255);
      if (lookahead == '?') ADVANCE(137);
      if (lookahead == '@') ADVANCE(262);
      if (lookahead == 'C') ADVANCE(170);
      if (lookahead == 'D') ADVANCE(158);
      if (lookahead == 'G') ADVANCE(159);
      if (lookahead == 'H') ADVANCE(160);
      if (lookahead == 'O') ADVANCE(173);
      if (lookahead == 'P') ADVANCE(153);
      if (lookahead == 'T') ADVANCE(174);
      if (lookahead == '[') ADVANCE(260);
      if (lookahead == ']') ADVANCE(261);
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 'c') ADVANCE(183);
      if (lookahead == 'd') ADVANCE(185);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == 'f') ADVANCE(186);
      if (lookahead == 'g') ADVANCE(204);
      if (lookahead == 'h') ADVANCE(149);
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead == 'm') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(210);
      if (lookahead == 'p') ADVANCE(188);
      if (lookahead == 'r') ADVANCE(206);
      if (lookahead == 's') ADVANCE(201);
      if (lookahead == 't') ADVANCE(189);
      if (lookahead == 'u') ADVANCE(234);
      if (lookahead == 'w') ADVANCE(237);
      if (lookahead == '{') ADVANCE(256);
      if (lookahead == '}') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '{') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(259);
      if (lookahead == '&') ADVANCE(254);
      if (lookahead == ',') ADVANCE(258);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == '?') ADVANCE(137);
      if (lookahead == 'H') ADVANCE(46);
      if (lookahead == '}') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(280);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(259);
      if (lookahead == '&') ADVANCE(254);
      if (lookahead == ',') ADVANCE(258);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == '?') ADVANCE(137);
      if (lookahead == 'H') ADVANCE(46);
      if (lookahead == '}') ADVANCE(257);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(112);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(136);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(127);
      END_STATE();
    case 9:
      if (lookahead == '1') ADVANCE(138);
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '2') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == '3') ADVANCE(11);
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 13:
      if (lookahead == '3') ADVANCE(138);
      END_STATE();
    case 14:
      if (lookahead == '?') ADVANCE(137);
      if (lookahead == 'H') ADVANCE(181);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(279);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 15:
      if (lookahead == '?') ADVANCE(137);
      if (lookahead == 'H') ADVANCE(181);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(44);
      if (lookahead == 'O') ADVANCE(40);
      if (lookahead == 'U') ADVANCE(42);
      END_STATE();
    case 19:
      if (lookahead == 'C') ADVANCE(42);
      END_STATE();
    case 20:
      if (lookahead == 'C') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == 'C') ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == 'D') ADVANCE(134);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(42);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(16);
      if (lookahead == 'T') ADVANCE(45);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(134);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(19);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(47);
      END_STATE();
    case 29:
      if (lookahead == 'H') ADVANCE(134);
      END_STATE();
    case 30:
      if (lookahead == 'I') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'L') ADVANCE(28);
      END_STATE();
    case 32:
      if (lookahead == 'N') ADVANCE(34);
      END_STATE();
    case 33:
      if (lookahead == 'N') ADVANCE(41);
      END_STATE();
    case 34:
      if (lookahead == 'N') ADVANCE(27);
      END_STATE();
    case 35:
      if (lookahead == 'O') ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == 'O') ADVANCE(33);
      END_STATE();
    case 37:
      if (lookahead == 'P') ADVANCE(8);
      END_STATE();
    case 38:
      if (lookahead == 'P') ADVANCE(43);
      END_STATE();
    case 39:
      if (lookahead == 'R') ADVANCE(17);
      END_STATE();
    case 40:
      if (lookahead == 'S') ADVANCE(42);
      END_STATE();
    case 41:
      if (lookahead == 'S') ADVANCE(134);
      END_STATE();
    case 42:
      if (lookahead == 'T') ADVANCE(134);
      END_STATE();
    case 43:
      if (lookahead == 'T') ADVANCE(30);
      END_STATE();
    case 44:
      if (lookahead == 'T') ADVANCE(20);
      END_STATE();
    case 45:
      if (lookahead == 'T') ADVANCE(37);
      END_STATE();
    case 46:
      if (lookahead == 'T') ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead == 'T') ADVANCE(26);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead == 'k') ADVANCE(62);
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 58:
      if (lookahead == 'b') ADVANCE(91);
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 'm') ADVANCE(101);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(273);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 73:
      if (lookahead == 'f') ADVANCE(88);
      END_STATE();
    case 74:
      if (lookahead == 'g') ADVANCE(138);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 78:
      if (lookahead == 'k') ADVANCE(66);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(93);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(98);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(138);
      END_STATE();
    case 94:
      if (lookahead == 'p') ADVANCE(142);
      END_STATE();
    case 95:
      if (lookahead == 'p') ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'p') ADVANCE(97);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == 'w') ADVANCE(101);
      END_STATE();
    case 97:
      if (lookahead == 'p') ADVANCE(97);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == 'w') ADVANCE(101);
      END_STATE();
    case 98:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(104);
      if (lookahead == 't') ADVANCE(59);
      if (lookahead == 'w') ADVANCE(101);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 113:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 114:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 115:
      if (lookahead == 'x') ADVANCE(55);
      END_STATE();
    case 116:
      if (lookahead == 'y') ADVANCE(109);
      END_STATE();
    case 117:
      if (lookahead == '{') ADVANCE(120);
      END_STATE();
    case 118:
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(118)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 119:
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(119)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 120:
      if (lookahead == '}') ADVANCE(121);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 121:
      if (lookahead == '}') ADVANCE(263);
      END_STATE();
    case 122:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(122)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 123:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(123)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 124:
      if (eof) ADVANCE(126);
      if (lookahead == '"') ADVANCE(259);
      if (lookahead == '&') ADVANCE(254);
      if (lookahead == ',') ADVANCE(258);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == '=') ADVANCE(255);
      if (lookahead == '@') ADVANCE(262);
      if (lookahead == 'C') ADVANCE(35);
      if (lookahead == 'D') ADVANCE(23);
      if (lookahead == 'G') ADVANCE(24);
      if (lookahead == 'H') ADVANCE(25);
      if (lookahead == 'O') ADVANCE(38);
      if (lookahead == 'P') ADVANCE(18);
      if (lookahead == 'T') ADVANCE(39);
      if (lookahead == '[') ADVANCE(260);
      if (lookahead == ']') ADVANCE(261);
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(50);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(51);
      if (lookahead == 'g') ADVANCE(69);
      if (lookahead == 'h') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead == 'm') ADVANCE(56);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(71);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(99);
      if (lookahead == 'w') ADVANCE(102);
      if (lookahead == '{') ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(124)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 125:
      if (eof) ADVANCE(126);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '@') ADVANCE(262);
      if (lookahead == 'C') ADVANCE(170);
      if (lookahead == 'D') ADVANCE(158);
      if (lookahead == 'G') ADVANCE(159);
      if (lookahead == 'H') ADVANCE(160);
      if (lookahead == 'O') ADVANCE(173);
      if (lookahead == 'P') ADVANCE(153);
      if (lookahead == 'T') ADVANCE(174);
      if (lookahead == '[') ADVANCE(260);
      if (lookahead == '{') ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(125)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_status_code);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '/') ADVANCE(7);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_method_token1);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_scheme);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 'h') ADVANCE(143);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 'h') ADVANCE(138);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 's') ADVANCE(143);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(247);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '/') ADVANCE(127);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '1') ADVANCE(143);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '1') ADVANCE(146);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '2') ADVANCE(150);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '3') ADVANCE(148);
      if (lookahead == 't') ADVANCE(245);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '3') ADVANCE(143);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(157);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(156);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(179);
      if (lookahead == 'O') ADVANCE(175);
      if (lookahead == 'U') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(164);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(161);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(135);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(166);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(151);
      if (lookahead == 'T') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(135);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(154);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(135);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(163);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(176);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(162);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(167);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(168);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(145);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(152);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(135);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(135);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(165);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(155);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(161);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(228);
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == 'o') ADVANCE(192);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(246);
      if (lookahead == 'n') ADVANCE(236);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'i') ADVANCE(217);
      if (lookahead == 't') ADVANCE(228);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(251);
      if (lookahead == 'k') ADVANCE(197);
      if (lookahead == 'r') ADVANCE(203);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(209);
      if (lookahead == 'e') ADVANCE(214);
      if (lookahead == 'r') ADVANCE(249);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(212);
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(230);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(226);
      if (lookahead == 'c') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(228);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(235);
      if (lookahead == 's') ADVANCE(240);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(242);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(238);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(143);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(252);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead == 'm') ADVANCE(236);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(223);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(143);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(224);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(218);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(202);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(222);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(241);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(227);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(200);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(244);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(143);
      if (lookahead == 'n') ADVANCE(208);
      if (lookahead == 'p') ADVANCE(228);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(143);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(143);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(221);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(213);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(248);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(143);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(141);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(231);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(232);
      if (lookahead == 's') ADVANCE(239);
      if (lookahead == 't') ADVANCE(194);
      if (lookahead == 'w') ADVANCE(236);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(232);
      if (lookahead == 't') ADVANCE(194);
      if (lookahead == 'w') ADVANCE(236);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(217);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(221);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(207);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(143);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(141);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(239);
      if (lookahead == 't') ADVANCE(194);
      if (lookahead == 'w') ADVANCE(236);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(211);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(199);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(223);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(229);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(187);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(225);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(242);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(199);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(190);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(244);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(120);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_variable_ref);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__kill_leading_whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '{') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '{') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '}') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '}') ADVANCE(267);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_domain);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(275);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(278);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(278);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(278);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(276);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(278);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(278);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__new_line);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__new_line);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(280);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 124},
  [2] = {.lex_state = 125},
  [3] = {.lex_state = 125},
  [4] = {.lex_state = 124},
  [5] = {.lex_state = 124},
  [6] = {.lex_state = 124},
  [7] = {.lex_state = 124},
  [8] = {.lex_state = 125},
  [9] = {.lex_state = 124},
  [10] = {.lex_state = 124},
  [11] = {.lex_state = 125},
  [12] = {.lex_state = 125},
  [13] = {.lex_state = 124},
  [14] = {.lex_state = 125},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 124},
  [17] = {.lex_state = 124},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 124},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 124},
  [22] = {.lex_state = 124},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 124},
  [25] = {.lex_state = 124},
  [26] = {.lex_state = 124},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 124},
  [29] = {.lex_state = 125},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 124},
  [32] = {.lex_state = 124},
  [33] = {.lex_state = 124},
  [34] = {.lex_state = 14},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 124},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 118},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 118},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 118},
  [53] = {.lex_state = 118},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 118},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 124},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 274},
  [76] = {.lex_state = 124},
  [77] = {.lex_state = 118},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 264},
  [80] = {.lex_state = 124},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 118},
  [85] = {.lex_state = 274},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 119},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 124},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 124},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 264},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 264},
  [103] = {.lex_state = 125},
  [104] = {.lex_state = 122},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 124},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 123},
  [111] = {.lex_state = 123},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 122},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
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
    [sym_number] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(113),
    [sym_request] = STATE(4),
    [sym_method_url] = STATE(112),
    [sym_response] = STATE(4),
    [sym_status_line] = STATE(12),
    [sym_http_version] = STATE(111),
    [sym_method] = STATE(68),
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
  [0] = 11,
    ACTIONS(13), 1,
      aux_sym_method_token1,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    STATE(8), 1,
      aux_sym_request_repeat1,
    STATE(24), 1,
      sym_url_encoded_key_value,
    STATE(32), 1,
      sym_json_list,
    STATE(80), 1,
      sym_identifier,
    STATE(89), 1,
      sym_header,
    STATE(40), 3,
      sym__body,
      sym_json_body,
      sym_url_encoded_body,
    ACTIONS(11), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [39] = 11,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      aux_sym_method_token1,
    STATE(2), 1,
      aux_sym_request_repeat1,
    STATE(24), 1,
      sym_url_encoded_key_value,
    STATE(32), 1,
      sym_json_list,
    STATE(80), 1,
      sym_identifier,
    STATE(89), 1,
      sym_header,
    STATE(33), 3,
      sym__body,
      sym_json_body,
      sym_url_encoded_body,
    ACTIONS(21), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [78] = 9,
    ACTIONS(5), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym_status_line,
    STATE(68), 1,
      sym_method,
    STATE(111), 1,
      sym_http_version,
    STATE(112), 1,
      sym_method_url,
    ACTIONS(7), 2,
      aux_sym_method_token1,
      sym_variable_ref,
    STATE(5), 4,
      sym_request,
      sym_response,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [110] = 9,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(35), 1,
      anon_sym_AT,
    STATE(12), 1,
      sym_status_line,
    STATE(68), 1,
      sym_method,
    STATE(111), 1,
      sym_http_version,
    STATE(112), 1,
      sym_method_url,
    ACTIONS(32), 2,
      aux_sym_method_token1,
      sym_variable_ref,
    STATE(5), 4,
      sym_request,
      sym_response,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [142] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(38), 1,
      anon_sym_DQUOTE,
    ACTIONS(40), 1,
      anon_sym_RBRACK,
    STATE(118), 1,
      sym__json_list_values,
    ACTIONS(42), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(56), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [169] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(38), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      anon_sym_RBRACK,
    STATE(105), 1,
      sym__json_list_values,
    ACTIONS(42), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(56), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [196] = 7,
    ACTIONS(50), 1,
      sym__identifier,
    ACTIONS(53), 1,
      sym_variable_ref,
    STATE(8), 1,
      aux_sym_request_repeat1,
    STATE(89), 1,
      sym_header,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(48), 2,
      aux_sym_method_token1,
      anon_sym_LBRACE,
    ACTIONS(46), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_LBRACK,
      anon_sym_AT,
  [222] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(38), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(82), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [243] = 5,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 3,
      sym_variable_ref,
      sym_number,
      sym_boolean,
    STATE(61), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [264] = 6,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(68), 1,
      aux_sym_method_token1,
    STATE(8), 1,
      aux_sym_request_repeat1,
    STATE(89), 1,
      sym_header,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(66), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [286] = 6,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(72), 1,
      aux_sym_method_token1,
    STATE(11), 1,
      aux_sym_request_repeat1,
    STATE(89), 1,
      sym_header,
    STATE(108), 1,
      sym_identifier,
    ACTIONS(70), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [308] = 1,
    ACTIONS(74), 9,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_COLON,
      aux_sym_method_token1,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_variable_ref,
  [320] = 2,
    ACTIONS(48), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
    ACTIONS(46), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_LBRACK,
      anon_sym_AT,
      sym_variable_ref,
  [333] = 6,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(78), 1,
      sym_variable_ref,
    STATE(46), 1,
      sym_query_param,
    STATE(78), 1,
      sym_query_params,
    STATE(115), 1,
      sym_identifier,
    ACTIONS(76), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [353] = 1,
    ACTIONS(80), 7,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AT,
      sym_variable_ref,
  [363] = 3,
    ACTIONS(84), 1,
      anon_sym_AMP,
    STATE(17), 1,
      aux_sym_url_encoded_body_repeat1,
    ACTIONS(82), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [377] = 6,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(78), 1,
      sym_variable_ref,
    STATE(46), 1,
      sym_query_param,
    STATE(74), 1,
      sym_query_params,
    STATE(115), 1,
      sym_identifier,
    ACTIONS(87), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [397] = 3,
    ACTIONS(91), 1,
      anon_sym_AMP,
    STATE(17), 1,
      aux_sym_url_encoded_body_repeat1,
    ACTIONS(89), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [411] = 6,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(78), 1,
      sym_variable_ref,
    STATE(46), 1,
      sym_query_param,
    STATE(81), 1,
      sym_query_params,
    STATE(115), 1,
      sym_identifier,
    ACTIONS(93), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [431] = 1,
    ACTIONS(95), 7,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AT,
      sym_variable_ref,
  [441] = 1,
    ACTIONS(97), 7,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AT,
      sym_variable_ref,
  [451] = 6,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(78), 1,
      sym_variable_ref,
    STATE(46), 1,
      sym_query_param,
    STATE(73), 1,
      sym_query_params,
    STATE(115), 1,
      sym_identifier,
    ACTIONS(99), 2,
      anon_sym_HTTP_SLASH,
      sym__new_line,
  [471] = 3,
    ACTIONS(91), 1,
      anon_sym_AMP,
    STATE(19), 1,
      aux_sym_url_encoded_body_repeat1,
    ACTIONS(101), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [485] = 1,
    ACTIONS(103), 7,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AT,
      sym_variable_ref,
  [495] = 1,
    ACTIONS(105), 6,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AMP,
      anon_sym_AT,
      sym_variable_ref,
  [504] = 6,
    ACTIONS(107), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(109), 1,
      anon_sym_QMARK,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(113), 1,
      sym__new_line,
    STATE(35), 1,
      aux_sym_path_repeat1,
    STATE(55), 1,
      sym_path,
  [523] = 1,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AMP,
      anon_sym_AT,
      sym_variable_ref,
  [532] = 2,
    ACTIONS(117), 2,
      aux_sym_method_token1,
      sym__identifier,
    ACTIONS(115), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [543] = 6,
    ACTIONS(87), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(119), 1,
      anon_sym_QMARK,
    ACTIONS(121), 1,
      sym__new_line,
    STATE(35), 1,
      aux_sym_path_repeat1,
    STATE(54), 1,
      sym_path,
  [562] = 1,
    ACTIONS(123), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [570] = 1,
    ACTIONS(125), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [578] = 1,
    ACTIONS(11), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [586] = 2,
    ACTIONS(129), 2,
      sym__identifier,
      sym_variable_ref,
    ACTIONS(127), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
      sym__new_line,
  [596] = 4,
    ACTIONS(131), 1,
      anon_sym_SLASH,
    ACTIONS(133), 1,
      sym__new_line,
    STATE(37), 1,
      aux_sym_path_repeat1,
    ACTIONS(127), 2,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
  [610] = 2,
    ACTIONS(129), 2,
      sym__identifier,
      sym_variable_ref,
    ACTIONS(135), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
      sym__new_line,
  [620] = 4,
    ACTIONS(139), 1,
      anon_sym_SLASH,
    ACTIONS(142), 1,
      sym__new_line,
    STATE(37), 1,
      aux_sym_path_repeat1,
    ACTIONS(137), 2,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
  [634] = 5,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_json_key_value,
    STATE(90), 1,
      sym__json_key,
    STATE(91), 1,
      sym__key_value_list,
  [650] = 5,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      sym_json_key_value,
    STATE(90), 1,
      sym__json_key,
    STATE(117), 1,
      sym__key_value_list,
  [666] = 1,
    ACTIONS(150), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [674] = 4,
    ACTIONS(152), 1,
      anon_sym_DQUOTE,
    ACTIONS(154), 1,
      sym__new_line,
    STATE(60), 1,
      sym_json_key_value,
    STATE(90), 1,
      sym__json_key,
  [687] = 4,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(160), 1,
      sym__new_line,
    STATE(43), 1,
      aux_sym__key_value_list_repeat1,
  [700] = 4,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(167), 1,
      sym__new_line,
    STATE(43), 1,
      aux_sym__key_value_list_repeat1,
  [713] = 4,
    ACTIONS(169), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(171), 1,
      anon_sym_AMP,
    ACTIONS(174), 1,
      sym__new_line,
    STATE(44), 1,
      aux_sym_query_params_repeat1,
  [726] = 4,
    ACTIONS(176), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(178), 1,
      anon_sym_AMP,
    ACTIONS(180), 1,
      sym__new_line,
    STATE(44), 1,
      aux_sym_query_params_repeat1,
  [739] = 4,
    ACTIONS(178), 1,
      anon_sym_AMP,
    ACTIONS(182), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(184), 1,
      sym__new_line,
    STATE(45), 1,
      aux_sym_query_params_repeat1,
  [752] = 4,
    ACTIONS(186), 1,
      sym__identifier,
    ACTIONS(188), 1,
      sym_variable_ref,
    STATE(51), 1,
      sym_query_param,
    STATE(115), 1,
      sym_identifier,
  [765] = 4,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    ACTIONS(192), 1,
      sym__new_line,
    STATE(42), 1,
      aux_sym__key_value_list_repeat1,
  [778] = 4,
    ACTIONS(186), 1,
      sym__identifier,
    ACTIONS(194), 1,
      sym_variable_ref,
    STATE(28), 1,
      sym_url_encoded_key_value,
    STATE(106), 1,
      sym_identifier,
  [791] = 2,
    ACTIONS(142), 1,
      sym__new_line,
    ACTIONS(137), 3,
      anon_sym_HTTP_SLASH,
      anon_sym_QMARK,
      anon_sym_SLASH,
  [800] = 2,
    ACTIONS(174), 1,
      sym__new_line,
    ACTIONS(169), 2,
      anon_sym_HTTP_SLASH,
      anon_sym_AMP,
  [808] = 3,
    ACTIONS(186), 1,
      sym__identifier,
    ACTIONS(196), 1,
      sym_variable_ref,
    STATE(26), 1,
      sym_identifier,
  [818] = 3,
    ACTIONS(198), 1,
      sym__identifier,
    ACTIONS(200), 1,
      sym_variable_ref,
    STATE(64), 1,
      sym_identifier,
  [828] = 3,
    ACTIONS(93), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(202), 1,
      anon_sym_QMARK,
    ACTIONS(204), 1,
      sym__new_line,
  [838] = 3,
    ACTIONS(99), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(206), 1,
      anon_sym_QMARK,
    ACTIONS(208), 1,
      sym__new_line,
  [848] = 3,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    ACTIONS(212), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      aux_sym__json_list_values_repeat1,
  [858] = 3,
    ACTIONS(186), 1,
      sym__identifier,
    ACTIONS(214), 1,
      sym_variable_ref,
    STATE(116), 1,
      sym_identifier,
  [868] = 2,
    ACTIONS(218), 1,
      sym__new_line,
    ACTIONS(216), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [876] = 3,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    STATE(65), 1,
      sym_json_key_value,
    STATE(90), 1,
      sym__json_key,
  [886] = 2,
    ACTIONS(167), 1,
      sym__new_line,
    ACTIONS(162), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [894] = 2,
    ACTIONS(222), 1,
      sym__new_line,
    ACTIONS(220), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [902] = 3,
    ACTIONS(224), 1,
      anon_sym_COMMA,
    ACTIONS(227), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      aux_sym__json_list_values_repeat1,
  [912] = 3,
    ACTIONS(229), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(231), 1,
      sym__new_line,
    STATE(94), 1,
      sym_http_version,
  [922] = 2,
    ACTIONS(235), 1,
      sym__new_line,
    ACTIONS(233), 2,
      anon_sym_HTTP_SLASH,
      anon_sym_AMP,
  [930] = 2,
    ACTIONS(239), 1,
      sym__new_line,
    ACTIONS(237), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [938] = 2,
    ACTIONS(74), 1,
      sym__new_line,
    ACTIONS(241), 2,
      anon_sym_HTTP_SLASH,
      anon_sym_AMP,
  [946] = 2,
    ACTIONS(97), 1,
      sym__new_line,
    ACTIONS(243), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [954] = 3,
    ACTIONS(245), 1,
      sym_scheme,
    ACTIONS(247), 1,
      sym_variable_ref,
    STATE(63), 1,
      sym_url,
  [964] = 2,
    ACTIONS(95), 1,
      sym__new_line,
    ACTIONS(249), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [972] = 2,
    ACTIONS(103), 1,
      sym__new_line,
    ACTIONS(251), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [980] = 3,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    ACTIONS(253), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      aux_sym__json_list_values_repeat1,
  [990] = 2,
    ACTIONS(80), 1,
      sym__new_line,
    ACTIONS(255), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [998] = 2,
    ACTIONS(87), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(121), 1,
      sym__new_line,
  [1005] = 2,
    ACTIONS(93), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(204), 1,
      sym__new_line,
  [1012] = 1,
    ACTIONS(257), 2,
      sym_variable_ref,
      aux_sym_string_token1,
  [1017] = 1,
    ACTIONS(259), 2,
      sym_scheme,
      sym_variable_ref,
  [1022] = 2,
    ACTIONS(186), 1,
      sym__identifier,
    STATE(109), 1,
      sym_identifier,
  [1029] = 2,
    ACTIONS(261), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(263), 1,
      sym__new_line,
  [1036] = 2,
    ACTIONS(265), 1,
      sym__kill_leading_whitespace,
    STATE(96), 1,
      sym_reason_phrase,
  [1043] = 2,
    ACTIONS(267), 1,
      anon_sym_COLON,
    ACTIONS(269), 1,
      anon_sym_EQ,
  [1050] = 2,
    ACTIONS(76), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(271), 1,
      sym__new_line,
  [1057] = 1,
    ACTIONS(227), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1062] = 1,
    ACTIONS(273), 2,
      sym_variable_ref,
      sym_rest_of_line,
  [1067] = 1,
    ACTIONS(275), 2,
      sym__identifier,
      sym_variable_ref,
  [1072] = 1,
    ACTIONS(277), 2,
      sym_variable_ref,
      aux_sym_string_token1,
  [1077] = 1,
    ACTIONS(218), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1082] = 1,
    ACTIONS(279), 2,
      sym_variable_ref,
      sym_domain,
  [1087] = 1,
    ACTIONS(281), 1,
      sym_rest_of_line,
  [1091] = 1,
    ACTIONS(283), 1,
      sym__new_line,
  [1095] = 1,
    ACTIONS(285), 1,
      anon_sym_COLON,
  [1099] = 1,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
  [1103] = 1,
    ACTIONS(289), 1,
      sym_rest_of_line,
  [1107] = 1,
    ACTIONS(291), 1,
      anon_sym_COLON,
  [1111] = 1,
    ACTIONS(293), 1,
      sym__new_line,
  [1115] = 1,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
  [1119] = 1,
    ACTIONS(297), 1,
      sym__new_line,
  [1123] = 1,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
  [1127] = 1,
    ACTIONS(301), 1,
      sym__new_line,
  [1131] = 1,
    ACTIONS(303), 1,
      sym__kill_leading_whitespace,
  [1135] = 1,
    ACTIONS(305), 1,
      sym__new_line,
  [1139] = 1,
    ACTIONS(307), 1,
      sym__new_line,
  [1143] = 1,
    ACTIONS(309), 1,
      sym__kill_leading_whitespace,
  [1147] = 1,
    ACTIONS(311), 1,
      anon_sym_COLON_SLASH_SLASH,
  [1151] = 1,
    ACTIONS(313), 1,
      aux_sym_http_version_token1,
  [1155] = 1,
    ACTIONS(315), 1,
      anon_sym_RBRACK,
  [1159] = 1,
    ACTIONS(269), 1,
      anon_sym_EQ,
  [1163] = 1,
    ACTIONS(317), 1,
      sym__new_line,
  [1167] = 1,
    ACTIONS(267), 1,
      anon_sym_COLON,
  [1171] = 1,
    ACTIONS(319), 1,
      anon_sym_EQ,
  [1175] = 1,
    ACTIONS(317), 1,
      sym_status_code,
  [1179] = 1,
    ACTIONS(321), 1,
      sym_status_code,
  [1183] = 1,
    ACTIONS(323), 1,
      sym__new_line,
  [1187] = 1,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
  [1191] = 1,
    ACTIONS(327), 1,
      aux_sym_http_version_token1,
  [1195] = 1,
    ACTIONS(329), 1,
      anon_sym_EQ,
  [1199] = 1,
    ACTIONS(331), 1,
      anon_sym_DQUOTE,
  [1203] = 1,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
  [1207] = 1,
    ACTIONS(335), 1,
      anon_sym_RBRACK,
  [1211] = 1,
    ACTIONS(337), 1,
      anon_sym_DQUOTE,
  [1215] = 1,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 110,
  [SMALL_STATE(6)] = 142,
  [SMALL_STATE(7)] = 169,
  [SMALL_STATE(8)] = 196,
  [SMALL_STATE(9)] = 222,
  [SMALL_STATE(10)] = 243,
  [SMALL_STATE(11)] = 264,
  [SMALL_STATE(12)] = 286,
  [SMALL_STATE(13)] = 308,
  [SMALL_STATE(14)] = 320,
  [SMALL_STATE(15)] = 333,
  [SMALL_STATE(16)] = 353,
  [SMALL_STATE(17)] = 363,
  [SMALL_STATE(18)] = 377,
  [SMALL_STATE(19)] = 397,
  [SMALL_STATE(20)] = 411,
  [SMALL_STATE(21)] = 431,
  [SMALL_STATE(22)] = 441,
  [SMALL_STATE(23)] = 451,
  [SMALL_STATE(24)] = 471,
  [SMALL_STATE(25)] = 485,
  [SMALL_STATE(26)] = 495,
  [SMALL_STATE(27)] = 504,
  [SMALL_STATE(28)] = 523,
  [SMALL_STATE(29)] = 532,
  [SMALL_STATE(30)] = 543,
  [SMALL_STATE(31)] = 562,
  [SMALL_STATE(32)] = 570,
  [SMALL_STATE(33)] = 578,
  [SMALL_STATE(34)] = 586,
  [SMALL_STATE(35)] = 596,
  [SMALL_STATE(36)] = 610,
  [SMALL_STATE(37)] = 620,
  [SMALL_STATE(38)] = 634,
  [SMALL_STATE(39)] = 650,
  [SMALL_STATE(40)] = 666,
  [SMALL_STATE(41)] = 674,
  [SMALL_STATE(42)] = 687,
  [SMALL_STATE(43)] = 700,
  [SMALL_STATE(44)] = 713,
  [SMALL_STATE(45)] = 726,
  [SMALL_STATE(46)] = 739,
  [SMALL_STATE(47)] = 752,
  [SMALL_STATE(48)] = 765,
  [SMALL_STATE(49)] = 778,
  [SMALL_STATE(50)] = 791,
  [SMALL_STATE(51)] = 800,
  [SMALL_STATE(52)] = 808,
  [SMALL_STATE(53)] = 818,
  [SMALL_STATE(54)] = 828,
  [SMALL_STATE(55)] = 838,
  [SMALL_STATE(56)] = 848,
  [SMALL_STATE(57)] = 858,
  [SMALL_STATE(58)] = 868,
  [SMALL_STATE(59)] = 876,
  [SMALL_STATE(60)] = 886,
  [SMALL_STATE(61)] = 894,
  [SMALL_STATE(62)] = 902,
  [SMALL_STATE(63)] = 912,
  [SMALL_STATE(64)] = 922,
  [SMALL_STATE(65)] = 930,
  [SMALL_STATE(66)] = 938,
  [SMALL_STATE(67)] = 946,
  [SMALL_STATE(68)] = 954,
  [SMALL_STATE(69)] = 964,
  [SMALL_STATE(70)] = 972,
  [SMALL_STATE(71)] = 980,
  [SMALL_STATE(72)] = 990,
  [SMALL_STATE(73)] = 998,
  [SMALL_STATE(74)] = 1005,
  [SMALL_STATE(75)] = 1012,
  [SMALL_STATE(76)] = 1017,
  [SMALL_STATE(77)] = 1022,
  [SMALL_STATE(78)] = 1029,
  [SMALL_STATE(79)] = 1036,
  [SMALL_STATE(80)] = 1043,
  [SMALL_STATE(81)] = 1050,
  [SMALL_STATE(82)] = 1057,
  [SMALL_STATE(83)] = 1062,
  [SMALL_STATE(84)] = 1067,
  [SMALL_STATE(85)] = 1072,
  [SMALL_STATE(86)] = 1077,
  [SMALL_STATE(87)] = 1082,
  [SMALL_STATE(88)] = 1087,
  [SMALL_STATE(89)] = 1091,
  [SMALL_STATE(90)] = 1095,
  [SMALL_STATE(91)] = 1099,
  [SMALL_STATE(92)] = 1103,
  [SMALL_STATE(93)] = 1107,
  [SMALL_STATE(94)] = 1111,
  [SMALL_STATE(95)] = 1115,
  [SMALL_STATE(96)] = 1119,
  [SMALL_STATE(97)] = 1123,
  [SMALL_STATE(98)] = 1127,
  [SMALL_STATE(99)] = 1131,
  [SMALL_STATE(100)] = 1135,
  [SMALL_STATE(101)] = 1139,
  [SMALL_STATE(102)] = 1143,
  [SMALL_STATE(103)] = 1147,
  [SMALL_STATE(104)] = 1151,
  [SMALL_STATE(105)] = 1155,
  [SMALL_STATE(106)] = 1159,
  [SMALL_STATE(107)] = 1163,
  [SMALL_STATE(108)] = 1167,
  [SMALL_STATE(109)] = 1171,
  [SMALL_STATE(110)] = 1175,
  [SMALL_STATE(111)] = 1179,
  [SMALL_STATE(112)] = 1183,
  [SMALL_STATE(113)] = 1187,
  [SMALL_STATE(114)] = 1191,
  [SMALL_STATE(115)] = 1195,
  [SMALL_STATE(116)] = 1199,
  [SMALL_STATE(117)] = 1203,
  [SMALL_STATE(118)] = 1207,
  [SMALL_STATE(119)] = 1211,
  [SMALL_STATE(120)] = 1215,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(104),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(13),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(108),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 5),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_encoded_body_repeat1, 2),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_url_encoded_body_repeat1, 2), SHIFT_REPEAT(49),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_body, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_body, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_key_value, 3, .production_id = 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status_line, 4),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status_line, 4),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(84),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__key_value_list, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__key_value_list_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__key_value_list_repeat1, 2), SHIFT_REPEAT(41),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_params_repeat1, 2), SHIFT_REPEAT(47),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_params, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_params, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__key_value_list, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_key_value, 3, .production_id = 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3, .production_id = 1),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2), SHIFT_REPEAT(9),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_url, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 3, .production_id = 4),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3, .production_id = 4),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__key_value_list_repeat1, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_list, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_list, 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 6),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 6),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 5),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_key, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_url, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason_phrase, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [325] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 2),
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
