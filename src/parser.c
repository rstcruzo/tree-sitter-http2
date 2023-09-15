#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 110
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
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
  [25] = 24,
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
  [37] = 27,
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
  [59] = 14,
  [60] = 17,
  [61] = 15,
  [62] = 16,
  [63] = 52,
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
  [76] = 65,
  [77] = 47,
  [78] = 51,
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
  [106] = 88,
  [107] = 81,
  [108] = 99,
  [109] = 109,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(120);
      if (lookahead == '"') ADVANCE(172);
      if (lookahead == '&') ADVANCE(167);
      if (lookahead == ',') ADVANCE(171);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == ':') ADVANCE(125);
      if (lookahead == '=') ADVANCE(168);
      if (lookahead == '?') ADVANCE(129);
      if (lookahead == '@') ADVANCE(175);
      if (lookahead == 'C') ADVANCE(36);
      if (lookahead == 'D') ADVANCE(24);
      if (lookahead == 'G') ADVANCE(25);
      if (lookahead == 'H') ADVANCE(26);
      if (lookahead == 'O') ADVANCE(39);
      if (lookahead == 'P') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(40);
      if (lookahead == '[') ADVANCE(173);
      if (lookahead == ']') ADVANCE(174);
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
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(181);
      if (lookahead != 0) ADVANCE(182);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '{') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(177);
      if (lookahead != 0) ADVANCE(182);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(172);
      if (lookahead == '&') ADVANCE(167);
      if (lookahead == ',') ADVANCE(171);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '?') ADVANCE(129);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(190);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(172);
      if (lookahead == '&') ADVANCE(167);
      if (lookahead == ',') ADVANCE(171);
      if (lookahead == '/') ADVANCE(166);
      if (lookahead == '?') ADVANCE(129);
      if (lookahead == '}') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(172);
      if (lookahead == '[') ADVANCE(173);
      if (lookahead == ']') ADVANCE(174);
      if (lookahead == '{') ADVANCE(169);
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
      if (lookahead == '/') ADVANCE(121);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(128);
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
      if (lookahead == '?') ADVANCE(129);
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(189);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 16:
      if (lookahead == '?') ADVANCE(129);
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
      if (lookahead == 'D') ADVANCE(126);
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
      if (lookahead == 'E') ADVANCE(126);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(20);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(47);
      END_STATE();
    case 30:
      if (lookahead == 'H') ADVANCE(126);
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
      if (lookahead == 'S') ADVANCE(126);
      END_STATE();
    case 43:
      if (lookahead == 'T') ADVANCE(126);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
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
      if (lookahead == '}') ADVANCE(176);
      END_STATE();
    case 117:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(117)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 118:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(118)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 119:
      if (eof) ADVANCE(120);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '@') ADVANCE(175);
      if (lookahead == 'C') ADVANCE(153);
      if (lookahead == 'D') ADVANCE(141);
      if (lookahead == 'G') ADVANCE(142);
      if (lookahead == 'H') ADVANCE(143);
      if (lookahead == 'O') ADVANCE(156);
      if (lookahead == 'P') ADVANCE(136);
      if (lookahead == 'T') ADVANCE(157);
      if (lookahead == '[') ADVANCE(173);
      if (lookahead == '{') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(119)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
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
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_status_code);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_method_token1);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_method_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH_SLASH);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_QMARK);
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
      if (lookahead == '/') ADVANCE(121);
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
      if (lookahead == 'D') ADVANCE(127);
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
      if (lookahead == 'E') ADVANCE(127);
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
      if (lookahead == 'H') ADVANCE(127);
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
      if (lookahead == 'S') ADVANCE(127);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(127);
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
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(115);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_variable_ref);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '{') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '{') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '}') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '}') ADVANCE(179);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_rest_of_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_domain);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= ':') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(188);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(188);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(188);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '}') ADVANCE(186);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__new_line);
      if (lookahead == '{') ADVANCE(113);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__new_line);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(190);
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
  [4] = {.lex_state = 119},
  [5] = {.lex_state = 119},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 119},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 119},
  [12] = {.lex_state = 119},
  [13] = {.lex_state = 119},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 119},
  [20] = {.lex_state = 15},
  [21] = {.lex_state = 15},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 15},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 15},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 184},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 114},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 184},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 117},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 118},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 3},
  [96] = {.lex_state = 117},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 119},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
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
  },
  [1] = {
    [sym_source_file] = STATE(91),
    [sym_request] = STATE(2),
    [sym_method_url] = STATE(92),
    [sym_response] = STATE(2),
    [sym_status_line] = STATE(11),
    [sym_http_version] = STATE(96),
    [sym_method] = STATE(55),
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
    STATE(55), 1,
      sym_method,
    STATE(92), 1,
      sym_method_url,
    STATE(96), 1,
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
    STATE(55), 1,
      sym_method,
    STATE(92), 1,
      sym_method_url,
    STATE(96), 1,
      sym_http_version,
    ACTIONS(18), 2,
      aux_sym_method_token1,
      sym_variable_ref,
    STATE(3), 4,
      sym_request,
      sym_response,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [64] = 10,
    ACTIONS(26), 1,
      aux_sym_method_token1,
    ACTIONS(28), 1,
      sym__identifier,
    ACTIONS(30), 1,
      anon_sym_LBRACE,
    ACTIONS(32), 1,
      anon_sym_LBRACK,
    STATE(8), 1,
      aux_sym_request_repeat1,
    STATE(28), 1,
      sym_json_body,
    STATE(31), 1,
      sym_list,
    STATE(87), 1,
      sym_identifier,
    STATE(104), 1,
      sym_header,
    ACTIONS(24), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [98] = 10,
    ACTIONS(28), 1,
      sym__identifier,
    ACTIONS(30), 1,
      anon_sym_LBRACE,
    ACTIONS(32), 1,
      anon_sym_LBRACK,
    ACTIONS(36), 1,
      aux_sym_method_token1,
    STATE(4), 1,
      aux_sym_request_repeat1,
    STATE(30), 1,
      sym_json_body,
    STATE(31), 1,
      sym_list,
    STATE(87), 1,
      sym_identifier,
    STATE(104), 1,
      sym_header,
    ACTIONS(34), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [132] = 10,
    ACTIONS(30), 1,
      anon_sym_LBRACE,
    ACTIONS(32), 1,
      anon_sym_LBRACK,
    ACTIONS(38), 1,
      sym__identifier,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(42), 1,
      anon_sym_RBRACK,
    ACTIONS(44), 1,
      sym_variable_ref,
    STATE(49), 1,
      sym_value,
    STATE(77), 1,
      sym_list,
    STATE(81), 1,
      sym_list_values,
    STATE(78), 3,
      sym_json_body,
      sym_identifier,
      sym_string,
  [165] = 10,
    ACTIONS(30), 1,
      anon_sym_LBRACE,
    ACTIONS(32), 1,
      anon_sym_LBRACK,
    ACTIONS(38), 1,
      sym__identifier,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      sym_variable_ref,
    ACTIONS(46), 1,
      anon_sym_RBRACK,
    STATE(49), 1,
      sym_value,
    STATE(77), 1,
      sym_list,
    STATE(107), 1,
      sym_list_values,
    STATE(78), 3,
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
    STATE(87), 1,
      sym_identifier,
    STATE(104), 1,
      sym_header,
    ACTIONS(50), 2,
      aux_sym_method_token1,
      anon_sym_LBRACE,
    ACTIONS(48), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_LBRACK,
      anon_sym_AT,
  [224] = 8,
    ACTIONS(30), 1,
      anon_sym_LBRACE,
    ACTIONS(32), 1,
      anon_sym_LBRACK,
    ACTIONS(38), 1,
      sym__identifier,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      sym_variable_ref,
    STATE(75), 1,
      sym_value,
    STATE(77), 1,
      sym_list,
    STATE(78), 3,
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
    STATE(46), 1,
      sym_value,
    STATE(47), 1,
      sym_list,
    STATE(51), 3,
      sym_json_body,
      sym_identifier,
      sym_string,
  [278] = 6,
    ACTIONS(28), 1,
      sym__identifier,
    ACTIONS(70), 1,
      aux_sym_method_token1,
    STATE(12), 1,
      aux_sym_request_repeat1,
    STATE(87), 1,
      sym_identifier,
    STATE(104), 1,
      sym_header,
    ACTIONS(68), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [300] = 6,
    ACTIONS(28), 1,
      sym__identifier,
    ACTIONS(74), 1,
      aux_sym_method_token1,
    STATE(8), 1,
      aux_sym_request_repeat1,
    STATE(87), 1,
      sym_identifier,
    STATE(104), 1,
      sym_header,
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
    ACTIONS(28), 1,
      sym__identifier,
    ACTIONS(84), 1,
      sym_variable_ref,
    ACTIONS(86), 1,
      sym__new_line,
    STATE(57), 1,
      sym_query_param,
    STATE(80), 1,
      sym_identifier,
    STATE(82), 1,
      sym_query_params,
  [394] = 2,
    ACTIONS(90), 2,
      aux_sym_method_token1,
      sym__identifier,
    ACTIONS(88), 4,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      anon_sym_AT,
      sym_variable_ref,
  [405] = 6,
    ACTIONS(28), 1,
      sym__identifier,
    ACTIONS(84), 1,
      sym_variable_ref,
    ACTIONS(92), 1,
      sym__new_line,
    STATE(57), 1,
      sym_query_param,
    STATE(80), 1,
      sym_identifier,
    STATE(89), 1,
      sym_query_params,
  [424] = 6,
    ACTIONS(28), 1,
      sym__identifier,
    ACTIONS(84), 1,
      sym_variable_ref,
    ACTIONS(94), 1,
      sym__new_line,
    STATE(57), 1,
      sym_query_param,
    STATE(80), 1,
      sym_identifier,
    STATE(103), 1,
      sym_query_params,
  [443] = 6,
    ACTIONS(28), 1,
      sym__identifier,
    ACTIONS(84), 1,
      sym_variable_ref,
    ACTIONS(96), 1,
      sym__new_line,
    STATE(57), 1,
      sym_query_param,
    STATE(80), 1,
      sym_identifier,
    STATE(95), 1,
      sym_query_params,
  [462] = 5,
    ACTIONS(98), 1,
      anon_sym_QMARK,
    ACTIONS(100), 1,
      anon_sym_SLASH,
    ACTIONS(102), 1,
      sym__new_line,
    STATE(41), 1,
      aux_sym_path_repeat1,
    STATE(74), 1,
      sym_path,
  [478] = 5,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    STATE(40), 1,
      sym_key_value,
    STATE(85), 1,
      sym_key,
    STATE(88), 1,
      sym_key_value_list,
  [494] = 5,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    STATE(40), 1,
      sym_key_value,
    STATE(85), 1,
      sym_key,
    STATE(106), 1,
      sym_key_value_list,
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
    ACTIONS(100), 1,
      anon_sym_SLASH,
    ACTIONS(116), 1,
      anon_sym_QMARK,
    ACTIONS(118), 1,
      sym__new_line,
    STATE(41), 1,
      aux_sym_path_repeat1,
    STATE(70), 1,
      sym_path,
  [550] = 1,
    ACTIONS(24), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [558] = 1,
    ACTIONS(120), 5,
      ts_builtin_sym_end,
      anon_sym_HTTP_SLASH,
      aux_sym_method_token1,
      anon_sym_AT,
      sym_variable_ref,
  [566] = 4,
    ACTIONS(38), 1,
      sym__identifier,
    ACTIONS(122), 1,
      sym_variable_ref,
    STATE(71), 1,
      sym_query_param,
    STATE(80), 1,
      sym_identifier,
  [579] = 4,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      sym__new_line,
    STATE(33), 1,
      aux_sym_key_value_list_repeat1,
  [592] = 4,
    ACTIONS(131), 1,
      anon_sym_QMARK,
    ACTIONS(133), 1,
      anon_sym_SLASH,
    ACTIONS(136), 1,
      sym__new_line,
    STATE(34), 1,
      aux_sym_path_repeat1,
  [605] = 2,
    ACTIONS(138), 2,
      anon_sym_QMARK,
      sym__new_line,
    ACTIONS(140), 2,
      sym__identifier,
      sym_variable_ref,
  [614] = 4,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    ACTIONS(146), 1,
      sym__new_line,
    STATE(33), 1,
      aux_sym_key_value_list_repeat1,
  [627] = 2,
    ACTIONS(112), 1,
      sym__new_line,
    ACTIONS(148), 3,
      anon_sym_AMP,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [636] = 4,
    ACTIONS(150), 1,
      anon_sym_DQUOTE,
    ACTIONS(152), 1,
      sym__new_line,
    STATE(42), 1,
      sym_key_value,
    STATE(85), 1,
      sym_key,
  [649] = 2,
    ACTIONS(140), 2,
      sym__identifier,
      sym_variable_ref,
    ACTIONS(154), 2,
      anon_sym_QMARK,
      sym__new_line,
  [658] = 4,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    ACTIONS(158), 1,
      sym__new_line,
    STATE(36), 1,
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
    ACTIONS(129), 1,
      sym__new_line,
    ACTIONS(124), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [692] = 3,
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(167), 1,
      sym__new_line,
    STATE(43), 1,
      aux_sym_query_params_repeat1,
  [702] = 3,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(172), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      aux_sym_list_values_repeat1,
  [712] = 3,
    ACTIONS(38), 1,
      sym__identifier,
    ACTIONS(174), 1,
      sym_variable_ref,
    STATE(105), 1,
      sym_identifier,
  [722] = 2,
    ACTIONS(178), 1,
      sym__new_line,
    ACTIONS(176), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [730] = 2,
    ACTIONS(182), 1,
      sym__new_line,
    ACTIONS(180), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [738] = 3,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    STATE(56), 1,
      sym_key_value,
    STATE(85), 1,
      sym_key,
  [748] = 3,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    ACTIONS(186), 1,
      anon_sym_RBRACK,
    STATE(54), 1,
      aux_sym_list_values_repeat1,
  [758] = 3,
    ACTIONS(188), 1,
      anon_sym_AMP,
    ACTIONS(190), 1,
      sym__new_line,
    STATE(43), 1,
      aux_sym_query_params_repeat1,
  [768] = 2,
    ACTIONS(182), 1,
      sym__new_line,
    ACTIONS(180), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [776] = 2,
    ACTIONS(194), 1,
      sym__new_line,
    ACTIONS(192), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [784] = 3,
    ACTIONS(58), 1,
      sym__identifier,
    ACTIONS(196), 1,
      sym_variable_ref,
    STATE(72), 1,
      sym_identifier,
  [794] = 3,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    ACTIONS(198), 1,
      anon_sym_RBRACK,
    STATE(44), 1,
      aux_sym_list_values_repeat1,
  [804] = 3,
    ACTIONS(200), 1,
      sym_scheme,
    ACTIONS(202), 1,
      sym_variable_ref,
    STATE(101), 1,
      sym_url,
  [814] = 2,
    ACTIONS(206), 1,
      sym__new_line,
    ACTIONS(204), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [822] = 3,
    ACTIONS(188), 1,
      anon_sym_AMP,
    ACTIONS(208), 1,
      sym__new_line,
    STATE(50), 1,
      aux_sym_query_params_repeat1,
  [832] = 2,
    ACTIONS(136), 1,
      sym__new_line,
    ACTIONS(131), 2,
      anon_sym_QMARK,
      anon_sym_SLASH,
  [840] = 2,
    ACTIONS(76), 1,
      sym__new_line,
    ACTIONS(210), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [848] = 2,
    ACTIONS(82), 1,
      sym__new_line,
    ACTIONS(212), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [856] = 2,
    ACTIONS(78), 1,
      sym__new_line,
    ACTIONS(214), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [864] = 2,
    ACTIONS(80), 1,
      sym__new_line,
    ACTIONS(216), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [872] = 1,
    ACTIONS(194), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [877] = 1,
    ACTIONS(218), 2,
      sym__identifier,
      sym_variable_ref,
  [882] = 1,
    ACTIONS(220), 2,
      sym_variable_ref,
      aux_sym_string_token1,
  [887] = 1,
    ACTIONS(222), 2,
      sym_scheme,
      sym_variable_ref,
  [892] = 2,
    ACTIONS(224), 1,
      sym_rest_of_line,
    STATE(97), 1,
      sym_reason_phrase,
  [899] = 1,
    ACTIONS(226), 2,
      sym_variable_ref,
      sym_rest_of_line,
  [904] = 1,
    ACTIONS(228), 2,
      sym_variable_ref,
      sym_domain,
  [909] = 2,
    ACTIONS(230), 1,
      anon_sym_QMARK,
    ACTIONS(232), 1,
      sym__new_line,
  [916] = 2,
    ACTIONS(167), 1,
      sym__new_line,
    ACTIONS(234), 1,
      anon_sym_AMP,
  [923] = 2,
    ACTIONS(236), 1,
      anon_sym_AMP,
    ACTIONS(238), 1,
      sym__new_line,
  [930] = 2,
    ACTIONS(38), 1,
      sym__identifier,
    STATE(79), 1,
      sym_identifier,
  [937] = 2,
    ACTIONS(240), 1,
      anon_sym_QMARK,
    ACTIONS(242), 1,
      sym__new_line,
  [944] = 1,
    ACTIONS(172), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [949] = 1,
    ACTIONS(244), 2,
      sym_variable_ref,
      aux_sym_string_token1,
  [954] = 1,
    ACTIONS(182), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [959] = 1,
    ACTIONS(182), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [964] = 1,
    ACTIONS(246), 1,
      anon_sym_EQ,
  [968] = 1,
    ACTIONS(248), 1,
      anon_sym_EQ,
  [972] = 1,
    ACTIONS(250), 1,
      anon_sym_RBRACK,
  [976] = 1,
    ACTIONS(242), 1,
      sym__new_line,
  [980] = 1,
    ACTIONS(252), 1,
      anon_sym_COLON,
  [984] = 1,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
  [988] = 1,
    ACTIONS(256), 1,
      anon_sym_COLON,
  [992] = 1,
    ACTIONS(258), 1,
      sym_status_code,
  [996] = 1,
    ACTIONS(260), 1,
      anon_sym_COLON,
  [1000] = 1,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
  [1004] = 1,
    ACTIONS(264), 1,
      sym__new_line,
  [1008] = 1,
    ACTIONS(266), 1,
      aux_sym_http_version_token1,
  [1012] = 1,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
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
      sym__new_line,
  [1032] = 1,
    ACTIONS(278), 1,
      sym_status_code,
  [1036] = 1,
    ACTIONS(280), 1,
      sym__new_line,
  [1040] = 1,
    ACTIONS(282), 1,
      sym__new_line,
  [1044] = 1,
    ACTIONS(284), 1,
      anon_sym_DQUOTE,
  [1048] = 1,
    ACTIONS(286), 1,
      sym_rest_of_line,
  [1052] = 1,
    ACTIONS(288), 1,
      sym__new_line,
  [1056] = 1,
    ACTIONS(290), 1,
      anon_sym_COLON_SLASH_SLASH,
  [1060] = 1,
    ACTIONS(102), 1,
      sym__new_line,
  [1064] = 1,
    ACTIONS(292), 1,
      sym__new_line,
  [1068] = 1,
    ACTIONS(294), 1,
      anon_sym_DQUOTE,
  [1072] = 1,
    ACTIONS(296), 1,
      anon_sym_RBRACE,
  [1076] = 1,
    ACTIONS(298), 1,
      anon_sym_RBRACK,
  [1080] = 1,
    ACTIONS(300), 1,
      anon_sym_DQUOTE,
  [1084] = 1,
    ACTIONS(302), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 64,
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
  [SMALL_STATE(20)] = 405,
  [SMALL_STATE(21)] = 424,
  [SMALL_STATE(22)] = 443,
  [SMALL_STATE(23)] = 462,
  [SMALL_STATE(24)] = 478,
  [SMALL_STATE(25)] = 494,
  [SMALL_STATE(26)] = 510,
  [SMALL_STATE(27)] = 518,
  [SMALL_STATE(28)] = 526,
  [SMALL_STATE(29)] = 534,
  [SMALL_STATE(30)] = 550,
  [SMALL_STATE(31)] = 558,
  [SMALL_STATE(32)] = 566,
  [SMALL_STATE(33)] = 579,
  [SMALL_STATE(34)] = 592,
  [SMALL_STATE(35)] = 605,
  [SMALL_STATE(36)] = 614,
  [SMALL_STATE(37)] = 627,
  [SMALL_STATE(38)] = 636,
  [SMALL_STATE(39)] = 649,
  [SMALL_STATE(40)] = 658,
  [SMALL_STATE(41)] = 671,
  [SMALL_STATE(42)] = 684,
  [SMALL_STATE(43)] = 692,
  [SMALL_STATE(44)] = 702,
  [SMALL_STATE(45)] = 712,
  [SMALL_STATE(46)] = 722,
  [SMALL_STATE(47)] = 730,
  [SMALL_STATE(48)] = 738,
  [SMALL_STATE(49)] = 748,
  [SMALL_STATE(50)] = 758,
  [SMALL_STATE(51)] = 768,
  [SMALL_STATE(52)] = 776,
  [SMALL_STATE(53)] = 784,
  [SMALL_STATE(54)] = 794,
  [SMALL_STATE(55)] = 804,
  [SMALL_STATE(56)] = 814,
  [SMALL_STATE(57)] = 822,
  [SMALL_STATE(58)] = 832,
  [SMALL_STATE(59)] = 840,
  [SMALL_STATE(60)] = 848,
  [SMALL_STATE(61)] = 856,
  [SMALL_STATE(62)] = 864,
  [SMALL_STATE(63)] = 872,
  [SMALL_STATE(64)] = 877,
  [SMALL_STATE(65)] = 882,
  [SMALL_STATE(66)] = 887,
  [SMALL_STATE(67)] = 892,
  [SMALL_STATE(68)] = 899,
  [SMALL_STATE(69)] = 904,
  [SMALL_STATE(70)] = 909,
  [SMALL_STATE(71)] = 916,
  [SMALL_STATE(72)] = 923,
  [SMALL_STATE(73)] = 930,
  [SMALL_STATE(74)] = 937,
  [SMALL_STATE(75)] = 944,
  [SMALL_STATE(76)] = 949,
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
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(27),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2), SHIFT_REPEAT(87),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status_line, 4),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status_line, 4),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 4),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url, 5),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, .production_id = 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_value_list_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_key_value_list_repeat1, 2), SHIFT_REPEAT(38),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_value_list_repeat1, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(64),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value_list, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value_list, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_query_params_repeat1, 2), SHIFT_REPEAT(32),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_values_repeat1, 2), SHIFT_REPEAT(9),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_values_repeat1, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_values, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_values, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_value_list_repeat1, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_value_list_repeat1, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_params, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 3),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_json_body, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 2),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_params_repeat1, 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_param, 3, .production_id = 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_param, 3, .production_id = 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 4),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_list, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 5),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [268] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, .production_id = 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 6),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason_phrase, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_url, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_list, 2),
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
