/*******************************************************************************
 * Size: 30 px
 * Bpp: 2
 * Opts:
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef LV_FONT_INTER_BOLD_30
#define LV_FONT_INTER_BOLD_30 1
#endif

#if LV_FONT_INTER_BOLD_30

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0x7f, 0xc7, 0xfc, 0x7f, 0xc7, 0xfc, 0x7f, 0xc7, 0xfc, 0x7f, 0xc7, 0xfc,
    0x7f, 0xc3, 0xfc, 0x3f, 0xc3, 0xfc, 0x3f, 0xc3, 0xfc, 0x3f, 0xc2, 0xa8, 0x0,
    0x3, 0xf8, 0x7f, 0xcb, 0xfd, 0x7f, 0xc2, 0xf4,

    /* U+0022 "\"" */
    0xbe, 0xf, 0xcb, 0xe0, 0xfc, 0xbe, 0xf, 0xcb, 0xe0, 0xfc, 0xbe, 0xf, 0xcb,
    0xe0, 0xfc, 0xbe, 0xf, 0xcb, 0xe0, 0xfc, 0x69, 0xa, 0x80,

    /* U+0025 "%" */
    0x6, 0xfe, 0x0, 0x0, 0x7d, 0x1, 0xff, 0xfc, 0x0, 0xf, 0x80, 0x3f, 0xff,
    0xf0, 0x3, 0xf0, 0x7, 0xf0, 0x3f, 0x0, 0x7d, 0x0, 0x7e, 0x3, 0xf0, 0xf,
    0x80, 0x7, 0xf0, 0x3f, 0x3, 0xf0, 0x0, 0x3f, 0xff, 0xf0, 0x7d, 0x0, 0x2,
    0xff, 0xfc, 0xf, 0x80, 0x0, 0x6, 0xfe, 0x3, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xbc,
    0x0, 0x0, 0x0, 0x0, 0xf, 0x80, 0x0, 0x0, 0x0, 0x3, 0xf0, 0xbf, 0x80, 0x0,
    0x0, 0xbc, 0x3f, 0xff, 0x0, 0x0, 0x1f, 0x8b, 0xff, 0xf8, 0x0, 0x3, 0xf0,
    0xfc, 0xf, 0xc0, 0x0, 0xbc, 0xf, 0xc0, 0xfd, 0x0, 0x1f, 0x41, 0xfc, 0xf,
    0xd0, 0x3, 0xf0, 0xf, 0xc0, 0xfd, 0x0, 0xbc, 0x0, 0xfd, 0xf, 0xc0, 0x1f,
    0x40, 0xb, 0xff, 0xf8, 0x3, 0xe0, 0x0, 0x3f, 0xff, 0x0, 0xbc, 0x0, 0x0,
    0xbf, 0x80,

    /* U+002B "+" */
    0x0, 0xb, 0xf0, 0x0, 0x0, 0xb, 0xf0, 0x0, 0x0, 0xb, 0xf0, 0x0, 0x0, 0xb,
    0xf0, 0x0, 0x0, 0xb, 0xf0, 0x0, 0x0, 0xb, 0xf0, 0x0, 0x7f, 0xff, 0xff, 0xfe,
    0x7f, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xfe, 0x7f, 0xff, 0xff, 0xfe, 0x0,
    0xb, 0xf0, 0x0, 0x0, 0xb, 0xf0, 0x0, 0x0, 0xb, 0xf0, 0x0, 0x0, 0xb, 0xf0,
    0x0, 0x0, 0xb, 0xf0, 0x0, 0x0, 0x5, 0x50, 0x0,

    /* U+002E "." */
    0x0, 0x0, 0x7f, 0x3, 0xff, 0xf, 0xfc, 0x3f, 0xe0, 0x3e, 0x0,

    /* U+0030 "0" */
    0x0, 0xb, 0xfe, 0x40, 0x0, 0x2, 0xff, 0xff, 0xd0, 0x0, 0x2f, 0xff, 0xff,
    0xd0, 0x2, 0xff, 0xff, 0xff, 0xc0, 0xf, 0xfd, 0x2, 0xff, 0xc0, 0xbf, 0xd0,
    0x3, 0xff, 0x43, 0xff, 0x0, 0x7, 0xfe, 0xf, 0xf8, 0x0, 0xf, 0xfc, 0x7f,
    0xd0, 0x0, 0x3f, 0xf1, 0xff, 0x40, 0x0, 0xbf, 0xc7, 0xfc, 0x0, 0x2, 0xff,
    0x1f, 0xf0, 0x0, 0xb, 0xfc, 0x7f, 0xd0, 0x0, 0x2f, 0xf1, 0xff, 0x40, 0x0,
    0xff, 0xc3, 0xfe, 0x0, 0x3, 0xff, 0xf, 0xfc, 0x0, 0x1f, 0xf8, 0x2f, 0xf4,
    0x0, 0xff, 0xc0, 0x3f, 0xf8, 0xb, 0xff, 0x0, 0xbf, 0xff, 0xff, 0xf0, 0x0,
    0xbf, 0xff, 0xff, 0x40, 0x0, 0xbf, 0xff, 0xf4, 0x0, 0x0, 0x2f, 0xf9, 0x0,
    0x0,

    /* U+0031 "1" */
    0x0, 0x2f, 0xf4, 0x7, 0xff, 0xd0, 0xff, 0xff, 0x5f, 0xff, 0xfd, 0x7f, 0xef,
    0xf5, 0xf8, 0x7f, 0xd7, 0x41, 0xff, 0x40, 0x7, 0xfd, 0x0, 0x1f, 0xf4, 0x0,
    0x7f, 0xd0, 0x1, 0xff, 0x40, 0x7, 0xfd, 0x0, 0x1f, 0xf4, 0x0, 0x7f, 0xd0,
    0x1, 0xff, 0x40, 0x7, 0xfd, 0x0, 0x1f, 0xf4, 0x0, 0x7f, 0xd0, 0x1, 0xff,
    0x40, 0x7, 0xfd, 0x0, 0x1f, 0xf4, 0x0, 0x7f, 0xd0,

    /* U+0032 "2" */
    0x0, 0x2f, 0xfd, 0x0, 0x0, 0xbf, 0xff, 0xf4, 0x0, 0xff, 0xff, 0xff, 0x80,
    0xbf, 0xff, 0xff, 0xf4, 0x3f, 0xf0, 0xb, 0xfe, 0x1f, 0xf4, 0x0, 0xbf, 0xc7,
    0xfc, 0x0, 0x1f, 0xf0, 0x0, 0x0, 0xb, 0xfc, 0x0, 0x0, 0x3, 0xfe, 0x0, 0x0,
    0x2, 0xff, 0x0, 0x0, 0x1, 0xff, 0x80, 0x0, 0x1, 0xff, 0xc0, 0x0, 0x2, 0xff,
    0xc0, 0x0, 0x2, 0xff, 0xc0, 0x0, 0x2, 0xff, 0xc0, 0x0, 0x3, 0xff, 0x80, 0x0,
    0x3, 0xff, 0x80, 0x0, 0x3, 0xff, 0x80, 0x0, 0x3, 0xff, 0xff, 0xff, 0xf4,
    0xff, 0xff, 0xff, 0xfd, 0x3f, 0xff, 0xff, 0xff, 0x4f, 0xff, 0xff, 0xff,
    0xd0,

    /* U+0033 "3" */
    0x0, 0x1b, 0xfe, 0x40, 0x0, 0x1f, 0xff, 0xff, 0x0, 0xb, 0xff, 0xff, 0xfc,
    0x1, 0xff, 0xff, 0xff, 0xf0, 0x2f, 0xf4, 0x3, 0xff, 0x3, 0xfe, 0x0, 0xf,
    0xf4, 0x0, 0x0, 0x0, 0xff, 0x40, 0x0, 0x0, 0x2f, 0xf0, 0x0, 0x5, 0x6f, 0xfd,
    0x0, 0x0, 0xbf, 0xfe, 0x0, 0x0, 0xb, 0xff, 0xe0, 0x0, 0x0, 0xbf, 0xff, 0xe0,
    0x0, 0x0, 0x7, 0xff, 0x40, 0x0, 0x0, 0xf, 0xfc, 0x0, 0x0, 0x0, 0xbf, 0xc6,
    0xa8, 0x0, 0xb, 0xfc, 0x7f, 0xe0, 0x0, 0xff, 0xc3, 0xff, 0x80, 0x3f, 0xfc,
    0x2f, 0xff, 0xff, 0xff, 0x40, 0xbf, 0xff, 0xff, 0xd0, 0x2, 0xff, 0xff, 0xf4,
    0x0, 0x1, 0xbf, 0xe4, 0x0,

    /* U+0034 "4" */
    0x0, 0x0, 0x3f, 0xfd, 0x0, 0x0, 0x1, 0xff, 0xf4, 0x0, 0x0, 0xf, 0xff, 0xd0,
    0x0, 0x0, 0xbf, 0xff, 0x40, 0x0, 0x7, 0xff, 0xfd, 0x0, 0x0, 0x3f, 0xef,
    0xf4, 0x0, 0x2, 0xff, 0x3f, 0xd0, 0x0, 0xf, 0xf4, 0xff, 0x40, 0x0, 0xff,
    0x83, 0xfd, 0x0, 0xb, 0xfc, 0xf, 0xf4, 0x0, 0x3f, 0xd0, 0x3f, 0xd0, 0x3,
    0xff, 0x0, 0xff, 0x40, 0x1f, 0xf0, 0x3, 0xfd, 0x0, 0xff, 0x80, 0xf, 0xf4,
    0xb, 0xff, 0xff, 0xff, 0xff, 0x2f, 0xff, 0xff, 0xff, 0xfc, 0xbf, 0xff, 0xff,
    0xff, 0xf2, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x0, 0x0, 0x3f, 0xd0, 0x0, 0x0,
    0x0, 0xff, 0x40, 0x0, 0x0, 0x3, 0xfd, 0x0, 0x0, 0x0, 0xf, 0xf4, 0x0,

    /* U+0035 "5" */
    0xb, 0xff, 0xff, 0xfe, 0x3, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0xe0,
    0x3f, 0xff, 0xff, 0xf8, 0xf, 0xf0, 0x0, 0x0, 0x3, 0xfc, 0x0, 0x0, 0x1, 0xff,
    0x0, 0x0, 0x0, 0x7f, 0x87, 0xfe, 0x0, 0x1f, 0xef, 0xff, 0xf4, 0xb, 0xff,
    0xff, 0xff, 0x42, 0xff, 0xea, 0xff, 0xf0, 0x1b, 0xc0, 0xb, 0xfd, 0x0, 0x0,
    0x0, 0xff, 0x80, 0x0, 0x0, 0x2f, 0xf0, 0x0, 0x0, 0xb, 0xfc, 0xaa, 0x0, 0x2,
    0xff, 0x3f, 0xe0, 0x0, 0xff, 0x8b, 0xfd, 0x0, 0xff, 0xc0, 0xff, 0xff, 0xff,
    0xe0, 0x1f, 0xff, 0xff, 0xf0, 0x1, 0xff, 0xff, 0xe0, 0x0, 0x6, 0xff, 0x80,
    0x0,

    /* U+0036 "6" */
    0x0, 0xb, 0xfe, 0x40, 0x0, 0xb, 0xff, 0xff, 0x40, 0x2, 0xff, 0xff, 0xfd,
    0x0, 0x7f, 0xff, 0xff, 0xf0, 0xf, 0xfd, 0x2, 0xff, 0x82, 0xff, 0x0, 0xb,
    0xfc, 0x3f, 0xe0, 0x0, 0x0, 0x3, 0xfd, 0xb, 0xf9, 0x0, 0x7f, 0xcb, 0xff,
    0xf8, 0x7, 0xfd, 0xff, 0xff, 0xe0, 0xbf, 0xff, 0x9b, 0xff, 0x4b, 0xff, 0x80,
    0x1f, 0xfc, 0xbf, 0xf0, 0x0, 0xbf, 0xc7, 0xfe, 0x0, 0x7, 0xfc, 0x7f, 0xd0,
    0x0, 0x3f, 0xd3, 0xfe, 0x0, 0x7, 0xfc, 0x3f, 0xf0, 0x0, 0xff, 0xc1, 0xff,
    0xc0, 0x2f, 0xf8, 0xf, 0xff, 0xff, 0xff, 0x0, 0x3f, 0xff, 0xff, 0xd0, 0x0,
    0xbf, 0xff, 0xf0, 0x0, 0x1, 0xbf, 0xe4, 0x0,

    /* U+0037 "7" */
    0xff, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xff, 0xfd, 0xff, 0xff, 0xff, 0xfd,
    0xff, 0xff, 0xff, 0xfd, 0x0, 0x0, 0xb, 0xfc, 0x0, 0x0, 0xf, 0xf8, 0x0, 0x0,
    0x2f, 0xf0, 0x0, 0x0, 0x3f, 0xe0, 0x0, 0x0, 0xbf, 0xc0, 0x0, 0x0, 0xff,
    0x80, 0x0, 0x2, 0xff, 0x0, 0x0, 0x3, 0xfe, 0x0, 0x0, 0xb, 0xfc, 0x0, 0x0,
    0xf, 0xf8, 0x0, 0x0, 0x2f, 0xf0, 0x0, 0x0, 0x3f, 0xe0, 0x0, 0x0, 0xbf, 0xc0,
    0x0, 0x0, 0xff, 0x80, 0x0, 0x2, 0xff, 0x0, 0x0, 0x3, 0xfe, 0x0, 0x0, 0xb,
    0xfc, 0x0, 0x0, 0xf, 0xf8, 0x0, 0x0,

    /* U+0038 "8" */
    0x0, 0x1b, 0xfe, 0x40, 0x0, 0x1f, 0xff, 0xff, 0x40, 0xb, 0xff, 0xff, 0xfd,
    0x0, 0xff, 0xfa, 0xff, 0xf0, 0x2f, 0xf4, 0x2, 0xff, 0x42, 0xff, 0x0, 0xf,
    0xf8, 0x2f, 0xf0, 0x0, 0xff, 0x41, 0xff, 0x40, 0x2f, 0xf0, 0xb, 0xfe, 0xaf,
    0xfd, 0x0, 0x1f, 0xff, 0xfe, 0x0, 0x0, 0xbf, 0xff, 0xe0, 0x0, 0xbf, 0xff,
    0xff, 0xd0, 0x1f, 0xfd, 0x7, 0xff, 0x43, 0xff, 0x0, 0xf, 0xfc, 0x7f, 0xd0,
    0x0, 0xbf, 0xcb, 0xfd, 0x0, 0x7, 0xfd, 0x7f, 0xe0, 0x0, 0xbf, 0xd3, 0xff,
    0x40, 0x1f, 0xfc, 0x2f, 0xfe, 0xaf, 0xff, 0x80, 0xff, 0xff, 0xff, 0xe0, 0x2,
    0xff, 0xff, 0xf4, 0x0, 0x1, 0xbf, 0xe4, 0x0,

    /* U+0039 "9" */
    0x0, 0x1f, 0xfe, 0x0, 0x0, 0x1f, 0xff, 0xfe, 0x0, 0xb, 0xff, 0xff, 0xfc,
    0x1, 0xff, 0xfb, 0xff, 0xe0, 0x3f, 0xf4, 0x3, 0xff, 0x7, 0xfd, 0x0, 0xf,
    0xf8, 0x7f, 0xc0, 0x0, 0xbf, 0xc7, 0xfc, 0x0, 0xb, 0xfc, 0x7f, 0xd0, 0x0,
    0xff, 0xc3, 0xff, 0x0, 0x2f, 0xfd, 0x2f, 0xfe, 0x6f, 0xff, 0xd0, 0xff, 0xff,
    0xf7, 0xfd, 0x3, 0xff, 0xfd, 0x3f, 0xd0, 0x7, 0xfe, 0x7, 0xfc, 0x0, 0x0,
    0x0, 0xbf, 0xc2, 0xa8, 0x0, 0xf, 0xf8, 0x3f, 0xf0, 0x2, 0xff, 0x42, 0xff,
    0x80, 0xbf, 0xf0, 0xf, 0xff, 0xff, 0xfd, 0x0, 0x7f, 0xff, 0xff, 0x40, 0x1,
    0xff, 0xff, 0xd0, 0x0, 0x1, 0xff, 0xd0, 0x0,

    /* U+003A ":" */
    0xf, 0x80, 0xff, 0x83, 0xff, 0xf, 0xfc, 0x1f, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1f, 0xc0, 0xff, 0xc3, 0xff, 0xf, 0xf8,
    0xf, 0x80,

    /* U+003B ";" */
    0xb, 0xd0, 0x7f, 0xc2, 0xff, 0x4b, 0xfc, 0xf, 0xe0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2a, 0x40, 0xfe, 0x3, 0xf4,
    0x1f, 0xd0, 0x7f, 0x2, 0xfc, 0xb, 0xd0, 0x3f, 0x0, 0xfc, 0x0,

    /* U+003C "<" */
    0x0, 0x0, 0x0, 0x1, 0x0, 0x0, 0x0, 0x2e, 0x0, 0x0, 0x6, 0xfe, 0x0, 0x0,
    0x7f, 0xfe, 0x0, 0x7, 0xff, 0xfe, 0x0, 0xbf, 0xff, 0xe4, 0xb, 0xff, 0xfe,
    0x0, 0x7f, 0xff, 0x90, 0x0, 0x7f, 0xf8, 0x0, 0x0, 0x7f, 0xf4, 0x0, 0x0,
    0x7f, 0xff, 0x80, 0x0, 0x1f, 0xff, 0xfd, 0x0, 0x0, 0xbf, 0xff, 0xe0, 0x0,
    0xb, 0xff, 0xfe, 0x0, 0x0, 0x7f, 0xfe, 0x0, 0x0, 0x7, 0xfe, 0x0, 0x0, 0x0,
    0x7e, 0x0, 0x0, 0x0, 0x1,

    /* U+003D "=" */
    0x3f, 0xff, 0xff, 0xfe, 0x3f, 0xff, 0xff, 0xfe, 0x3f, 0xff, 0xff, 0xfe,
    0x3f, 0xff, 0xff, 0xfd, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x3f, 0xff, 0xff, 0xfd, 0x3f, 0xff, 0xff, 0xfe, 0x3f, 0xff, 0xff,
    0xfe, 0x3f, 0xff, 0xff, 0xfe,

    /* U+003E ">" */
    0x10, 0x0, 0x0, 0x0, 0x7d, 0x0, 0x0, 0x0, 0x7f, 0xd0, 0x0, 0x0, 0x7f, 0xfe,
    0x0, 0x0, 0x7f, 0xff, 0xe0, 0x0, 0xb, 0xff, 0xff, 0x40, 0x0, 0x7f, 0xff,
    0xf4, 0x0, 0x2, 0xff, 0xfe, 0x0, 0x0, 0x1f, 0xfe, 0x0, 0x0, 0x1b, 0xfe, 0x0,
    0x1, 0xff, 0xfe, 0x0, 0x2f, 0xff, 0xf8, 0x7, 0xff, 0xff, 0x40, 0x3f, 0xff,
    0xf4, 0x0, 0x7f, 0xfe, 0x0, 0x0, 0x7f, 0xe0, 0x0, 0x0, 0x7d, 0x0, 0x0, 0x0,
    0x10, 0x0, 0x0, 0x0,

    /* U+003F "?" */
    0x0, 0xbf, 0xf4, 0x0, 0x2f, 0xff, 0xfd, 0x2, 0xff, 0xff, 0xfd, 0xf, 0xff,
    0xff, 0xfc, 0xbf, 0xd0, 0x3f, 0xf7, 0xfe, 0x0, 0x7f, 0xd1, 0x50, 0x1, 0xff,
    0x40, 0x0, 0xb, 0xfc, 0x0, 0x0, 0xbf, 0xe0, 0x0, 0xf, 0xff, 0x0, 0x0, 0xff,
    0xe0, 0x0, 0xf, 0xfd, 0x0, 0x0, 0x3f, 0xd0, 0x0, 0x0, 0xff, 0x0, 0x0, 0x7,
    0xfc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xfd, 0x0, 0x0, 0xb,
    0xfc, 0x0, 0x0, 0x2f, 0xf4, 0x0, 0x0, 0x7f, 0xc0, 0x0, 0x0, 0xbd, 0x0, 0x0,

    /* U+0041 "A" */
    0x0, 0x0, 0xff, 0xf4, 0x0, 0x0, 0x0, 0x1f, 0xff, 0x80, 0x0, 0x0, 0x2, 0xff,
    0xfc, 0x0, 0x0, 0x0, 0x3f, 0xff, 0xd0, 0x0, 0x0, 0x7, 0xff, 0xfe, 0x0, 0x0,
    0x0, 0xbf, 0xef, 0xf0, 0x0, 0x0, 0xf, 0xf8, 0xff, 0x40, 0x0, 0x1, 0xff,
    0x4f, 0xfc, 0x0, 0x0, 0x2f, 0xf0, 0xbf, 0xc0, 0x0, 0x3, 0xfe, 0x7, 0xfd,
    0x0, 0x0, 0x7f, 0xd0, 0x3f, 0xf0, 0x0, 0xb, 0xfc, 0x2, 0xff, 0x0, 0x0, 0xff,
    0x80, 0x1f, 0xf4, 0x0, 0x1f, 0xfe, 0xaa, 0xff, 0xc0, 0x2, 0xff, 0xff, 0xff,
    0xfc, 0x0, 0x3f, 0xff, 0xff, 0xff, 0xd0, 0x7, 0xff, 0xff, 0xff, 0xff, 0x0,
    0xbf, 0xc0, 0x0, 0x2f, 0xf0, 0xf, 0xfc, 0x0, 0x1, 0xff, 0x81, 0xff, 0x40,
    0x0, 0xf, 0xfc, 0x3f, 0xf0, 0x0, 0x0, 0xbf, 0xc3, 0xff, 0x0, 0x0, 0x7, 0xfe,

    /* U+0042 "B" */
    0x3f, 0xff, 0xff, 0x90, 0x3, 0xff, 0xff, 0xff, 0xc0, 0x3f, 0xff, 0xff, 0xff,
    0x3, 0xff, 0xff, 0xff, 0xf4, 0x3f, 0xe0, 0x2, 0xff, 0xc3, 0xfe, 0x0, 0xf,
    0xfc, 0x3f, 0xe0, 0x0, 0xff, 0xc3, 0xfe, 0x0, 0xf, 0xf4, 0x3f, 0xe0, 0x7,
    0xff, 0x3, 0xff, 0xff, 0xff, 0x80, 0x3f, 0xff, 0xff, 0xe0, 0x3, 0xff, 0xff,
    0xff, 0xe0, 0x3f, 0xe0, 0x7, 0xff, 0x83, 0xfe, 0x0, 0xb, 0xfc, 0x3f, 0xe0,
    0x0, 0x3f, 0xe3, 0xfe, 0x0, 0x3, 0xfe, 0x3f, 0xe0, 0x0, 0x7f, 0xe3, 0xfe,
    0x0, 0x1f, 0xfd, 0x3f, 0xff, 0xff, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xf4, 0x3f,
    0xff, 0xff, 0xfd, 0x3, 0xff, 0xff, 0xfd, 0x0,

    /* U+0043 "C" */
    0x0, 0x2, 0xff, 0xe4, 0x0, 0x0, 0xb, 0xff, 0xff, 0xd0, 0x0, 0xf, 0xff, 0xff,
    0xfd, 0x0, 0xf, 0xff, 0xff, 0xff, 0xd0, 0xf, 0xff, 0x91, 0x7f, 0xfc, 0x7,
    0xff, 0x40, 0x2, 0xff, 0x83, 0xff, 0x40, 0x0, 0x3f, 0xf0, 0xff, 0xc0, 0x0,
    0xb, 0xfc, 0x7f, 0xd0, 0x0, 0x0, 0x0, 0x1f, 0xf4, 0x0, 0x0, 0x0, 0x7, 0xfc,
    0x0, 0x0, 0x0, 0x1, 0xff, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xd0, 0x0, 0x0, 0x0,
    0x1f, 0xf4, 0x0, 0x0, 0x0, 0x3, 0xff, 0x0, 0x0, 0x1a, 0xa0, 0xff, 0xd0, 0x0,
    0xf, 0xfc, 0x1f, 0xfc, 0x0, 0xb, 0xfe, 0x3, 0xff, 0xe4, 0x5f, 0xff, 0x0,
    0x3f, 0xff, 0xff, 0xff, 0x40, 0x3, 0xff, 0xff, 0xff, 0x40, 0x0, 0x2f, 0xff,
    0xff, 0x0, 0x0, 0x0, 0xbf, 0xf9, 0x0, 0x0,

    /* U+0044 "D" */
    0x3f, 0xff, 0xfe, 0x40, 0x0, 0x3f, 0xff, 0xff, 0xf8, 0x0, 0x3f, 0xff, 0xff,
    0xff, 0x0, 0x3f, 0xff, 0xff, 0xff, 0xc0, 0x3f, 0xe0, 0x6, 0xff, 0xe0, 0x3f,
    0xe0, 0x0, 0x3f, 0xf0, 0x3f, 0xe0, 0x0, 0x1f, 0xf8, 0x3f, 0xe0, 0x0, 0xf,
    0xfc, 0x3f, 0xe0, 0x0, 0xb, 0xfc, 0x3f, 0xe0, 0x0, 0x7, 0xfc, 0x3f, 0xe0,
    0x0, 0x7, 0xfd, 0x3f, 0xe0, 0x0, 0x7, 0xfd, 0x3f, 0xe0, 0x0, 0x7, 0xfc,
    0x3f, 0xe0, 0x0, 0xb, 0xfc, 0x3f, 0xe0, 0x0, 0xf, 0xfc, 0x3f, 0xe0, 0x0,
    0x1f, 0xf8, 0x3f, 0xe0, 0x0, 0x3f, 0xf0, 0x3f, 0xe0, 0x6, 0xff, 0xe0, 0x3f,
    0xff, 0xff, 0xff, 0xc0, 0x3f, 0xff, 0xff, 0xff, 0x0, 0x3f, 0xff, 0xff, 0xf8,
    0x0, 0x3f, 0xff, 0xfe, 0x40, 0x0,

    /* U+0045 "E" */
    0x3f, 0xff, 0xff, 0xfe, 0x3f, 0xff, 0xff, 0xfe, 0x3f, 0xff, 0xff, 0xfe,
    0x3f, 0xff, 0xff, 0xfe, 0x3f, 0xe0, 0x0, 0x0, 0x3f, 0xe0, 0x0, 0x0, 0x3f,
    0xe0, 0x0, 0x0, 0x3f, 0xe0, 0x0, 0x0, 0x3f, 0xe0, 0x0, 0x0, 0x3f, 0xff,
    0xff, 0xfc, 0x3f, 0xff, 0xff, 0xfc, 0x3f, 0xff, 0xff, 0xfc, 0x3f, 0xff,
    0xff, 0xfc, 0x3f, 0xe0, 0x0, 0x0, 0x3f, 0xe0, 0x0, 0x0, 0x3f, 0xe0, 0x0,
    0x0, 0x3f, 0xe0, 0x0, 0x0, 0x3f, 0xe0, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xfe,
    0x3f, 0xff, 0xff, 0xfe, 0x3f, 0xff, 0xff, 0xfe, 0x3f, 0xff, 0xff, 0xfe,

    /* U+0046 "F" */
    0x3f, 0xff, 0xff, 0xfd, 0x3f, 0xff, 0xff, 0xfd, 0x3f, 0xff, 0xff, 0xfd,
    0x3f, 0xff, 0xff, 0xfd, 0x3f, 0xe0, 0x0, 0x0, 0x3f, 0xe0, 0x0, 0x0, 0x3f,
    0xe0, 0x0, 0x0, 0x3f, 0xe0, 0x0, 0x0, 0x3f, 0xe0, 0x0, 0x0, 0x3f, 0xff,
    0xff, 0xf4, 0x3f, 0xff, 0xff, 0xf4, 0x3f, 0xff, 0xff, 0xf4, 0x3f, 0xff,
    0xff, 0xf4, 0x3f, 0xe0, 0x0, 0x0, 0x3f, 0xe0, 0x0, 0x0, 0x3f, 0xe0, 0x0,
    0x0, 0x3f, 0xe0, 0x0, 0x0, 0x3f, 0xe0, 0x0, 0x0, 0x3f, 0xe0, 0x0, 0x0, 0x3f,
    0xe0, 0x0, 0x0, 0x3f, 0xe0, 0x0, 0x0, 0x3f, 0xe0, 0x0, 0x0,

    /* U+0047 "G" */
    0x0, 0x2, 0xff, 0xe4, 0x0, 0x0, 0xb, 0xff, 0xff, 0xd0, 0x0, 0xf, 0xff, 0xff,
    0xfe, 0x0, 0xf, 0xff, 0xff, 0xff, 0xd0, 0xf, 0xff, 0x91, 0x7f, 0xfc, 0x7,
    0xff, 0x40, 0x2, 0xff, 0x83, 0xff, 0x40, 0x0, 0x3f, 0xf0, 0xff, 0xc0, 0x0,
    0x0, 0x0, 0x7f, 0xd0, 0x0, 0x0, 0x0, 0x1f, 0xf4, 0x0, 0x0, 0x0, 0x7, 0xfc,
    0x0, 0x3f, 0xff, 0xf5, 0xff, 0x0, 0xf, 0xff, 0xfd, 0x7f, 0xd0, 0x3, 0xff,
    0xff, 0x1f, 0xf4, 0x0, 0x6a, 0xbf, 0xc3, 0xff, 0x0, 0x0, 0x1f, 0xf0, 0xff,
    0xd0, 0x0, 0xb, 0xfc, 0x1f, 0xfd, 0x0, 0x7, 0xfe, 0x3, 0xff, 0xe4, 0x1b,
    0xff, 0x0, 0x3f, 0xff, 0xff, 0xff, 0x40, 0x3, 0xff, 0xff, 0xff, 0x80, 0x0,
    0x2f, 0xff, 0xff, 0x40, 0x0, 0x0, 0xbf, 0xf9, 0x0, 0x0,

    /* U+0048 "H" */
    0x3f, 0xe0, 0x0, 0x3, 0xfd, 0x3f, 0xe0, 0x0, 0x3, 0xfd, 0x3f, 0xe0, 0x0,
    0x3, 0xfd, 0x3f, 0xe0, 0x0, 0x3, 0xfd, 0x3f, 0xe0, 0x0, 0x3, 0xfd, 0x3f,
    0xe0, 0x0, 0x3, 0xfd, 0x3f, 0xe0, 0x0, 0x3, 0xfd, 0x3f, 0xe0, 0x0, 0x3,
    0xfd, 0x3f, 0xe0, 0x0, 0x3, 0xfd, 0x3f, 0xff, 0xff, 0xff, 0xfd, 0x3f, 0xff,
    0xff, 0xff, 0xfd, 0x3f, 0xff, 0xff, 0xff, 0xfd, 0x3f, 0xff, 0xff, 0xff,
    0xfd, 0x3f, 0xe0, 0x0, 0x3, 0xfd, 0x3f, 0xe0, 0x0, 0x3, 0xfd, 0x3f, 0xe0,
    0x0, 0x3, 0xfd, 0x3f, 0xe0, 0x0, 0x3, 0xfd, 0x3f, 0xe0, 0x0, 0x3, 0xfd,
    0x3f, 0xe0, 0x0, 0x3, 0xfd, 0x3f, 0xe0, 0x0, 0x3, 0xfd, 0x3f, 0xe0, 0x0,
    0x3, 0xfd, 0x3f, 0xe0, 0x0, 0x3, 0xfd,

    /* U+0049 "I" */
    0x3f, 0xe3, 0xfe, 0x3f, 0xe3, 0xfe, 0x3f, 0xe3, 0xfe, 0x3f, 0xe3, 0xfe,
    0x3f, 0xe3, 0xfe, 0x3f, 0xe3, 0xfe, 0x3f, 0xe3, 0xfe, 0x3f, 0xe3, 0xfe,
    0x3f, 0xe3, 0xfe, 0x3f, 0xe3, 0xfe, 0x3f, 0xe3, 0xfe,

    /* U+004A "J" */
    0x0, 0x0, 0x7, 0xfc, 0x0, 0x0, 0x7, 0xfc, 0x0, 0x0, 0x7, 0xfc, 0x0, 0x0,
    0x7, 0xfc, 0x0, 0x0, 0x7, 0xfc, 0x0, 0x0, 0x7, 0xfc, 0x0, 0x0, 0x7, 0xfc,
    0x0, 0x0, 0x7, 0xfc, 0x0, 0x0, 0x7, 0xfc, 0x0, 0x0, 0x7, 0xfc, 0x0, 0x0,
    0x7, 0xfc, 0x0, 0x0, 0x7, 0xfc, 0x0, 0x0, 0x7, 0xfc, 0x0, 0x0, 0x7, 0xfc,
    0x0, 0x0, 0x7, 0xfc, 0x2a, 0x80, 0x7, 0xfc, 0x3f, 0xd0, 0xb, 0xfc, 0x3f,
    0xf0, 0x1f, 0xfc, 0x2f, 0xff, 0xff, 0xf4, 0xf, 0xff, 0xff, 0xe0, 0x3, 0xff,
    0xff, 0x80, 0x0, 0x6f, 0xf8, 0x0,

    /* U+004B "K" */
    0x3f, 0xe0, 0x0, 0x2f, 0xf8, 0x3f, 0xe0, 0x0, 0xbf, 0xf0, 0x3f, 0xe0, 0x1,
    0xff, 0xc0, 0x3f, 0xe0, 0x3, 0xff, 0x40, 0x3f, 0xe0, 0xf, 0xfd, 0x0, 0x3f,
    0xe0, 0x3f, 0xf8, 0x0, 0x3f, 0xe0, 0xbf, 0xf0, 0x0, 0x3f, 0xe1, 0xff, 0xc0,
    0x0, 0x3f, 0xe7, 0xff, 0x0, 0x0, 0x3f, 0xef, 0xfd, 0x0, 0x0, 0x3f, 0xff,
    0xfe, 0x0, 0x0, 0x3f, 0xff, 0xff, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xc0, 0x0,
    0x3f, 0xfd, 0xff, 0xe0, 0x0, 0x3f, 0xf8, 0x3f, 0xf0, 0x0, 0x3f, 0xe0, 0x2f,
    0xfc, 0x0, 0x3f, 0xe0, 0xf, 0xfe, 0x0, 0x3f, 0xe0, 0x3, 0xff, 0x0, 0x3f,
    0xe0, 0x2, 0xff, 0xc0, 0x3f, 0xe0, 0x0, 0xff, 0xe0, 0x3f, 0xe0, 0x0, 0x3f,
    0xf4, 0x3f, 0xe0, 0x0, 0x2f, 0xfc,

    /* U+004C "L" */
    0x3f, 0xe0, 0x0, 0x0, 0xff, 0x80, 0x0, 0x3, 0xfe, 0x0, 0x0, 0xf, 0xf8, 0x0,
    0x0, 0x3f, 0xe0, 0x0, 0x0, 0xff, 0x80, 0x0, 0x3, 0xfe, 0x0, 0x0, 0xf, 0xf8,
    0x0, 0x0, 0x3f, 0xe0, 0x0, 0x0, 0xff, 0x80, 0x0, 0x3, 0xfe, 0x0, 0x0, 0xf,
    0xf8, 0x0, 0x0, 0x3f, 0xe0, 0x0, 0x0, 0xff, 0x80, 0x0, 0x3, 0xfe, 0x0, 0x0,
    0xf, 0xf8, 0x0, 0x0, 0x3f, 0xe0, 0x0, 0x0, 0xff, 0x80, 0x0, 0x3, 0xff, 0xff,
    0xff, 0xcf, 0xff, 0xff, 0xff, 0x3f, 0xff, 0xff, 0xfc, 0xff, 0xff, 0xff,
    0xf0,

    /* U+004D "M" */
    0x3f, 0xfc, 0x0, 0x0, 0x7, 0xff, 0x8f, 0xff, 0x0, 0x0, 0x3, 0xff, 0xe3,
    0xff, 0xe0, 0x0, 0x0, 0xff, 0xf8, 0xff, 0xfc, 0x0, 0x0, 0xbf, 0xfe, 0x3f,
    0xff, 0x40, 0x0, 0x3f, 0xff, 0x8f, 0xff, 0xf0, 0x0, 0x1f, 0xff, 0xe3, 0xff,
    0xfc, 0x0, 0xf, 0xff, 0xf8, 0xff, 0xff, 0x80, 0x3, 0xff, 0xfe, 0x3f, 0xdf,
    0xf0, 0x2, 0xfe, 0xff, 0x8f, 0xf6, 0xfd, 0x0, 0xff, 0x3f, 0xe3, 0xfd, 0x7f,
    0xc0, 0x7f, 0xcf, 0xf8, 0xff, 0x4f, 0xf4, 0x3f, 0xd3, 0xfe, 0x3f, 0xd2,
    0xfe, 0xf, 0xf0, 0xff, 0x8f, 0xf4, 0x3f, 0xcb, 0xf8, 0x3f, 0xe3, 0xfd, 0xf,
    0xfb, 0xfc, 0xf, 0xf8, 0xff, 0x41, 0xff, 0xff, 0x3, 0xfe, 0x3f, 0xd0, 0x3f,
    0xff, 0x40, 0xff, 0x8f, 0xf4, 0xb, 0xff, 0xc0, 0x3f, 0xe3, 0xfd, 0x0, 0xff,
    0xe0, 0xf, 0xf8, 0xff, 0x40, 0x3f, 0xf0, 0x3, 0xfe, 0x3f, 0xd0, 0x7, 0xfc,
    0x0, 0xff, 0x8f, 0xf4, 0x0, 0xfd, 0x0, 0x3f, 0xe0,

    /* U+004E "N" */
    0x3f, 0xd0, 0x0, 0x7, 0xfc, 0x3f, 0xf0, 0x0, 0x7, 0xfc, 0x3f, 0xf8, 0x0,
    0x7, 0xfc, 0x3f, 0xfd, 0x0, 0x7, 0xfc, 0x3f, 0xff, 0x0, 0x7, 0xfc, 0x3f,
    0xff, 0x80, 0x7, 0xfc, 0x3f, 0xff, 0xd0, 0x7, 0xfc, 0x3f, 0xff, 0xf0, 0x7,
    0xfc, 0x3f, 0xef, 0xf8, 0x7, 0xfc, 0x3f, 0xe7, 0xfd, 0x7, 0xfc, 0x3f, 0xe2,
    0xff, 0x7, 0xfc, 0x3f, 0xe0, 0xff, 0xc7, 0xfc, 0x3f, 0xe0, 0x7f, 0xd7, 0xfc,
    0x3f, 0xe0, 0x2f, 0xfb, 0xfc, 0x3f, 0xe0, 0xf, 0xff, 0xfc, 0x3f, 0xe0, 0x7,
    0xff, 0xfc, 0x3f, 0xe0, 0x2, 0xff, 0xfc, 0x3f, 0xe0, 0x0, 0xff, 0xfc, 0x3f,
    0xe0, 0x0, 0x7f, 0xfc, 0x3f, 0xe0, 0x0, 0x2f, 0xfc, 0x3f, 0xe0, 0x0, 0xf,
    0xfc, 0x3f, 0xe0, 0x0, 0x3, 0xfc,

    /* U+004F "O" */
    0x0, 0x2, 0xff, 0xe4, 0x0, 0x0, 0xb, 0xff, 0xff, 0xd0, 0x0, 0xf, 0xff, 0xff,
    0xfe, 0x0, 0xf, 0xff, 0xff, 0xff, 0xe0, 0xf, 0xff, 0x90, 0x7f, 0xfc, 0x7,
    0xff, 0x0, 0x2, 0xff, 0xc3, 0xff, 0x40, 0x0, 0x3f, 0xf0, 0xff, 0xc0, 0x0,
    0x7, 0xfe, 0x7f, 0xd0, 0x0, 0x0, 0xff, 0x9f, 0xf4, 0x0, 0x0, 0x3f, 0xf7,
    0xfc, 0x0, 0x0, 0xf, 0xfd, 0xff, 0x0, 0x0, 0x3, 0xff, 0x7f, 0xd0, 0x0, 0x0,
    0xff, 0xdf, 0xf4, 0x0, 0x0, 0x3f, 0xe3, 0xff, 0x0, 0x0, 0x1f, 0xf8, 0xff,
    0xd0, 0x0, 0xf, 0xfc, 0x1f, 0xfc, 0x0, 0xb, 0xff, 0x3, 0xff, 0xe4, 0x5f,
    0xff, 0x0, 0x3f, 0xff, 0xff, 0xff, 0x80, 0x3, 0xff, 0xff, 0xff, 0x80, 0x0,
    0x2f, 0xff, 0xff, 0x40, 0x0, 0x0, 0xbf, 0xf9, 0x0, 0x0,

    /* U+0050 "P" */
    0x3f, 0xff, 0xff, 0x80, 0x3, 0xff, 0xff, 0xff, 0x40, 0x3f, 0xff, 0xff, 0xfe,
    0x3, 0xff, 0xff, 0xff, 0xf4, 0x3f, 0xe0, 0x3, 0xff, 0xc3, 0xfe, 0x0, 0xf,
    0xfc, 0x3f, 0xe0, 0x0, 0xbf, 0xc3, 0xfe, 0x0, 0x7, 0xfd, 0x3f, 0xe0, 0x0,
    0xbf, 0xc3, 0xfe, 0x0, 0xf, 0xfc, 0x3f, 0xe0, 0x7, 0xff, 0x83, 0xff, 0xff,
    0xff, 0xf0, 0x3f, 0xff, 0xff, 0xfd, 0x3, 0xff, 0xff, 0xff, 0x40, 0x3f, 0xff,
    0xfa, 0x40, 0x3, 0xfe, 0x0, 0x0, 0x0, 0x3f, 0xe0, 0x0, 0x0, 0x3, 0xfe, 0x0,
    0x0, 0x0, 0x3f, 0xe0, 0x0, 0x0, 0x3, 0xfe, 0x0, 0x0, 0x0, 0x3f, 0xe0, 0x0,
    0x0, 0x3, 0xfe, 0x0, 0x0, 0x0,

    /* U+0051 "Q" */
    0x0, 0x2, 0xff, 0xe4, 0x0, 0x0, 0xb, 0xff, 0xff, 0xd0, 0x0, 0xf, 0xff, 0xff,
    0xfe, 0x0, 0xf, 0xff, 0xff, 0xff, 0xe0, 0xf, 0xff, 0x90, 0x7f, 0xfd, 0x7,
    0xff, 0x0, 0x2, 0xff, 0xc3, 0xff, 0x40, 0x0, 0x3f, 0xf0, 0xff, 0xc0, 0x0,
    0x7, 0xfe, 0x7f, 0xd0, 0x0, 0x0, 0xff, 0x9f, 0xf4, 0x0, 0x0, 0x3f, 0xf7,
    0xfc, 0x0, 0x0, 0xf, 0xfd, 0xff, 0x0, 0x0, 0x3, 0xff, 0x7f, 0xd0, 0x0, 0x0,
    0xff, 0xdf, 0xf4, 0x0, 0x0, 0x3f, 0xe3, 0xff, 0x1, 0xfd, 0x1f, 0xf4, 0xff,
    0xd0, 0x3f, 0xcf, 0xfc, 0x1f, 0xfc, 0x3, 0xff, 0xfe, 0x3, 0xff, 0xe4, 0xbf,
    0xff, 0x0, 0x3f, 0xff, 0xff, 0xff, 0x40, 0x3, 0xff, 0xff, 0xff, 0x80, 0x0,
    0x2f, 0xff, 0xff, 0xf4, 0x0, 0x0, 0xbf, 0xf9, 0xff, 0x0, 0x0, 0x0, 0x0,
    0x1f, 0xf0, 0x0, 0x0, 0x0, 0x1, 0xa8,

    /* U+0052 "R" */
    0x3f, 0xff, 0xff, 0x80, 0x0, 0xff, 0xff, 0xff, 0xe0, 0x3, 0xff, 0xff, 0xff,
    0xe0, 0xf, 0xff, 0xff, 0xff, 0xd0, 0x3f, 0xe0, 0x2, 0xff, 0xc0, 0xff, 0x80,
    0x3, 0xff, 0x3, 0xfe, 0x0, 0xb, 0xfd, 0xf, 0xf8, 0x0, 0x1f, 0xf4, 0x3f,
    0xe0, 0x0, 0xff, 0xc0, 0xff, 0x80, 0xb, 0xff, 0x3, 0xff, 0xff, 0xff, 0xf4,
    0xf, 0xff, 0xff, 0xff, 0x80, 0x3f, 0xff, 0xff, 0xf8, 0x0, 0xff, 0xff, 0xff,
    0x80, 0x3, 0xfe, 0x3, 0xff, 0x0, 0xf, 0xf8, 0x7, 0xfe, 0x0, 0x3f, 0xe0, 0xf,
    0xfc, 0x0, 0xff, 0x80, 0x1f, 0xf8, 0x3, 0xfe, 0x0, 0x3f, 0xf4, 0xf, 0xf8,
    0x0, 0x7f, 0xf0, 0x3f, 0xe0, 0x0, 0xff, 0xd0, 0xff, 0x80, 0x0, 0xff, 0xc0,

    /* U+0053 "S" */
    0x0, 0x1b, 0xfe, 0x40, 0x0, 0x1f, 0xff, 0xff, 0x40, 0xb, 0xff, 0xff, 0xfe,
    0x1, 0xff, 0xff, 0xff, 0xf4, 0x3f, 0xf8, 0x2, 0xff, 0xc3, 0xfe, 0x0, 0xb,
    0xfc, 0x3f, 0xe0, 0x0, 0x2a, 0x83, 0xff, 0x0, 0x0, 0x0, 0x3f, 0xfd, 0x0,
    0x0, 0x0, 0xff, 0xff, 0x90, 0x0, 0x7, 0xff, 0xff, 0xe0, 0x0, 0x7, 0xff,
    0xff, 0xe0, 0x0, 0x1, 0xbf, 0xff, 0x40, 0x0, 0x0, 0x2f, 0xfc, 0x0, 0x0, 0x0,
    0xbf, 0xdb, 0xfc, 0x0, 0x3, 0xfd, 0xbf, 0xc0, 0x0, 0xbf, 0xd7, 0xff, 0x80,
    0x2f, 0xfc, 0x3f, 0xff, 0xff, 0xff, 0x80, 0xff, 0xff, 0xff, 0xf0, 0x2, 0xff,
    0xff, 0xf8, 0x0, 0x2, 0xff, 0xf8, 0x0,

    /* U+0054 "T" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0, 0x7, 0xfd, 0x0, 0x0, 0x0, 0x7f,
    0xd0, 0x0, 0x0, 0x7, 0xfd, 0x0, 0x0, 0x0, 0x7f, 0xd0, 0x0, 0x0, 0x7, 0xfd,
    0x0, 0x0, 0x0, 0x7f, 0xd0, 0x0, 0x0, 0x7, 0xfd, 0x0, 0x0, 0x0, 0x7f, 0xd0,
    0x0, 0x0, 0x7, 0xfd, 0x0, 0x0, 0x0, 0x7f, 0xd0, 0x0, 0x0, 0x7, 0xfd, 0x0,
    0x0, 0x0, 0x7f, 0xd0, 0x0, 0x0, 0x7, 0xfd, 0x0, 0x0, 0x0, 0x7f, 0xd0, 0x0,
    0x0, 0x7, 0xfd, 0x0, 0x0, 0x0, 0x7f, 0xd0, 0x0, 0x0, 0x7, 0xfd, 0x0, 0x0,
    0x0, 0x7f, 0xd0, 0x0,

    /* U+0055 "U" */
    0x3f, 0xe0, 0x0, 0xb, 0xfc, 0xff, 0x80, 0x0, 0x2f, 0xf3, 0xfe, 0x0, 0x0,
    0xbf, 0xcf, 0xf8, 0x0, 0x2, 0xff, 0x3f, 0xe0, 0x0, 0xb, 0xfc, 0xff, 0x80,
    0x0, 0x2f, 0xf3, 0xfe, 0x0, 0x0, 0xbf, 0xcf, 0xf8, 0x0, 0x2, 0xff, 0x3f,
    0xe0, 0x0, 0xb, 0xfc, 0xff, 0x80, 0x0, 0x2f, 0xf3, 0xfe, 0x0, 0x0, 0xbf,
    0xcf, 0xf8, 0x0, 0x2, 0xff, 0x3f, 0xe0, 0x0, 0xb, 0xfc, 0xff, 0x80, 0x0,
    0x2f, 0xf3, 0xfe, 0x0, 0x0, 0xbf, 0xcf, 0xfc, 0x0, 0x3, 0xff, 0x3f, 0xf8,
    0x0, 0x2f, 0xf8, 0x7f, 0xfd, 0x7, 0xff, 0xc0, 0xbf, 0xff, 0xff, 0xfe, 0x0,
    0xff, 0xff, 0xff, 0xf0, 0x0, 0xbf, 0xff, 0xfd, 0x0, 0x0, 0x1b, 0xfe, 0x40,
    0x0,

    /* U+0056 "V" */
    0x3f, 0xf0, 0x0, 0x0, 0xbf, 0xe3, 0xff, 0x40, 0x0, 0xf, 0xfc, 0x1f, 0xf8,
    0x0, 0x0, 0xff, 0xc0, 0xff, 0xc0, 0x0, 0x2f, 0xf8, 0xb, 0xfd, 0x0, 0x3,
    0xff, 0x0, 0x7f, 0xe0, 0x0, 0x3f, 0xf0, 0x3, 0xff, 0x0, 0x7, 0xfd, 0x0,
    0x2f, 0xf0, 0x0, 0xff, 0xc0, 0x1, 0xff, 0x80, 0xf, 0xfc, 0x0, 0xf, 0xfc,
    0x1, 0xff, 0x40, 0x0, 0xbf, 0xc0, 0x2f, 0xf0, 0x0, 0x7, 0xfd, 0x3, 0xff,
    0x0, 0x0, 0x3f, 0xf0, 0x7f, 0xd0, 0x0, 0x2, 0xff, 0xb, 0xfc, 0x0, 0x0, 0x1f,
    0xf4, 0xff, 0xc0, 0x0, 0x0, 0xff, 0x9f, 0xf4, 0x0, 0x0, 0xb, 0xfe, 0xff,
    0x0, 0x0, 0x0, 0x7f, 0xff, 0xe0, 0x0, 0x0, 0x3, 0xff, 0xfd, 0x0, 0x0, 0x0,
    0x2f, 0xff, 0xc0, 0x0, 0x0, 0x1, 0xff, 0xf8, 0x0, 0x0, 0x0, 0xf, 0xff, 0x40,
    0x0,

    /* U+0057 "W" */
    0x7f, 0xe0, 0x0, 0x3f, 0xf0, 0x0, 0x2f, 0xf4, 0xff, 0xc0, 0x0, 0xff, 0xc0,
    0x0, 0xff, 0xc2, 0xff, 0x0, 0x7, 0xff, 0x40, 0x3, 0xff, 0x7, 0xfd, 0x0,
    0x2f, 0xfe, 0x0, 0x1f, 0xf8, 0xf, 0xf8, 0x0, 0xff, 0xfc, 0x0, 0xbf, 0xc0,
    0x3f, 0xf0, 0x3, 0xff, 0xf0, 0x3, 0xff, 0x0, 0xbf, 0xc0, 0x1f, 0xff, 0xd0,
    0xf, 0xf8, 0x1, 0xff, 0x40, 0xbf, 0xff, 0x80, 0x7f, 0xd0, 0x3, 0xfe, 0x3,
    0xfd, 0xff, 0x2, 0xff, 0x0, 0xb, 0xfc, 0xf, 0xf3, 0xfc, 0xf, 0xfc, 0x0,
    0x1f, 0xf0, 0x7f, 0x8b, 0xf4, 0x3f, 0xe0, 0x0, 0x3f, 0xd2, 0xfd, 0x1f, 0xe0,
    0xff, 0x0, 0x0, 0xff, 0x8f, 0xf0, 0x3f, 0xc7, 0xfc, 0x0, 0x2, 0xff, 0x3f,
    0xc0, 0xbf, 0x2f, 0xe0, 0x0, 0x7, 0xfd, 0xfd, 0x1, 0xfd, 0xff, 0x40, 0x0,
    0xf, 0xff, 0xf0, 0x3, 0xff, 0xfc, 0x0, 0x0, 0x3f, 0xff, 0xc0, 0xf, 0xff,
    0xf0, 0x0, 0x0, 0x7f, 0xfe, 0x0, 0x2f, 0xff, 0x80, 0x0, 0x0, 0xff, 0xf4,
    0x0, 0x3f, 0xfd, 0x0, 0x0, 0x3, 0xff, 0xc0, 0x0, 0xff, 0xf0, 0x0, 0x0, 0xb,
    0xfe, 0x0, 0x2, 0xff, 0x80, 0x0, 0x0, 0x1f, 0xf4, 0x0, 0x7, 0xfd, 0x0, 0x0,

    /* U+0058 "X" */
    0x2f, 0xf8, 0x0, 0x3, 0xff, 0x3, 0xff, 0x0, 0x2, 0xff, 0x80, 0x7f, 0xe0,
    0x1, 0xff, 0xc0, 0xf, 0xfd, 0x0, 0xff, 0xd0, 0x1, 0xff, 0xc0, 0x7f, 0xe0,
    0x0, 0x2f, 0xf4, 0x3f, 0xf0, 0x0, 0x3, 0xff, 0x2f, 0xf4, 0x0, 0x0, 0x7f,
    0xff, 0xfc, 0x0, 0x0, 0xf, 0xff, 0xfd, 0x0, 0x0, 0x0, 0xff, 0xfe, 0x0, 0x0,
    0x0, 0x2f, 0xff, 0x0, 0x0, 0x0, 0xb, 0xff, 0xc0, 0x0, 0x0, 0x3, 0xff, 0xf8,
    0x0, 0x0, 0x3, 0xff, 0xff, 0x40, 0x0, 0x1, 0xff, 0xff, 0xf0, 0x0, 0x0, 0xff,
    0xcb, 0xfe, 0x0, 0x0, 0xbf, 0xd0, 0xff, 0xc0, 0x0, 0x7f, 0xf0, 0x1f, 0xfc,
    0x0, 0x3f, 0xf0, 0x3, 0xff, 0x40, 0x2f, 0xf8, 0x0, 0x3f, 0xf0, 0xf, 0xfc,
    0x0, 0xb, 0xfe, 0xf, 0xfd, 0x0, 0x0, 0xff, 0xd0,

    /* U+0059 "Y" */
    0x3f, 0xf0, 0x0, 0x1, 0xff, 0xc2, 0xff, 0x80, 0x0, 0x3f, 0xf4, 0xf, 0xfc,
    0x0, 0x7, 0xfe, 0x0, 0x7f, 0xe0, 0x0, 0xff, 0xc0, 0x3, 0xff, 0x0, 0x1f,
    0xf8, 0x0, 0x1f, 0xf8, 0x3, 0xff, 0x0, 0x0, 0xbf, 0xc0, 0x7f, 0xd0, 0x0,
    0x3, 0xfe, 0xf, 0xfc, 0x0, 0x0, 0x2f, 0xf6, 0xff, 0x40, 0x0, 0x0, 0xff,
    0xff, 0xf0, 0x0, 0x0, 0xb, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x3f, 0xff, 0x80, 0x0,
    0x0, 0x1, 0xff, 0xf0, 0x0, 0x0, 0x0, 0xf, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x7f,
    0xc0, 0x0, 0x0, 0x0, 0x7, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xc0, 0x0, 0x0,
    0x0, 0x7, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xc0, 0x0, 0x0, 0x0, 0x7, 0xfc,
    0x0, 0x0, 0x0, 0x0, 0x7f, 0xc0, 0x0, 0x0, 0x0, 0x7, 0xfc, 0x0, 0x0,

    /* U+005A "Z" */
    0x7f, 0xff, 0xff, 0xff, 0xd7, 0xff, 0xff, 0xff, 0xfd, 0x7f, 0xff, 0xff,
    0xff, 0xd7, 0xff, 0xff, 0xff, 0xfc, 0x0, 0x0, 0x3, 0xff, 0x0, 0x0, 0x0,
    0xbf, 0xd0, 0x0, 0x0, 0x1f, 0xf8, 0x0, 0x0, 0x3, 0xff, 0x0, 0x0, 0x0, 0xbf,
    0xd0, 0x0, 0x0, 0x1f, 0xf8, 0x0, 0x0, 0x3, 0xff, 0x0, 0x0, 0x0, 0xff, 0xc0,
    0x0, 0x0, 0x2f, 0xf4, 0x0, 0x0, 0x7, 0xfe, 0x0, 0x0, 0x0, 0xff, 0xc0, 0x0,
    0x0, 0x2f, 0xf4, 0x0, 0x0, 0x7, 0xfe, 0x0, 0x0, 0x0, 0xff, 0xc0, 0x0, 0x0,
    0x3f, 0xff, 0xff, 0xff, 0xd7, 0xff, 0xff, 0xff, 0xfd, 0x7f, 0xff, 0xff,
    0xff, 0xd7, 0xff, 0xff, 0xff, 0xfd,

    /* U+005E "^" */
    0x0, 0x1a, 0x80, 0x0, 0x3, 0xfe, 0x0, 0x0, 0x7f, 0xf0, 0x0, 0xf, 0xff, 0x80,
    0x1, 0xfc, 0xfc, 0x0, 0x3f, 0x4f, 0xe0, 0x7, 0xf0, 0x7f, 0x0, 0xfe, 0x3,
    0xf4, 0x1f, 0xc0, 0x1f, 0xc3, 0xf8, 0x0, 0xfd};

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0,
     .adv_w = 0,
     .box_w = 0,
     .box_h = 0,
     .ofs_x = 0,
     .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0,
     .adv_w = 111,
     .box_w = 0,
     .box_h = 0,
     .ofs_x = 0,
     .ofs_y = 0},
    {.bitmap_index = 0,
     .adv_w = 156,
     .box_w = 6,
     .box_h = 22,
     .ofs_x = 2,
     .ofs_y = 0},
    {.bitmap_index = 33,
     .adv_w = 188,
     .box_w = 10,
     .box_h = 9,
     .ofs_x = 1,
     .ofs_y = 13},
    {.bitmap_index = 56,
     .adv_w = 413,
     .box_w = 22,
     .box_h = 22,
     .ofs_x = 2,
     .ofs_y = 0},
    {.bitmap_index = 177,
     .adv_w = 326,
     .box_w = 16,
     .box_h = 16,
     .ofs_x = 2,
     .ofs_y = 1},
    {.bitmap_index = 241,
     .adv_w = 143,
     .box_w = 7,
     .box_h = 6,
     .ofs_x = 1,
     .ofs_y = 0},
    {.bitmap_index = 252,
     .adv_w = 330,
     .box_w = 19,
     .box_h = 22,
     .ofs_x = 1,
     .ofs_y = 0},
    {.bitmap_index = 357,
     .adv_w = 235,
     .box_w = 11,
     .box_h = 22,
     .ofs_x = 1,
     .ofs_y = 0},
    {.bitmap_index = 418,
     .adv_w = 302,
     .box_w = 17,
     .box_h = 22,
     .ofs_x = 1,
     .ofs_y = 0},
    {.bitmap_index = 512,
     .adv_w = 317,
     .box_w = 18,
     .box_h = 22,
     .ofs_x = 1,
     .ofs_y = 0},
    {.bitmap_index = 611,
     .adv_w = 325,
     .box_w = 19,
     .box_h = 22,
     .ofs_x = 1,
     .ofs_y = 0},
    {.bitmap_index = 716,
     .adv_w = 309,
     .box_w = 17,
     .box_h = 22,
     .ofs_x = 1,
     .ofs_y = 0},
    {.bitmap_index = 810,
     .adv_w = 317,
     .box_w = 18,
     .box_h = 22,
     .ofs_x = 1,
     .ofs_y = 0},
    {.bitmap_index = 909,
     .adv_w = 286,
     .box_w = 16,
     .box_h = 22,
     .ofs_x = 1,
     .ofs_y = 0},
    {.bitmap_index = 997,
     .adv_w = 317,
     .box_w = 18,
     .box_h = 22,
     .ofs_x = 1,
     .ofs_y = 0},
    {.bitmap_index = 1096,
     .adv_w = 317,
     .box_w = 18,
     .box_h = 22,
     .ofs_x = 1,
     .ofs_y = 0},
    {.bitmap_index = 1195,
     .adv_w = 143,
     .box_w = 7,
     .box_h = 17,
     .ofs_x = 1,
     .ofs_y = 0},
    {.bitmap_index = 1225,
     .adv_w = 145,
     .box_w = 7,
     .box_h = 22,
     .ofs_x = 1,
     .ofs_y = -5},
    {.bitmap_index = 1264,
     .adv_w = 326,
     .box_w = 16,
     .box_h = 18,
     .ofs_x = 2,
     .ofs_y = 0},
    {.bitmap_index = 1336,
     .adv_w = 326,
     .box_w = 16,
     .box_h = 11,
     .ofs_x = 2,
     .ofs_y = 3},
    {.bitmap_index = 1380,
     .adv_w = 326,
     .box_w = 16,
     .box_h = 18,
     .ofs_x = 2,
     .ofs_y = 0},
    {.bitmap_index = 1452,
     .adv_w = 270,
     .box_w = 15,
     .box_h = 22,
     .ofs_x = 1,
     .ofs_y = 0},
    {.bitmap_index = 1535,
     .adv_w = 359,
     .box_w = 22,
     .box_h = 22,
     .ofs_x = 0,
     .ofs_y = 0},
    {.bitmap_index = 1656,
     .adv_w = 317,
     .box_w = 18,
     .box_h = 22,
     .ofs_x = 1,
     .ofs_y = 0},
    {.bitmap_index = 1755,
     .adv_w = 361,
     .box_w = 21,
     .box_h = 22,
     .ofs_x = 1,
     .ofs_y = 0},
    {.bitmap_index = 1871,
     .adv_w = 349,
     .box_w = 20,
     .box_h = 22,
     .ofs_x = 1,
     .ofs_y = 0},
    {.bitmap_index = 1981,
     .adv_w = 294,
     .box_w = 16,
     .box_h = 22,
     .ofs_x = 1,
     .ofs_y = 0},
    {.bitmap_index = 2069,
     .adv_w = 281,
     .box_w = 16,
     .box_h = 22,
     .ofs_x = 1,
     .ofs_y = 0},
    {.bitmap_index = 2157,
     .adv_w = 365,
     .box_w = 21,
     .box_h = 22,
     .ofs_x = 1,
     .ofs_y = 0},
    {.bitmap_index = 2273,
     .adv_w = 358,
     .box_w = 20,
     .box_h = 22,
     .ofs_x = 1,
     .ofs_y = 0},
    {.bitmap_index = 2383,
     .adv_w = 135,
     .box_w = 6,
     .box_h = 22,
     .ofs_x = 1,
     .ofs_y = 0},
    {.bitmap_index = 2416,
     .adv_w = 274,
     .box_w = 16,
     .box_h = 22,
     .ofs_x = 0,
     .ofs_y = 0},
    {.bitmap_index = 2504,
     .adv_w = 331,
     .box_w = 20,
     .box_h = 22,
     .ofs_x = 1,
     .ofs_y = 0},
    {.bitmap_index = 2614,
     .adv_w = 272,
     .box_w = 15,
     .box_h = 22,
     .ofs_x = 1,
     .ofs_y = 0},
    {.bitmap_index = 2697,
     .adv_w = 439,
     .box_w = 25,
     .box_h = 22,
     .ofs_x = 1,
     .ofs_y = 0},
    {.bitmap_index = 2835,
     .adv_w = 353,
     .box_w = 20,
     .box_h = 22,
     .ofs_x = 1,
     .ofs_y = 0},
    {.bitmap_index = 2945,
     .adv_w = 375,
     .box_w = 21,
     .box_h = 22,
     .ofs_x = 1,
     .ofs_y = 0},
    {.bitmap_index = 3061,
     .adv_w = 311,
     .box_w = 18,
     .box_h = 22,
     .ofs_x = 1,
     .ofs_y = 0},
    {.bitmap_index = 3160,
     .adv_w = 376,
     .box_w = 21,
     .box_h = 24,
     .ofs_x = 1,
     .ofs_y = -2},
    {.bitmap_index = 3286,
     .adv_w = 315,
     .box_w = 19,
     .box_h = 22,
     .ofs_x = 1,
     .ofs_y = 0},
    {.bitmap_index = 3391,
     .adv_w = 314,
     .box_w = 18,
     .box_h = 22,
     .ofs_x = 1,
     .ofs_y = 0},
    {.bitmap_index = 3490,
     .adv_w = 321,
     .box_w = 18,
     .box_h = 22,
     .ofs_x = 1,
     .ofs_y = 0},
    {.bitmap_index = 3589,
     .adv_w = 350,
     .box_w = 19,
     .box_h = 22,
     .ofs_x = 1,
     .ofs_y = 0},
    {.bitmap_index = 3694,
     .adv_w = 359,
     .box_w = 22,
     .box_h = 22,
     .ofs_x = 0,
     .ofs_y = 0},
    {.bitmap_index = 3815,
     .adv_w = 497,
     .box_w = 31,
     .box_h = 22,
     .ofs_x = 0,
     .ofs_y = 0},
    {.bitmap_index = 3986,
     .adv_w = 343,
     .box_w = 21,
     .box_h = 22,
     .ofs_x = 0,
     .ofs_y = 0},
    {.bitmap_index = 4102,
     .adv_w = 348,
     .box_w = 22,
     .box_h = 22,
     .ofs_x = 0,
     .ofs_y = 0},
    {.bitmap_index = 4223,
     .adv_w = 320,
     .box_w = 18,
     .box_h = 22,
     .ofs_x = 1,
     .ofs_y = 0},
    {.bitmap_index = 4322,
     .adv_w = 234,
     .box_w = 14,
     .box_h = 10,
     .ofs_x = 0,
     .ofs_y = 12}};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {0x0, 0x1, 0x2, 0x5, 0xb, 0xe};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] = {
    {.range_start = 32,
     .range_length = 15,
     .glyph_id_start = 1,
     .unicode_list = unicode_list_0,
     .glyph_id_ofs_list = NULL,
     .list_length = 6,
     .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY},
    {.range_start = 48,
     .range_length = 16,
     .glyph_id_start = 7,
     .unicode_list = NULL,
     .glyph_id_ofs_list = NULL,
     .list_length = 0,
     .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY},
    {.range_start = 65,
     .range_length = 26,
     .glyph_id_start = 23,
     .unicode_list = NULL,
     .glyph_id_ofs_list = NULL,
     .list_length = 0,
     .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY},
    {.range_start = 94,
     .range_length = 1,
     .glyph_id_start = 49,
     .unicode_list = NULL,
     .glyph_id_ofs_list = NULL,
     .list_length = 0,
     .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY}};

