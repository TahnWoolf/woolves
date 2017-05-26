/*
* Generated by SGWrapperGen - DO NOT EDIT!
*
* SwinGame wrapper for C - Images
*
* Wrapping sgImages.pas
*/

#include "SGSDK.h"
#include "Images.h"

#include "Types.h"

#ifdef __cplusplus

circle bitmap_cell_circle(bitmap bmp, const point2d &pt)
{
    return sg_Images_BitmapCellCircle(bmp, &pt);
}

#endif

circle bitmap_cell_circle(bitmap bmp, const point2d *pt)
{
    return sg_Images_BitmapCellCircle(bmp, pt);
}

circle bitmap_cell_circle_byval(bitmap bmp, const point2d pt)
{
    return sg_Images_BitmapCellCircle(bmp, &pt);
}

#ifdef __cplusplus

circle bitmap_cell_circle(bitmap bmp, float x, float y)
{
    return sg_Images_BitmapCellCircleXY(bmp, x, y);
}

#endif

circle bitmap_cell_circle_xy(bitmap bmp, float x, float y)
{
    return sg_Images_BitmapCellCircleXY(bmp, x, y);
}

#ifdef __cplusplus

circle bitmap_cell_circle(bitmap bmp, const point2d &pt, float scale)
{
    return sg_Images_BitmapCellCircleScale(bmp, &pt, scale);
}

#endif

circle bitmap_cell_circle_scale(bitmap bmp, const point2d *pt, float scale)
{
    return sg_Images_BitmapCellCircleScale(bmp, pt, scale);
}

circle bitmap_cell_circle_scale_byval(bitmap bmp, const point2d pt, float scale)
{
    return sg_Images_BitmapCellCircleScale(bmp, &pt, scale);
}

int32_t bitmap_cell_columns(bitmap bmp)
{
    return sg_Images_BitmapCellColumns(bmp);
}

int32_t bitmap_cell_count(bitmap bmp)
{
    return sg_Images_BitmapCellCount(bmp);
}

int32_t bitmap_cell_height(bitmap bmp)
{
    return sg_Images_BitmapCellHeight(bmp);
}

#ifdef __cplusplus

rectangle bitmap_cell_rectangle(bitmap bmp)
{
    return sg_Images_BitmapCellRectangleAtOrigin(bmp);
}

#endif

rectangle bitmap_cell_rectangle_at_origin(bitmap bmp)
{
    return sg_Images_BitmapCellRectangleAtOrigin(bmp);
}

#ifdef __cplusplus

rectangle bitmap_cell_rectangle(float x, float y, bitmap bmp)
{
    return sg_Images_BitmapCellRectangleXY(x, y, bmp);
}

#endif

rectangle bitmap_cell_rectangle_xy(float x, float y, bitmap bmp)
{
    return sg_Images_BitmapCellRectangleXY(x, y, bmp);
}

int32_t bitmap_cell_rows(bitmap bmp)
{
    return sg_Images_BitmapCellRows(bmp);
}

int32_t bitmap_cell_width(bitmap bmp)
{
    return sg_Images_BitmapCellWidth(bmp);
}

#ifdef __cplusplus

circle bitmap_circle(bitmap bmp, const point2d &pt)
{
    return sg_Images_BitmapCircle(bmp, &pt);
}

#endif

circle bitmap_circle(bitmap bmp, const point2d *pt)
{
    return sg_Images_BitmapCircle(bmp, pt);
}

circle bitmap_circle_byval(bitmap bmp, const point2d pt)
{
    return sg_Images_BitmapCircle(bmp, &pt);
}

#ifdef __cplusplus

circle bitmap_circle(bitmap bmp, float x, float y)
{
    return sg_Images_BitmapCircleXY(bmp, x, y);
}

#endif

circle bitmap_circle_xy(bitmap bmp, float x, float y)
{
    return sg_Images_BitmapCircleXY(bmp, x, y);
}

void bitmap_filename(bitmap bmp, char *result)
{
    sg_Images_BitmapFilename(bmp, result);
}

int32_t bitmap_height(bitmap bmp)
{
    return sg_Images_BitmapHeight(bmp);
}

void bitmap_name(bitmap bmp, char *result)
{
    sg_Images_BitmapName(bmp, result);
}

bitmap bitmap_named(const char *name)
{
    return sg_Images_BitmapNamed(name);
}

#ifdef __cplusplus

rectangle bitmap_rectangle(bitmap bmp)
{
    return sg_Images_BitmapRectAtOrigin(bmp);
}

#endif

rectangle bitmap_rect_at_origin(bitmap bmp)
{
    return sg_Images_BitmapRectAtOrigin(bmp);
}

#ifdef __cplusplus

rectangle bitmap_rectangle(float x, float y, bitmap bmp)
{
    return sg_Images_BitmapRectXY(x, y, bmp);
}

#endif

rectangle bitmap_rect_xy(float x, float y, bitmap bmp)
{
    return sg_Images_BitmapRectXY(x, y, bmp);
}

