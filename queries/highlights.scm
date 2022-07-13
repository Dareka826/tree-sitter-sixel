(number) @number
(sixel_data_character) @character

(sixel_start) @preproc
(sixel_end)   @preproc

(raster_attributes) @type
(color_introducer
  !Pu) @function
(color_introducer
  Pu: (number)) @constant
(graphics_repeat_introducer
  character: (sixel_data_character) @type) @repeat

(graphics_carriage_return) @operator
(graphics_new_line)        @operator
