#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 118
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
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
  aux_sym_string_token1 = 25,
  sym__new_line = 26,
  sym_source_file = 27,
  sym_request = 28,
  sym_method_url = 29,
  sym_response = 30,
  sym_status_line = 31,
  sym_http_version = 32,
  sym_reason_phrase = 33,
  sym_header = 34,
  sym_method = 35,
  sym_url = 36,
  sym_path = 37,
  sym_query_params = 38,
  sym_query_param = 39,
  sym__body = 40,
  sym_json_body = 41,
  sym__key_value_list = 42,
  sym_json_key_value = 43,
  sym__json_key = 44,
  sym__json_value = 45,
  sym_json_list = 46,
  sym__json_list_values = 47,
  sym_url_encoded_body = 48,
  sym_url_encoded_key_value = 49,
  sym_variable_declaration = 50,
  sym_identifier = 51,
  sym_string = 52,
  aux_sym_source_file_repeat1 = 53,
  aux_sym_request_repeat1 = 54,
  aux_sym_path_repeat1 = 55,
  aux_sym_query_params_repeat1 = 56,
  aux_sym__key_value_list_repeat1 = 57,
  aux_sym__json_list_values_repeat1 = 58,
  aux_sym_url_encoded_body_repeat1 = 59,
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
  [32] = 31,
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
  [47] = 21,
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
  [64] = 18,
  [65] = 16,
  [66] = 15,
  [67] = 54,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 11,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 69,
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
  [114] = 98,
  [115] = 83,
  [116] = 107,
  [117] = 117,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(121);
      if (lookahead == '"') ADVANCE(249);
      if (lookahead == '&') ADVANCE(244);
      if (lookahead == ',') ADVANCE(248);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == '/') ADVANCE(243);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == '=') ADVANCE(245);
      if (lookahead == '?') ADVANCE(132);
      if (lookahead == '@') ADVANCE(252);
      if (lookahead == 'C') ADVANCE(165);
      if (lookahead == 'D') ADVANCE(153);
      if (lookahead == 'G') ADVANCE(154);
      if (lookahead == 'H') ADVANCE(155);
      if (lookahead == 'O') ADVANCE(168);
      if (lookahead == 'P') ADVANCE(148);
      if (lookahead == 'T') ADVANCE(169);
      if (lookahead == '[') ADVANCE(250);
      if (lookahead == ']') ADVANCE(251);
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'c') ADVANCE(177);
      if (lookahead == 'd') ADVANCE(179);
      if (lookahead == 'e') ADVANCE(240);
      if (lookahead == 'f') ADVANCE(202);
      if (lookahead == 'g') ADVANCE(196);
      if (lookahead == 'h') ADVANCE(144);
      if (lookahead == 'i') ADVANCE(211);
      if (lookahead == 'm') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(203);
      if (lookahead == 'p') ADVANCE(181);
      if (lookahead == 'r') ADVANCE(197);
      if (lookahead == 's') ADVANCE(193);
      if (lookahead == 't') ADVANCE(182);
      if (lookahead == 'u') ADVANCE(226);
      if (lookahead == 'w') ADVANCE(229);
      if (lookahead == '{') ADVANCE(246);
      if (lookahead == '}') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '{') ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(249);
      if (lookahead == '&') ADVANCE(244);
      if (lookahead == ',') ADVANCE(248);
      if (lookahead == '/') ADVANCE(243);
      if (lookahead == '?') ADVANCE(132);
      if (lookahead == '}') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(269);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(249);
      if (lookahead == '&') ADVANCE(244);
      if (lookahead == ',') ADVANCE(248);
      if (lookahead == '/') ADVANCE(243);
      if (lookahead == '?') ADVANCE(132);
      if (lookahead == '}') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(108);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(131);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(122);
      END_STATE();
    case 9:
      if (lookahead == '1') ADVANCE(133);
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '2') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == '3') ADVANCE(11);
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 13:
      if (lookahead == '3') ADVANCE(133);
      END_STATE();
    case 14:
      if (lookahead == '?') ADVANCE(132);
      if (lookahead == '{') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(268);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 15:
      if (lookahead == '?') ADVANCE(132);
      if (lookahead == '{') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
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
      if (lookahead == 'D') ADVANCE(129);
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
      if (lookahead == 'E') ADVANCE(129);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(19);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(46);
      END_STATE();
    case 29:
      if (lookahead == 'H') ADVANCE(129);
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
      if (lookahead == 'S') ADVANCE(129);
      END_STATE();
    case 42:
      if (lookahead == 'T') ADVANCE(129);
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
      if (lookahead == 'T') ADVANCE(26);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == 'k') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 56:
      if (lookahead == 'b') ADVANCE(87);
      if (lookahead == 'c') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(100);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(103);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(133);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == 'm') ADVANCE(98);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(85);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(133);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 76:
      if (lookahead == 'k') ADVANCE(64);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'p') ADVANCE(91);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(90);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 90:
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 91:
      if (lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 92:
      if (lookahead == 'p') ADVANCE(137);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == 'p') ADVANCE(95);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == 'w') ADVANCE(98);
      END_STATE();
    case 95:
      if (lookahead == 'p') ADVANCE(95);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == 'w') ADVANCE(98);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 98:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(101);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == 'w') ADVANCE(98);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 109:
      if (lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 110:
      if (lookahead == 'x') ADVANCE(53);
      END_STATE();
    case 111:
      if (lookahead == 'y') ADVANCE(105);
      END_STATE();
    case 112:
      if (lookahead == '{') ADVANCE(115);
      END_STATE();
    case 113:
      if (lookahead == '{') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(113)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 114:
      if (lookahead == '{') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(114)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
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
      if (lookahead == '}') ADVANCE(253);
      END_STATE();
    case 117:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(117)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 118:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(118)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 119:
      if (eof) ADVANCE(121);
      if (lookahead == '"') ADVANCE(249);
      if (lookahead == '&') ADVANCE(244);
      if (lookahead == ',') ADVANCE(248);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '=') ADVANCE(245);
      if (lookahead == '@') ADVANCE(252);
      if (lookahead == 'C') ADVANCE(35);
      if (lookahead == 'D') ADVANCE(23);
      if (lookahead == 'G') ADVANCE(24);
      if (lookahead == 'H') ADVANCE(25);
      if (lookahead == 'O') ADVANCE(38);
      if (lookahead == 'P') ADVANCE(18);
      if (lookahead == 'T') ADVANCE(39);
      if (lookahead == '[') ADVANCE(250);
      if (lookahead == ']') ADVANCE(251);
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'c') ADVANCE(47);
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == 'f') ADVANCE(72);
      if (lookahead == 'g') ADVANCE(66);
      if (lookahead == 'h') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'm') ADVANCE(54);
      if (lookahead == 'n') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 's') ADVANCE(63);
      if (lookahead == 't') ADVANCE(52);
      if (lookahead == 'u') ADVANCE(96);
      if (lookahead == 'w') ADVANCE(99);
      if (lookahead == '{') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(119)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 120:
      if (eof) ADVANCE(121);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == '@') ADVANCE(252);
      if (lookahead == 'C') ADVANCE(165);
      if (lookahead == 'D') ADVANCE(153);
      if (lookahead == 'G') ADVANCE(154);
      if (lookahead == 'H') ADVANCE(155);
      if (lookahead == 'O') ADVANCE(168);
      if (lookahead == 'P') ADVANCE(148);
      if (lookahead == 'T') ADVANCE(169);
      if (lookahead == '[') ADVANCE(250);
      if (lookahead == '{') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(120)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
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
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '/') ADVANCE(7);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_method_token1);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_scheme);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 'h') ADVANCE(138);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 'h') ADVANCE(133);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 's') ADVANCE(138);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(238);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '/') ADVANCE(122);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '1') ADVANCE(138);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '1') ADVANCE(141);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '2') ADVANCE(145);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '3') ADVANCE(143);
      if (lookahead == 't') ADVANCE(236);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '3') ADVANCE(138);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(152);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(151);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(174);
      if (lookahead == 'O') ADVANCE(170);
      if (lookahead == 'U') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(159);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(156);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(130);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(161);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(146);
      if (lookahead == 'T') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(130);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(149);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(176);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(130);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(166);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(158);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(164);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(157);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(162);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(163);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(140);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(173);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(130);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(130);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(160);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(150);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(167);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(156);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(221);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(185);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'n') ADVANCE(228);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(241);
      if (lookahead == 'k') ADVANCE(189);
      if (lookahead == 'r') ADVANCE(195);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(201);
      if (lookahead == 'e') ADVANCE(207);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(212);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(223);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(217);
      if (lookahead == 'c') ADVANCE(190);
      if (lookahead == 'r') ADVANCE(187);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(221);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(227);
      if (lookahead == 's') ADVANCE(232);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(230);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(138);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(138);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == 'm') ADVANCE(228);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(228);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(215);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(234);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(215);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(138);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(209);
      if (lookahead == 't') ADVANCE(221);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(210);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(214);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(219);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(192);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(235);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead == 'p') ADVANCE(221);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(138);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(213);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(239);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(206);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(209);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(138);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(136);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(224);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(225);
      if (lookahead == 's') ADVANCE(231);
      if (lookahead == 't') ADVANCE(187);
      if (lookahead == 'w') ADVANCE(228);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(225);
      if (lookahead == 't') ADVANCE(187);
      if (lookahead == 'w') ADVANCE(228);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(213);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(199);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(138);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(142);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(231);
      if (lookahead == 't') ADVANCE(187);
      if (lookahead == 'w') ADVANCE(228);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(204);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(215);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(222);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(183);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(235);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(115);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_variable_ref);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__kill_leading_whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '{') ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(260);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '{') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(260);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '}') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(260);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '}') ADVANCE(257);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(260);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_domain);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(267);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(267);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(267);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(265);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__new_line);
      if (lookahead == '{') ADVANCE(112);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__new_line);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(269);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 119},
  [2] = {.lex_state = 120},
  [3] = {.lex_state = 120},
  [4] = {.lex_state = 119},
  [5] = {.lex_state = 119},
  [6] = {.lex_state = 119},
  [7] = {.lex_state = 119},
  [8] = {.lex_state = 120},
  [9] = {.lex_state = 120},
  [10] = {.lex_state = 119},
  [11] = {.lex_state = 119},
  [12] = {.lex_state = 119},
  [13] = {.lex_state = 120},
  [14] = {.lex_state = 120},
  [15] = {.lex_state = 119},
  [16] = {.lex_state = 119},
  [17] = {.lex_state = 119},
  [18] = {.lex_state = 119},
  [19] = {.lex_state = 119},
  [20] = {.lex_state = 119},
  [21] = {.lex_state = 119},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 14},
  [24] = {.lex_state = 119},
  [25] = {.lex_state = 119},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 120},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 119},
  [34] = {.lex_state = 119},
  [35] = {.lex_state = 119},
  [36] = {.lex_state = 119},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 113},
  [43] = {.lex_state = 14},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 113},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 113},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 113},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 113},
  [60] = {.lex_state = 119},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 263},
  [70] = {.lex_state = 119},
  [71] = {.lex_state = 119},
  [72] = {.lex_state = 114},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 254},
  [78] = {.lex_state = 113},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 263},
  [81] = {.lex_state = 113},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 117},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 118},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 119},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 119},
  [96] = {.lex_state = 120},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 117},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 254},
  [111] = {.lex_state = 119},
  [112] = {.lex_state = 254},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 3},
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
  },
  [1] = {
    [sym_source_file] = STATE(85),
    [sym_request] = STATE(4),
    [sym_method_url] = STATE(97),
    [sym_response] = STATE(4),
    [sym_status_line] = STATE(9),
    [sym_http_version] = STATE(84),
    [sym_method] = STATE(60),
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
    STATE(17), 1,
      sym_url_encoded_key_value,
    STATE(34), 1,
      sym_json_list,
    STATE(71), 1,
      sym_identifier,
    STATE(117), 1,
      sym_header,
    STATE(36), 3,
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
    STATE(17), 1,
      sym_url_encoded_key_value,
    STATE(34), 1,
      sym_json_list,
    STATE(71), 1,
      sym_identifier,
    STATE(117), 1,
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
    STATE(9), 1,
      sym_status_line,
    STATE(60), 1,
      sym_method,
    STATE(84), 1,
      sym_http_version,
    STATE(97), 1,
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
    STATE(9), 1,
      sym_status_line,
    STATE(60), 1,
      sym_method,
    STATE(84), 1,
      sym_http_version,
    STATE(97), 1,
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
    STATE(115), 1,
      sym__json_list_values,
    ACTIONS(42), 2,
      sym_variable_ref,
      sym_number,
    STATE(51), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [168] = 7,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(38), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      anon_sym_RBRACK,
    STATE(83), 1,
      sym__json_list_values,
    ACTIONS(42), 2,
      sym_variable_ref,
      sym_number,
    STATE(51), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [194] = 7,
    ACTIONS(50), 1,
      sym__identifier,
    ACTIONS(53), 1,
      sym_variable_ref,
    STATE(8), 1,
      aux_sym_request_repeat1,
    STATE(111), 1,
      sym_identifier,
    STATE(117), 1,
      sym_header,
    ACTIONS(48), 2,
      aux_sym_method_token1,
      anon_sym_LBRACE,
    ACTIONS(46), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_LBRACK,
      anon_sym_AT,
  [220] = 6,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(58), 1,
      aux_sym_method_token1,
    STATE(13), 1,
      aux_sym_request_repeat1,
    STATE(111), 1,
      sym_identifier,
    STATE(117), 1,
      sym_header,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [242] = 5,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(38), 1,
      anon_sym_DQUOTE,
    ACTIONS(60), 2,
      sym_variable_ref,
      sym_number,
    STATE(79), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [262] = 1,
    ACTIONS(62), 9,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_COLON,
      aux_sym_method_token1,
      anon_sym_AMP,
      anon_sym_EQ,
      anon_sym_DQUOTE,
      anon_sym_AT,
      sym_variable_ref,
  [274] = 5,
    ACTIONS(64), 1,
      anon_sym_LBRACE,
    ACTIONS(66), 1,
      anon_sym_DQUOTE,
    ACTIONS(68), 1,
      anon_sym_LBRACK,
    ACTIONS(70), 2,
      sym_variable_ref,
      sym_number,
    STATE(49), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [294] = 6,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(74), 1,
      aux_sym_method_token1,
    STATE(8), 1,
      aux_sym_request_repeat1,
    STATE(111), 1,
      sym_identifier,
    STATE(117), 1,
      sym_header,
    ACTIONS(72), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [316] = 2,
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
  [329] = 1,
    ACTIONS(76), 7,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AT,
      sym_variable_ref,
  [339] = 1,
    ACTIONS(78), 7,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AT,
      sym_variable_ref,
  [349] = 3,
    ACTIONS(82), 1,
      anon_sym_AMP,
    STATE(20), 1,
      aux_sym_url_encoded_body_repeat1,
    ACTIONS(80), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [363] = 1,
    ACTIONS(84), 7,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AT,
      sym_variable_ref,
  [373] = 3,
    ACTIONS(88), 1,
      anon_sym_AMP,
    STATE(19), 1,
      aux_sym_url_encoded_body_repeat1,
    ACTIONS(86), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [387] = 3,
    ACTIONS(82), 1,
      anon_sym_AMP,
    STATE(19), 1,
      aux_sym_url_encoded_body_repeat1,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [401] = 1,
    ACTIONS(93), 7,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AT,
      sym_variable_ref,
  [411] = 6,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(95), 1,
      sym_variable_ref,
    ACTIONS(97), 1,
      sym__new_line,
    STATE(61), 1,
      sym_query_param,
    STATE(87), 1,
      sym_identifier,
    STATE(105), 1,
      sym_query_params,
  [430] = 6,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(95), 1,
      sym_variable_ref,
    ACTIONS(99), 1,
      sym__new_line,
    STATE(61), 1,
      sym_query_param,
    STATE(87), 1,
      sym_identifier,
    STATE(89), 1,
      sym_query_params,
  [449] = 1,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AMP,
      anon_sym_AT,
      sym_variable_ref,
  [458] = 1,
    ACTIONS(86), 6,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AMP,
      anon_sym_AT,
      sym_variable_ref,
  [467] = 6,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(95), 1,
      sym_variable_ref,
    ACTIONS(103), 1,
      sym__new_line,
    STATE(61), 1,
      sym_query_param,
    STATE(87), 1,
      sym_identifier,
    STATE(99), 1,
      sym_query_params,
  [486] = 2,
    ACTIONS(107), 2,
      aux_sym_method_token1,
      sym__identifier,
    ACTIONS(105), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [497] = 6,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(95), 1,
      sym_variable_ref,
    ACTIONS(109), 1,
      sym__new_line,
    STATE(61), 1,
      sym_query_param,
    STATE(86), 1,
      sym_query_params,
    STATE(87), 1,
      sym_identifier,
  [516] = 5,
    ACTIONS(111), 1,
      anon_sym_QMARK,
    ACTIONS(113), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      sym__new_line,
    STATE(44), 1,
      aux_sym_path_repeat1,
    STATE(68), 1,
      sym_path,
  [532] = 5,
    ACTIONS(113), 1,
      anon_sym_SLASH,
    ACTIONS(117), 1,
      anon_sym_QMARK,
    ACTIONS(119), 1,
      sym__new_line,
    STATE(44), 1,
      aux_sym_path_repeat1,
    STATE(74), 1,
      sym_path,
  [548] = 5,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      sym_json_key_value,
    STATE(95), 1,
      sym__json_key,
    STATE(114), 1,
      sym__key_value_list,
  [564] = 5,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      sym_json_key_value,
    STATE(95), 1,
      sym__json_key,
    STATE(98), 1,
      sym__key_value_list,
  [580] = 1,
    ACTIONS(11), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [588] = 1,
    ACTIONS(127), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [596] = 1,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [604] = 1,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [612] = 4,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    ACTIONS(135), 1,
      anon_sym_COMMA,
    ACTIONS(138), 1,
      sym__new_line,
    STATE(37), 1,
      aux_sym__key_value_list_repeat1,
  [625] = 4,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(144), 1,
      sym__new_line,
    STATE(37), 1,
      aux_sym__key_value_list_repeat1,
  [638] = 4,
    ACTIONS(146), 1,
      anon_sym_QMARK,
    ACTIONS(148), 1,
      anon_sym_SLASH,
    ACTIONS(151), 1,
      sym__new_line,
    STATE(39), 1,
      aux_sym_path_repeat1,
  [651] = 2,
    ACTIONS(153), 2,
      anon_sym_QMARK,
      sym__new_line,
    ACTIONS(155), 2,
      sym__identifier,
      sym_variable_ref,
  [660] = 4,
    ACTIONS(157), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      sym__new_line,
    STATE(50), 1,
      sym_json_key_value,
    STATE(95), 1,
      sym__json_key,
  [673] = 4,
    ACTIONS(161), 1,
      sym__identifier,
    ACTIONS(163), 1,
      sym_variable_ref,
    STATE(75), 1,
      sym_query_param,
    STATE(87), 1,
      sym_identifier,
  [686] = 2,
    ACTIONS(155), 2,
      sym__identifier,
      sym_variable_ref,
    ACTIONS(165), 2,
      anon_sym_QMARK,
      sym__new_line,
  [695] = 4,
    ACTIONS(165), 1,
      anon_sym_QMARK,
    ACTIONS(167), 1,
      anon_sym_SLASH,
    ACTIONS(169), 1,
      sym__new_line,
    STATE(39), 1,
      aux_sym_path_repeat1,
  [708] = 4,
    ACTIONS(161), 1,
      sym__identifier,
    ACTIONS(171), 1,
      sym_variable_ref,
    STATE(25), 1,
      sym_url_encoded_key_value,
    STATE(101), 1,
      sym_identifier,
  [721] = 4,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
    ACTIONS(175), 1,
      sym__new_line,
    STATE(38), 1,
      aux_sym__key_value_list_repeat1,
  [734] = 2,
    ACTIONS(93), 1,
      sym__new_line,
    ACTIONS(177), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [742] = 3,
    ACTIONS(161), 1,
      sym__identifier,
    ACTIONS(179), 1,
      sym_variable_ref,
    STATE(94), 1,
      sym_identifier,
  [752] = 2,
    ACTIONS(183), 1,
      sym__new_line,
    ACTIONS(181), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [760] = 2,
    ACTIONS(138), 1,
      sym__new_line,
    ACTIONS(133), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [768] = 3,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(187), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      aux_sym__json_list_values_repeat1,
  [778] = 3,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    STATE(58), 1,
      sym_json_key_value,
    STATE(95), 1,
      sym__json_key,
  [788] = 3,
    ACTIONS(161), 1,
      sym__identifier,
    ACTIONS(189), 1,
      sym_variable_ref,
    STATE(24), 1,
      sym_identifier,
  [798] = 2,
    ACTIONS(193), 1,
      sym__new_line,
    ACTIONS(191), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [806] = 3,
    ACTIONS(195), 1,
      anon_sym_COMMA,
    ACTIONS(198), 1,
      anon_sym_RBRACK,
    STATE(55), 1,
      aux_sym__json_list_values_repeat1,
  [816] = 3,
    ACTIONS(200), 1,
      anon_sym_AMP,
    ACTIONS(203), 1,
      sym__new_line,
    STATE(56), 1,
      aux_sym_query_params_repeat1,
  [826] = 3,
    ACTIONS(205), 1,
      anon_sym_AMP,
    ACTIONS(207), 1,
      sym__new_line,
    STATE(56), 1,
      aux_sym_query_params_repeat1,
  [836] = 2,
    ACTIONS(211), 1,
      sym__new_line,
    ACTIONS(209), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [844] = 3,
    ACTIONS(213), 1,
      sym__identifier,
    ACTIONS(215), 1,
      sym_variable_ref,
    STATE(76), 1,
      sym_identifier,
  [854] = 3,
    ACTIONS(217), 1,
      sym_scheme,
    ACTIONS(219), 1,
      sym_variable_ref,
    STATE(104), 1,
      sym_url,
  [864] = 3,
    ACTIONS(205), 1,
      anon_sym_AMP,
    ACTIONS(221), 1,
      sym__new_line,
    STATE(57), 1,
      aux_sym_query_params_repeat1,
  [874] = 2,
    ACTIONS(151), 1,
      sym__new_line,
    ACTIONS(146), 2,
      anon_sym_QMARK,
      anon_sym_SLASH,
  [882] = 3,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(223), 1,
      anon_sym_RBRACK,
    STATE(55), 1,
      aux_sym__json_list_values_repeat1,
  [892] = 2,
    ACTIONS(84), 1,
      sym__new_line,
    ACTIONS(225), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [900] = 2,
    ACTIONS(78), 1,
      sym__new_line,
    ACTIONS(227), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [908] = 2,
    ACTIONS(76), 1,
      sym__new_line,
    ACTIONS(229), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [916] = 1,
    ACTIONS(193), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [921] = 2,
    ACTIONS(231), 1,
      anon_sym_QMARK,
    ACTIONS(233), 1,
      sym__new_line,
  [928] = 1,
    ACTIONS(235), 2,
      sym_variable_ref,
      aux_sym_string_token1,
  [933] = 1,
    ACTIONS(237), 2,
      sym_scheme,
      sym_variable_ref,
  [938] = 2,
    ACTIONS(239), 1,
      anon_sym_COLON,
    ACTIONS(241), 1,
      anon_sym_EQ,
  [945] = 1,
    ACTIONS(243), 2,
      sym_variable_ref,
      sym_domain,
  [950] = 2,
    ACTIONS(62), 1,
      sym__new_line,
    ACTIONS(245), 1,
      anon_sym_AMP,
  [957] = 2,
    ACTIONS(247), 1,
      anon_sym_QMARK,
    ACTIONS(249), 1,
      sym__new_line,
  [964] = 2,
    ACTIONS(203), 1,
      sym__new_line,
    ACTIONS(251), 1,
      anon_sym_AMP,
  [971] = 2,
    ACTIONS(253), 1,
      anon_sym_AMP,
    ACTIONS(255), 1,
      sym__new_line,
  [978] = 2,
    ACTIONS(257), 1,
      sym__kill_leading_whitespace,
    STATE(108), 1,
      sym_reason_phrase,
  [985] = 2,
    ACTIONS(161), 1,
      sym__identifier,
    STATE(106), 1,
      sym_identifier,
  [992] = 1,
    ACTIONS(198), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [997] = 1,
    ACTIONS(259), 2,
      sym_variable_ref,
      aux_sym_string_token1,
  [1002] = 1,
    ACTIONS(261), 2,
      sym__identifier,
      sym_variable_ref,
  [1007] = 1,
    ACTIONS(263), 2,
      sym_variable_ref,
      sym_rest_of_line,
  [1012] = 1,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
  [1016] = 1,
    ACTIONS(267), 1,
      sym_status_code,
  [1020] = 1,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
  [1024] = 1,
    ACTIONS(115), 1,
      sym__new_line,
  [1028] = 1,
    ACTIONS(271), 1,
      anon_sym_EQ,
  [1032] = 1,
    ACTIONS(273), 1,
      aux_sym_http_version_token1,
  [1036] = 1,
    ACTIONS(233), 1,
      sym__new_line,
  [1040] = 1,
    ACTIONS(275), 1,
      sym__new_line,
  [1044] = 1,
    ACTIONS(277), 1,
      anon_sym_COLON,
  [1048] = 1,
    ACTIONS(279), 1,
      sym__new_line,
  [1052] = 1,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
  [1056] = 1,
    ACTIONS(283), 1,
      anon_sym_DQUOTE,
  [1060] = 1,
    ACTIONS(285), 1,
      anon_sym_COLON,
  [1064] = 1,
    ACTIONS(287), 1,
      anon_sym_COLON_SLASH_SLASH,
  [1068] = 1,
    ACTIONS(289), 1,
      sym__new_line,
  [1072] = 1,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
  [1076] = 1,
    ACTIONS(293), 1,
      sym__new_line,
  [1080] = 1,
    ACTIONS(295), 1,
      sym__new_line,
  [1084] = 1,
    ACTIONS(241), 1,
      anon_sym_EQ,
  [1088] = 1,
    ACTIONS(297), 1,
      sym_status_code,
  [1092] = 1,
    ACTIONS(299), 1,
      sym_rest_of_line,
  [1096] = 1,
    ACTIONS(301), 1,
      sym__new_line,
  [1100] = 1,
    ACTIONS(303), 1,
      sym__new_line,
  [1104] = 1,
    ACTIONS(305), 1,
      anon_sym_EQ,
  [1108] = 1,
    ACTIONS(307), 1,
      anon_sym_DQUOTE,
  [1112] = 1,
    ACTIONS(309), 1,
      sym__new_line,
  [1116] = 1,
    ACTIONS(311), 1,
      sym_rest_of_line,
  [1120] = 1,
    ACTIONS(313), 1,
      sym__kill_leading_whitespace,
  [1124] = 1,
    ACTIONS(239), 1,
      anon_sym_COLON,
  [1128] = 1,
    ACTIONS(315), 1,
      sym__kill_leading_whitespace,
  [1132] = 1,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
  [1136] = 1,
    ACTIONS(319), 1,
      anon_sym_RBRACE,
  [1140] = 1,
    ACTIONS(321), 1,
      anon_sym_RBRACK,
  [1144] = 1,
    ACTIONS(323), 1,
      anon_sym_DQUOTE,
  [1148] = 1,
    ACTIONS(325), 1,
      sym__new_line,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 110,
  [SMALL_STATE(6)] = 142,
  [SMALL_STATE(7)] = 168,
  [SMALL_STATE(8)] = 194,
  [SMALL_STATE(9)] = 220,
  [SMALL_STATE(10)] = 242,
  [SMALL_STATE(11)] = 262,
  [SMALL_STATE(12)] = 274,
  [SMALL_STATE(13)] = 294,
  [SMALL_STATE(14)] = 316,
  [SMALL_STATE(15)] = 329,
  [SMALL_STATE(16)] = 339,
  [SMALL_STATE(17)] = 349,
  [SMALL_STATE(18)] = 363,
  [SMALL_STATE(19)] = 373,
  [SMALL_STATE(20)] = 387,
  [SMALL_STATE(21)] = 401,
  [SMALL_STATE(22)] = 411,
  [SMALL_STATE(23)] = 430,
  [SMALL_STATE(24)] = 449,
  [SMALL_STATE(25)] = 458,
  [SMALL_STATE(26)] = 467,
  [SMALL_STATE(27)] = 486,
  [SMALL_STATE(28)] = 497,
  [SMALL_STATE(29)] = 516,
  [SMALL_STATE(30)] = 532,
  [SMALL_STATE(31)] = 548,
  [SMALL_STATE(32)] = 564,
  [SMALL_STATE(33)] = 580,
  [SMALL_STATE(34)] = 588,
  [SMALL_STATE(35)] = 596,
  [SMALL_STATE(36)] = 604,
  [SMALL_STATE(37)] = 612,
  [SMALL_STATE(38)] = 625,
  [SMALL_STATE(39)] = 638,
  [SMALL_STATE(40)] = 651,
  [SMALL_STATE(41)] = 660,
  [SMALL_STATE(42)] = 673,
  [SMALL_STATE(43)] = 686,
  [SMALL_STATE(44)] = 695,
  [SMALL_STATE(45)] = 708,
  [SMALL_STATE(46)] = 721,
  [SMALL_STATE(47)] = 734,
  [SMALL_STATE(48)] = 742,
  [SMALL_STATE(49)] = 752,
  [SMALL_STATE(50)] = 760,
  [SMALL_STATE(51)] = 768,
  [SMALL_STATE(52)] = 778,
  [SMALL_STATE(53)] = 788,
  [SMALL_STATE(54)] = 798,
  [SMALL_STATE(55)] = 806,
  [SMALL_STATE(56)] = 816,
  [SMALL_STATE(57)] = 826,
  [SMALL_STATE(58)] = 836,
  [SMALL_STATE(59)] = 844,
  [SMALL_STATE(60)] = 854,
  [SMALL_STATE(61)] = 864,
  [SMALL_STATE(62)] = 874,
  [SMALL_STATE(63)] = 882,
  [SMALL_STATE(64)] = 892,
  [SMALL_STATE(65)] = 900,
  [SMALL_STATE(66)] = 908,
  [SMALL_STATE(67)] = 916,
  [SMALL_STATE(68)] = 921,
  [SMALL_STATE(69)] = 928,
  [SMALL_STATE(70)] = 933,
  [SMALL_STATE(71)] = 938,
  [SMALL_STATE(72)] = 945,
  [SMALL_STATE(73)] = 950,
  [SMALL_STATE(74)] = 957,
  [SMALL_STATE(75)] = 964,
  [SMALL_STATE(76)] = 971,
  [SMALL_STATE(77)] = 978,
  [SMALL_STATE(78)] = 985,
  [SMALL_STATE(79)] = 992,
  [SMALL_STATE(80)] = 997,
  [SMALL_STATE(81)] = 1002,
  [SMALL_STATE(82)] = 1007,
  [SMALL_STATE(83)] = 1012,
  [SMALL_STATE(84)] = 1016,
  [SMALL_STATE(85)] = 1020,
  [SMALL_STATE(86)] = 1024,
  [SMALL_STATE(87)] = 1028,
  [SMALL_STATE(88)] = 1032,
  [SMALL_STATE(89)] = 1036,
  [SMALL_STATE(90)] = 1040,
  [SMALL_STATE(91)] = 1044,
  [SMALL_STATE(92)] = 1048,
  [SMALL_STATE(93)] = 1052,
  [SMALL_STATE(94)] = 1056,
  [SMALL_STATE(95)] = 1060,
  [SMALL_STATE(96)] = 1064,
  [SMALL_STATE(97)] = 1068,
  [SMALL_STATE(98)] = 1072,
  [SMALL_STATE(99)] = 1076,
  [SMALL_STATE(100)] = 1080,
  [SMALL_STATE(101)] = 1084,
  [SMALL_STATE(102)] = 1088,
  [SMALL_STATE(103)] = 1092,
  [SMALL_STATE(104)] = 1096,
  [SMALL_STATE(105)] = 1100,
  [SMALL_STATE(106)] = 1104,
  [SMALL_STATE(107)] = 1108,
  [SMALL_STATE(108)] = 1112,
  [SMALL_STATE(109)] = 1116,
  [SMALL_STATE(110)] = 1120,
  [SMALL_STATE(111)] = 1124,
  [SMALL_STATE(112)] = 1128,
  [SMALL_STATE(113)] = 1132,
  [SMALL_STATE(114)] = 1136,
  [SMALL_STATE(115)] = 1140,
  [SMALL_STATE(116)] = 1144,
  [SMALL_STATE(117)] = 1148,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(88),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(11),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(111),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_body, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_encoded_body_repeat1, 2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_url_encoded_body_repeat1, 2), SHIFT_REPEAT(45),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_body, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 5),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_key_value, 3, .production_id = 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status_line, 4),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status_line, 4),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__key_value_list_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__key_value_list_repeat1, 2), SHIFT_REPEAT(41),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__key_value_list, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(81),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__key_value_list, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_list, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_key_value, 3, .production_id = 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3, .production_id = 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2), SHIFT_REPEAT(10),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_params_repeat1, 2), SHIFT_REPEAT(42),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__key_value_list_repeat1, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_list, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 3, .production_id = 4),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3, .production_id = 4),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [269] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason_phrase, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_key, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 5),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_url, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 6),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
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
