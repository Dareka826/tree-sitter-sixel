module.exports = grammar({
    name: 'sixel',
    rules: {
        source_file: $ => repeat( $.sixel_image ),

        sixel_image: $ => seq(
            $.sixel_start,
            repeat($._sixel_data),
            $.sixel_end
        ),

        sixel_start: $ => choice(
            seq('Pq'),
            seq('P;', $.number, ';', $.number, 'q'),
            seq('P',  $.number, ';', $.number, ';', $.number, 'q')
        ),
        sixel_end: $ => '\\',

        _sixel_data: $ => choice(
            $._control_function,
            prec.right( repeat1($.sixel_data_character) )
        ),

        _control_function: $ => choice(
            $.graphics_repeat_introducer,
            $.raster_attributes,
            $.color_introducer,
            $.graphics_carriage_return,
            $.graphics_new_line
        ),

        graphics_repeat_introducer: $ => seq(
            '!',
            field('Pn', $.number),
            field('character', $.sixel_data_character)
        ),
        raster_attributes: $ => seq(
            '"',
            field('Pan', $.number), ';',
            field('Pad', $.number), ';',
            field('Ph',  $.number),  ';',
            field('Pv',  $.number)
        ),
        color_introducer: $ => choice(
            seq('#', field('Pc', $.number)),
            seq(
                '#',
                field('Pc', $.number), ';',
                field('Pu', $.number), ';',
                field('Px', $.number), ';',
                field('Py', $.number), ';',
                field('Pz', $.number)
            )
        ),
        graphics_carriage_return: $ => '$',
        graphics_new_line:        $ => '-',

        sixel_data_character: $ => /[?@ABCDEFGHIJKLMNOPQRSTUVWXYZ\[\\\]^_`abcdefghijklmnopqrstuvwxyz{|}~]/,
        number:               $ => /\d+/
    }
});