rectangle bitmap_rectangle_of_cell(bitmap src, int32_t cell)
{
    return sg_Images_BitmapRectangleOfCell(src, cell);
}

void bitmap_set_cell_details(bitmap bmp, int32_t width, int32_t height, int32_t columns, int32_t rows, int32_t count)
{
    sg_Images_BitmapSetCellDetails(bmp, width, height, columns, rows, count);
}

int32_t bitmap_width(bitmap bmp)
{
    return sg_Images_BitmapWidth(bmp);
}

bool bitmaps_interchangable(bitmap bmp1, bitmap bmp2)
{
    return sg_Images_BitmapsInterchangable(bmp1, bmp2) != 0;
}

#ifdef __cplusplus

void clear_surface(bitmap dest)
{
    sg_Images_ClearSurfaceToBlack(dest);
}

#endif

void clear_surface_to_black(bitmap dest)
{
    sg_Images_ClearSurfaceToBlack(dest);
}

void clear_surface(bitmap dest, color toColor)
{
    sg_Images_ClearSurface(dest, toColor);
}

bitmap create_bitmap(int32_t width, int32_t height)
{
    return sg_Images_CreateBitmap(width, height);
}

#ifdef __cplusplus

bitmap create_bitmap(const char *name, int32_t width, int32_t height)
{
    return sg_Images_CreateBitmapNamed(name, width, height);
}

#endif

bitmap create_bitmap_named(const char *name, int32_t width, int32_t height)
{
    return sg_Images_CreateBitmapNamed(name, width, height);
}

void draw_bitmap(bitmap src, float x, float y)
{
    sg_Images_DrawBitmap(src, x, y);
}

#ifdef __cplusplus

void draw_bitmap(const char *name, float x, float y)
{
    sg_Images_DrawBitmapNamed(name, x, y);
}

#endif

void draw_bitmap_named(const char *name, float x, float y)
{
    sg_Images_DrawBitmapNamed(name, x, y);
}

#ifdef __cplusplus

void draw_bitmap(bitmap src, float x, float y, const drawing_options &opts)
{
    sg_Images_DrawBitmapWithOpts(src, x, y, &opts);
}

#endif

void draw_bitmap_with_opts(bitmap src, float x, float y, const drawing_options *opts)
{
    sg_Images_DrawBitmapWithOpts(src, x, y, opts);
}

void draw_bitmap_with_opts_byval(bitmap src, float x, float y, const drawing_options opts)
{
    sg_Images_DrawBitmapWithOpts(src, x, y, &opts);
}

#ifdef __cplusplus

void draw_bitmap(const char *name, float x, float y, const drawing_options &opts)
{
    sg_Images_DrawBitmapNamedWithOpts(name, x, y, &opts);
}

#endif

void draw_bitmap_named_with_opts(const char *name, float x, float y, const drawing_options *opts)
{
    sg_Images_DrawBitmapNamedWithOpts(name, x, y, opts);
}

void draw_bitmap_named_with_opts_byval(const char *name, float x, float y, const drawing_options opts)
{
    sg_Images_DrawBitmapNamedWithOpts(name, x, y, &opts);
}

void draw_cell(bitmap src, int32_t cell, float x, float y)
{
    sg_Images_DrawCell(src, cell, x, y);
}

#ifdef __cplusplus

void draw_cell(bitmap src, int32_t cell, float x, float y, const drawing_options &opts)
{
    sg_Images_DrawCellOpts(src, cell, x, y, &opts);
}

#endif

void draw_cell_opts(bitmap src, int32_t cell, float x, float y, const drawing_options *opts)
{
    sg_Images_DrawCellOpts(src, cell, x, y, opts);
}

void draw_cell_opts_byval(bitmap src, int32_t cell, float x, float y, const drawing_options opts)
{
    sg_Images_DrawCellOpts(src, cell, x, y, &opts);
}

void free_bitmap(bitmap bitmapToFree)
{
    sg_Images_FreeBitmap(bitmapToFree);
}

bool has_bitmap(const char *name)
{
    return sg_Images_HasBitmap(name) != 0;
}

bitmap load_bitmap(const char *filename)
{
    return sg_Images_LoadBitmap(filename);
}

bitmap load_bitmap_named(const char *name, const char *filename)
{
    return sg_Images_LoadBitmapNamed(name, filename);
}

bool pixel_drawn_at_point(bitmap bmp, float x, float y)
{
    return sg_Images_PixelDrawnAtPoint(bmp, x, y) != 0;
}

void release_all_bitmaps()
{
    sg_Images_ReleaseAllBitmaps();
}

void release_bitmap(const char *name)
{
    sg_Images_ReleaseBitmap(name);
}

void save_bitmap(bitmap src, const char *filepath)
{
    sg_Images_SaveBitmap(src, filepath);
}

void setup_bitmap_for_collisions(bitmap src)
{
    sg_Images_SetupBitmapForCollisions(src);
}

