#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 104
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_HTTP_SLASH = 1,
  aux_sym_http_version_token1 = 2,
  sym_status_code = 3,
  anon_sym_COLON = 4,
  aux_sym_method_token1 = 5,
  anon_sym_COLON_SLASH_SLASH = 6,
  sym_scheme = 7,
  sym__identifier = 8,
  anon_sym_SLASH = 9,
  anon_sym_QMARK = 10,
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
  sym_rest_of_line = 21,
  sym_domain = 22,
  aux_sym_string_token1 = 23,
  sym__new_line = 24,
  sym_source_file = 25,
  sym_request = 26,
  sym_method_url = 27,
  sym_response = 28,
  sym_status_line = 29,
  sym_http_version = 30,
  sym_reason_phrase = 31,
  sym_header = 32,
  sym_method = 33,
  sym_url = 34,
  sym_path = 35,
  sym_query_params = 36,
  sym_query_param = 37,
  sym_json_body = 38,
  sym_key_value_list = 39,
  sym_key_value = 40,
  sym_key = 41,
  sym_value = 42,
  sym_list = 43,
  sym_list_values = 44,
  sym_variable_declaration = 45,
  sym_identifier = 46,
  sym_string = 47,
  aux_sym_source_file_repeat1 = 48,
  aux_sym_request_repeat1 = 49,
  aux_sym_path_repeat1 = 50,
  aux_sym_query_params_repeat1 = 51,
  aux_sym_key_value_list_repeat1 = 52,
  aux_sym_list_values_repeat1 = 53,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_HTTP_SLASH] = "HTTP/",
  [aux_sym_http_version_token1] = "http_version_token1",
  [sym_status_code] = "status_code",
  [anon_sym_COLON] = ":",
  [aux_sym_method_token1] = "method_token1",
  [anon_sym_COLON_SLASH_SLASH] = "://",
  [sym_scheme] = "scheme",
  [sym__identifier] = "_identifier",
  [anon_sym_SLASH] = "/",
  [anon_sym_QMARK] = "\?",
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
  [sym_scheme] = sym_scheme,
  [sym__identifier] = sym__identifier,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_QMARK] = anon_sym_QMARK,
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
  [anon_sym_QMARK] = {
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
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_header_name, 0},
    {field_header_value, 2},
  [2] =
    {field_variable_name, 1},
    {field_variable_value, 3},
  [4] =
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
  [7] = 7,
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
  [24] = 21,
  [25] = 25,
  [26] = 26,
  [27] = 20,
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
  [49] = 13,
  [50] = 50,
  [51] = 15,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 55,
  [60] = 48,
  [61] = 54,
  [62] = 37,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 70,
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
  [99] = 96,
  [100] = 100,
  [101] = 81,
  [102] = 84,
  [103] = 103,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(121);
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '&') ADVANCE(168);
      if (lookahead == ',') ADVANCE(172);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == ':') ADVANCE(126);
      if (lookahead == '=') ADVANCE(169);
      if (lookahead == '?') ADVANCE(167);
      if (lookahead == '@') ADVANCE(176);
      if (lookahead == 'C') ADVANCE(36);
      if (lookahead == 'D') ADVANCE(24);
      if (lookahead == 'G') ADVANCE(25);
      if (lookahead == 'H') ADVANCE(26);
      if (lookahead == 'O') ADVANCE(39);
      if (lookahead == 'P') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(40);
      if (lookahead == '[') ADVANCE(174);
      if (lookahead == ']') ADVANCE(175);
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
      if (lookahead == '{') ADVANCE(170);
      if (lookahead == '}') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '{') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0) ADVANCE(184);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '&') ADVANCE(168);
      if (lookahead == ',') ADVANCE(172);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '?') ADVANCE(167);
      if (lookahead == '}') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(193);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == '&') ADVANCE(168);
      if (lookahead == ',') ADVANCE(172);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '?') ADVANCE(167);
      if (lookahead == '}') ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(173);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '[') ADVANCE(174);
      if (lookahead == ']') ADVANCE(175);
      if (lookahead == '{') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(109);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(122);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(129);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '1') ADVANCE(130);
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
      if (lookahead == '3') ADVANCE(130);
      END_STATE();
    case 15:
      if (lookahead == '?') ADVANCE(167);
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(192);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 16:
      if (lookahead == '?') ADVANCE(167);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
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
      if (lookahead == 'D') ADVANCE(127);
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
      if (lookahead == 'E') ADVANCE(127);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(20);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(47);
      END_STATE();
    case 30:
      if (lookahead == 'H') ADVANCE(127);
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
      if (lookahead == 'P') ADVANCE(7);
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
      if (lookahead == 'S') ADVANCE(127);
      END_STATE();
    case 43:
      if (lookahead == 'T') ADVANCE(127);
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
      if (lookahead == 'a') ADVANCE(130);
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
      if (lookahead == 'd') ADVANCE(130);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(130);
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
      if (lookahead == 'g') ADVANCE(130);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(131);
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
      if (lookahead == 'm') ADVANCE(130);
      if (lookahead == 'n') ADVANCE(71);
      if (lookahead == 'p') ADVANCE(92);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(91);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(130);
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
      if (lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(132);
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
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(132);
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
      if (lookahead == 't') ADVANCE(130);
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
      if (lookahead == '{') ADVANCE(119);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
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
      if (lookahead == '}') ADVANCE(177);
      END_STATE();
    case 117:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(117)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 118:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(118)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 119:
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 120:
      if (eof) ADVANCE(121);
      if (lookahead == '@') ADVANCE(176);
      if (lookahead == 'C') ADVANCE(153);
      if (lookahead == 'D') ADVANCE(141);
      if (lookahead == 'G') ADVANCE(142);
      if (lookahead == 'H') ADVANCE(143);
      if (lookahead == 'O') ADVANCE(156);
      if (lookahead == 'P') ADVANCE(136);
      if (lookahead == 'T') ADVANCE(157);
      if (lookahead == '{') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(120)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
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
      ACCEPT_TOKEN(aux_sym_method_token1);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_scheme);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 'h') ADVANCE(130);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_scheme);
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '/') ADVANCE(122);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(140);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(139);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(162);
      if (lookahead == 'O') ADVANCE(158);
      if (lookahead == 'U') ADVANCE(160);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(160);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'C') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'D') ADVANCE(128);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(149);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(160);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(134);
      if (lookahead == 'T') ADVANCE(163);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(128);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(137);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(164);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(128);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(154);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(146);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(152);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(159);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(145);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(150);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(151);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(133);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(161);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(135);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(160);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(128);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(128);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(148);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(138);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(155);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(144);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(119);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_variable_ref);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '{') ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '{') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '}') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '}') ADVANCE(180);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_domain);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(191);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(191);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(191);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(188);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(191);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__new_line);
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__new_line);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(193);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 120},
  [7] = {.lex_state = 120},
  [8] = {.lex_state = 120},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 120},
  [12] = {.lex_state = 120},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 120},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 120},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 15},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 15},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 114},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 186},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 186},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 117},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 117},
  [90] = {.lex_state = 118},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_HTTP_SLASH] = ACTIONS(1),
    [aux_sym_http_version_token1] = ACTIONS(1),
    [sym_status_code] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_method_token1] = ACTIONS(1),
    [sym_scheme] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
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
    [sym_source_file] = STATE(86),
    [sym_request] = STATE(2),
    [sym_method_url] = STATE(74),
    [sym_response] = STATE(2),
    [sym_status_line] = STATE(11),
    [sym_http_version] = STATE(82),
    [sym_method] = STATE(57),
    [sym_variable_declaration] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_HTTP_SLASH] = ACTIONS(5),
    [aux_sym_method_token1] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(9),
    [sym_variable_ref] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(5), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym_status_line,
    STATE(57), 1,
      sym_method,
    STATE(74), 1,
      sym_method_url,
    STATE(82), 1,
      sym_http_version,
    ACTIONS(7), 2,
      aux_sym_method_token1,
      sym_variable_ref,
    STATE(3), 4,
      sym_request,
      sym_response,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [32] = 9,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(21), 1,
      anon_sym_AT,
    STATE(11), 1,
      sym_status_line,
    STATE(57), 1,
      sym_method,
    STATE(74), 1,
      sym_method_url,
    STATE(82), 1,
      sym_http_version,
    ACTIONS(18), 2,
      aux_sym_method_token1,
      sym_variable_ref,
    STATE(3), 4,
      sym_request,
      sym_response,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [64] = 9,
    ACTIONS(24), 1,
      sym__identifier,
    ACTIONS(26), 1,
      anon_sym_LBRACE,
    ACTIONS(28), 1,
      anon_sym_DQUOTE,
    ACTIONS(30), 1,
      anon_sym_LBRACK,
    ACTIONS(32), 1,
      anon_sym_RBRACK,
    ACTIONS(34), 1,
      sym_variable_ref,
    STATE(36), 1,
      sym_value,
    STATE(102), 1,
      sym_list_values,
    STATE(59), 4,
      sym_json_body,
      sym_list,
      sym_identifier,
      sym_string,
  [95] = 9,
    ACTIONS(24), 1,
      sym__identifier,
    ACTIONS(26), 1,
      anon_sym_LBRACE,
    ACTIONS(28), 1,
      anon_sym_DQUOTE,
    ACTIONS(30), 1,
      anon_sym_LBRACK,
    ACTIONS(34), 1,
      sym_variable_ref,
    ACTIONS(36), 1,
      anon_sym_RBRACK,
    STATE(36), 1,
      sym_value,
    STATE(84), 1,
      sym_list_values,
    STATE(59), 4,
      sym_json_body,
      sym_list,
      sym_identifier,
      sym_string,
  [126] = 8,
    ACTIONS(26), 1,
      anon_sym_LBRACE,
    ACTIONS(40), 1,
      aux_sym_method_token1,
    ACTIONS(42), 1,
      sym__identifier,
    STATE(7), 1,
      aux_sym_request_repeat1,
    STATE(23), 1,
      sym_json_body,
    STATE(85), 1,
      sym_identifier,
    STATE(91), 1,
      sym_header,
    ACTIONS(38), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [154] = 8,
    ACTIONS(26), 1,
      anon_sym_LBRACE,
    ACTIONS(42), 1,
      sym__identifier,
    ACTIONS(46), 1,
      aux_sym_method_token1,
    STATE(8), 1,
      aux_sym_request_repeat1,
    STATE(22), 1,
      sym_json_body,
    STATE(85), 1,
      sym_identifier,
    STATE(91), 1,
      sym_header,
    ACTIONS(44), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [182] = 7,
    ACTIONS(52), 1,
      sym__identifier,
    ACTIONS(55), 1,
      sym_variable_ref,
    STATE(8), 1,
      aux_sym_request_repeat1,
    STATE(85), 1,
      sym_identifier,
    STATE(91), 1,
      sym_header,
    ACTIONS(50), 2,
      aux_sym_method_token1,
      anon_sym_LBRACE,
    ACTIONS(48), 3,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
  [207] = 7,
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
    STATE(38), 1,
      sym_value,
    STATE(55), 4,
      sym_json_body,
      sym_list,
      sym_identifier,
      sym_string,
  [232] = 7,
    ACTIONS(24), 1,
      sym__identifier,
    ACTIONS(26), 1,
      anon_sym_LBRACE,
    ACTIONS(28), 1,
      anon_sym_DQUOTE,
    ACTIONS(30), 1,
      anon_sym_LBRACK,
    ACTIONS(34), 1,
      sym_variable_ref,
    STATE(58), 1,
      sym_value,
    STATE(59), 4,
      sym_json_body,
      sym_list,
      sym_identifier,
      sym_string,
  [257] = 6,
    ACTIONS(42), 1,
      sym__identifier,
    ACTIONS(70), 1,
      aux_sym_method_token1,
    STATE(12), 1,
      aux_sym_request_repeat1,
    STATE(85), 1,
      sym_identifier,
    STATE(91), 1,
      sym_header,
    ACTIONS(68), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [279] = 6,
    ACTIONS(42), 1,
      sym__identifier,
    ACTIONS(74), 1,
      aux_sym_method_token1,
    STATE(8), 1,
      aux_sym_request_repeat1,
    STATE(85), 1,
      sym_identifier,
    STATE(91), 1,
      sym_header,
    ACTIONS(72), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [301] = 1,
    ACTIONS(76), 7,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AT,
      sym_variable_ref,
  [311] = 2,
    ACTIONS(50), 3,
      aux_sym_method_token1,
      sym__identifier,
      anon_sym_LBRACE,
    ACTIONS(48), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [323] = 1,
    ACTIONS(78), 7,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AT,
      sym_variable_ref,
  [333] = 6,
    ACTIONS(80), 1,
      anon_sym_SLASH,
    ACTIONS(82), 1,
      anon_sym_QMARK,
    ACTIONS(84), 1,
      sym__new_line,
    STATE(35), 1,
      aux_sym_path_repeat1,
    STATE(45), 1,
      sym_path,
    STATE(80), 1,
      sym_query_params,
  [352] = 6,
    ACTIONS(80), 1,
      anon_sym_SLASH,
    ACTIONS(82), 1,
      anon_sym_QMARK,
    ACTIONS(86), 1,
      sym__new_line,
    STATE(35), 1,
      aux_sym_path_repeat1,
    STATE(43), 1,
      sym_path,
    STATE(98), 1,
      sym_query_params,
  [371] = 2,
    ACTIONS(90), 2,
      aux_sym_method_token1,
      sym__identifier,
    ACTIONS(88), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [382] = 1,
    ACTIONS(92), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [390] = 1,
    ACTIONS(94), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACK,
  [398] = 5,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      sym_key_value,
    STATE(95), 1,
      sym_key,
    STATE(99), 1,
      sym_key_value_list,
  [414] = 1,
    ACTIONS(100), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [422] = 1,
    ACTIONS(44), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [430] = 5,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      sym_key_value,
    STATE(95), 1,
      sym_key,
    STATE(96), 1,
      sym_key_value_list,
  [446] = 4,
    ACTIONS(104), 1,
      anon_sym_SLASH,
    ACTIONS(107), 1,
      anon_sym_QMARK,
    ACTIONS(109), 1,
      sym__new_line,
    STATE(25), 1,
      aux_sym_path_repeat1,
  [459] = 4,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(115), 1,
      sym__new_line,
    STATE(30), 1,
      aux_sym_key_value_list_repeat1,
  [472] = 2,
    ACTIONS(94), 1,
      sym__new_line,
    ACTIONS(117), 3,
      anon_sym_AMP,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [481] = 4,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    ACTIONS(124), 1,
      sym__new_line,
    STATE(28), 1,
      aux_sym_key_value_list_repeat1,
  [494] = 4,
    ACTIONS(24), 1,
      sym__identifier,
    ACTIONS(126), 1,
      sym_variable_ref,
    STATE(64), 1,
      sym_query_param,
    STATE(93), 1,
      sym_identifier,
  [507] = 4,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    ACTIONS(130), 1,
      sym__new_line,
    STATE(28), 1,
      aux_sym_key_value_list_repeat1,
  [520] = 2,
    ACTIONS(132), 2,
      sym__identifier,
      sym_variable_ref,
    ACTIONS(134), 2,
      anon_sym_QMARK,
      sym__new_line,
  [529] = 4,
    ACTIONS(24), 1,
      sym__identifier,
    ACTIONS(126), 1,
      sym_variable_ref,
    STATE(52), 1,
      sym_query_param,
    STATE(93), 1,
      sym_identifier,
  [542] = 2,
    ACTIONS(132), 2,
      sym__identifier,
      sym_variable_ref,
    ACTIONS(136), 2,
      anon_sym_QMARK,
      sym__new_line,
  [551] = 4,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    ACTIONS(140), 1,
      sym__new_line,
    STATE(39), 1,
      sym_key_value,
    STATE(95), 1,
      sym_key,
  [564] = 4,
    ACTIONS(134), 1,
      anon_sym_QMARK,
    ACTIONS(142), 1,
      anon_sym_SLASH,
    ACTIONS(144), 1,
      sym__new_line,
    STATE(25), 1,
      aux_sym_path_repeat1,
  [577] = 3,
    ACTIONS(146), 1,
      anon_sym_COMMA,
    ACTIONS(148), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_list_values_repeat1,
  [587] = 2,
    ACTIONS(152), 1,
      sym__new_line,
    ACTIONS(150), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [595] = 2,
    ACTIONS(156), 1,
      sym__new_line,
    ACTIONS(154), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [603] = 2,
    ACTIONS(124), 1,
      sym__new_line,
    ACTIONS(119), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [611] = 3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    STATE(47), 1,
      sym_key_value,
    STATE(95), 1,
      sym_key,
  [621] = 3,
    ACTIONS(158), 1,
      anon_sym_AMP,
    ACTIONS(160), 1,
      sym__new_line,
    STATE(44), 1,
      aux_sym_query_params_repeat1,
  [631] = 3,
    ACTIONS(58), 1,
      sym__identifier,
    ACTIONS(162), 1,
      sym_variable_ref,
    STATE(67), 1,
      sym_identifier,
  [641] = 3,
    ACTIONS(82), 1,
      anon_sym_QMARK,
    ACTIONS(164), 1,
      sym__new_line,
    STATE(73), 1,
      sym_query_params,
  [651] = 3,
    ACTIONS(166), 1,
      anon_sym_AMP,
    ACTIONS(169), 1,
      sym__new_line,
    STATE(44), 1,
      aux_sym_query_params_repeat1,
  [661] = 3,
    ACTIONS(82), 1,
      anon_sym_QMARK,
    ACTIONS(171), 1,
      sym__new_line,
    STATE(76), 1,
      sym_query_params,
  [671] = 3,
    ACTIONS(24), 1,
      sym__identifier,
    ACTIONS(173), 1,
      sym_variable_ref,
    STATE(88), 1,
      sym_identifier,
  [681] = 2,
    ACTIONS(177), 1,
      sym__new_line,
    ACTIONS(175), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [689] = 2,
    ACTIONS(181), 1,
      sym__new_line,
    ACTIONS(179), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [697] = 2,
    ACTIONS(76), 1,
      sym__new_line,
    ACTIONS(183), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [705] = 2,
    ACTIONS(109), 1,
      sym__new_line,
    ACTIONS(107), 2,
      anon_sym_SLASH,
      anon_sym_QMARK,
  [713] = 2,
    ACTIONS(78), 1,
      sym__new_line,
    ACTIONS(185), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [721] = 3,
    ACTIONS(158), 1,
      anon_sym_AMP,
    ACTIONS(187), 1,
      sym__new_line,
    STATE(41), 1,
      aux_sym_query_params_repeat1,
  [731] = 3,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      aux_sym_list_values_repeat1,
  [741] = 2,
    ACTIONS(196), 1,
      sym__new_line,
    ACTIONS(194), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [749] = 2,
    ACTIONS(200), 1,
      sym__new_line,
    ACTIONS(198), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [757] = 3,
    ACTIONS(146), 1,
      anon_sym_COMMA,
    ACTIONS(202), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      aux_sym_list_values_repeat1,
  [767] = 3,
    ACTIONS(204), 1,
      sym_scheme,
    ACTIONS(206), 1,
      sym_variable_ref,
    STATE(92), 1,
      sym_url,
  [777] = 1,
    ACTIONS(192), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [782] = 1,
    ACTIONS(200), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [787] = 1,
    ACTIONS(181), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [792] = 1,
    ACTIONS(196), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [797] = 1,
    ACTIONS(152), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [802] = 1,
    ACTIONS(208), 2,
      sym_variable_ref,
      sym_domain,
  [807] = 2,
    ACTIONS(169), 1,
      sym__new_line,
    ACTIONS(210), 1,
      anon_sym_AMP,
  [814] = 2,
    ACTIONS(24), 1,
      sym__identifier,
    STATE(83), 1,
      sym_identifier,
  [821] = 1,
    ACTIONS(212), 2,
      sym__identifier,
      sym_variable_ref,
  [826] = 2,
    ACTIONS(214), 1,
      anon_sym_AMP,
    ACTIONS(216), 1,
      sym__new_line,
  [833] = 1,
    ACTIONS(218), 2,
      sym_scheme,
      sym_variable_ref,
  [838] = 1,
    ACTIONS(220), 2,
      sym_variable_ref,
      sym_rest_of_line,
  [843] = 1,
    ACTIONS(222), 2,
      sym_variable_ref,
      aux_sym_string_token1,
  [848] = 2,
    ACTIONS(224), 1,
      sym_rest_of_line,
    STATE(100), 1,
      sym_reason_phrase,
  [855] = 1,
    ACTIONS(226), 2,
      sym_variable_ref,
      aux_sym_string_token1,
  [860] = 1,
    ACTIONS(84), 1,
      sym__new_line,
  [864] = 1,
    ACTIONS(228), 1,
      sym__new_line,
  [868] = 1,
    ACTIONS(230), 1,
      sym_rest_of_line,
  [872] = 1,
    ACTIONS(232), 1,
      sym__new_line,
  [876] = 1,
    ACTIONS(234), 1,
      anon_sym_RBRACE,
  [880] = 1,
    ACTIONS(236), 1,
      anon_sym_COLON,
  [884] = 1,
    ACTIONS(238), 1,
      anon_sym_COLON_SLASH_SLASH,
  [888] = 1,
    ACTIONS(171), 1,
      sym__new_line,
  [892] = 1,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
  [896] = 1,
    ACTIONS(242), 1,
      sym_status_code,
  [900] = 1,
    ACTIONS(244), 1,
      anon_sym_EQ,
  [904] = 1,
    ACTIONS(246), 1,
      anon_sym_RBRACK,
  [908] = 1,
    ACTIONS(248), 1,
      anon_sym_COLON,
  [912] = 1,
    ACTIONS(250), 1,
      ts_builtin_sym_end,
  [916] = 1,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
  [920] = 1,
    ACTIONS(254), 1,
      anon_sym_DQUOTE,
  [924] = 1,
    ACTIONS(256), 1,
      sym_status_code,
  [928] = 1,
    ACTIONS(258), 1,
      aux_sym_http_version_token1,
  [932] = 1,
    ACTIONS(260), 1,
      sym__new_line,
  [936] = 1,
    ACTIONS(262), 1,
      sym__new_line,
  [940] = 1,
    ACTIONS(264), 1,
      anon_sym_EQ,
  [944] = 1,
    ACTIONS(266), 1,
      sym__new_line,
  [948] = 1,
    ACTIONS(268), 1,
      anon_sym_COLON,
  [952] = 1,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
  [956] = 1,
    ACTIONS(272), 1,
      sym__new_line,
  [960] = 1,
    ACTIONS(164), 1,
      sym__new_line,
  [964] = 1,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
  [968] = 1,
    ACTIONS(276), 1,
      sym__new_line,
  [972] = 1,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
  [976] = 1,
    ACTIONS(280), 1,
      anon_sym_RBRACK,
  [980] = 1,
    ACTIONS(282), 1,
      sym__new_line,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 95,
  [SMALL_STATE(6)] = 126,
  [SMALL_STATE(7)] = 154,
  [SMALL_STATE(8)] = 182,
  [SMALL_STATE(9)] = 207,
  [SMALL_STATE(10)] = 232,
  [SMALL_STATE(11)] = 257,
  [SMALL_STATE(12)] = 279,
  [SMALL_STATE(13)] = 301,
  [SMALL_STATE(14)] = 311,
  [SMALL_STATE(15)] = 323,
  [SMALL_STATE(16)] = 333,
  [SMALL_STATE(17)] = 352,
  [SMALL_STATE(18)] = 371,
  [SMALL_STATE(19)] = 382,
  [SMALL_STATE(20)] = 390,
  [SMALL_STATE(21)] = 398,
  [SMALL_STATE(22)] = 414,
  [SMALL_STATE(23)] = 422,
  [SMALL_STATE(24)] = 430,
  [SMALL_STATE(25)] = 446,
  [SMALL_STATE(26)] = 459,
  [SMALL_STATE(27)] = 472,
  [SMALL_STATE(28)] = 481,
  [SMALL_STATE(29)] = 494,
  [SMALL_STATE(30)] = 507,
  [SMALL_STATE(31)] = 520,
  [SMALL_STATE(32)] = 529,
  [SMALL_STATE(33)] = 542,
  [SMALL_STATE(34)] = 551,
  [SMALL_STATE(35)] = 564,
  [SMALL_STATE(36)] = 577,
  [SMALL_STATE(37)] = 587,
  [SMALL_STATE(38)] = 595,
  [SMALL_STATE(39)] = 603,
  [SMALL_STATE(40)] = 611,
  [SMALL_STATE(41)] = 621,
  [SMALL_STATE(42)] = 631,
  [SMALL_STATE(43)] = 641,
  [SMALL_STATE(44)] = 651,
  [SMALL_STATE(45)] = 661,
  [SMALL_STATE(46)] = 671,
  [SMALL_STATE(47)] = 681,
  [SMALL_STATE(48)] = 689,
  [SMALL_STATE(49)] = 697,
  [SMALL_STATE(50)] = 705,
  [SMALL_STATE(51)] = 713,
  [SMALL_STATE(52)] = 721,
  [SMALL_STATE(53)] = 731,
  [SMALL_STATE(54)] = 741,
  [SMALL_STATE(55)] = 749,
  [SMALL_STATE(56)] = 757,
  [SMALL_STATE(57)] = 767,
  [SMALL_STATE(58)] = 777,
  [SMALL_STATE(59)] = 782,
  [SMALL_STATE(60)] = 787,
  [SMALL_STATE(61)] = 792,
  [SMALL_STATE(62)] = 797,
  [SMALL_STATE(63)] = 802,
  [SMALL_STATE(64)] = 807,
  [SMALL_STATE(65)] = 814,
  [SMALL_STATE(66)] = 821,
  [SMALL_STATE(67)] = 826,
  [SMALL_STATE(68)] = 833,
  [SMALL_STATE(69)] = 838,
  [SMALL_STATE(70)] = 843,
  [SMALL_STATE(71)] = 848,
  [SMALL_STATE(72)] = 855,
  [SMALL_STATE(73)] = 860,
  [SMALL_STATE(74)] = 864,
  [SMALL_STATE(75)] = 868,
  [SMALL_STATE(76)] = 872,
  [SMALL_STATE(77)] = 876,
  [SMALL_STATE(78)] = 880,
  [SMALL_STATE(79)] = 884,
  [SMALL_STATE(80)] = 888,
  [SMALL_STATE(81)] = 892,
  [SMALL_STATE(82)] = 896,
  [SMALL_STATE(83)] = 900,
  [SMALL_STATE(84)] = 904,
  [SMALL_STATE(85)] = 908,
  [SMALL_STATE(86)] = 912,
  [SMALL_STATE(87)] = 916,
  [SMALL_STATE(88)] = 920,
  [SMALL_STATE(89)] = 924,
  [SMALL_STATE(90)] = 928,
  [SMALL_STATE(91)] = 932,
  [SMALL_STATE(92)] = 936,
  [SMALL_STATE(93)] = 940,
  [SMALL_STATE(94)] = 944,
  [SMALL_STATE(95)] = 948,
  [SMALL_STATE(96)] = 952,
  [SMALL_STATE(97)] = 956,
  [SMALL_STATE(98)] = 960,
  [SMALL_STATE(99)] = 964,
  [SMALL_STATE(100)] = 968,
  [SMALL_STATE(101)] = 972,
  [SMALL_STATE(102)] = 976,
  [SMALL_STATE(103)] = 980,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(20),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(85),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status_line, 4),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status_line, 4),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(66),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value_list, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_value_list_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_value_list_repeat1, 2), SHIFT_REPEAT(34),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_value_list_repeat1, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value_list, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_values, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 2),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_params_repeat1, 2), SHIFT_REPEAT(29),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_value_list_repeat1, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_value_list_repeat1, 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 3),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 2),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_values_repeat1, 2), SHIFT_REPEAT(10),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_values_repeat1, 2),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_values, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 3, .production_id = 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3, .production_id = 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 5),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_list, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [250] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_list, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_url, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason_phrase, 1),
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
