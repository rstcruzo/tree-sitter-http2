module.exports = grammar({
    name: "http2",

    rules: {
        source_file: ($) =>
            repeat(
                choice(
                    $.method_url,
                    $.header,
                    $.variable_declaration,
                    $.json_body
                )
            ),
        method_url: ($) => seq($.method, $.url),
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
                $.scheme,
                "://",
                choice($._identifier, $.variable_ref),
                optional($.path),
                optional($.query_params)
            ),
        scheme: (_) =>
            /(about|acct|arcp|cap|cid|coap+tcp|coap+ws|coaps+tcp|coaps+ws|data|dns|example|file|ftp|geo|h323|http|https|im|info|ipp|mailto|mid|ni|nih|payto|pkcs11|pres|reload|secret-token|session|sms|tag|telnet|urn|ws|wss)/,
        _identifier: (_) => /[A-Za-z_.\d-]+/,
        path: ($) => repeat1(seq("/", choice($._identifier, $.variable_ref))),
        query_params: ($) =>
            seq("?", $.query_param, repeat(seq("&", $.query_param))),
        query_param: ($) =>
            seq(
                choice($.identifier, $.variable_ref),
                "=",
                choice($.identifier, $.variable_ref)
            ),
        json_body: ($) => seq("{", $.key_value_list, "}"),
        key_value_list: ($) => seq($.key_value, repeat(seq(",", $.key_value))),
        key_value: ($) => seq($.key, ":", $.value),
        key: ($) => seq('"', choice($.identifier, $.variable_ref), '"'),
        value: ($) =>
            choice($.string, $.identifier, $.json_body, $.variable_ref),
        variable_declaration: ($) =>
            seq(
                "@",
                field("variable_name", $.identifier),
                "=",
                field("variable_value", $.rest_of_line)
            ),
        variable_ref: () => token(prec(2, seq("{{", /[A-Za-z_.\d]+/, "}}"))),
        identifier: ($) => $._identifier,
        string: ($) =>
            choice(seq('"', $.variable_ref, '"'), seq('"', /[^"]*/, '"')),
        rest_of_line: () => /[^\n]+/,
    },
});
