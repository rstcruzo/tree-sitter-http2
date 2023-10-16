(method) @keyword
(url) @text.uri
(variable_declaration) @attribute
(variable_declaration variable_name: (identifier) @var (#lua-match? @var "request.title")) @text.title
(variable_ref) @attribute
(header header_name: (identifier) @property)

(http_version) @tag

(json_key_value key: _* @property)
(url_encoded_key_value key: (identifier) @property)
(string) @string
(number) @number
(boolean) @boolean

(status_code) @property
(reason_phrase) @keyword