/*-----------------
 *    KERNING
 *----------------*/

/*Pair left and right glyphs for kerning*/
static const uint8_t kern_pair_glyph_ids[] = {
    3,  6,  3,  11, 3,  23, 3,  32, 5,  9,  5,  10, 5,  14, 5,  42, 5,  44, 5,
    45, 5,  46, 5,  47, 6,  1,  6,  2,  6,  3,  6,  7,  6,  8,  6,  10, 6,  12,
    6,  13, 6,  14, 6,  15, 6,  16, 6,  22, 6,  42, 6,  47, 7,  6,  7,  14, 7,
    47, 8,  6,  9,  11, 10, 6,  11, 6,  11, 8,  12, 6,  13, 6,  14, 6,  14, 7,
    14, 10, 14, 11, 14, 12, 14, 13, 14, 14, 14, 15, 14, 16, 14, 17, 14, 18, 14,
    19, 14, 23, 14, 32, 15, 6,  16, 6,  16, 14, 16, 47, 17, 42, 17, 44, 18, 42,
    18, 44, 20, 23, 20, 44, 20, 45, 20, 46, 20, 47, 21, 14, 21, 23, 21, 42, 21,
    44, 21, 45, 21, 46, 21, 47, 21, 48, 22, 23, 23, 3,  23, 8,  23, 19, 23, 20,
    23, 22, 23, 25, 23, 29, 23, 37, 23, 39, 23, 41, 23, 42, 23, 44, 23, 45, 23,
    47, 23, 49, 25, 23, 25, 46, 26, 6,  26, 23, 26, 42, 26, 44, 26, 45, 26, 46,
    26, 47, 28, 6,  28, 23, 28, 32, 29, 23, 29, 42, 29, 44, 29, 46, 29, 47, 32,
    6,  33, 5,  33, 19, 33, 20, 33, 25, 33, 29, 33, 37, 33, 39, 33, 41, 34, 3,
    34, 5,  34, 8,  34, 23, 34, 25, 34, 29, 34, 37, 34, 39, 34, 42, 34, 44, 34,
    45, 34, 47, 34, 49, 37, 6,  37, 23, 37, 42, 37, 44, 37, 45, 37, 46, 37, 47,
    38, 5,  38, 6,  38, 23, 38, 32, 39, 6,  39, 23, 39, 42, 39, 44, 39, 45, 39,
    46, 39, 47, 40, 44, 40, 47, 41, 23, 42, 5,  42, 6,  42, 11, 42, 17, 42, 18,
    42, 19, 42, 23, 42, 25, 42, 29, 42, 32, 42, 37, 42, 39, 43, 6,  44, 5,  44,
    6,  44, 11, 44, 17, 44, 18, 44, 19, 44, 20, 44, 23, 44, 25, 44, 29, 44, 32,
    44, 37, 44, 39, 45, 5,  45, 6,  45, 11, 45, 17, 45, 18, 45, 19, 45, 20, 45,
    23, 45, 25, 45, 29, 45, 32, 45, 37, 45, 39, 45, 41, 46, 5,  46, 19, 46, 20,
    46, 25, 46, 29, 46, 37, 46, 39, 47, 5,  47, 6,  47, 11, 47, 17, 47, 18, 47,
    19, 47, 20, 47, 23, 47, 25, 47, 29, 47, 32, 47, 37, 47, 39, 47, 42, 48, 5,
    48, 19, 48, 25, 48, 29, 48, 37, 48, 39, 49, 6,  49, 11, 49, 23, 49, 32};

