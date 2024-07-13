#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 133
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  sym_method = 1,
  anon_sym_COLON = 2,
  sym_header_name = 3,
  sym_raw_body = 4,
  anon_sym_AMP = 5,
  anon_sym_EQ = 6,
  anon_sym_AT = 7,
  anon_sym_EQ2 = 8,
  anon_sym_COMMA = 9,
  anon_sym_COLON2 = 10,
  anon_sym_DQUOTE = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  anon_sym_LBRACK = 14,
  anon_sym_RBRACK = 15,
  sym_separator = 16,
  anon_sym_HTTP_SLASH = 17,
  aux_sym_http_version_token1 = 18,
  sym_status_code = 19,
  aux_sym_identifier_token1 = 20,
  sym__identifier = 21,
  sym_number = 22,
  sym_boolean = 23,
  aux_sym_string_token1 = 24,
  sym_variable_ref = 25,
  aux_sym_rest_of_line_token1 = 26,
  sym__nl = 27,
  sym_source_file = 28,
  sym_request = 29,
  sym_response = 30,
  sym_start_line = 31,
  sym_url = 32,
  sym_header = 33,
  sym_body = 34,
  sym_url_encoded_body = 35,
  sym_url_encoded_key_value = 36,
  sym_url_encoded_key = 37,
  sym_variable_declaration = 38,
  sym_json_body = 39,
  sym__key_value_list = 40,
  sym_json_key_value = 41,
  sym__json_key = 42,
  sym__json_value = 43,
  sym_json_object = 44,
  sym_json_list = 45,
  sym__json_list_values = 46,
  sym_response_start_line = 47,
  sym_http_version = 48,
  sym_reason_phrase = 49,
  sym_identifier = 50,
  sym_string = 51,
  sym_rest_of_line = 52,
  aux_sym_source_file_repeat1 = 53,
  aux_sym_request_repeat1 = 54,
  aux_sym_url_encoded_body_repeat1 = 55,
  aux_sym__key_value_list_repeat1 = 56,
  aux_sym__json_list_values_repeat1 = 57,
  aux_sym_identifier_repeat1 = 58,
  aux_sym_string_repeat1 = 59,
  aux_sym_rest_of_line_repeat1 = 60,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_method] = "method",
  [anon_sym_COLON] = ":",
  [sym_header_name] = "header_name",
  [sym_raw_body] = "raw_body",
  [anon_sym_AMP] = "&",
  [anon_sym_EQ] = "=",
  [anon_sym_AT] = "@",
  [anon_sym_EQ2] = "=",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON2] = ":",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_separator] = "separator",
  [anon_sym_HTTP_SLASH] = "HTTP/",
  [aux_sym_http_version_token1] = "http_version_token1",
  [sym_status_code] = "status_code",
  [aux_sym_identifier_token1] = "identifier_token1",
  [sym__identifier] = "_identifier",
  [sym_number] = "number",
  [sym_boolean] = "boolean",
  [aux_sym_string_token1] = "string_token1",
  [sym_variable_ref] = "variable_ref",
  [aux_sym_rest_of_line_token1] = "rest_of_line_token1",
  [sym__nl] = "_nl",
  [sym_source_file] = "source_file",
  [sym_request] = "request",
  [sym_response] = "response",
  [sym_start_line] = "start_line",
  [sym_url] = "url",
  [sym_header] = "header",
  [sym_body] = "body",
  [sym_url_encoded_body] = "url_encoded_body",
  [sym_url_encoded_key_value] = "url_encoded_key_value",
  [sym_url_encoded_key] = "url_encoded_key",
  [sym_variable_declaration] = "variable_declaration",
  [sym_json_body] = "json_body",
  [sym__key_value_list] = "_key_value_list",
  [sym_json_key_value] = "json_key_value",
  [sym__json_key] = "_json_key",
  [sym__json_value] = "_json_value",
  [sym_json_object] = "json_object",
  [sym_json_list] = "json_list",
  [sym__json_list_values] = "_json_list_values",
  [sym_response_start_line] = "response_start_line",
  [sym_http_version] = "http_version",
  [sym_reason_phrase] = "reason_phrase",
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [sym_rest_of_line] = "rest_of_line",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym_url_encoded_body_repeat1] = "url_encoded_body_repeat1",
  [aux_sym__key_value_list_repeat1] = "_key_value_list_repeat1",
  [aux_sym__json_list_values_repeat1] = "_json_list_values_repeat1",
  [aux_sym_identifier_repeat1] = "identifier_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_rest_of_line_repeat1] = "rest_of_line_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_method] = sym_method,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_header_name] = sym_header_name,
  [sym_raw_body] = sym_raw_body,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_EQ2] = anon_sym_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON2] = anon_sym_COLON,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_separator] = sym_separator,
  [anon_sym_HTTP_SLASH] = anon_sym_HTTP_SLASH,
  [aux_sym_http_version_token1] = aux_sym_http_version_token1,
  [sym_status_code] = sym_status_code,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [sym__identifier] = sym__identifier,
  [sym_number] = sym_number,
  [sym_boolean] = sym_boolean,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_variable_ref] = sym_variable_ref,
  [aux_sym_rest_of_line_token1] = aux_sym_rest_of_line_token1,
  [sym__nl] = sym__nl,
  [sym_source_file] = sym_source_file,
  [sym_request] = sym_request,
  [sym_response] = sym_response,
  [sym_start_line] = sym_start_line,
  [sym_url] = sym_url,
  [sym_header] = sym_header,
  [sym_body] = sym_body,
  [sym_url_encoded_body] = sym_url_encoded_body,
  [sym_url_encoded_key_value] = sym_url_encoded_key_value,
  [sym_url_encoded_key] = sym_url_encoded_key,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_json_body] = sym_json_body,
  [sym__key_value_list] = sym__key_value_list,
  [sym_json_key_value] = sym_json_key_value,
  [sym__json_key] = sym__json_key,
  [sym__json_value] = sym__json_value,
  [sym_json_object] = sym_json_object,
  [sym_json_list] = sym_json_list,
  [sym__json_list_values] = sym__json_list_values,
  [sym_response_start_line] = sym_response_start_line,
  [sym_http_version] = sym_http_version,
  [sym_reason_phrase] = sym_reason_phrase,
  [sym_identifier] = sym_identifier,
  [sym_string] = sym_string,
  [sym_rest_of_line] = sym_rest_of_line,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym_url_encoded_body_repeat1] = aux_sym_url_encoded_body_repeat1,
  [aux_sym__key_value_list_repeat1] = aux_sym__key_value_list_repeat1,
  [aux_sym__json_list_values_repeat1] = aux_sym__json_list_values_repeat1,
  [aux_sym_identifier_repeat1] = aux_sym_identifier_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_rest_of_line_repeat1] = aux_sym_rest_of_line_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_header_name] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_body] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON2] = {
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
  [sym_separator] = {
    .visible = true,
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
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__identifier] = {
    .visible = false,
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
  [sym_variable_ref] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_rest_of_line_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__nl] = {
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
  [sym_response] = {
    .visible = true,
    .named = true,
  },
  [sym_start_line] = {
    .visible = true,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
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
  [sym_url_encoded_key] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
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
  [sym_response_start_line] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_rest_of_line] = {
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
  [aux_sym_url_encoded_body_repeat1] = {
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
  [aux_sym_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rest_of_line_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_key = 1,
  field_name = 2,
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
    {field_value, 3},
  [2] =
    {field_name, 0},
    {field_value, 2},
  [4] =
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 5,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 16,
  [18] = 18,
  [19] = 19,
  [20] = 19,
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
  [62] = 36,
  [63] = 27,
  [64] = 29,
  [65] = 65,
  [66] = 43,
  [67] = 51,
  [68] = 68,
  [69] = 69,
  [70] = 46,
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
  [128] = 124,
  [129] = 129,
  [130] = 122,
  [131] = 92,
  [132] = 97,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(53);
      if (lookahead == ' ') SKIP(51);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '&') ADVANCE(62);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == 'C') ADVANCE(78);
      if (lookahead == 'D') ADVANCE(78);
      if (lookahead == 'G') ADVANCE(78);
      if (lookahead == 'H') ADVANCE(78);
      if (lookahead == 'L') ADVANCE(78);
      if (lookahead == 'O') ADVANCE(78);
      if (lookahead == 'P') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(78);
      if (lookahead == '[') ADVANCE(71);
      if (lookahead == ']') ADVANCE(72);
      if (lookahead == 'f') ADVANCE(78);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == '}') ADVANCE(70);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '[') ADVANCE(71);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        ' ', 87,
        '@', 64,
        'C', 94,
        'D', 90,
        'G', 91,
        'H', 92,
        'L', 93,
        'O', 95,
        'P', 89,
        'T', 96,
        '{', 97,
      );
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(86);
      END_STATE();
    case 5:
      if (lookahead == ' ') SKIP(6);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '[') ADVANCE(71);
      if (lookahead == ']') ADVANCE(72);
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(98);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 6:
      if (lookahead == ' ') SKIP(6);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '[') ADVANCE(71);
      if (lookahead == ']') ADVANCE(72);
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 7:
      if (lookahead == ' ') SKIP(8);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '&') ADVANCE(62);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(98);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 8:
      if (lookahead == ' ') SKIP(8);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '&') ADVANCE(62);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(98);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(57);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 12:
      if (lookahead == ' ') SKIP(12);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 13:
      if (lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 14:
      if (lookahead == ' ') SKIP(14);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(73);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(75);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'C') ADVANCE(37);
      END_STATE();
    case 21:
      if (lookahead == 'C') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'C') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'D') ADVANCE(54);
      END_STATE();
    case 24:
      if (lookahead == 'E') ADVANCE(54);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(20);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(41);
      END_STATE();
    case 27:
      if (lookahead == 'H') ADVANCE(54);
      END_STATE();
    case 28:
      if (lookahead == 'I') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 'L') ADVANCE(26);
      END_STATE();
    case 30:
      if (lookahead == 'N') ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == 'N') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 'N') ADVANCE(25);
      END_STATE();
    case 33:
      if (lookahead == 'O') ADVANCE(31);
      END_STATE();
    case 34:
      if (lookahead == 'P') ADVANCE(17);
      END_STATE();
    case 35:
      if (lookahead == 'S') ADVANCE(37);
      END_STATE();
    case 36:
      if (lookahead == 'S') ADVANCE(54);
      END_STATE();
    case 37:
      if (lookahead == 'T') ADVANCE(54);
      END_STATE();
    case 38:
      if (lookahead == 'T') ADVANCE(34);
      END_STATE();
    case 39:
      if (lookahead == 'T') ADVANCE(28);
      END_STATE();
    case 40:
      if (lookahead == 'T') ADVANCE(21);
      END_STATE();
    case 41:
      if (lookahead == 'T') ADVANCE(24);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 48:
      if (lookahead == '{') ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == '}') ADVANCE(50);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      if (lookahead == '}') ADVANCE(85);
      END_STATE();
    case 51:
      if (eof) ADVANCE(53);
      if (lookahead == ' ') SKIP(51);
      if (lookahead == '"') ADVANCE(68);
      if (lookahead == '#') ADVANCE(16);
      if (lookahead == '&') ADVANCE(62);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == 'C') ADVANCE(78);
      if (lookahead == 'D') ADVANCE(78);
      if (lookahead == 'G') ADVANCE(78);
      if (lookahead == 'H') ADVANCE(78);
      if (lookahead == 'L') ADVANCE(78);
      if (lookahead == 'O') ADVANCE(78);
      if (lookahead == 'P') ADVANCE(78);
      if (lookahead == 'T') ADVANCE(78);
      if (lookahead == '[') ADVANCE(71);
      if (lookahead == ']') ADVANCE(72);
      if (lookahead == 'f') ADVANCE(78);
      if (lookahead == 't') ADVANCE(78);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == '}') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 52:
      if (eof) ADVANCE(53);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '[') ADVANCE(71);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_method);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == ' ') ADVANCE(58);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == '[') ADVANCE(71);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '#') ADVANCE(59);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_separator);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_separator);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_status_code);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(82);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(49);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_variable_ref);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      ADVANCE_MAP(
        ' ', 87,
        '@', 64,
        'C', 94,
        'D', 90,
        'G', 91,
        'H', 92,
        'L', 93,
        'O', 95,
        'P', 89,
        'T', 96,
        '{', 97,
      );
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(86);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == '{') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(86);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'A') ADVANCE(40);
      if (lookahead == 'O') ADVANCE(35);
      if (lookahead == 'U') ADVANCE(37);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'E') ADVANCE(37);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'E') ADVANCE(18);
      if (lookahead == 'T') ADVANCE(38);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'I') ADVANCE(35);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'O') ADVANCE(30);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'P') ADVANCE(39);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'R') ADVANCE(19);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == '{') ADVANCE(49);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__nl);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 52},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 52},
  [9] = {.lex_state = 52},
  [10] = {.lex_state = 52},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 12},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
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
  [88] = {.lex_state = 10},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 13},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 13},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 14},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_method] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_EQ2] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_separator] = ACTIONS(1),
    [anon_sym_HTTP_SLASH] = ACTIONS(1),
    [aux_sym_http_version_token1] = ACTIONS(1),
    [sym_status_code] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym_variable_ref] = ACTIONS(1),
    [sym__nl] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(129),
    [sym_request] = STATE(59),
    [sym_response] = STATE(59),
    [sym_start_line] = STATE(126),
    [sym_url] = STATE(125),
    [sym_variable_declaration] = STATE(59),
    [sym_response_start_line] = STATE(115),
    [sym_http_version] = STATE(113),
    [sym_rest_of_line] = STATE(108),
    [aux_sym_rest_of_line_repeat1] = STATE(32),
    [sym_method] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(5),
    [anon_sym_HTTP_SLASH] = ACTIONS(7),
    [sym_variable_ref] = ACTIONS(9),
    [aux_sym_rest_of_line_token1] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_RBRACK,
    ACTIONS(21), 1,
      sym_variable_ref,
    ACTIONS(23), 1,
      sym__nl,
    STATE(47), 1,
      sym_json_object,
    STATE(130), 1,
      sym__json_list_values,
    ACTIONS(19), 2,
      sym_number,
      sym_boolean,
    STATE(65), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [35] = 10,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_variable_ref,
    ACTIONS(25), 1,
      anon_sym_RBRACK,
    ACTIONS(27), 1,
      sym__nl,
    STATE(47), 1,
      sym_json_object,
    STATE(122), 1,
      sym__json_list_values,
    ACTIONS(19), 2,
      sym_number,
      sym_boolean,
    STATE(65), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [70] = 11,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_HTTP_SLASH,
    STATE(32), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(108), 1,
      sym_rest_of_line,
    STATE(113), 1,
      sym_http_version,
    STATE(115), 1,
      sym_response_start_line,
    STATE(125), 1,
      sym_url,
    STATE(126), 1,
      sym_start_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
    STATE(83), 3,
      sym_request,
      sym_response,
      sym_variable_declaration,
  [107] = 9,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_variable_ref,
    ACTIONS(29), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym_json_object,
    STATE(97), 1,
      sym__json_list_values,
    ACTIONS(19), 2,
      sym_number,
      sym_boolean,
    STATE(65), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [139] = 11,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      sym_raw_body,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      sym_separator,
    ACTIONS(41), 1,
      sym__identifier,
    STATE(75), 1,
      sym_url_encoded_key_value,
    STATE(95), 1,
      sym_url_encoded_key,
    STATE(117), 1,
      sym_body,
    STATE(47), 2,
      sym_json_object,
      sym_json_list,
    STATE(109), 2,
      sym_url_encoded_body,
      sym_json_body,
  [175] = 9,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      sym_variable_ref,
    ACTIONS(43), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym_json_object,
    STATE(132), 1,
      sym__json_list_values,
    ACTIONS(19), 2,
      sym_number,
      sym_boolean,
    STATE(65), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [207] = 11,
    ACTIONS(33), 1,
      sym_raw_body,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      sym_separator,
    STATE(75), 1,
      sym_url_encoded_key_value,
    STATE(95), 1,
      sym_url_encoded_key,
    STATE(119), 1,
      sym_body,
    STATE(47), 2,
      sym_json_object,
      sym_json_list,
    STATE(109), 2,
      sym_url_encoded_body,
      sym_json_body,
  [243] = 11,
    ACTIONS(33), 1,
      sym_raw_body,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_separator,
    STATE(75), 1,
      sym_url_encoded_key_value,
    STATE(94), 1,
      sym_body,
    STATE(95), 1,
      sym_url_encoded_key,
    STATE(47), 2,
      sym_json_object,
      sym_json_list,
    STATE(109), 2,
      sym_url_encoded_body,
      sym_json_body,
  [279] = 11,
    ACTIONS(33), 1,
      sym_raw_body,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      sym__identifier,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      sym_separator,
    STATE(75), 1,
      sym_url_encoded_key_value,
    STATE(95), 1,
      sym_url_encoded_key,
    STATE(114), 1,
      sym_body,
    STATE(47), 2,
      sym_json_object,
      sym_json_list,
    STATE(109), 2,
      sym_url_encoded_body,
      sym_json_body,
  [315] = 8,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      sym_variable_ref,
    ACTIONS(65), 1,
      sym__nl,
    STATE(47), 1,
      sym_json_object,
    ACTIONS(61), 2,
      sym_number,
      sym_boolean,
    STATE(76), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [344] = 7,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(69), 1,
      sym_variable_ref,
    STATE(47), 1,
      sym_json_object,
    ACTIONS(67), 2,
      sym_number,
      sym_boolean,
    STATE(72), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [370] = 7,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(73), 1,
      sym_variable_ref,
    STATE(47), 1,
      sym_json_object,
    ACTIONS(71), 2,
      sym_number,
      sym_boolean,
    STATE(57), 4,
      sym_json_body,
      sym__json_value,
      sym_json_list,
      sym_string,
  [396] = 3,
    STATE(14), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(77), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
    ACTIONS(75), 4,
      anon_sym_AMP,
      anon_sym_EQ2,
      anon_sym_DQUOTE,
      sym__nl,
  [410] = 3,
    STATE(14), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(82), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
    ACTIONS(80), 4,
      anon_sym_AMP,
      anon_sym_EQ2,
      anon_sym_DQUOTE,
      sym__nl,
  [424] = 6,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    ACTIONS(88), 1,
      sym__nl,
    STATE(53), 1,
      sym_json_key_value,
    STATE(123), 1,
      sym__json_key,
    STATE(124), 1,
      sym__key_value_list,
  [443] = 6,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    ACTIONS(92), 1,
      sym__nl,
    STATE(53), 1,
      sym_json_key_value,
    STATE(123), 1,
      sym__json_key,
    STATE(128), 1,
      sym__key_value_list,
  [462] = 4,
    STATE(32), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(107), 1,
      sym_url,
    STATE(108), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [476] = 5,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      sym_json_key_value,
    STATE(123), 1,
      sym__json_key,
    STATE(131), 1,
      sym__key_value_list,
  [492] = 5,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      sym_json_key_value,
    STATE(92), 1,
      sym__key_value_list,
    STATE(123), 1,
      sym__json_key,
  [508] = 4,
    STATE(32), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(100), 1,
      sym_reason_phrase,
    STATE(102), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [522] = 1,
    ACTIONS(98), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [529] = 3,
    STATE(32), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(127), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [540] = 4,
    ACTIONS(100), 1,
      sym_header_name,
    ACTIONS(102), 1,
      sym__nl,
    STATE(33), 1,
      aux_sym_request_repeat1,
    STATE(98), 1,
      sym_header,
  [553] = 3,
    ACTIONS(107), 1,
      sym__nl,
    STATE(25), 1,
      aux_sym_rest_of_line_repeat1,
    ACTIONS(104), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [564] = 3,
    STATE(32), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(103), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [575] = 1,
    ACTIONS(109), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [582] = 1,
    ACTIONS(109), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [589] = 1,
    ACTIONS(111), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [596] = 1,
    ACTIONS(111), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [603] = 4,
    ACTIONS(100), 1,
      sym_header_name,
    ACTIONS(113), 1,
      sym__nl,
    STATE(50), 1,
      aux_sym_request_repeat1,
    STATE(98), 1,
      sym_header,
  [616] = 3,
    ACTIONS(117), 1,
      sym__nl,
    STATE(25), 1,
      aux_sym_rest_of_line_repeat1,
    ACTIONS(115), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [627] = 4,
    ACTIONS(100), 1,
      sym_header_name,
    ACTIONS(119), 1,
      sym__nl,
    STATE(50), 1,
      aux_sym_request_repeat1,
    STATE(98), 1,
      sym_header,
  [640] = 3,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      aux_sym_string_repeat1,
    ACTIONS(123), 2,
      aux_sym_string_token1,
      sym_variable_ref,
  [651] = 1,
    ACTIONS(125), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [658] = 1,
    ACTIONS(125), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [665] = 1,
    ACTIONS(127), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [672] = 4,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    ACTIONS(133), 1,
      sym__nl,
    STATE(49), 1,
      aux_sym__key_value_list_repeat1,
  [685] = 4,
    ACTIONS(100), 1,
      sym_header_name,
    ACTIONS(135), 1,
      sym__nl,
    STATE(31), 1,
      aux_sym_request_repeat1,
    STATE(98), 1,
      sym_header,
  [698] = 4,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      sym__nl,
    STATE(61), 1,
      sym_json_key_value,
    STATE(123), 1,
      sym__json_key,
  [711] = 3,
    STATE(15), 1,
      aux_sym_identifier_repeat1,
    STATE(116), 1,
      sym_identifier,
    ACTIONS(139), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [722] = 1,
    ACTIONS(141), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [729] = 1,
    ACTIONS(143), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [736] = 1,
    ACTIONS(143), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [743] = 3,
    STATE(15), 1,
      aux_sym_identifier_repeat1,
    STATE(87), 1,
      sym_identifier,
    ACTIONS(139), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [754] = 1,
    ACTIONS(145), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [761] = 1,
    ACTIONS(147), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [768] = 3,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      aux_sym_string_repeat1,
    ACTIONS(151), 2,
      aux_sym_string_token1,
      sym_variable_ref,
  [779] = 3,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym__key_value_list_repeat1,
    ACTIONS(157), 2,
      anon_sym_RBRACE,
      sym__nl,
  [790] = 4,
    ACTIONS(159), 1,
      sym_header_name,
    ACTIONS(162), 1,
      sym__nl,
    STATE(50), 1,
      aux_sym_request_repeat1,
    STATE(98), 1,
      sym_header,
  [803] = 1,
    ACTIONS(164), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [810] = 1,
    ACTIONS(166), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [817] = 4,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    ACTIONS(170), 1,
      sym__nl,
    STATE(38), 1,
      aux_sym__key_value_list_repeat1,
  [830] = 3,
    STATE(15), 1,
      aux_sym_identifier_repeat1,
    STATE(106), 1,
      sym_identifier,
    ACTIONS(139), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [841] = 3,
    ACTIONS(172), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      aux_sym_string_repeat1,
    ACTIONS(174), 2,
      aux_sym_string_token1,
      sym_variable_ref,
  [852] = 3,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      sym_json_key_value,
    STATE(123), 1,
      sym__json_key,
  [862] = 2,
    ACTIONS(178), 1,
      sym__nl,
    ACTIONS(176), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [870] = 3,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym__json_list_values_repeat1,
  [880] = 3,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
    ACTIONS(186), 1,
      sym_separator,
    STATE(71), 1,
      aux_sym_source_file_repeat1,
  [890] = 3,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
    ACTIONS(190), 1,
      sym_separator,
    STATE(60), 1,
      aux_sym_source_file_repeat1,
  [900] = 1,
    ACTIONS(157), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__nl,
  [906] = 2,
    ACTIONS(193), 1,
      sym__nl,
    ACTIONS(125), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [914] = 2,
    ACTIONS(195), 1,
      sym__nl,
    ACTIONS(109), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [922] = 2,
    ACTIONS(197), 1,
      sym__nl,
    ACTIONS(111), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [930] = 3,
    ACTIONS(180), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      anon_sym_RBRACK,
    STATE(58), 1,
      aux_sym__json_list_values_repeat1,
  [940] = 2,
    ACTIONS(201), 1,
      sym__nl,
    ACTIONS(143), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [948] = 2,
    ACTIONS(203), 1,
      sym__nl,
    ACTIONS(164), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [956] = 3,
    ACTIONS(205), 1,
      sym__identifier,
    STATE(90), 1,
      sym_url_encoded_key_value,
    STATE(95), 1,
      sym_url_encoded_key,
  [966] = 3,
    ACTIONS(207), 1,
      anon_sym_AMP,
    ACTIONS(209), 1,
      sym__nl,
    STATE(73), 1,
      aux_sym_url_encoded_body_repeat1,
  [976] = 2,
    ACTIONS(211), 1,
      sym__nl,
    ACTIONS(145), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [984] = 3,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    ACTIONS(215), 1,
      sym_separator,
    STATE(60), 1,
      aux_sym_source_file_repeat1,
  [994] = 1,
    ACTIONS(217), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__nl,
  [1000] = 3,
    ACTIONS(219), 1,
      anon_sym_AMP,
    ACTIONS(222), 1,
      sym__nl,
    STATE(73), 1,
      aux_sym_url_encoded_body_repeat1,
  [1010] = 1,
    ACTIONS(224), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__nl,
  [1016] = 3,
    ACTIONS(207), 1,
      anon_sym_AMP,
    ACTIONS(226), 1,
      sym__nl,
    STATE(69), 1,
      aux_sym_url_encoded_body_repeat1,
  [1026] = 2,
    ACTIONS(230), 1,
      sym__nl,
    ACTIONS(228), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1034] = 3,
    ACTIONS(228), 1,
      anon_sym_RBRACK,
    ACTIONS(232), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      aux_sym__json_list_values_repeat1,
  [1044] = 1,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      sym_separator,
  [1049] = 1,
    ACTIONS(237), 2,
      ts_builtin_sym_end,
      sym_separator,
  [1054] = 2,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    ACTIONS(239), 1,
      sym__nl,
  [1061] = 1,
    ACTIONS(176), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1066] = 1,
    ACTIONS(241), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1071] = 1,
    ACTIONS(243), 2,
      ts_builtin_sym_end,
      sym_separator,
  [1076] = 2,
    ACTIONS(239), 1,
      sym__nl,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
  [1083] = 1,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      sym_separator,
  [1088] = 1,
    ACTIONS(249), 2,
      ts_builtin_sym_end,
      sym_separator,
  [1093] = 1,
    ACTIONS(251), 2,
      anon_sym_AMP,
      sym__nl,
  [1098] = 1,
    ACTIONS(162), 2,
      sym_header_name,
      sym__nl,
  [1103] = 1,
    ACTIONS(253), 2,
      ts_builtin_sym_end,
      sym_separator,
  [1108] = 1,
    ACTIONS(222), 2,
      anon_sym_AMP,
      sym__nl,
  [1113] = 1,
    ACTIONS(255), 1,
      sym__nl,
  [1117] = 1,
    ACTIONS(257), 1,
      anon_sym_RBRACE,
  [1121] = 1,
    ACTIONS(259), 1,
      sym__nl,
  [1125] = 1,
    ACTIONS(261), 1,
      sym__nl,
  [1129] = 1,
    ACTIONS(263), 1,
      anon_sym_EQ,
  [1133] = 1,
    ACTIONS(265), 1,
      anon_sym_COLON2,
  [1137] = 1,
    ACTIONS(267), 1,
      anon_sym_RBRACK,
  [1141] = 1,
    ACTIONS(269), 1,
      sym__nl,
  [1145] = 1,
    ACTIONS(271), 1,
      sym__nl,
  [1149] = 1,
    ACTIONS(273), 1,
      sym__nl,
  [1153] = 1,
    ACTIONS(275), 1,
      anon_sym_RBRACE,
  [1157] = 1,
    ACTIONS(277), 1,
      sym__nl,
  [1161] = 1,
    ACTIONS(279), 1,
      sym__nl,
  [1165] = 1,
    ACTIONS(239), 1,
      sym__nl,
  [1169] = 1,
    ACTIONS(281), 1,
      sym_status_code,
  [1173] = 1,
    ACTIONS(283), 1,
      anon_sym_EQ2,
  [1177] = 1,
    ACTIONS(285), 1,
      sym__nl,
  [1181] = 1,
    ACTIONS(287), 1,
      sym__nl,
  [1185] = 1,
    ACTIONS(289), 1,
      sym__nl,
  [1189] = 1,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
  [1193] = 1,
    ACTIONS(291), 1,
      anon_sym_EQ,
  [1197] = 1,
    ACTIONS(293), 1,
      anon_sym_COLON,
  [1201] = 1,
    ACTIONS(295), 1,
      sym_status_code,
  [1205] = 1,
    ACTIONS(297), 1,
      sym__nl,
  [1209] = 1,
    ACTIONS(299), 1,
      sym__nl,
  [1213] = 1,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
  [1217] = 1,
    ACTIONS(303), 1,
      sym__nl,
  [1221] = 1,
    ACTIONS(305), 1,
      sym__nl,
  [1225] = 1,
    ACTIONS(307), 1,
      sym__nl,
  [1229] = 1,
    ACTIONS(309), 1,
      aux_sym_http_version_token1,
  [1233] = 1,
    ACTIONS(311), 1,
      sym__nl,
  [1237] = 1,
    ACTIONS(29), 1,
      anon_sym_RBRACK,
  [1241] = 1,
    ACTIONS(313), 1,
      anon_sym_COLON2,
  [1245] = 1,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
  [1249] = 1,
    ACTIONS(315), 1,
      sym__nl,
  [1253] = 1,
    ACTIONS(317), 1,
      sym__nl,
  [1257] = 1,
    ACTIONS(319), 1,
      sym__nl,
  [1261] = 1,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
  [1265] = 1,
    ACTIONS(321), 1,
      ts_builtin_sym_end,
  [1269] = 1,
    ACTIONS(43), 1,
      anon_sym_RBRACK,
  [1273] = 1,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
  [1277] = 1,
    ACTIONS(325), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 107,
  [SMALL_STATE(6)] = 139,
  [SMALL_STATE(7)] = 175,
  [SMALL_STATE(8)] = 207,
  [SMALL_STATE(9)] = 243,
  [SMALL_STATE(10)] = 279,
  [SMALL_STATE(11)] = 315,
  [SMALL_STATE(12)] = 344,
  [SMALL_STATE(13)] = 370,
  [SMALL_STATE(14)] = 396,
  [SMALL_STATE(15)] = 410,
  [SMALL_STATE(16)] = 424,
  [SMALL_STATE(17)] = 443,
  [SMALL_STATE(18)] = 462,
  [SMALL_STATE(19)] = 476,
  [SMALL_STATE(20)] = 492,
  [SMALL_STATE(21)] = 508,
  [SMALL_STATE(22)] = 522,
  [SMALL_STATE(23)] = 529,
  [SMALL_STATE(24)] = 540,
  [SMALL_STATE(25)] = 553,
  [SMALL_STATE(26)] = 564,
  [SMALL_STATE(27)] = 575,
  [SMALL_STATE(28)] = 582,
  [SMALL_STATE(29)] = 589,
  [SMALL_STATE(30)] = 596,
  [SMALL_STATE(31)] = 603,
  [SMALL_STATE(32)] = 616,
  [SMALL_STATE(33)] = 627,
  [SMALL_STATE(34)] = 640,
  [SMALL_STATE(35)] = 651,
  [SMALL_STATE(36)] = 658,
  [SMALL_STATE(37)] = 665,
  [SMALL_STATE(38)] = 672,
  [SMALL_STATE(39)] = 685,
  [SMALL_STATE(40)] = 698,
  [SMALL_STATE(41)] = 711,
  [SMALL_STATE(42)] = 722,
  [SMALL_STATE(43)] = 729,
  [SMALL_STATE(44)] = 736,
  [SMALL_STATE(45)] = 743,
  [SMALL_STATE(46)] = 754,
  [SMALL_STATE(47)] = 761,
  [SMALL_STATE(48)] = 768,
  [SMALL_STATE(49)] = 779,
  [SMALL_STATE(50)] = 790,
  [SMALL_STATE(51)] = 803,
  [SMALL_STATE(52)] = 810,
  [SMALL_STATE(53)] = 817,
  [SMALL_STATE(54)] = 830,
  [SMALL_STATE(55)] = 841,
  [SMALL_STATE(56)] = 852,
  [SMALL_STATE(57)] = 862,
  [SMALL_STATE(58)] = 870,
  [SMALL_STATE(59)] = 880,
  [SMALL_STATE(60)] = 890,
  [SMALL_STATE(61)] = 900,
  [SMALL_STATE(62)] = 906,
  [SMALL_STATE(63)] = 914,
  [SMALL_STATE(64)] = 922,
  [SMALL_STATE(65)] = 930,
  [SMALL_STATE(66)] = 940,
  [SMALL_STATE(67)] = 948,
  [SMALL_STATE(68)] = 956,
  [SMALL_STATE(69)] = 966,
  [SMALL_STATE(70)] = 976,
  [SMALL_STATE(71)] = 984,
  [SMALL_STATE(72)] = 994,
  [SMALL_STATE(73)] = 1000,
  [SMALL_STATE(74)] = 1010,
  [SMALL_STATE(75)] = 1016,
  [SMALL_STATE(76)] = 1026,
  [SMALL_STATE(77)] = 1034,
  [SMALL_STATE(78)] = 1044,
  [SMALL_STATE(79)] = 1049,
  [SMALL_STATE(80)] = 1054,
  [SMALL_STATE(81)] = 1061,
  [SMALL_STATE(82)] = 1066,
  [SMALL_STATE(83)] = 1071,
  [SMALL_STATE(84)] = 1076,
  [SMALL_STATE(85)] = 1083,
  [SMALL_STATE(86)] = 1088,
  [SMALL_STATE(87)] = 1093,
  [SMALL_STATE(88)] = 1098,
  [SMALL_STATE(89)] = 1103,
  [SMALL_STATE(90)] = 1108,
  [SMALL_STATE(91)] = 1113,
  [SMALL_STATE(92)] = 1117,
  [SMALL_STATE(93)] = 1121,
  [SMALL_STATE(94)] = 1125,
  [SMALL_STATE(95)] = 1129,
  [SMALL_STATE(96)] = 1133,
  [SMALL_STATE(97)] = 1137,
  [SMALL_STATE(98)] = 1141,
  [SMALL_STATE(99)] = 1145,
  [SMALL_STATE(100)] = 1149,
  [SMALL_STATE(101)] = 1153,
  [SMALL_STATE(102)] = 1157,
  [SMALL_STATE(103)] = 1161,
  [SMALL_STATE(104)] = 1165,
  [SMALL_STATE(105)] = 1169,
  [SMALL_STATE(106)] = 1173,
  [SMALL_STATE(107)] = 1177,
  [SMALL_STATE(108)] = 1181,
  [SMALL_STATE(109)] = 1185,
  [SMALL_STATE(110)] = 1189,
  [SMALL_STATE(111)] = 1193,
  [SMALL_STATE(112)] = 1197,
  [SMALL_STATE(113)] = 1201,
  [SMALL_STATE(114)] = 1205,
  [SMALL_STATE(115)] = 1209,
  [SMALL_STATE(116)] = 1213,
  [SMALL_STATE(117)] = 1217,
  [SMALL_STATE(118)] = 1221,
  [SMALL_STATE(119)] = 1225,
  [SMALL_STATE(120)] = 1229,
  [SMALL_STATE(121)] = 1233,
  [SMALL_STATE(122)] = 1237,
  [SMALL_STATE(123)] = 1241,
  [SMALL_STATE(124)] = 1245,
  [SMALL_STATE(125)] = 1249,
  [SMALL_STATE(126)] = 1253,
  [SMALL_STATE(127)] = 1257,
  [SMALL_STATE(128)] = 1261,
  [SMALL_STATE(129)] = 1265,
  [SMALL_STATE(130)] = 1269,
  [SMALL_STATE(131)] = 1273,
  [SMALL_STATE(132)] = 1277,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 4, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 4, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 4, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 4, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 3, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rest_of_line_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rest_of_line_repeat1, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 4, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 4, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 5, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 5, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 2, 0, 0),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 2, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 3, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 2, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 1, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_body, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3, 0, 3),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_url_encoded_body_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_encoded_body_repeat1, 2, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 3, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_body, 1, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 7, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 7, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 4, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 4, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_key_value, 3, 0, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_key, 3, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_start_line, 3, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 3, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason_phrase, 1, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_line, 2, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_key, 1, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_line, 1, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 2),
  [321] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
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

TS_PUBLIC const TSLanguage *tree_sitter_http2(void) {
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
