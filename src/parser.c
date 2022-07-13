#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_Pq = 1,
  anon_sym_P_SEMI = 2,
  anon_sym_SEMI = 3,
  anon_sym_q = 4,
  anon_sym_P = 5,
  sym_sixel_end = 6,
  anon_sym_BANG = 7,
  anon_sym_DQUOTE = 8,
  anon_sym_POUND = 9,
  sym_graphics_carriage_return = 10,
  sym_graphics_new_line = 11,
  sym_sixel_data_character = 12,
  sym_number = 13,
  sym_source_file = 14,
  sym_sixel_image = 15,
  sym_sixel_start = 16,
  sym__sixel_data = 17,
  sym__control_function = 18,
  sym_graphics_repeat_introducer = 19,
  sym_raster_attributes = 20,
  sym_color_introducer = 21,
  aux_sym_source_file_repeat1 = 22,
  aux_sym_sixel_image_repeat1 = 23,
  aux_sym__sixel_data_repeat1 = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_Pq] = "Pq",
  [anon_sym_P_SEMI] = "P;",
  [anon_sym_SEMI] = ";",
  [anon_sym_q] = "q",
  [anon_sym_P] = "P",
  [sym_sixel_end] = "sixel_end",
  [anon_sym_BANG] = "!",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_POUND] = "#",
  [sym_graphics_carriage_return] = "graphics_carriage_return",
  [sym_graphics_new_line] = "graphics_new_line",
  [sym_sixel_data_character] = "sixel_data_character",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym_sixel_image] = "sixel_image",
  [sym_sixel_start] = "sixel_start",
  [sym__sixel_data] = "_sixel_data",
  [sym__control_function] = "_control_function",
  [sym_graphics_repeat_introducer] = "graphics_repeat_introducer",
  [sym_raster_attributes] = "raster_attributes",
  [sym_color_introducer] = "color_introducer",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_sixel_image_repeat1] = "sixel_image_repeat1",
  [aux_sym__sixel_data_repeat1] = "_sixel_data_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_Pq] = anon_sym_Pq,
  [anon_sym_P_SEMI] = anon_sym_P_SEMI,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_q] = anon_sym_q,
  [anon_sym_P] = anon_sym_P,
  [sym_sixel_end] = sym_sixel_end,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym_graphics_carriage_return] = sym_graphics_carriage_return,
  [sym_graphics_new_line] = sym_graphics_new_line,
  [sym_sixel_data_character] = sym_sixel_data_character,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym_sixel_image] = sym_sixel_image,
  [sym_sixel_start] = sym_sixel_start,
  [sym__sixel_data] = sym__sixel_data,
  [sym__control_function] = sym__control_function,
  [sym_graphics_repeat_introducer] = sym_graphics_repeat_introducer,
  [sym_raster_attributes] = sym_raster_attributes,
  [sym_color_introducer] = sym_color_introducer,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_sixel_image_repeat1] = aux_sym_sixel_image_repeat1,
  [aux_sym__sixel_data_repeat1] = aux_sym__sixel_data_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_Pq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_P_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_q] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_P] = {
    .visible = true,
    .named = false,
  },
  [sym_sixel_end] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_graphics_carriage_return] = {
    .visible = true,
    .named = true,
  },
  [sym_graphics_new_line] = {
    .visible = true,
    .named = true,
  },
  [sym_sixel_data_character] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_sixel_image] = {
    .visible = true,
    .named = true,
  },
  [sym_sixel_start] = {
    .visible = true,
    .named = true,
  },
  [sym__sixel_data] = {
    .visible = false,
    .named = true,
  },
  [sym__control_function] = {
    .visible = false,
    .named = true,
  },
  [sym_graphics_repeat_introducer] = {
    .visible = true,
    .named = true,
  },
  [sym_raster_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_color_introducer] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sixel_image_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__sixel_data_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_Pad = 1,
  field_Pan = 2,
  field_Pc = 3,
  field_Ph = 4,
  field_Pn = 5,
  field_Pu = 6,
  field_Pv = 7,
  field_Px = 8,
  field_Py = 9,
  field_Pz = 10,
  field_character = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_Pad] = "Pad",
  [field_Pan] = "Pan",
  [field_Pc] = "Pc",
  [field_Ph] = "Ph",
  [field_Pn] = "Pn",
  [field_Pu] = "Pu",
  [field_Pv] = "Pv",
  [field_Px] = "Px",
  [field_Py] = "Py",
  [field_Pz] = "Pz",
  [field_character] = "character",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 4},
  [4] = {.index = 7, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_Pc, 1},
  [1] =
    {field_Pn, 1},
    {field_character, 2},
  [3] =
    {field_Pad, 3},
    {field_Pan, 1},
    {field_Ph, 5},
    {field_Pv, 7},
  [7] =
    {field_Pc, 1},
    {field_Pu, 3},
    {field_Px, 5},
    {field_Py, 7},
    {field_Pz, 9},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == 27) ADVANCE(2);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == ';') ADVANCE(8);
      if (lookahead == 'q') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('?' <= lookahead && lookahead <= '~')) ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == 27) ADVANCE(3);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '#') ADVANCE(14);
      if (lookahead == '$') ADVANCE(15);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == ';') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('?' <= lookahead && lookahead <= '~')) ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == 'P') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == '\\') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'q') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_Pq);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_P_SEMI);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_q);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead == 'q') ADVANCE(6);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_sixel_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_graphics_carriage_return);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_graphics_new_line);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_sixel_data_character);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_Pq] = ACTIONS(1),
    [anon_sym_P_SEMI] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_q] = ACTIONS(1),
    [anon_sym_P] = ACTIONS(1),
    [sym_sixel_end] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_graphics_carriage_return] = ACTIONS(1),
    [sym_graphics_new_line] = ACTIONS(1),
    [sym_sixel_data_character] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(42),
    [sym_sixel_image] = STATE(12),
    [sym_sixel_start] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_Pq] = ACTIONS(5),
    [anon_sym_P_SEMI] = ACTIONS(7),
    [anon_sym_P] = ACTIONS(9),
  },
  [2] = {
    [sym__sixel_data] = STATE(3),
    [sym__control_function] = STATE(3),
    [sym_graphics_repeat_introducer] = STATE(3),
    [sym_raster_attributes] = STATE(3),
    [sym_color_introducer] = STATE(3),
    [aux_sym_sixel_image_repeat1] = STATE(3),
    [aux_sym__sixel_data_repeat1] = STATE(7),
    [sym_sixel_end] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
    [sym_graphics_carriage_return] = ACTIONS(19),
    [sym_graphics_new_line] = ACTIONS(19),
    [sym_sixel_data_character] = ACTIONS(21),
  },
  [3] = {
    [sym__sixel_data] = STATE(4),
    [sym__control_function] = STATE(4),
    [sym_graphics_repeat_introducer] = STATE(4),
    [sym_raster_attributes] = STATE(4),
    [sym_color_introducer] = STATE(4),
    [aux_sym_sixel_image_repeat1] = STATE(4),
    [aux_sym__sixel_data_repeat1] = STATE(7),
    [sym_sixel_end] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_POUND] = ACTIONS(17),
    [sym_graphics_carriage_return] = ACTIONS(25),
    [sym_graphics_new_line] = ACTIONS(25),
    [sym_sixel_data_character] = ACTIONS(21),
  },
  [4] = {
    [sym__sixel_data] = STATE(4),
    [sym__control_function] = STATE(4),
    [sym_graphics_repeat_introducer] = STATE(4),
    [sym_raster_attributes] = STATE(4),
    [sym_color_introducer] = STATE(4),
    [aux_sym_sixel_image_repeat1] = STATE(4),
    [aux_sym__sixel_data_repeat1] = STATE(7),
    [sym_sixel_end] = ACTIONS(27),
    [anon_sym_BANG] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(32),
    [anon_sym_POUND] = ACTIONS(35),
    [sym_graphics_carriage_return] = ACTIONS(38),
    [sym_graphics_new_line] = ACTIONS(38),
    [sym_sixel_data_character] = ACTIONS(41),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(44), 1,
      anon_sym_SEMI,
    ACTIONS(46), 7,
      sym_sixel_end,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      sym_graphics_carriage_return,
      sym_graphics_new_line,
      sym_sixel_data_character,
  [13] = 3,
    ACTIONS(50), 1,
      sym_sixel_data_character,
    STATE(6), 1,
      aux_sym__sixel_data_repeat1,
    ACTIONS(48), 6,
      sym_sixel_end,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      sym_graphics_carriage_return,
      sym_graphics_new_line,
  [28] = 3,
    ACTIONS(55), 1,
      sym_sixel_data_character,
    STATE(6), 1,
      aux_sym__sixel_data_repeat1,
    ACTIONS(53), 6,
      sym_sixel_end,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      sym_graphics_carriage_return,
      sym_graphics_new_line,
  [43] = 1,
    ACTIONS(57), 7,
      sym_sixel_end,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      sym_graphics_carriage_return,
      sym_graphics_new_line,
      sym_sixel_data_character,
  [53] = 1,
    ACTIONS(59), 7,
      sym_sixel_end,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      sym_graphics_carriage_return,
      sym_graphics_new_line,
      sym_sixel_data_character,
  [63] = 1,
    ACTIONS(61), 7,
      sym_sixel_end,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      sym_graphics_carriage_return,
      sym_graphics_new_line,
      sym_sixel_data_character,
  [73] = 1,
    ACTIONS(63), 7,
      sym_sixel_end,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      sym_graphics_carriage_return,
      sym_graphics_new_line,
      sym_sixel_data_character,
  [83] = 6,
    ACTIONS(5), 1,
      anon_sym_Pq,
    ACTIONS(7), 1,
      anon_sym_P_SEMI,
    ACTIONS(9), 1,
      anon_sym_P,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_sixel_start,
    STATE(15), 2,
      sym_sixel_image,
      aux_sym_source_file_repeat1,
  [103] = 1,
    ACTIONS(67), 7,
      sym_sixel_end,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      sym_graphics_carriage_return,
      sym_graphics_new_line,
      sym_sixel_data_character,
  [113] = 1,
    ACTIONS(69), 7,
      sym_sixel_end,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      anon_sym_POUND,
      sym_graphics_carriage_return,
      sym_graphics_new_line,
      sym_sixel_data_character,
  [123] = 6,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      anon_sym_Pq,
    ACTIONS(76), 1,
      anon_sym_P_SEMI,
    ACTIONS(79), 1,
      anon_sym_P,
    STATE(2), 1,
      sym_sixel_start,
    STATE(15), 2,
      sym_sixel_image,
      aux_sym_source_file_repeat1,
  [143] = 2,
    ACTIONS(84), 1,
      anon_sym_P,
    ACTIONS(82), 3,
      ts_builtin_sym_end,
      anon_sym_Pq,
      anon_sym_P_SEMI,
  [152] = 2,
    ACTIONS(88), 1,
      anon_sym_P,
    ACTIONS(86), 3,
      ts_builtin_sym_end,
      anon_sym_Pq,
      anon_sym_P_SEMI,
  [161] = 1,
    ACTIONS(90), 1,
      sym_number,
  [165] = 1,
    ACTIONS(92), 1,
      sym_number,
  [169] = 1,
    ACTIONS(94), 1,
      sym_number,
  [173] = 1,
    ACTIONS(96), 1,
      sym_number,
  [177] = 1,
    ACTIONS(98), 1,
      sym_sixel_data_character,
  [181] = 1,
    ACTIONS(100), 1,
      anon_sym_SEMI,
  [185] = 1,
    ACTIONS(102), 1,
      sym_number,
  [189] = 1,
    ACTIONS(104), 1,
      anon_sym_q,
  [193] = 1,
    ACTIONS(106), 1,
      anon_sym_SEMI,
  [197] = 1,
    ACTIONS(108), 1,
      sym_number,
  [201] = 1,
    ACTIONS(110), 1,
      sym_number,
  [205] = 1,
    ACTIONS(112), 1,
      sym_number,
  [209] = 1,
    ACTIONS(114), 1,
      anon_sym_SEMI,
  [213] = 1,
    ACTIONS(116), 1,
      sym_number,
  [217] = 1,
    ACTIONS(118), 1,
      anon_sym_SEMI,
  [221] = 1,
    ACTIONS(120), 1,
      anon_sym_SEMI,
  [225] = 1,
    ACTIONS(122), 1,
      anon_sym_q,
  [229] = 1,
    ACTIONS(124), 1,
      sym_number,
  [233] = 1,
    ACTIONS(126), 1,
      sym_number,
  [237] = 1,
    ACTIONS(128), 1,
      anon_sym_SEMI,
  [241] = 1,
    ACTIONS(130), 1,
      anon_sym_SEMI,
  [245] = 1,
    ACTIONS(132), 1,
      anon_sym_SEMI,
  [249] = 1,
    ACTIONS(134), 1,
      sym_number,
  [253] = 1,
    ACTIONS(136), 1,
      sym_number,
  [257] = 1,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
  [261] = 1,
    ACTIONS(140), 1,
      anon_sym_SEMI,
  [265] = 1,
    ACTIONS(142), 1,
      sym_number,
  [269] = 1,
    ACTIONS(144), 1,
      sym_number,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 13,
  [SMALL_STATE(7)] = 28,
  [SMALL_STATE(8)] = 43,
  [SMALL_STATE(9)] = 53,
  [SMALL_STATE(10)] = 63,
  [SMALL_STATE(11)] = 73,
  [SMALL_STATE(12)] = 83,
  [SMALL_STATE(13)] = 103,
  [SMALL_STATE(14)] = 113,
  [SMALL_STATE(15)] = 123,
  [SMALL_STATE(16)] = 143,
  [SMALL_STATE(17)] = 152,
  [SMALL_STATE(18)] = 161,
  [SMALL_STATE(19)] = 165,
  [SMALL_STATE(20)] = 169,
  [SMALL_STATE(21)] = 173,
  [SMALL_STATE(22)] = 177,
  [SMALL_STATE(23)] = 181,
  [SMALL_STATE(24)] = 185,
  [SMALL_STATE(25)] = 189,
  [SMALL_STATE(26)] = 193,
  [SMALL_STATE(27)] = 197,
  [SMALL_STATE(28)] = 201,
  [SMALL_STATE(29)] = 205,
  [SMALL_STATE(30)] = 209,
  [SMALL_STATE(31)] = 213,
  [SMALL_STATE(32)] = 217,
  [SMALL_STATE(33)] = 221,
  [SMALL_STATE(34)] = 225,
  [SMALL_STATE(35)] = 229,
  [SMALL_STATE(36)] = 233,
  [SMALL_STATE(37)] = 237,
  [SMALL_STATE(38)] = 241,
  [SMALL_STATE(39)] = 245,
  [SMALL_STATE(40)] = 249,
  [SMALL_STATE(41)] = 253,
  [SMALL_STATE(42)] = 257,
  [SMALL_STATE(43)] = 261,
  [SMALL_STATE(44)] = 265,
  [SMALL_STATE(45)] = 269,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sixel_image_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sixel_image_repeat1, 2), SHIFT_REPEAT(18),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sixel_image_repeat1, 2), SHIFT_REPEAT(27),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sixel_image_repeat1, 2), SHIFT_REPEAT(31),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sixel_image_repeat1, 2), SHIFT_REPEAT(4),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sixel_image_repeat1, 2), SHIFT_REPEAT(7),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_introducer, 2, .production_id = 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sixel_data_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sixel_data_repeat1, 2), SHIFT_REPEAT(6),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sixel_data, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sixel_start, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color_introducer, 10, .production_id = 4),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raster_attributes, 8, .production_id = 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sixel_start, 7),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sixel_start, 5),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_graphics_repeat_introducer, 3, .production_id = 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sixel_image, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sixel_image, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sixel_image, 3),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sixel_image, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [138] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_sixel(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