/* Kerning between the respective left and right glyphs
 * 4.4 format which needs to scaled with `kern_scale`*/
static const int8_t kern_pair_values[] = {
    -44, -30, -38, -79, -10, -2,  -14, -14, -10, -10, -25, -15, -16, -6,  -49,
    -14, -44, -11, -3,  -14, -13, -14, -6,  -50, -16, -33, -14, -10, -16, -18,
    -7,  -10, -6,  -5,  -11, -14, -60, -7,  -8,  -28, -5,  -7,  10,  -7,  -5,
    -16, -16, -44, -52, -46, -10, -14, -10, -16, -16, -30, -16, -30, -25, -33,
    -30, -25, -46, -35, -20, -38, -35, -35, -27, -44, -30, -30, -38, -16, -20,
    -25, -30, -16, -16, -16, -16, -8,  -43, -43, -35, -35, -46, -6,  -8,  -22,
    -20, -16, -20, -13, -16, -21, -16, -44, -33, -11, -15, -11, -8,  -14, -16,
    -21, -33, -16, -20, -20, -20, -20, -3,  -44, -16, -22, 9,   -14, -14, -14,
    -14, -43, -38, -20, -45, -63, -22, -20, -16, -20, -13, -16, -21, -9,  -16,
    -40, -46, -22, -20, -16, -20, -13, -16, -21, -10, -14, -8,  -14, -16, -33,
    -16, -16, -38, -43, -16, -16, -44, -16, -16, -16, -10, -46, -16, -30, -30,
    -35, -30, -46, -20, -20, -46, -20, -20, -10, -46, -16, -25, -25, -35, -30,
    -35, -20, -20, -30, -20, -20, -3,  -26, -27, -25, -16, -16, -16, -16, -15,
    -33, -33, -30, -30, -49, -46, -35, -21, -21, -16, -21, -21, 22,  -8,  -30,
    -16, -16, -16, -16, -65, -22, -46, -46};

/*Collect the kern pair's data in one place*/
static const lv_font_fmt_txt_kern_pair_t kern_pairs = {
    .glyph_ids = kern_pair_glyph_ids,
    .values = kern_pair_values,
    .pair_cnt = 218,
    .glyph_ids_size = 0};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_pairs,
    .kern_scale = 16,
    .cmap_num = 4,
    .bpp = 2,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};

/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t lv_font_inter_bold_30 = {
#else
lv_font_t lv_font_inter_bold_30 = {
#endif
    .get_glyph_dsc =
        lv_font_get_glyph_dsc_fmt_txt, /*Function pointer to get glyph's data*/
    .get_glyph_bitmap =
        lv_font_get_bitmap_fmt_txt, /*Function pointer to get glyph's bitmap*/
    .line_height = 27, /*The maximum line height required by the font*/
    .base_line = 5,    /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -5,
    .underline_thickness = 3,
#endif
    .dsc = &font_dsc /*The custom font data. Will be accessed by
                        `get_glyph_bitmap/dsc` */
};

#endif /*#if LV_FONT_INTER_BOLD_30*/
