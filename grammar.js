module.exports = grammar({
    name: "http2",

    extras: () => [/ /],

    rules: {
        source_file: ($) =>
            seq(
                $._block,
                repeat(seq($.separator, $._nl, $._nl, $._block)),
                optional($.separator),
            ),
        _block: ($) =>
            seq(
                repeat($.variable_declaration),
                choice($.request, $.response),
                repeat($.variable_declaration),
            ),
        request: ($) =>
            seq(
                $.start_line,
                $._nl,
                repeat(seq($.header, $._nl)),
                $._nl,
                optional(seq($.body, $._nl, $._nl)),
            ),
        response: ($) =>
            seq(
                $.response_start_line,
                $._nl,
                repeat(seq($.header, $._nl)),
                $._nl,
                optional(seq($.body, $._nl, $._nl)),
            ),
        start_line: ($) => seq(optional($.method), $.url),
        method: () =>
            /(OPTIONS|GET|HEAD|POST|PUT|DELETE|TRACE|CONNECT|PATCH|LIST)/,
        url: ($) => $.rest_of_line,
        header: ($) =>
            seq(
                field("name", $.header_name),
                ":",
                field("value", $.rest_of_line),
            ),
        header_name: () => /[^\r\n:]+/,
        body: ($) => choice($.json_body, $.url_encoded_body, $.raw_body),
        raw_body: ($) => /([\r\n]|.)+./,
        url_encoded_body: ($) =>
            seq(
                $.url_encoded_key_value,
                repeat(seq(token(prec(5, "&")), $.url_encoded_key_value)),
            ),
        url_encoded_key_value: ($) =>
            seq(
                field("key", $.url_encoded_key),
                token(prec(5, "=")),
                field("value", $.identifier),
            ),
        url_encoded_key: ($) => $._identifier,
        variable_declaration: ($) =>
            seq(
                "@",
                field("name", $.identifier),
                "=",
                field("value", $.rest_of_line),
                $._nl,
            ),
        json_body: ($) => choice($.json_object, $.json_list),
        _key_value_list: ($) =>
            seq(
                $.json_key_value,
                repeat(seq(",", optional($._nl), $.json_key_value)),
                optional($._nl),
            ),
        json_key_value: ($) =>
            seq(
                field("key", $._json_key),
                token(prec(5, ":")),
                field("value", $._json_value),
            ),
        _json_key: ($) => seq('"', $.identifier, '"'),
        _json_value: ($) =>
            prec(
                2,
                choice(
                    $.string,
                    $.number,
                    $.boolean,
                    $.json_body,
                    $.variable_ref,
                    $.json_list,
                ),
            ),
        json_object: ($) =>
            prec.left(
                seq(
                    token(prec(5, "{")), // Precedence used to avoid raw_body to have preference
                    optional($._nl),
                    optional($._key_value_list),
                    token(prec(5, "}")), // Precedence used to avoid raw_body to have preference
                    optional($._nl),
                ),
            ),
        json_list: ($) =>
            prec.left(
                seq(
                    token(prec(5, "[")),
                    optional($._nl),
                    optional($._json_list_values),
                    token(prec(5, "]")),
                    optional($._nl),
                ),
            ),
        _json_list_values: ($) =>
            seq(
                $._json_value,
                repeat(
                    seq(",", optional($._nl), $._json_value, optional($._nl)),
                ),
            ),
        separator: () => "###",
        response_start_line: ($) =>
            seq($.http_version, $.status_code, $.reason_phrase),
        http_version: () => seq("HTTP/", /[\d\.]+/),
        status_code: () => /\d+/,
        reason_phrase: ($) => $.rest_of_line,
        identifier: ($) =>
            repeat1(choice(token(prec(5, /[A-Za-z_\.\d\-]/)), $.variable_ref)),
        _identifier: () => token(prec(5, /[A-Za-z_\.\d\-]+/)),
        number: () => /[0-9\.]+/,
        boolean: () => /(true|false)/,
        string: ($) => seq('"', repeat(choice(/[^"\n]/, $.variable_ref)), '"'),
        variable_ref: () => token(prec(2, seq("{{", /[A-Za-z_\.\d]*/, "}}"))),
        rest_of_line: ($) => repeat1(choice(/[^\r\n]/, $.variable_ref)),
        _nl: () => token.immediate(/[\r\n]/),
    },
});
