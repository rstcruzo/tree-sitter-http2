module.exports = grammar({
    name: "http2",

    extras: () => [/ /],

    rules: {
        source_file: ($) =>
            repeat(choice($.request, $.variable_declaration, $.response)),
        request: ($) =>
            prec.left(
                2,
                seq(
                    $.method_url,
                    $._new_line,
                    repeat(seq($.header, $._new_line)),
                    optional(seq($._body, $._new_line)),
                ),
            ),
        method_url: ($) => seq($.method, $.url, optional($.http_version)),
        response: ($) =>
            prec.left(
                2,
                seq($.status_line, repeat(seq($.header, $._new_line))),
            ),
        status_line: ($) =>
            seq($.http_version, $.status_code, $.reason_phrase, $._new_line),
        http_version: () => seq("HTTP/", /[\d\.]+/),
        status_code: () => /\d+/,
        reason_phrase: ($) => $.rest_of_line,
        header: ($) =>
            seq(
                field("header_name", choice($.identifier, $.variable_ref)),
                ":",
                field("header_value", $.rest_of_line_dynamic),
            ),
        method: ($) =>
            choice(
                /(OPTIONS|GET|HEAD|POST|PUT|DELETE|TRACE|CONNECT|PATCH)/,
                $.variable_ref,
            ),
        url: ($) =>
            seq(
                choice(
                    seq($.scheme, "://", choice($.domain, $.variable_ref)),
                    $.variable_ref,
                ),
                optional($.path),
                optional(seq("?", optional($.query_params))),
            ),
        scheme: (_) =>
            /(about|acct|arcp|cap|cid|coap+tcp|coap+ws|coaps+tcp|coaps+ws|data|dns|example|file|ftp|geo|h323|http|https|im|info|ipp|mailto|mid|ni|nih|payto|pkcs11|pres|reload|secret-token|session|sms|tag|telnet|urn|ws|wss)/,
        _identifier: (_) => /[A-Za-z_\.\d-]+/,
        path: ($) =>
            choice(
                seq(
                    repeat1(seq("/", choice($._identifier, $.variable_ref))),
                    optional("/"), // Trailing slash
                ),
                "/", // Path is only the trailing slash
            ),
        query_params: ($) =>
            seq($.query_param, repeat(seq("&", $.query_param))),
        query_param: ($) =>
            seq(
                field("parameter_name", choice($.identifier, $.variable_ref)),
                "=",
                field("parameter_value", choice($.identifier, $.variable_ref)),
            ),
        _body: ($) => choice($.json_body, $.url_encoded_body, $.raw_body),
        raw_body: () => token(prec(-1, /.+/)),
        json_body: ($) =>
            choice(
                prec.left(
                    seq(
                        "{",
                        optional($._new_line),
                        optional($._key_value_list),
                        "}",
                        optional($._new_line),
                    ),
                ),
                $.json_list,
            ),
        _key_value_list: ($) =>
            seq(
                $.json_key_value,
                repeat(seq(",", optional($._new_line), $.json_key_value)),
                optional($._new_line),
            ),
        json_key_value: ($) =>
            seq(field("key", $._json_key), ":", field("value", $._json_value)),
        _json_key: ($) => seq('"', choice($.identifier, $.variable_ref), '"'),
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
        json_list: ($) =>
            prec.left(
                seq(
                    "[",
                    optional($._new_line),
                    optional($._json_list_values),
                    "]",
                    optional($._new_line),
                ),
            ),
        _json_list_values: ($) =>
            seq(
                $._json_value,
                repeat(
                    seq(
                        ",",
                        optional($._new_line),
                        $._json_value,
                        optional($._new_line),
                    ),
                ),
            ),
        url_encoded_body: ($) =>
            seq(
                $.url_encoded_key_value,
                repeat(seq("&", $.url_encoded_key_value)),
            ),
        url_encoded_key_value: ($) =>
            seq(
                field("key", choice($.identifier, $.variable_ref)),
                "=",
                field("value", choice($.identifier, $.variable_ref)),
            ),
        variable_declaration: ($) =>
            seq(
                "@",
                field("variable_name", $.identifier),
                "=",
                field("variable_value", $.rest_of_line),
                $._new_line,
            ),
        variable_ref: () => token(prec(2, seq("{{", /[A-Za-z_\.\d]*/, "}}"))),
        identifier: ($) => $._identifier,
        request_delimiter: () => /###|---/,
        rest_of_line: () => /[^\n]+/,
        rest_of_line_dynamic: ($) => repeat1(choice(/[^\n]/, $.variable_ref)),
        domain: () => /[A-Za-z\-:\.\d]+/,
        number: () => /[0-9\.]+/,
        boolean: () => /(true|false)/,
        string: ($) => seq('"', repeat1(choice(/[^"\n]/, $.variable_ref)), '"'),
        _new_line: () => token.immediate(/[\r\n]+/),
    },
});
