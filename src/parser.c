#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 113
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 4

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
  aux_sym_string_token1 = 24,
  sym__new_line = 25,
  sym_source_file = 26,
  sym_request = 27,
  sym_method_url = 28,
  sym_response = 29,
  sym_status_line = 30,
  sym_http_version = 31,
  sym_reason_phrase = 32,
  sym_header = 33,
  sym_method = 34,
  sym_url = 35,
  sym_path = 36,
  sym_query_params = 37,
  sym_query_param = 38,
  sym_json_body = 39,
  sym_key_value_list = 40,
  sym_key_value = 41,
  sym_key = 42,
  sym_value = 43,
  sym_list = 44,
  sym_list_values = 45,
  sym_variable_declaration = 46,
  sym_identifier = 47,
  sym_string = 48,
  aux_sym_source_file_repeat1 = 49,
  aux_sym_request_repeat1 = 50,
  aux_sym_path_repeat1 = 51,
  aux_sym_query_params_repeat1 = 52,
  aux_sym_key_value_list_repeat1 = 53,
  aux_sym_list_values_repeat1 = 54,
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
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 3},
  [3] = {.index = 6, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_header_name, 0},
    {field_header_value, 2},
    {field_header_value, 3},
  [3] =
    {field_variable_name, 1},
    {field_variable_value, 3},
    {field_variable_value, 4},
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
  [30] = 25,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 28,
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
  [46] = 16,
  [47] = 14,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 17,
  [52] = 15,
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
  [68] = 65,
  [69] = 49,
  [70] = 48,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 44,
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
  [109] = 106,
  [110] = 101,
  [111] = 79,
  [112] = 112,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(120);
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '&') ADVANCE(243);
      if (lookahead == ',') ADVANCE(247);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '=') ADVANCE(244);
      if (lookahead == '?') ADVANCE(131);
      if (lookahead == '@') ADVANCE(251);
      if (lookahead == 'C') ADVANCE(164);
      if (lookahead == 'D') ADVANCE(152);
      if (lookahead == 'G') ADVANCE(153);
      if (lookahead == 'H') ADVANCE(154);
      if (lookahead == 'O') ADVANCE(167);
      if (lookahead == 'P') ADVANCE(147);
      if (lookahead == 'T') ADVANCE(168);
      if (lookahead == '[') ADVANCE(249);
      if (lookahead == ']') ADVANCE(250);
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == 'c') ADVANCE(176);
      if (lookahead == 'd') ADVANCE(178);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == 'f') ADVANCE(201);
      if (lookahead == 'g') ADVANCE(195);
      if (lookahead == 'h') ADVANCE(143);
      if (lookahead == 'i') ADVANCE(210);
      if (lookahead == 'm') ADVANCE(183);
      if (lookahead == 'n') ADVANCE(202);
      if (lookahead == 'p') ADVANCE(180);
      if (lookahead == 'r') ADVANCE(196);
      if (lookahead == 's') ADVANCE(192);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == 'u') ADVANCE(225);
      if (lookahead == 'w') ADVANCE(228);
      if (lookahead == '{') ADVANCE(245);
      if (lookahead == '}') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '{') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(254);
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(258);
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '&') ADVANCE(243);
      if (lookahead == ',') ADVANCE(247);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '?') ADVANCE(131);
      if (lookahead == '}') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(267);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '&') ADVANCE(243);
      if (lookahead == ',') ADVANCE(247);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '?') ADVANCE(131);
      if (lookahead == '}') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '[') ADVANCE(249);
      if (lookahead == ']') ADVANCE(250);
      if (lookahead == '{') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(109);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(130);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(121);
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(132);
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
      if (lookahead == '3') ADVANCE(132);
      END_STATE();
    case 15:
      if (lookahead == '?') ADVANCE(131);
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 16:
      if (lookahead == '?') ADVANCE(131);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
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
      if (lookahead == 'D') ADVANCE(128);
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
      if (lookahead == 'E') ADVANCE(128);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(20);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(47);
      END_STATE();
    case 30:
      if (lookahead == 'H') ADVANCE(128);
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
      if (lookahead == 'P') ADVANCE(9);
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
      if (lookahead == 'S') ADVANCE(128);
      END_STATE();
    case 43:
      if (lookahead == 'T') ADVANCE(128);
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
      if (lookahead == 'a') ADVANCE(132);
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
      if (lookahead == 'd') ADVANCE(132);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(132);
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
      if (lookahead == 'g') ADVANCE(132);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(134);
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
      if (lookahead == 'm') ADVANCE(132);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 'p') ADVANCE(92);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(91);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(132);
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
      if (lookahead == 'p') ADVANCE(132);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(136);
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
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(136);
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
      if (lookahead == 't') ADVANCE(132);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
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
      if (lookahead == '}') ADVANCE(252);
      END_STATE();
    case 117:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(117)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 118:
      if (eof) ADVANCE(120);
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == ',') ADVANCE(247);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead == '=') ADVANCE(244);
      if (lookahead == '@') ADVANCE(251);
      if (lookahead == 'C') ADVANCE(36);
      if (lookahead == 'D') ADVANCE(24);
      if (lookahead == 'G') ADVANCE(25);
      if (lookahead == 'H') ADVANCE(26);
      if (lookahead == 'O') ADVANCE(39);
      if (lookahead == 'P') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(40);
      if (lookahead == ']') ADVANCE(250);
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
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(118)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 119:
      if (eof) ADVANCE(120);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '@') ADVANCE(251);
      if (lookahead == 'C') ADVANCE(164);
      if (lookahead == 'D') ADVANCE(152);
      if (lookahead == 'G') ADVANCE(153);
      if (lookahead == 'H') ADVANCE(154);
      if (lookahead == 'O') ADVANCE(167);
      if (lookahead == 'P') ADVANCE(147);
      if (lookahead == 'T') ADVANCE(168);
      if (lookahead == '[') ADVANCE(249);
      if (lookahead == '{') ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(119)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
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
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_status_code);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '/') ADVANCE(8);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_method_token1);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_scheme);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 'h') ADVANCE(137);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 'h') ADVANCE(132);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-') ADVANCE(237);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '/') ADVANCE(121);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '1') ADVANCE(137);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '1') ADVANCE(140);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '2') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '3') ADVANCE(142);
      if (lookahead == 't') ADVANCE(235);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '3') ADVANCE(137);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(151);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(150);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(173);
      if (lookahead == 'O') ADVANCE(169);
      if (lookahead == 'U') ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(158);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(155);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(129);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(160);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(145);
      if (lookahead == 'T') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(129);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(148);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(129);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(165);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(157);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(163);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(170);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(156);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(161);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(162);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(139);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(146);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(129);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(129);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(159);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(149);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(166);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(155);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead == 'o') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(236);
      if (lookahead == 'n') ADVANCE(227);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == 'k') ADVANCE(188);
      if (lookahead == 'r') ADVANCE(194);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(222);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'b') ADVANCE(216);
      if (lookahead == 'c') ADVANCE(189);
      if (lookahead == 'r') ADVANCE(186);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(220);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(226);
      if (lookahead == 's') ADVANCE(231);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(229);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(232);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'd') ADVANCE(137);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == 'm') ADVANCE(227);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(212);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(214);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(207);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(232);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(214);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(137);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == 't') ADVANCE(220);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(215);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(209);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'k') ADVANCE(193);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(213);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(218);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(191);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(234);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(137);
      if (lookahead == 'n') ADVANCE(199);
      if (lookahead == 'p') ADVANCE(220);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(219);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(137);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(197);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(137);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(212);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(238);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(208);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(137);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(135);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(223);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(224);
      if (lookahead == 's') ADVANCE(230);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead == 'w') ADVANCE(227);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(224);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead == 'w') ADVANCE(227);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(212);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(198);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(141);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(230);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead == 'w') ADVANCE(227);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(203);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(214);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(221);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(217);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(232);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(182);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'y') ADVANCE(234);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(241);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(115);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_variable_ref);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__kill_leading_whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '{') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(259);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '{') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(259);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '}') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(259);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '}') ADVANCE(256);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(259);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_domain);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(262);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(265);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(265);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(265);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(263);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(265);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__new_line);
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__new_line);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(267);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 118},
  [2] = {.lex_state = 119},
  [3] = {.lex_state = 118},
  [4] = {.lex_state = 118},
  [5] = {.lex_state = 119},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 119},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 119},
  [12] = {.lex_state = 119},
  [13] = {.lex_state = 119},
  [14] = {.lex_state = 118},
  [15] = {.lex_state = 118},
  [16] = {.lex_state = 118},
  [17] = {.lex_state = 118},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 15},
  [20] = {.lex_state = 119},
  [21] = {.lex_state = 15},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 118},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 118},
  [27] = {.lex_state = 118},
  [28] = {.lex_state = 118},
  [29] = {.lex_state = 118},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 15},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 15},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 118},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 261},
  [66] = {.lex_state = 118},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 261},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 253},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 114},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 118},
  [83] = {.lex_state = 118},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 118},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 118},
  [98] = {.lex_state = 117},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 119},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 118},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 253},
  [108] = {.lex_state = 253},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
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
  },
  [1] = {
    [sym_source_file] = STATE(99),
    [sym_request] = STATE(4),
    [sym_method_url] = STATE(93),
    [sym_response] = STATE(4),
    [sym_status_line] = STATE(11),
    [sym_http_version] = STATE(87),
    [sym_method] = STATE(57),
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
  [0] = 10,
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
    STATE(27), 1,
      sym_list,
    STATE(29), 1,
      sym_json_body,
    STATE(94), 1,
      sym_header,
    STATE(97), 1,
      sym_identifier,
    ACTIONS(11), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [34] = 9,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(29), 1,
      anon_sym_AT,
    STATE(11), 1,
      sym_status_line,
    STATE(57), 1,
      sym_method,
    STATE(87), 1,
      sym_http_version,
    STATE(93), 1,
      sym_method_url,
    ACTIONS(26), 2,
      aux_sym_method_token1,
      sym_variable_ref,
    STATE(3), 4,
      sym_request,
      sym_response,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [66] = 9,
    ACTIONS(5), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym_status_line,
    STATE(57), 1,
      sym_method,
    STATE(87), 1,
      sym_http_version,
    STATE(93), 1,
      sym_method_url,
    ACTIONS(7), 2,
      aux_sym_method_token1,
      sym_variable_ref,
    STATE(3), 4,
      sym_request,
      sym_response,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [98] = 10,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(36), 1,
      aux_sym_method_token1,
    STATE(2), 1,
      aux_sym_request_repeat1,
    STATE(26), 1,
      sym_json_body,
    STATE(27), 1,
      sym_list,
    STATE(94), 1,
      sym_header,
    STATE(97), 1,
      sym_identifier,
    ACTIONS(34), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [132] = 10,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(38), 1,
      sym__identifier,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(42), 1,
      anon_sym_RBRACK,
    ACTIONS(44), 1,
      sym_variable_ref,
    STATE(50), 1,
      sym_value,
    STATE(70), 1,
      sym_list,
    STATE(110), 1,
      sym_list_values,
    STATE(69), 3,
      sym_json_body,
      sym_identifier,
      sym_string,
  [165] = 10,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(38), 1,
      sym__identifier,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      sym_variable_ref,
    ACTIONS(46), 1,
      anon_sym_RBRACK,
    STATE(50), 1,
      sym_value,
    STATE(70), 1,
      sym_list,
    STATE(101), 1,
      sym_list_values,
    STATE(69), 3,
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
    STATE(97), 1,
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
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(38), 1,
      sym__identifier,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      sym_variable_ref,
    STATE(70), 1,
      sym_list,
    STATE(74), 1,
      sym_value,
    STATE(69), 3,
      sym_json_body,
      sym_identifier,
      sym_string,
  [251] = 8,
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
    STATE(48), 1,
      sym_list,
    STATE(56), 1,
      sym_value,
    STATE(49), 3,
      sym_json_body,
      sym_identifier,
      sym_string,
  [278] = 6,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(70), 1,
      aux_sym_method_token1,
    STATE(12), 1,
      aux_sym_request_repeat1,
    STATE(94), 1,
      sym_header,
    STATE(97), 1,
      sym_identifier,
    ACTIONS(68), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [300] = 6,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(74), 1,
      aux_sym_method_token1,
    STATE(8), 1,
      aux_sym_request_repeat1,
    STATE(94), 1,
      sym_header,
    STATE(97), 1,
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
  [375] = 6,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(84), 1,
      sym_variable_ref,
    ACTIONS(86), 1,
      sym__new_line,
    STATE(58), 1,
      sym_query_param,
    STATE(88), 1,
      sym_query_params,
    STATE(91), 1,
      sym_identifier,
  [394] = 6,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(84), 1,
      sym_variable_ref,
    ACTIONS(88), 1,
      sym__new_line,
    STATE(58), 1,
      sym_query_param,
    STATE(91), 1,
      sym_identifier,
    STATE(92), 1,
      sym_query_params,
  [413] = 2,
    ACTIONS(92), 2,
      aux_sym_method_token1,
      sym__identifier,
    ACTIONS(90), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [424] = 6,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(84), 1,
      sym_variable_ref,
    ACTIONS(94), 1,
      sym__new_line,
    STATE(58), 1,
      sym_query_param,
    STATE(91), 1,
      sym_identifier,
    STATE(96), 1,
      sym_query_params,
  [443] = 6,
    ACTIONS(15), 1,
      sym__identifier,
    ACTIONS(84), 1,
      sym_variable_ref,
    ACTIONS(96), 1,
      sym__new_line,
    STATE(58), 1,
      sym_query_param,
    STATE(80), 1,
      sym_query_params,
    STATE(91), 1,
      sym_identifier,
  [462] = 5,
    ACTIONS(98), 1,
      anon_sym_QMARK,
    ACTIONS(100), 1,
      anon_sym_SLASH,
    ACTIONS(102), 1,
      sym__new_line,
    STATE(41), 1,
      aux_sym_path_repeat1,
    STATE(63), 1,
      sym_path,
  [478] = 1,
    ACTIONS(104), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [486] = 5,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      sym_key_value,
    STATE(105), 1,
      sym_key,
    STATE(106), 1,
      sym_key_value_list,
  [502] = 1,
    ACTIONS(11), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [510] = 1,
    ACTIONS(110), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [518] = 1,
    ACTIONS(112), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
  [526] = 1,
    ACTIONS(114), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [534] = 5,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_key_value,
    STATE(105), 1,
      sym_key,
    STATE(109), 1,
      sym_key_value_list,
  [550] = 5,
    ACTIONS(100), 1,
      anon_sym_SLASH,
    ACTIONS(118), 1,
      anon_sym_QMARK,
    ACTIONS(120), 1,
      sym__new_line,
    STATE(41), 1,
      aux_sym_path_repeat1,
    STATE(76), 1,
      sym_path,
  [566] = 4,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      sym__new_line,
    STATE(42), 1,
      sym_key_value,
    STATE(105), 1,
      sym_key,
  [579] = 4,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    ACTIONS(128), 1,
      anon_sym_COMMA,
    ACTIONS(131), 1,
      sym__new_line,
    STATE(33), 1,
      aux_sym_key_value_list_repeat1,
  [592] = 4,
    ACTIONS(133), 1,
      anon_sym_QMARK,
    ACTIONS(135), 1,
      anon_sym_SLASH,
    ACTIONS(138), 1,
      sym__new_line,
    STATE(34), 1,
      aux_sym_path_repeat1,
  [605] = 2,
    ACTIONS(112), 1,
      sym__new_line,
    ACTIONS(140), 3,
      anon_sym_AMP,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [614] = 2,
    ACTIONS(142), 2,
      anon_sym_QMARK,
      sym__new_line,
    ACTIONS(144), 2,
      sym__identifier,
      sym_variable_ref,
  [623] = 4,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(150), 1,
      sym__new_line,
    STATE(33), 1,
      aux_sym_key_value_list_repeat1,
  [636] = 4,
    ACTIONS(38), 1,
      sym__identifier,
    ACTIONS(152), 1,
      sym_variable_ref,
    STATE(71), 1,
      sym_query_param,
    STATE(91), 1,
      sym_identifier,
  [649] = 2,
    ACTIONS(144), 2,
      sym__identifier,
      sym_variable_ref,
    ACTIONS(154), 2,
      anon_sym_QMARK,
      sym__new_line,
  [658] = 4,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    ACTIONS(158), 1,
      sym__new_line,
    STATE(37), 1,
      aux_sym_key_value_list_repeat1,
  [671] = 4,
    ACTIONS(154), 1,
      anon_sym_QMARK,
    ACTIONS(160), 1,
      anon_sym_SLASH,
    ACTIONS(162), 1,
      sym__new_line,
    STATE(34), 1,
      aux_sym_path_repeat1,
  [684] = 2,
    ACTIONS(131), 1,
      sym__new_line,
    ACTIONS(126), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [692] = 3,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(166), 1,
      anon_sym_RBRACK,
    STATE(55), 1,
      aux_sym_list_values_repeat1,
  [702] = 2,
    ACTIONS(170), 1,
      sym__new_line,
    ACTIONS(168), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [710] = 3,
    ACTIONS(38), 1,
      sym__identifier,
    ACTIONS(172), 1,
      sym_variable_ref,
    STATE(112), 1,
      sym_identifier,
  [720] = 2,
    ACTIONS(80), 1,
      sym__new_line,
    ACTIONS(174), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [728] = 2,
    ACTIONS(76), 1,
      sym__new_line,
    ACTIONS(176), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [736] = 2,
    ACTIONS(180), 1,
      sym__new_line,
    ACTIONS(178), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [744] = 2,
    ACTIONS(180), 1,
      sym__new_line,
    ACTIONS(178), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [752] = 3,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
    STATE(43), 1,
      aux_sym_list_values_repeat1,
  [762] = 2,
    ACTIONS(82), 1,
      sym__new_line,
    ACTIONS(184), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [770] = 2,
    ACTIONS(78), 1,
      sym__new_line,
    ACTIONS(186), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [778] = 2,
    ACTIONS(190), 1,
      sym__new_line,
    ACTIONS(188), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [786] = 3,
    ACTIONS(192), 1,
      anon_sym_AMP,
    ACTIONS(195), 1,
      sym__new_line,
    STATE(54), 1,
      aux_sym_query_params_repeat1,
  [796] = 3,
    ACTIONS(197), 1,
      anon_sym_COMMA,
    ACTIONS(200), 1,
      anon_sym_RBRACK,
    STATE(55), 1,
      aux_sym_list_values_repeat1,
  [806] = 2,
    ACTIONS(204), 1,
      sym__new_line,
    ACTIONS(202), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [814] = 3,
    ACTIONS(206), 1,
      sym_scheme,
    ACTIONS(208), 1,
      sym_variable_ref,
    STATE(103), 1,
      sym_url,
  [824] = 3,
    ACTIONS(210), 1,
      anon_sym_AMP,
    ACTIONS(212), 1,
      sym__new_line,
    STATE(61), 1,
      aux_sym_query_params_repeat1,
  [834] = 2,
    ACTIONS(138), 1,
      sym__new_line,
    ACTIONS(133), 2,
      anon_sym_QMARK,
      anon_sym_SLASH,
  [842] = 3,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    STATE(53), 1,
      sym_key_value,
    STATE(105), 1,
      sym_key,
  [852] = 3,
    ACTIONS(210), 1,
      anon_sym_AMP,
    ACTIONS(214), 1,
      sym__new_line,
    STATE(54), 1,
      aux_sym_query_params_repeat1,
  [862] = 3,
    ACTIONS(58), 1,
      sym__identifier,
    ACTIONS(216), 1,
      sym_variable_ref,
    STATE(73), 1,
      sym_identifier,
  [872] = 2,
    ACTIONS(218), 1,
      anon_sym_QMARK,
    ACTIONS(220), 1,
      sym__new_line,
  [879] = 1,
    ACTIONS(222), 2,
      sym_variable_ref,
      sym_rest_of_line,
  [884] = 1,
    ACTIONS(224), 2,
      sym_variable_ref,
      aux_sym_string_token1,
  [889] = 1,
    ACTIONS(226), 2,
      sym_scheme,
      sym_variable_ref,
  [894] = 2,
    ACTIONS(38), 1,
      sym__identifier,
    STATE(81), 1,
      sym_identifier,
  [901] = 1,
    ACTIONS(228), 2,
      sym_variable_ref,
      aux_sym_string_token1,
  [906] = 1,
    ACTIONS(180), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [911] = 1,
    ACTIONS(180), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [916] = 2,
    ACTIONS(195), 1,
      sym__new_line,
    ACTIONS(230), 1,
      anon_sym_AMP,
  [923] = 2,
    ACTIONS(232), 1,
      sym__kill_leading_whitespace,
    STATE(84), 1,
      sym_reason_phrase,
  [930] = 2,
    ACTIONS(234), 1,
      anon_sym_AMP,
    ACTIONS(236), 1,
      sym__new_line,
  [937] = 1,
    ACTIONS(200), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [942] = 1,
    ACTIONS(170), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [947] = 2,
    ACTIONS(238), 1,
      anon_sym_QMARK,
    ACTIONS(240), 1,
      sym__new_line,
  [954] = 1,
    ACTIONS(242), 2,
      sym_variable_ref,
      sym_domain,
  [959] = 1,
    ACTIONS(244), 2,
      sym__identifier,
      sym_variable_ref,
  [964] = 1,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
  [968] = 1,
    ACTIONS(248), 1,
      sym__new_line,
  [972] = 1,
    ACTIONS(250), 1,
      anon_sym_EQ,
  [976] = 1,
    ACTIONS(252), 1,
      sym_status_code,
  [980] = 1,
    ACTIONS(254), 1,
      anon_sym_COLON,
  [984] = 1,
    ACTIONS(256), 1,
      sym__new_line,
  [988] = 1,
    ACTIONS(258), 1,
      sym_rest_of_line,
  [992] = 1,
    ACTIONS(260), 1,
      sym_rest_of_line,
  [996] = 1,
    ACTIONS(262), 1,
      sym_status_code,
  [1000] = 1,
    ACTIONS(102), 1,
      sym__new_line,
  [1004] = 1,
    ACTIONS(264), 1,
      sym__new_line,
  [1008] = 1,
    ACTIONS(266), 1,
      sym__new_line,
  [1012] = 1,
    ACTIONS(268), 1,
      anon_sym_EQ,
  [1016] = 1,
    ACTIONS(270), 1,
      sym__new_line,
  [1020] = 1,
    ACTIONS(272), 1,
      sym__new_line,
  [1024] = 1,
    ACTIONS(274), 1,
      sym__new_line,
  [1028] = 1,
    ACTIONS(276), 1,
      anon_sym_RBRACE,
  [1032] = 1,
    ACTIONS(220), 1,
      sym__new_line,
  [1036] = 1,
    ACTIONS(278), 1,
      anon_sym_COLON,
  [1040] = 1,
    ACTIONS(280), 1,
      aux_sym_http_version_token1,
  [1044] = 1,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
  [1048] = 1,
    ACTIONS(284), 1,
      sym__new_line,
  [1052] = 1,
    ACTIONS(286), 1,
      anon_sym_RBRACK,
  [1056] = 1,
    ACTIONS(288), 1,
      anon_sym_COLON_SLASH_SLASH,
  [1060] = 1,
    ACTIONS(290), 1,
      sym__new_line,
  [1064] = 1,
    ACTIONS(292), 1,
      anon_sym_RBRACE,
  [1068] = 1,
    ACTIONS(294), 1,
      anon_sym_COLON,
  [1072] = 1,
    ACTIONS(296), 1,
      anon_sym_RBRACE,
  [1076] = 1,
    ACTIONS(298), 1,
      sym__kill_leading_whitespace,
  [1080] = 1,
    ACTIONS(300), 1,
      sym__kill_leading_whitespace,
  [1084] = 1,
    ACTIONS(302), 1,
      anon_sym_RBRACE,
  [1088] = 1,
    ACTIONS(304), 1,
      anon_sym_RBRACK,
  [1092] = 1,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
  [1096] = 1,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 66,
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
  [SMALL_STATE(19)] = 394,
  [SMALL_STATE(20)] = 413,
  [SMALL_STATE(21)] = 424,
  [SMALL_STATE(22)] = 443,
  [SMALL_STATE(23)] = 462,
  [SMALL_STATE(24)] = 478,
  [SMALL_STATE(25)] = 486,
  [SMALL_STATE(26)] = 502,
  [SMALL_STATE(27)] = 510,
  [SMALL_STATE(28)] = 518,
  [SMALL_STATE(29)] = 526,
  [SMALL_STATE(30)] = 534,
  [SMALL_STATE(31)] = 550,
  [SMALL_STATE(32)] = 566,
  [SMALL_STATE(33)] = 579,
  [SMALL_STATE(34)] = 592,
  [SMALL_STATE(35)] = 605,
  [SMALL_STATE(36)] = 614,
  [SMALL_STATE(37)] = 623,
  [SMALL_STATE(38)] = 636,
  [SMALL_STATE(39)] = 649,
  [SMALL_STATE(40)] = 658,
  [SMALL_STATE(41)] = 671,
  [SMALL_STATE(42)] = 684,
  [SMALL_STATE(43)] = 692,
  [SMALL_STATE(44)] = 702,
  [SMALL_STATE(45)] = 710,
  [SMALL_STATE(46)] = 720,
  [SMALL_STATE(47)] = 728,
  [SMALL_STATE(48)] = 736,
  [SMALL_STATE(49)] = 744,
  [SMALL_STATE(50)] = 752,
  [SMALL_STATE(51)] = 762,
  [SMALL_STATE(52)] = 770,
  [SMALL_STATE(53)] = 778,
  [SMALL_STATE(54)] = 786,
  [SMALL_STATE(55)] = 796,
  [SMALL_STATE(56)] = 806,
  [SMALL_STATE(57)] = 814,
  [SMALL_STATE(58)] = 824,
  [SMALL_STATE(59)] = 834,
  [SMALL_STATE(60)] = 842,
  [SMALL_STATE(61)] = 852,
  [SMALL_STATE(62)] = 862,
  [SMALL_STATE(63)] = 872,
  [SMALL_STATE(64)] = 879,
  [SMALL_STATE(65)] = 884,
  [SMALL_STATE(66)] = 889,
  [SMALL_STATE(67)] = 894,
  [SMALL_STATE(68)] = 901,
  [SMALL_STATE(69)] = 906,
  [SMALL_STATE(70)] = 911,
  [SMALL_STATE(71)] = 916,
  [SMALL_STATE(72)] = 923,
  [SMALL_STATE(73)] = 930,
  [SMALL_STATE(74)] = 937,
  [SMALL_STATE(75)] = 942,
  [SMALL_STATE(76)] = 947,
  [SMALL_STATE(77)] = 954,
  [SMALL_STATE(78)] = 959,
  [SMALL_STATE(79)] = 964,
  [SMALL_STATE(80)] = 968,
  [SMALL_STATE(81)] = 972,
  [SMALL_STATE(82)] = 976,
  [SMALL_STATE(83)] = 980,
  [SMALL_STATE(84)] = 984,
  [SMALL_STATE(85)] = 988,
  [SMALL_STATE(86)] = 992,
  [SMALL_STATE(87)] = 996,
  [SMALL_STATE(88)] = 1000,
  [SMALL_STATE(89)] = 1004,
  [SMALL_STATE(90)] = 1008,
  [SMALL_STATE(91)] = 1012,
  [SMALL_STATE(92)] = 1016,
  [SMALL_STATE(93)] = 1020,
  [SMALL_STATE(94)] = 1024,
  [SMALL_STATE(95)] = 1028,
  [SMALL_STATE(96)] = 1032,
  [SMALL_STATE(97)] = 1036,
  [SMALL_STATE(98)] = 1040,
  [SMALL_STATE(99)] = 1044,
  [SMALL_STATE(100)] = 1048,
  [SMALL_STATE(101)] = 1052,
  [SMALL_STATE(102)] = 1056,
  [SMALL_STATE(103)] = 1060,
  [SMALL_STATE(104)] = 1064,
  [SMALL_STATE(105)] = 1068,
  [SMALL_STATE(106)] = 1072,
  [SMALL_STATE(107)] = 1076,
  [SMALL_STATE(108)] = 1080,
  [SMALL_STATE(109)] = 1084,
  [SMALL_STATE(110)] = 1088,
  [SMALL_STATE(111)] = 1092,
  [SMALL_STATE(112)] = 1096,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(98),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(28),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(97),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status_line, 4),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status_line, 4),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 5),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, .production_id = 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_value_list_repeat1, 2),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_value_list_repeat1, 2), SHIFT_REPEAT(32),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_value_list_repeat1, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(78),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value_list, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value_list, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_values, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 3),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_values, 1),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 2),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_value_list_repeat1, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_value_list_repeat1, 3),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_params_repeat1, 2), SHIFT_REPEAT(38),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_values_repeat1, 2), SHIFT_REPEAT(9),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_values_repeat1, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 3, .production_id = 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3, .production_id = 3),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 6),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason_phrase, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4, .production_id = 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 5),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_list, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [282] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_url, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_list, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
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
