/*
* Generated by SGWrapperGen - DO NOT EDIT!
*
* SwinGame wrapper for C - DrawingOptions
*
* Wrapping sgDrawingOptions.pas
*/

#ifndef sgDrawingOptions
#define sgDrawingOptions

#include <stdint.h>

#ifndef __cplusplus
  #include <stdbool.h>
#endif

#include "Types.h"

drawing_options option_defaults();
drawing_options option_draw_to_window(window dest);
drawing_options option_draw_to_bitmap(bitmap dest);
drawing_options option_draw_to_bitmap_opts(bitmap dest, const drawing_options *opts);
drawing_options option_draw_to_bitmap_opts_byval(bitmap dest, const drawing_options opts);
drawing_options option_draw_to_window_opts(window dest, const drawing_options *opts);
drawing_options option_draw_to_window_opts_byval(window dest, const drawing_options opts);
drawing_options option_flip_x();
drawing_options option_flip_xopts(const drawing_options *opts);
drawing_options option_flip_xopts_byval(const drawing_options opts);
drawing_options option_flip_xy();
drawing_options option_flip_xyopts(const drawing_options *opts);
drawing_options option_flip_xyopts_byval(const drawing_options opts);
drawing_options option_flip_y();
drawing_options option_flip_yopts(const drawing_options *opts);
drawing_options option_flip_yopts_byval(const drawing_options opts);
drawing_options option_line_width(int32_t width);
drawing_options option_line_width_opts(int32_t width, const drawing_options *opts);
drawing_options option_line_width_opts_byval(int32_t width, const drawing_options opts);
drawing_options option_part_bmp_rect(const rectangle *part);
drawing_options option_part_bmp_rect_byval(const rectangle part);
drawing_options option_part_bmp_rect_opts(const rectangle *part, const drawing_options *opts);
drawing_options option_part_bmp_rect_opts_byval(const rectangle part, const drawing_options opts);
drawing_options option_part_bmp(float x, float y, float w, float h);
drawing_options option_part_bmp_opts(float x, float y, float w, float h, const drawing_options *opts);
drawing_options option_part_bmp_opts_byval(float x, float y, float w, float h, const drawing_options opts);
drawing_options option_rotate_bmp_angle(float angle);
drawing_options option_rotate_bmp_angle_opts(float angle, const drawing_options *opts);
drawing_options option_rotate_bmp_angle_opts_byval(float angle, const drawing_options opts);
drawing_options option_rotate_bmp(float angle, float anchorX, float anchorY);
drawing_options option_rotate_bmp_opts(float angle, float anchorX, float anchorY, const drawing_options *opts);
drawing_options option_rotate_bmp_opts_byval(float angle, float anchorX, float anchorY, const drawing_options opts);
drawing_options option_scale_bmp(float scaleX, float scaleY);
drawing_options option_scale_bmp_opts(float scaleX, float scaleY, const drawing_options *opts);
drawing_options option_scale_bmp_opts_byval(float scaleX, float scaleY, const drawing_options opts);
drawing_options option_to_screen();
drawing_options option_to_screen_opts(const drawing_options *opts);
drawing_options option_to_screen_opts_byval(const drawing_options opts);
drawing_options option_to_world();
drawing_options option_to_world_opts(const drawing_options *opts);
drawing_options option_to_world_opts_byval(const drawing_options opts);

#ifdef __cplusplus
// C++ overloaded functions
drawing_options option_draw_to(window dest);
drawing_options option_draw_to(bitmap dest);
drawing_options option_draw_to(bitmap dest, const drawing_options &opts);
drawing_options option_draw_to(window dest, const drawing_options &opts);
drawing_options option_flip_x(const drawing_options &opts);
drawing_options option_flip_xy(const drawing_options &opts);
drawing_options option_flip_y(const drawing_options &opts);
drawing_options option_line_width(int32_t width, const drawing_options &opts);
drawing_options option_part_bmp(const rectangle &part);
drawing_options option_part_bmp(const rectangle &part, const drawing_options &opts);
drawing_options option_part_bmp(float x, float y, float w, float h, const drawing_options &opts);
drawing_options option_rotate_bmp(float angle);
drawing_options option_rotate_bmp(float angle, const drawing_options &opts);
drawing_options option_rotate_bmp(float angle, float anchorX, float anchorY, const drawing_options &opts);
drawing_options option_scale_bmp(float scaleX, float scaleY, const drawing_options &opts);
drawing_options option_to_screen(const drawing_options &opts);
drawing_options option_to_world(const drawing_options &opts);

#endif

#endif

