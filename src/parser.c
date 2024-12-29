#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 137
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
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
  aux_sym_url_encoded_value_token1 = 7,
  anon_sym_AT = 8,
  anon_sym_EQ2 = 9,
  anon_sym_COMMA = 10,
  anon_sym_COLON2 = 11,
  anon_sym_DQUOTE = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  anon_sym_LBRACK = 15,
  anon_sym_RBRACK = 16,
  sym_separator = 17,
  anon_sym_HTTP_SLASH = 18,
  aux_sym_http_version_token1 = 19,
  sym_status_code = 20,
  aux_sym_identifier_token1 = 21,
  sym__identifier = 22,
  sym_number = 23,
  sym_boolean = 24,
  aux_sym_string_token1 = 25,
  sym_null = 26,
  sym_variable_ref = 27,
  aux_sym_rest_of_line_token1 = 28,
  sym__nl = 29,
  sym_source_file = 30,
  sym__block = 31,
  sym_request = 32,
  sym_response = 33,
  sym_start_line = 34,
  sym_url = 35,
  sym_header = 36,
  sym_body = 37,
  sym_url_encoded_body = 38,
  sym_url_encoded_key_value = 39,
  sym_url_encoded_key = 40,
  sym_url_encoded_value = 41,
  sym_variable_declaration = 42,
  sym_json_body = 43,
  sym__key_value_list = 44,
  sym_json_key_value = 45,
  sym__json_key = 46,
  sym__json_value = 47,
  sym_json_object = 48,
  sym_json_list = 49,
  sym__json_list_values = 50,
  sym_response_start_line = 51,
  sym_http_version = 52,
  sym_reason_phrase = 53,
  sym_identifier = 54,
  sym_string = 55,
  sym_rest_of_line = 56,
  aux_sym_source_file_repeat1 = 57,
  aux_sym_source_file_repeat2 = 58,
  aux_sym__block_repeat1 = 59,
  aux_sym_request_repeat1 = 60,
  aux_sym_url_encoded_body_repeat1 = 61,
  aux_sym_url_encoded_value_repeat1 = 62,
  aux_sym__key_value_list_repeat1 = 63,
  aux_sym__json_list_values_repeat1 = 64,
  aux_sym_identifier_repeat1 = 65,
  aux_sym_string_repeat1 = 66,
  aux_sym_rest_of_line_repeat1 = 67,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_method] = "method",
  [anon_sym_COLON] = ":",
  [sym_header_name] = "header_name",
  [sym_raw_body] = "raw_body",
  [anon_sym_AMP] = "&",
  [anon_sym_EQ] = "=",
  [aux_sym_url_encoded_value_token1] = "url_encoded_value_token1",
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
  [sym_null] = "null",
  [sym_variable_ref] = "variable_ref",
  [aux_sym_rest_of_line_token1] = "rest_of_line_token1",
  [sym__nl] = "_nl",
  [sym_source_file] = "source_file",
  [sym__block] = "_block",
  [sym_request] = "request",
  [sym_response] = "response",
  [sym_start_line] = "start_line",
  [sym_url] = "url",
  [sym_header] = "header",
  [sym_body] = "body",
  [sym_url_encoded_body] = "url_encoded_body",
  [sym_url_encoded_key_value] = "url_encoded_key_value",
  [sym_url_encoded_key] = "url_encoded_key",
  [sym_url_encoded_value] = "url_encoded_value",
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
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym__block_repeat1] = "_block_repeat1",
  [aux_sym_request_repeat1] = "request_repeat1",
  [aux_sym_url_encoded_body_repeat1] = "url_encoded_body_repeat1",
  [aux_sym_url_encoded_value_repeat1] = "url_encoded_value_repeat1",
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
  [aux_sym_url_encoded_value_token1] = aux_sym_url_encoded_value_token1,
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
  [sym_null] = sym_null,
  [sym_variable_ref] = sym_variable_ref,
  [aux_sym_rest_of_line_token1] = aux_sym_rest_of_line_token1,
  [sym__nl] = sym__nl,
  [sym_source_file] = sym_source_file,
  [sym__block] = sym__block,
  [sym_request] = sym_request,
  [sym_response] = sym_response,
  [sym_start_line] = sym_start_line,
  [sym_url] = sym_url,
  [sym_header] = sym_header,
  [sym_body] = sym_body,
  [sym_url_encoded_body] = sym_url_encoded_body,
  [sym_url_encoded_key_value] = sym_url_encoded_key_value,
  [sym_url_encoded_key] = sym_url_encoded_key,
  [sym_url_encoded_value] = sym_url_encoded_value,
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
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym__block_repeat1] = aux_sym__block_repeat1,
  [aux_sym_request_repeat1] = aux_sym_request_repeat1,
  [aux_sym_url_encoded_body_repeat1] = aux_sym_url_encoded_body_repeat1,
  [aux_sym_url_encoded_value_repeat1] = aux_sym_url_encoded_value_repeat1,
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
  [aux_sym_url_encoded_value_token1] = {
    .visible = false,
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
  [sym_null] = {
    .visible = true,
    .named = true,
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
  [sym__block] = {
    .visible = false,
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
  [sym_url_encoded_value] = {
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
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__block_repeat1] = {
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
  [aux_sym_url_encoded_value_repeat1] = {
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
  [3] = 3,
  [4] = 4,
  [5] = 5,
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
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 16,
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
  [79] = 53,
  [80] = 80,
  [81] = 17,
  [82] = 23,
  [83] = 57,
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
  [101] = 50,
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
  [131] = 116,
  [132] = 110,
  [133] = 133,
  [134] = 107,
  [135] = 135,
  [136] = 136,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(74);
      if (lookahead == ' ') SKIP(69);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '&') ADVANCE(89);
      if (lookahead == ',') ADVANCE(102);
      if (lookahead == '.') ADVANCE(114);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == '@') ADVANCE(95);
      if (lookahead == 'C') ADVANCE(114);
      if (lookahead == 'D') ADVANCE(114);
      if (lookahead == 'G') ADVANCE(114);
      if (lookahead == 'H') ADVANCE(114);
      if (lookahead == 'L') ADVANCE(114);
      if (lookahead == 'O') ADVANCE(114);
      if (lookahead == 'P') ADVANCE(114);
      if (lookahead == 'T') ADVANCE(114);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == ']') ADVANCE(109);
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == '{') ADVANCE(106);
      if (lookahead == '}') ADVANCE(107);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(86);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '@') ADVANCE(96);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(87);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 7:
      ADVANCE_MAP(
        ' ', 124,
        '@', 95,
        'C', 131,
        'D', 127,
        'G', 128,
        'H', 129,
        'L', 130,
        'O', 132,
        'P', 126,
        'T', 133,
        '{', 134,
        '\n', 135,
        '\r', 135,
      );
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '#') ADVANCE(2);
      if (lookahead == '@') ADVANCE(96);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(26);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(125);
      if (lookahead == '{') ADVANCE(134);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 12:
      if (lookahead == ' ') SKIP(12);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(92);
      if (lookahead == '&') ADVANCE(89);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      if (lookahead != 0) ADVANCE(91);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(78);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(81);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '{') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(118);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '&') ADVANCE(91);
      END_STATE();
    case 17:
      if (lookahead == ' ') SKIP(17);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 18:
      if (lookahead == ' ') SKIP(18);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 19:
      if (lookahead == ' ') SKIP(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 20:
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '@') ADVANCE(99);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 21:
      if (lookahead == ' ') ADVANCE(23);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(67);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(66);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(110);
      END_STATE();
    case 25:
      if (lookahead == '#') ADVANCE(3);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 26:
      if (lookahead == '#') ADVANCE(3);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 27:
      if (lookahead == '#') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == '/') ADVANCE(111);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(34);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == 'C') ADVANCE(48);
      END_STATE();
    case 32:
      if (lookahead == 'C') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == 'C') ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == 'D') ADVANCE(75);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(75);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(31);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(52);
      END_STATE();
    case 38:
      if (lookahead == 'H') ADVANCE(75);
      END_STATE();
    case 39:
      if (lookahead == 'I') ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == 'L') ADVANCE(37);
      END_STATE();
    case 41:
      if (lookahead == 'N') ADVANCE(43);
      END_STATE();
    case 42:
      if (lookahead == 'N') ADVANCE(47);
      END_STATE();
    case 43:
      if (lookahead == 'N') ADVANCE(36);
      END_STATE();
    case 44:
      if (lookahead == 'O') ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == 'P') ADVANCE(28);
      END_STATE();
    case 46:
      if (lookahead == 'S') ADVANCE(48);
      END_STATE();
    case 47:
      if (lookahead == 'S') ADVANCE(75);
      END_STATE();
    case 48:
      if (lookahead == 'T') ADVANCE(75);
      END_STATE();
    case 49:
      if (lookahead == 'T') ADVANCE(45);
      END_STATE();
    case 50:
      if (lookahead == 'T') ADVANCE(39);
      END_STATE();
    case 51:
      if (lookahead == 'T') ADVANCE(32);
      END_STATE();
    case 52:
      if (lookahead == 'T') ADVANCE(35);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 62:
      if (lookahead == '{') ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == '}') ADVANCE(64);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(63);
      END_STATE();
    case 64:
      if (lookahead == '}') ADVANCE(122);
      END_STATE();
    case 65:
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(68);
      END_STATE();
    case 66:
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(25);
      END_STATE();
    case 67:
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(65);
      END_STATE();
    case 68:
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 69:
      if (eof) ADVANCE(74);
      if (lookahead == ' ') SKIP(69);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '&') ADVANCE(89);
      if (lookahead == ',') ADVANCE(102);
      if (lookahead == '.') ADVANCE(114);
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == '@') ADVANCE(95);
      if (lookahead == 'C') ADVANCE(114);
      if (lookahead == 'D') ADVANCE(114);
      if (lookahead == 'G') ADVANCE(114);
      if (lookahead == 'H') ADVANCE(114);
      if (lookahead == 'L') ADVANCE(114);
      if (lookahead == 'O') ADVANCE(114);
      if (lookahead == 'P') ADVANCE(114);
      if (lookahead == 'T') ADVANCE(114);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == ']') ADVANCE(109);
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == '{') ADVANCE(106);
      if (lookahead == '}') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 70:
      if (eof) ADVANCE(74);
      if (lookahead == ' ') ADVANCE(20);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '@') ADVANCE(100);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(136);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 71:
      if (eof) ADVANCE(74);
      if (lookahead == ' ') SKIP(72);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == ',') ADVANCE(102);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == ']') ADVANCE(109);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == '{') ADVANCE(106);
      if (lookahead == '}') ADVANCE(107);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 72:
      if (eof) ADVANCE(74);
      if (lookahead == ' ') SKIP(72);
      if (lookahead == '"') ADVANCE(104);
      if (lookahead == ',') ADVANCE(102);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == ']') ADVANCE(109);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == 't') ADVANCE(58);
      if (lookahead == '{') ADVANCE(106);
      if (lookahead == '}') ADVANCE(107);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 73:
      if (eof) ADVANCE(74);
      if (lookahead == ' ') ADVANCE(77);
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '@') ADVANCE(98);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(81);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_method);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == ' ') ADVANCE(77);
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '@') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(81);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '#') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead == '#') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_header_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '#') ADVANCE(110);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(3);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(86);
      if (lookahead == '#') ADVANCE(84);
      if (lookahead == '@') ADVANCE(96);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == ' ') ADVANCE(87);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '{') ADVANCE(105);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_raw_body);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_url_encoded_value_token1);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_url_encoded_value_token1);
      if (lookahead == ' ') ADVANCE(92);
      if (lookahead == '&') ADVANCE(89);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(91);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_url_encoded_value_token1);
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '&') ADVANCE(91);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_url_encoded_value_token1);
      if (lookahead == '{') ADVANCE(63);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ':') ADVANCE(81);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(25);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(65);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_EQ2);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(63);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_separator);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_HTTP_SLASH);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_http_version_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_status_code);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead == '{') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(118);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(63);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_variable_ref);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      ADVANCE_MAP(
        ' ', 124,
        '@', 95,
        'C', 131,
        'D', 127,
        'G', 128,
        'H', 129,
        'L', 130,
        'O', 132,
        'P', 126,
        'T', 133,
        '{', 134,
      );
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(123);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == ' ') ADVANCE(125);
      if (lookahead == '{') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(123);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'A') ADVANCE(51);
      if (lookahead == 'O') ADVANCE(46);
      if (lookahead == 'U') ADVANCE(48);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'E') ADVANCE(40);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'E') ADVANCE(48);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'E') ADVANCE(29);
      if (lookahead == 'T') ADVANCE(49);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'I') ADVANCE(46);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'O') ADVANCE(41);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'P') ADVANCE(50);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == 'R') ADVANCE(30);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_rest_of_line_token1);
      if (lookahead == '{') ADVANCE(63);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__nl);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__nl);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(65);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 70},
  [5] = {.lex_state = 71},
  [6] = {.lex_state = 70},
  [7] = {.lex_state = 71},
  [8] = {.lex_state = 71},
  [9] = {.lex_state = 71},
  [10] = {.lex_state = 71},
  [11] = {.lex_state = 71},
  [12] = {.lex_state = 71},
  [13] = {.lex_state = 21},
  [14] = {.lex_state = 21},
  [15] = {.lex_state = 71},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 73},
  [18] = {.lex_state = 73},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 73},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 12},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 12},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 13},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 13},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 73},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 12},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 11},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 15},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 16},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 15},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 14},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 15},
  [75] = {.lex_state = 11},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 12},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 14},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 11},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 17},
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
  [101] = {.lex_state = 14},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 71},
  [108] = {.lex_state = 71},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 18},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 12},
  [118] = {.lex_state = 17},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 19},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 17},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 12},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 71},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 19},
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
    [sym_null] = ACTIONS(1),
    [sym_variable_ref] = ACTIONS(1),
    [sym__nl] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(114),
    [sym__block] = STATE(43),
    [sym_request] = STATE(25),
    [sym_response] = STATE(25),
    [sym_start_line] = STATE(103),
    [sym_url] = STATE(106),
    [sym_variable_declaration] = STATE(3),
    [sym_response_start_line] = STATE(115),
    [sym_http_version] = STATE(120),
    [sym_rest_of_line] = STATE(130),
    [aux_sym__block_repeat1] = STATE(3),
    [aux_sym_rest_of_line_repeat1] = STATE(51),
    [sym_method] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(5),
    [anon_sym_HTTP_SLASH] = ACTIONS(7),
    [sym_variable_ref] = ACTIONS(9),
    [aux_sym_rest_of_line_token1] = ACTIONS(9),
    [sym__nl] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(11), 1,
      sym__nl,
    STATE(51), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(93), 1,
      sym__block,
    STATE(103), 1,
      sym_start_line,
    STATE(106), 1,
      sym_url,
    STATE(115), 1,
      sym_response_start_line,
    STATE(120), 1,
      sym_http_version,
    STATE(130), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
    STATE(3), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
    STATE(25), 2,
      sym_request,
      sym_response,
  [46] = 13,
    ACTIONS(3), 1,
      sym_method,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_HTTP_SLASH,
    ACTIONS(13), 1,
      sym__nl,
    STATE(51), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(103), 1,
      sym_start_line,
    STATE(106), 1,
      sym_url,
    STATE(115), 1,
      sym_response_start_line,
    STATE(120), 1,
      sym_http_version,
    STATE(130), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
    STATE(16), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
    STATE(26), 2,
      sym_request,
      sym_response,
  [89] = 11,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      sym_raw_body,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__identifier,
    STATE(97), 1,
      sym_url_encoded_key_value,
    STATE(124), 1,
      sym_url_encoded_key,
    STATE(125), 1,
      sym_body,
    STATE(113), 2,
      sym_url_encoded_body,
      sym_json_body,
    STATE(119), 2,
      sym_json_object,
      sym_json_list,
    ACTIONS(19), 3,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [127] = 9,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_RBRACK,
    ACTIONS(35), 1,
      sym__nl,
    STATE(7), 1,
      aux_sym_source_file_repeat2,
    STATE(105), 1,
      sym__json_list_values,
    ACTIONS(33), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(29), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [161] = 11,
    ACTIONS(17), 1,
      sym_raw_body,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__identifier,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(97), 1,
      sym_url_encoded_key_value,
    STATE(109), 1,
      sym_body,
    STATE(124), 1,
      sym_url_encoded_key,
    STATE(113), 2,
      sym_url_encoded_body,
      sym_json_body,
    STATE(119), 2,
      sym_json_object,
      sym_json_list,
    ACTIONS(39), 3,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [199] = 8,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_RBRACK,
    ACTIONS(45), 1,
      sym__nl,
    STATE(8), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(43), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(37), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [230] = 4,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      sym__nl,
    STATE(8), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(47), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
  [252] = 7,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      sym__nl,
    STATE(8), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(54), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(96), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [280] = 7,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(58), 1,
      sym__nl,
    STATE(11), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(56), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(85), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [308] = 7,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      sym__nl,
    STATE(8), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(60), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(92), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [336] = 7,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(62), 1,
      sym__nl,
    STATE(9), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(60), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(92), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [364] = 9,
    ACTIONS(17), 1,
      sym_raw_body,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__identifier,
    STATE(97), 1,
      sym_url_encoded_key_value,
    STATE(121), 1,
      sym_body,
    STATE(124), 1,
      sym_url_encoded_key,
    STATE(113), 2,
      sym_url_encoded_body,
      sym_json_body,
    STATE(119), 2,
      sym_json_object,
      sym_json_list,
  [394] = 9,
    ACTIONS(17), 1,
      sym_raw_body,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym__identifier,
    STATE(97), 1,
      sym_url_encoded_key_value,
    STATE(122), 1,
      sym_body,
    STATE(124), 1,
      sym_url_encoded_key,
    STATE(113), 2,
      sym_url_encoded_body,
      sym_json_body,
    STATE(119), 2,
      sym_json_object,
      sym_json_list,
  [424] = 5,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 4,
      sym_number,
      sym_boolean,
      sym_null,
      sym_variable_ref,
    STATE(98), 4,
      sym__json_value,
      sym_json_object,
      sym_json_list,
      sym_string,
  [446] = 4,
    ACTIONS(68), 1,
      anon_sym_AT,
    ACTIONS(71), 1,
      sym__nl,
    STATE(16), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
    ACTIONS(66), 4,
      sym_method,
      anon_sym_HTTP_SLASH,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [463] = 5,
    ACTIONS(76), 1,
      sym_header_name,
    STATE(17), 1,
      aux_sym_request_repeat1,
    STATE(116), 1,
      sym_header,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      sym__nl,
    ACTIONS(79), 2,
      anon_sym_AT,
      sym_separator,
  [481] = 6,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      sym_header_name,
    ACTIONS(87), 1,
      sym__nl,
    STATE(20), 1,
      aux_sym_request_repeat1,
    STATE(116), 1,
      sym_header,
    ACTIONS(85), 2,
      anon_sym_AT,
      sym_separator,
  [501] = 7,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    ACTIONS(94), 1,
      sym__nl,
    STATE(24), 1,
      aux_sym_source_file_repeat2,
    STATE(44), 1,
      sym_json_key_value,
    STATE(111), 1,
      sym__key_value_list,
    STATE(117), 1,
      sym__json_key,
  [523] = 6,
    ACTIONS(83), 1,
      sym_header_name,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 1,
      sym__nl,
    STATE(17), 1,
      aux_sym_request_repeat1,
    STATE(116), 1,
      sym_header,
    ACTIONS(98), 2,
      anon_sym_AT,
      sym_separator,
  [543] = 4,
    ACTIONS(105), 1,
      anon_sym_AT,
    ACTIONS(107), 1,
      sym__nl,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(27), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [558] = 4,
    ACTIONS(105), 1,
      anon_sym_AT,
    ACTIONS(112), 1,
      sym__nl,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(27), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [573] = 2,
    ACTIONS(117), 1,
      sym__nl,
    ACTIONS(115), 5,
      sym_method,
      anon_sym_AT,
      anon_sym_HTTP_SLASH,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [584] = 6,
    ACTIONS(45), 1,
      sym__nl,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym_source_file_repeat2,
    STATE(28), 1,
      sym_json_key_value,
    STATE(117), 1,
      sym__json_key,
  [603] = 4,
    ACTIONS(105), 1,
      anon_sym_AT,
    ACTIONS(123), 1,
      sym__nl,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(22), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [618] = 4,
    ACTIONS(105), 1,
      anon_sym_AT,
    ACTIONS(126), 1,
      sym__nl,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(21), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [633] = 4,
    ACTIONS(131), 1,
      anon_sym_AT,
    ACTIONS(134), 1,
      sym__nl,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      sym_separator,
    STATE(27), 2,
      sym_variable_declaration,
      aux_sym__block_repeat1,
  [648] = 5,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    ACTIONS(141), 1,
      sym__nl,
    STATE(42), 1,
      aux_sym__key_value_list_repeat1,
    STATE(72), 1,
      aux_sym_source_file_repeat2,
  [664] = 5,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(145), 1,
      anon_sym_RBRACK,
    ACTIONS(147), 1,
      sym__nl,
    STATE(36), 1,
      aux_sym__json_list_values_repeat1,
    STATE(67), 1,
      aux_sym_source_file_repeat2,
  [680] = 4,
    STATE(51), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(104), 1,
      sym_rest_of_line,
    STATE(133), 1,
      sym_reason_phrase,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [694] = 5,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      sym__nl,
    STATE(39), 1,
      aux_sym_source_file_repeat2,
    STATE(86), 1,
      sym_json_key_value,
    STATE(117), 1,
      sym__json_key,
  [710] = 5,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    ACTIONS(141), 1,
      sym__nl,
    STATE(41), 1,
      aux_sym__key_value_list_repeat1,
    STATE(72), 1,
      aux_sym_source_file_repeat2,
  [726] = 3,
    STATE(33), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(151), 2,
      anon_sym_EQ2,
      anon_sym_DQUOTE,
    ACTIONS(153), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [738] = 4,
    STATE(51), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(130), 1,
      sym_rest_of_line,
    STATE(135), 1,
      sym_url,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [752] = 3,
    STATE(33), 1,
      aux_sym_identifier_repeat1,
    ACTIONS(156), 2,
      anon_sym_EQ2,
      anon_sym_DQUOTE,
    ACTIONS(158), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [764] = 5,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(160), 1,
      anon_sym_RBRACK,
    ACTIONS(162), 1,
      sym__nl,
    STATE(45), 1,
      aux_sym__json_list_values_repeat1,
    STATE(76), 1,
      aux_sym_source_file_repeat2,
  [780] = 5,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(160), 1,
      anon_sym_RBRACK,
    ACTIONS(162), 1,
      sym__nl,
    STATE(46), 1,
      aux_sym__json_list_values_repeat1,
    STATE(76), 1,
      aux_sym_source_file_repeat2,
  [796] = 4,
    ACTIONS(164), 1,
      anon_sym_AMP,
    ACTIONS(168), 1,
      sym__nl,
    STATE(47), 1,
      aux_sym_url_encoded_value_repeat1,
    ACTIONS(166), 2,
      aux_sym_url_encoded_value_token1,
      sym_variable_ref,
  [810] = 5,
    ACTIONS(45), 1,
      sym__nl,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      aux_sym_source_file_repeat2,
    STATE(90), 1,
      sym_json_key_value,
    STATE(117), 1,
      sym__json_key,
  [826] = 5,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    ACTIONS(170), 1,
      sym__nl,
    STATE(48), 1,
      aux_sym_source_file_repeat2,
    STATE(90), 1,
      sym_json_key_value,
    STATE(117), 1,
      sym__json_key,
  [842] = 5,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    ACTIONS(177), 1,
      sym__nl,
    STATE(41), 1,
      aux_sym__key_value_list_repeat1,
    STATE(91), 1,
      aux_sym_source_file_repeat2,
  [858] = 5,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
    ACTIONS(182), 1,
      sym__nl,
    STATE(41), 1,
      aux_sym__key_value_list_repeat1,
    STATE(78), 1,
      aux_sym_source_file_repeat2,
  [874] = 5,
    ACTIONS(184), 1,
      ts_builtin_sym_end,
    ACTIONS(186), 1,
      sym_separator,
    ACTIONS(188), 1,
      sym__nl,
    STATE(49), 1,
      aux_sym_source_file_repeat1,
    STATE(88), 1,
      aux_sym_source_file_repeat2,
  [890] = 5,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    ACTIONS(192), 1,
      sym__nl,
    STATE(32), 1,
      aux_sym__key_value_list_repeat1,
    STATE(64), 1,
      aux_sym_source_file_repeat2,
  [906] = 5,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    ACTIONS(197), 1,
      anon_sym_RBRACK,
    ACTIONS(199), 1,
      sym__nl,
    STATE(45), 1,
      aux_sym__json_list_values_repeat1,
    STATE(84), 1,
      aux_sym_source_file_repeat2,
  [922] = 5,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(202), 1,
      anon_sym_RBRACK,
    ACTIONS(204), 1,
      sym__nl,
    STATE(45), 1,
      aux_sym__json_list_values_repeat1,
    STATE(80), 1,
      aux_sym_source_file_repeat2,
  [938] = 4,
    ACTIONS(206), 1,
      anon_sym_AMP,
    ACTIONS(211), 1,
      sym__nl,
    STATE(47), 1,
      aux_sym_url_encoded_value_repeat1,
    ACTIONS(208), 2,
      aux_sym_url_encoded_value_token1,
      sym_variable_ref,
  [952] = 5,
    ACTIONS(45), 1,
      sym__nl,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      aux_sym_source_file_repeat2,
    STATE(95), 1,
      sym_json_key_value,
    STATE(117), 1,
      sym__json_key,
  [968] = 5,
    ACTIONS(186), 1,
      sym_separator,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    ACTIONS(215), 1,
      sym__nl,
    STATE(63), 1,
      aux_sym_source_file_repeat1,
    STATE(94), 1,
      aux_sym_source_file_repeat2,
  [984] = 2,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      sym__nl,
    ACTIONS(79), 3,
      sym_header_name,
      anon_sym_AT,
      sym_separator,
  [994] = 3,
    ACTIONS(219), 1,
      sym__nl,
    STATE(56), 1,
      aux_sym_rest_of_line_repeat1,
    ACTIONS(217), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [1005] = 4,
    ACTIONS(221), 1,
      sym_header_name,
    ACTIONS(223), 1,
      sym__nl,
    STATE(71), 1,
      aux_sym_request_repeat1,
    STATE(131), 1,
      sym_header,
  [1018] = 3,
    STATE(35), 1,
      aux_sym_identifier_repeat1,
    STATE(107), 1,
      sym_identifier,
    ACTIONS(225), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [1029] = 3,
    STATE(35), 1,
      aux_sym_identifier_repeat1,
    STATE(126), 1,
      sym_identifier,
    ACTIONS(225), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [1040] = 1,
    ACTIONS(227), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1047] = 3,
    ACTIONS(232), 1,
      sym__nl,
    STATE(56), 1,
      aux_sym_rest_of_line_repeat1,
    ACTIONS(229), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [1058] = 3,
    STATE(51), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(110), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [1069] = 3,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      aux_sym_string_repeat1,
    ACTIONS(236), 2,
      aux_sym_string_token1,
      sym_variable_ref,
  [1080] = 1,
    ACTIONS(238), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1087] = 1,
    ACTIONS(240), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [1094] = 3,
    STATE(38), 1,
      aux_sym_url_encoded_value_repeat1,
    STATE(100), 1,
      sym_url_encoded_value,
    ACTIONS(242), 2,
      aux_sym_url_encoded_value_token1,
      sym_variable_ref,
  [1105] = 1,
    ACTIONS(244), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1112] = 3,
    ACTIONS(248), 1,
      sym_separator,
    STATE(63), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(246), 2,
      ts_builtin_sym_end,
      sym__nl,
  [1123] = 4,
    ACTIONS(45), 1,
      sym__nl,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym_source_file_repeat2,
  [1136] = 1,
    ACTIONS(253), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1143] = 3,
    ACTIONS(255), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      aux_sym_string_repeat1,
    ACTIONS(257), 2,
      aux_sym_string_token1,
      sym_variable_ref,
  [1154] = 4,
    ACTIONS(45), 1,
      sym__nl,
    ACTIONS(160), 1,
      anon_sym_RBRACK,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym_source_file_repeat2,
  [1167] = 1,
    ACTIONS(261), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1174] = 1,
    ACTIONS(263), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [1181] = 1,
    ACTIONS(265), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [1188] = 4,
    ACTIONS(221), 1,
      sym_header_name,
    ACTIONS(267), 1,
      sym__nl,
    STATE(81), 1,
      aux_sym_request_repeat1,
    STATE(131), 1,
      sym_header,
  [1201] = 4,
    ACTIONS(45), 1,
      sym__nl,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym_source_file_repeat2,
  [1214] = 1,
    ACTIONS(269), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      sym__nl,
  [1221] = 3,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      aux_sym_string_repeat1,
    ACTIONS(273), 2,
      aux_sym_string_token1,
      sym_variable_ref,
  [1232] = 3,
    STATE(51), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(129), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [1243] = 4,
    ACTIONS(45), 1,
      sym__nl,
    ACTIONS(202), 1,
      anon_sym_RBRACK,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym_source_file_repeat2,
  [1256] = 1,
    ACTIONS(276), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [1263] = 4,
    ACTIONS(45), 1,
      sym__nl,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym_source_file_repeat2,
  [1276] = 3,
    STATE(35), 1,
      aux_sym_identifier_repeat1,
    STATE(134), 1,
      sym_identifier,
    ACTIONS(225), 2,
      aux_sym_identifier_token1,
      sym_variable_ref,
  [1287] = 4,
    ACTIONS(45), 1,
      sym__nl,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(280), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym_source_file_repeat2,
  [1300] = 4,
    ACTIONS(74), 1,
      sym__nl,
    ACTIONS(282), 1,
      sym_header_name,
    STATE(81), 1,
      aux_sym_request_repeat1,
    STATE(131), 1,
      sym_header,
  [1313] = 1,
    ACTIONS(117), 4,
      ts_builtin_sym_end,
      anon_sym_AT,
      sym_separator,
      sym__nl,
  [1320] = 3,
    STATE(51), 1,
      aux_sym_rest_of_line_repeat1,
    STATE(132), 1,
      sym_rest_of_line,
    ACTIONS(9), 2,
      sym_variable_ref,
      aux_sym_rest_of_line_token1,
  [1331] = 3,
    ACTIONS(45), 1,
      sym__nl,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym_source_file_repeat2,
  [1341] = 1,
    ACTIONS(197), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__nl,
  [1347] = 1,
    ACTIONS(175), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__nl,
  [1353] = 3,
    ACTIONS(285), 1,
      sym__identifier,
    STATE(102), 1,
      sym_url_encoded_key_value,
    STATE(124), 1,
      sym_url_encoded_key,
  [1363] = 3,
    ACTIONS(45), 1,
      sym__nl,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      aux_sym_source_file_repeat2,
  [1373] = 3,
    ACTIONS(287), 1,
      anon_sym_AMP,
    ACTIONS(289), 1,
      sym__nl,
    STATE(99), 1,
      aux_sym_url_encoded_body_repeat1,
  [1383] = 1,
    ACTIONS(291), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__nl,
  [1389] = 3,
    ACTIONS(45), 1,
      sym__nl,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym_source_file_repeat2,
  [1399] = 1,
    ACTIONS(293), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__nl,
  [1405] = 1,
    ACTIONS(246), 3,
      ts_builtin_sym_end,
      sym_separator,
      sym__nl,
  [1411] = 3,
    ACTIONS(45), 1,
      sym__nl,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      aux_sym_source_file_repeat2,
  [1421] = 1,
    ACTIONS(297), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__nl,
  [1427] = 1,
    ACTIONS(299), 3,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym__nl,
  [1433] = 3,
    ACTIONS(287), 1,
      anon_sym_AMP,
    ACTIONS(301), 1,
      sym__nl,
    STATE(89), 1,
      aux_sym_url_encoded_body_repeat1,
  [1443] = 1,
    ACTIONS(303), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym__nl,
  [1449] = 3,
    ACTIONS(305), 1,
      anon_sym_AMP,
    ACTIONS(308), 1,
      sym__nl,
    STATE(99), 1,
      aux_sym_url_encoded_body_repeat1,
  [1459] = 1,
    ACTIONS(310), 2,
      anon_sym_AMP,
      sym__nl,
  [1464] = 1,
    ACTIONS(74), 2,
      sym_header_name,
      sym__nl,
  [1469] = 1,
    ACTIONS(308), 2,
      anon_sym_AMP,
      sym__nl,
  [1474] = 1,
    ACTIONS(312), 1,
      sym__nl,
  [1478] = 1,
    ACTIONS(314), 1,
      sym__nl,
  [1482] = 1,
    ACTIONS(41), 1,
      anon_sym_RBRACK,
  [1486] = 1,
    ACTIONS(316), 1,
      sym__nl,
  [1490] = 1,
    ACTIONS(318), 1,
      anon_sym_EQ2,
  [1494] = 1,
    ACTIONS(320), 1,
      anon_sym_COLON,
  [1498] = 1,
    ACTIONS(322), 1,
      sym__nl,
  [1502] = 1,
    ACTIONS(324), 1,
      sym__nl,
  [1506] = 1,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
  [1510] = 1,
    ACTIONS(326), 1,
      aux_sym_http_version_token1,
  [1514] = 1,
    ACTIONS(328), 1,
      sym__nl,
  [1518] = 1,
    ACTIONS(330), 1,
      ts_builtin_sym_end,
  [1522] = 1,
    ACTIONS(332), 1,
      sym__nl,
  [1526] = 1,
    ACTIONS(334), 1,
      sym__nl,
  [1530] = 1,
    ACTIONS(336), 1,
      anon_sym_COLON2,
  [1534] = 1,
    ACTIONS(338), 1,
      anon_sym_EQ,
  [1538] = 1,
    ACTIONS(340), 1,
      sym__nl,
  [1542] = 1,
    ACTIONS(342), 1,
      sym_status_code,
  [1546] = 1,
    ACTIONS(344), 1,
      sym__nl,
  [1550] = 1,
    ACTIONS(346), 1,
      sym__nl,
  [1554] = 1,
    ACTIONS(348), 1,
      sym__nl,
  [1558] = 1,
    ACTIONS(350), 1,
      anon_sym_EQ,
  [1562] = 1,
    ACTIONS(352), 1,
      sym__nl,
  [1566] = 1,
    ACTIONS(354), 1,
      anon_sym_DQUOTE,
  [1570] = 1,
    ACTIONS(356), 1,
      sym__nl,
  [1574] = 1,
    ACTIONS(358), 1,
      anon_sym_COLON2,
  [1578] = 1,
    ACTIONS(360), 1,
      sym__nl,
  [1582] = 1,
    ACTIONS(362), 1,
      sym__nl,
  [1586] = 1,
    ACTIONS(364), 1,
      sym__nl,
  [1590] = 1,
    ACTIONS(366), 1,
      sym__nl,
  [1594] = 1,
    ACTIONS(368), 1,
      sym__nl,
  [1598] = 1,
    ACTIONS(370), 1,
      anon_sym_EQ2,
  [1602] = 1,
    ACTIONS(372), 1,
      sym__nl,
  [1606] = 1,
    ACTIONS(374), 1,
      sym_status_code,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 89,
  [SMALL_STATE(5)] = 127,
  [SMALL_STATE(6)] = 161,
  [SMALL_STATE(7)] = 199,
  [SMALL_STATE(8)] = 230,
  [SMALL_STATE(9)] = 252,
  [SMALL_STATE(10)] = 280,
  [SMALL_STATE(11)] = 308,
  [SMALL_STATE(12)] = 336,
  [SMALL_STATE(13)] = 364,
  [SMALL_STATE(14)] = 394,
  [SMALL_STATE(15)] = 424,
  [SMALL_STATE(16)] = 446,
  [SMALL_STATE(17)] = 463,
  [SMALL_STATE(18)] = 481,
  [SMALL_STATE(19)] = 501,
  [SMALL_STATE(20)] = 523,
  [SMALL_STATE(21)] = 543,
  [SMALL_STATE(22)] = 558,
  [SMALL_STATE(23)] = 573,
  [SMALL_STATE(24)] = 584,
  [SMALL_STATE(25)] = 603,
  [SMALL_STATE(26)] = 618,
  [SMALL_STATE(27)] = 633,
  [SMALL_STATE(28)] = 648,
  [SMALL_STATE(29)] = 664,
  [SMALL_STATE(30)] = 680,
  [SMALL_STATE(31)] = 694,
  [SMALL_STATE(32)] = 710,
  [SMALL_STATE(33)] = 726,
  [SMALL_STATE(34)] = 738,
  [SMALL_STATE(35)] = 752,
  [SMALL_STATE(36)] = 764,
  [SMALL_STATE(37)] = 780,
  [SMALL_STATE(38)] = 796,
  [SMALL_STATE(39)] = 810,
  [SMALL_STATE(40)] = 826,
  [SMALL_STATE(41)] = 842,
  [SMALL_STATE(42)] = 858,
  [SMALL_STATE(43)] = 874,
  [SMALL_STATE(44)] = 890,
  [SMALL_STATE(45)] = 906,
  [SMALL_STATE(46)] = 922,
  [SMALL_STATE(47)] = 938,
  [SMALL_STATE(48)] = 952,
  [SMALL_STATE(49)] = 968,
  [SMALL_STATE(50)] = 984,
  [SMALL_STATE(51)] = 994,
  [SMALL_STATE(52)] = 1005,
  [SMALL_STATE(53)] = 1018,
  [SMALL_STATE(54)] = 1029,
  [SMALL_STATE(55)] = 1040,
  [SMALL_STATE(56)] = 1047,
  [SMALL_STATE(57)] = 1058,
  [SMALL_STATE(58)] = 1069,
  [SMALL_STATE(59)] = 1080,
  [SMALL_STATE(60)] = 1087,
  [SMALL_STATE(61)] = 1094,
  [SMALL_STATE(62)] = 1105,
  [SMALL_STATE(63)] = 1112,
  [SMALL_STATE(64)] = 1123,
  [SMALL_STATE(65)] = 1136,
  [SMALL_STATE(66)] = 1143,
  [SMALL_STATE(67)] = 1154,
  [SMALL_STATE(68)] = 1167,
  [SMALL_STATE(69)] = 1174,
  [SMALL_STATE(70)] = 1181,
  [SMALL_STATE(71)] = 1188,
  [SMALL_STATE(72)] = 1201,
  [SMALL_STATE(73)] = 1214,
  [SMALL_STATE(74)] = 1221,
  [SMALL_STATE(75)] = 1232,
  [SMALL_STATE(76)] = 1243,
  [SMALL_STATE(77)] = 1256,
  [SMALL_STATE(78)] = 1263,
  [SMALL_STATE(79)] = 1276,
  [SMALL_STATE(80)] = 1287,
  [SMALL_STATE(81)] = 1300,
  [SMALL_STATE(82)] = 1313,
  [SMALL_STATE(83)] = 1320,
  [SMALL_STATE(84)] = 1331,
  [SMALL_STATE(85)] = 1341,
  [SMALL_STATE(86)] = 1347,
  [SMALL_STATE(87)] = 1353,
  [SMALL_STATE(88)] = 1363,
  [SMALL_STATE(89)] = 1373,
  [SMALL_STATE(90)] = 1383,
  [SMALL_STATE(91)] = 1389,
  [SMALL_STATE(92)] = 1399,
  [SMALL_STATE(93)] = 1405,
  [SMALL_STATE(94)] = 1411,
  [SMALL_STATE(95)] = 1421,
  [SMALL_STATE(96)] = 1427,
  [SMALL_STATE(97)] = 1433,
  [SMALL_STATE(98)] = 1443,
  [SMALL_STATE(99)] = 1449,
  [SMALL_STATE(100)] = 1459,
  [SMALL_STATE(101)] = 1464,
  [SMALL_STATE(102)] = 1469,
  [SMALL_STATE(103)] = 1474,
  [SMALL_STATE(104)] = 1478,
  [SMALL_STATE(105)] = 1482,
  [SMALL_STATE(106)] = 1486,
  [SMALL_STATE(107)] = 1490,
  [SMALL_STATE(108)] = 1494,
  [SMALL_STATE(109)] = 1498,
  [SMALL_STATE(110)] = 1502,
  [SMALL_STATE(111)] = 1506,
  [SMALL_STATE(112)] = 1510,
  [SMALL_STATE(113)] = 1514,
  [SMALL_STATE(114)] = 1518,
  [SMALL_STATE(115)] = 1522,
  [SMALL_STATE(116)] = 1526,
  [SMALL_STATE(117)] = 1530,
  [SMALL_STATE(118)] = 1534,
  [SMALL_STATE(119)] = 1538,
  [SMALL_STATE(120)] = 1542,
  [SMALL_STATE(121)] = 1546,
  [SMALL_STATE(122)] = 1550,
  [SMALL_STATE(123)] = 1554,
  [SMALL_STATE(124)] = 1558,
  [SMALL_STATE(125)] = 1562,
  [SMALL_STATE(126)] = 1566,
  [SMALL_STATE(127)] = 1570,
  [SMALL_STATE(128)] = 1574,
  [SMALL_STATE(129)] = 1578,
  [SMALL_STATE(130)] = 1582,
  [SMALL_STATE(131)] = 1586,
  [SMALL_STATE(132)] = 1590,
  [SMALL_STATE(133)] = 1594,
  [SMALL_STATE(134)] = 1598,
  [SMALL_STATE(135)] = 1602,
  [SMALL_STATE(136)] = 1606,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 4, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 4, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 3, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_response, 3, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(8),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 2, 0, 0),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_request, 2, 0, 0), SHIFT(14),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_request, 3, 0, 0),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_request, 3, 0, 0), SHIFT(13),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 3, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__block, 3, 0, 0), SHIFT(27),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 2, 0, 0),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__block, 2, 0, 0), SHIFT(27),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block, 1, 0, 0),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__block, 1, 0, 0), SHIFT(22),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__block, 2, 0, 0), SHIFT(21),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__block_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_url_encoded_value, 1, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_value, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 2, 0, 0),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 3, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 1, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2, 0, 0),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 3, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_url_encoded_value_repeat1, 2, 0, 0),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_url_encoded_value_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_encoded_value_repeat1, 2, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rest_of_line, 1, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 2, 0, 0),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_rest_of_line_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rest_of_line_repeat1, 2, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 2, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 5, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_object, 3, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_list, 3, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_request, 6, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 6, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response, 7, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_list, 4, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_list_values, 4, 0, 0),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_request_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_body, 2, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 3, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 3, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list_repeat1, 4, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__json_list_values_repeat1, 4, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_body, 1, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_key_value, 3, 0, 3),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_url_encoded_body_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_url_encoded_body_repeat1, 2, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_key_value, 3, 0, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reason_phrase, 1, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_line, 1, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 1, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url_encoded_key, 1, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_json_body, 1, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__json_key, 3, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 3, 0, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_url, 1, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_response_start_line, 3, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_line, 2, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_http_version, 2, 0, 0),
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
