(method) @keyword
(url) @text.uri
(variable_declaration) @function.builtin
(variable_ref) @function.builtin
(header header_name: (identifier) @property)

(json_key_value key: _* @property)
(url_encoded_key_value key: (identifier) @property)
(string) @string
(number) @constant

(status_code) @property
(reason_phrase) @keyword
