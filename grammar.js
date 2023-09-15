module.exports = grammar({
    name: "http2",

    extras: () => [/\s/],

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
                    optional($.json_body)
                )
            ),
        method_url: ($) => seq($.method, $.url),
        response: ($) =>
            prec.left(
                2,
                seq($.status_line, repeat(seq($.header, $._new_line)))
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
                field("header_value", choice($.rest_of_line, $.variable_ref))
            ),
        method: ($) =>
            choice(
                /(OPTIONS|GET|HEAD|POST|PUT|DELETE|TRACE|CONNECT|PATCH)/,
                $.variable_ref
            ),
        url: ($) =>
            seq(
                choice(
                    seq($.scheme, "://", choice($.domain, $.variable_ref)),
                    $.variable_ref
                ),
                optional($.path),
                optional(seq("?", optional($.query_params)))
            ),
        scheme: (_) =>
            /(about|acct|arcp|cap|cid|coap+tcp|coap+ws|coaps+tcp|coaps+ws|data|dns|example|file|ftp|geo|h323|http|https|im|info|ipp|mailto|mid|ni|nih|payto|pkcs11|pres|reload|secret-token|session|sms|tag|telnet|urn|ws|wss)/,
        _identifier: (_) => /[A-Za-z_\.\d-]+/,
        path: ($) =>
            choice(
                seq(
                    repeat1(seq("/", choice($._identifier, $.variable_ref))),
                    optional("/") // Trailing slash
                ),
                "/" // Path is only the trailing slash
            ),
        query_params: ($) =>
            seq($.query_param, repeat(seq("&", $.query_param))),
        query_param: ($) =>
            seq(
                field("parameter_name", choice($.identifier, $.variable_ref)),
                "=",
                field("parameter_value", choice($.identifier, $.variable_ref))
            ),
        json_body: ($) =>
            choice(seq("{", optional($.key_value_list), "}"), $.list),
        key_value_list: ($) =>
            seq(
                $.key_value,
                repeat(seq(",", optional($._new_line), $.key_value)),
                optional($._new_line)
            ),
        key_value: ($) => seq($.key, ":", $.value),
        key: ($) => seq('"', choice($.identifier, $.variable_ref), '"'),
        value: ($) =>
            prec(
                2,
                choice(
                    $.string,
                    $.identifier,
                    $.json_body,
                    $.variable_ref,
                    $.list
                )
            ),
        list: ($) => seq("[", optional($.list_values), "]"),
        list_values: ($) => seq($.value, repeat(seq(",", $.value))),
        variable_declaration: ($) =>
            seq(
                "@",
                field("variable_name", $.identifier),
                "=",
                field("variable_value", $.rest_of_line),
                $._new_line
            ),
        variable_ref: () => token(prec(2, seq("{{", /[A-Za-z_\.\d]*/, "}}"))),
        identifier: ($) => $._identifier,
        rest_of_line: () => /[^\n]+/,
        domain: () => /[A-Za-z\-:\.\d]+/,
        string: ($) =>
            choice(seq('"', $.variable_ref, '"'), seq('"', /[^"\n]*/, '"')),
        _new_line: () => token.immediate(/[\r\n]+/),
    },
});
