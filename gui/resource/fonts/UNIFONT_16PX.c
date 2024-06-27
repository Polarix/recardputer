/*******************************************************************************
 * Size: 16 px
 * Bpp: 2
 * Opts: --bpp 2 --size 16 --no-compress --font unifont-15.1.04.ttf --range 32-127 --format lvgl -o UNIFONT_16PX.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0xff, 0xfc, 0xf0,

    /* U+0022 "\"" */
    0xc0, 0xf0, 0x3c, 0xf, 0x3,

    /* U+0023 "#" */
    0xc, 0x30, 0xc3, 0xc, 0x3f, 0xff, 0x30, 0xc3,
    0xc, 0xff, 0xfc, 0x30, 0xc3, 0xc, 0x30,

    /* U+0024 "$" */
    0x3, 0x0, 0xff, 0xcc, 0x30, 0xf0, 0xc0, 0x3f,
    0x0, 0xf, 0xc0, 0x30, 0xf0, 0xc3, 0x3f, 0xf0,
    0xc, 0x0,

    /* U+0025 "%" */
    0x3c, 0xf, 0xc, 0xcc, 0x33, 0xf, 0x30, 0x3,
    0x0, 0xc, 0x0, 0xcf, 0xc, 0xc3, 0x33, 0xf,
    0x3, 0xc0,

    /* U+0026 "&" */
    0xf, 0xc0, 0xc0, 0xc3, 0x3, 0x3, 0x30, 0xf,
    0x0, 0xcc, 0x3c, 0xc, 0xf0, 0xc, 0xc0, 0xf0,
    0xfc, 0x30,

    /* U+0027 "'" */
    0xff,

    /* U+0028 "(" */
    0xc, 0xc3, 0x30, 0xc3, 0xc, 0x30, 0xc0, 0xc3,
    0x3,

    /* U+0029 ")" */
    0xc0, 0xc3, 0x3, 0xc, 0x30, 0xc3, 0xc, 0xc3,
    0x30,

    /* U+002A "*" */
    0x3, 0x3, 0xc, 0x33, 0x33, 0x3, 0xf0, 0x33,
    0x33, 0xc, 0x30, 0x30, 0x0,

    /* U+002B "+" */
    0x3, 0x0, 0xc, 0x0, 0x30, 0x3f, 0xff, 0x3,
    0x0, 0xc, 0x0, 0x30, 0x0,

    /* U+002C "," */
    0xf3, 0x3c,

    /* U+002D "-" */
    0xff,

    /* U+002E "." */
    0xff,

    /* U+002F "/" */
    0x0, 0x30, 0x3, 0x0, 0xc0, 0x30, 0x3, 0x0,
    0xc0, 0xc, 0x3, 0x0, 0xc0, 0xc, 0x0,

    /* U+0030 "0" */
    0xf, 0x3, 0xc, 0xc0, 0x3c, 0xf, 0xc3, 0x3c,
    0xc3, 0xf0, 0x3c, 0x3, 0x30, 0xc0, 0xf0,

    /* U+0031 "1" */
    0xc, 0xf, 0xc, 0xc0, 0x30, 0xc, 0x3, 0x0,
    0xc0, 0x30, 0xc, 0x3f, 0xf0,

    /* U+0032 "2" */
    0x3f, 0xcc, 0x3, 0xc0, 0x30, 0x3, 0x3, 0xc0,
    0xc0, 0x30, 0xc, 0x0, 0xc0, 0xf, 0xff,

    /* U+0033 "3" */
    0x3f, 0xcc, 0x3, 0xc0, 0x30, 0x3, 0xf, 0xc0,
    0x3, 0x0, 0x3c, 0x3, 0xc0, 0x33, 0xfc,

    /* U+0034 "4" */
    0x0, 0xc0, 0x3c, 0xc, 0xc3, 0xc, 0xc0, 0xcc,
    0xc, 0xff, 0xf0, 0xc, 0x0, 0xc0, 0xc,

    /* U+0035 "5" */
    0xff, 0xfc, 0x0, 0xc0, 0xc, 0x0, 0xff, 0xc0,
    0x3, 0x0, 0x30, 0x3, 0xc0, 0x33, 0xfc,

    /* U+0036 "6" */
    0xf, 0xc3, 0x0, 0xc0, 0xc, 0x0, 0xff, 0xcc,
    0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x33, 0xfc,

    /* U+0037 "7" */
    0xff, 0xf0, 0x3, 0x0, 0x30, 0xc, 0x0, 0xc0,
    0xc, 0x3, 0x0, 0x30, 0x3, 0x0, 0x30,

    /* U+0038 "8" */
    0x3f, 0xcc, 0x3, 0xc0, 0x3c, 0x3, 0x3f, 0xcc,
    0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x33, 0xfc,

    /* U+0039 "9" */
    0x3f, 0xcc, 0x3, 0xc0, 0x3c, 0x3, 0x3f, 0xf0,
    0x3, 0x0, 0x30, 0x3, 0x0, 0xc3, 0xf0,

    /* U+003A ":" */
    0xff, 0x0, 0xf, 0xf0,

    /* U+003B ";" */
    0xff, 0x0, 0xf, 0x33, 0xc0,

    /* U+003C "<" */
    0x0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc, 0x0,
    0xc0, 0xc, 0x0, 0xc0,

    /* U+003D "=" */
    0xff, 0xf0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xf0,

    /* U+003E ">" */
    0xc0, 0xc, 0x0, 0xc0, 0xc, 0x0, 0xc0, 0xc0,
    0xc0, 0xc0, 0xc0, 0x0,

    /* U+003F "?" */
    0x3f, 0xcc, 0x3, 0xc0, 0x30, 0x3, 0x0, 0xc0,
    0x30, 0x3, 0x0, 0x0, 0x3, 0x0, 0x30,

    /* U+0040 "@" */
    0xf, 0xc3, 0x3, 0xc3, 0x3c, 0xcf, 0xcc, 0x3c,
    0xc3, 0xcc, 0x3c, 0x3f, 0x30, 0x0, 0xff,

    /* U+0041 "A" */
    0xf, 0x3, 0xc, 0x30, 0xcc, 0x3, 0xc0, 0x3f,
    0xff, 0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3,

    /* U+0042 "B" */
    0xff, 0xcc, 0x3, 0xc0, 0x3c, 0x3, 0xff, 0xcc,
    0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3f, 0xfc,

    /* U+0043 "C" */
    0x3f, 0xcc, 0x3, 0xc0, 0x3c, 0x0, 0xc0, 0xc,
    0x0, 0xc0, 0xc, 0x3, 0xc0, 0x33, 0xfc,

    /* U+0044 "D" */
    0xff, 0xc, 0xc, 0xc0, 0x3c, 0x3, 0xc0, 0x3c,
    0x3, 0xc0, 0x3c, 0x3, 0xc0, 0xcf, 0xf0,

    /* U+0045 "E" */
    0xff, 0xfc, 0x0, 0xc0, 0xc, 0x0, 0xff, 0xcc,
    0x0, 0xc0, 0xc, 0x0, 0xc0, 0xf, 0xff,

    /* U+0046 "F" */
    0xff, 0xfc, 0x0, 0xc0, 0xc, 0x0, 0xff, 0xcc,
    0x0, 0xc0, 0xc, 0x0, 0xc0, 0xc, 0x0,

    /* U+0047 "G" */
    0x3f, 0xcc, 0x3, 0xc0, 0x3c, 0x0, 0xc0, 0xc,
    0x3f, 0xc0, 0x3c, 0x3, 0xc0, 0xf3, 0xf3,

    /* U+0048 "H" */
    0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xff, 0xfc,
    0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3,

    /* U+0049 "I" */
    0xff, 0xc3, 0x0, 0xc0, 0x30, 0xc, 0x3, 0x0,
    0xc0, 0x30, 0xc, 0x3f, 0xf0,

    /* U+004A "J" */
    0xf, 0xfc, 0x3, 0x0, 0xc, 0x0, 0x30, 0x0,
    0xc0, 0x3, 0x0, 0xc, 0x30, 0x30, 0xc0, 0xc0,
    0xfc, 0x0,

    /* U+004B "K" */
    0xc0, 0x3c, 0xc, 0xc3, 0xc, 0xc0, 0xf0, 0xf,
    0x0, 0xcc, 0xc, 0x30, 0xc0, 0xcc, 0x3,

    /* U+004C "L" */
    0xc0, 0xc, 0x0, 0xc0, 0xc, 0x0, 0xc0, 0xc,
    0x0, 0xc0, 0xc, 0x0, 0xc0, 0xf, 0xff,

    /* U+004D "M" */
    0xc0, 0x3c, 0x3, 0xf0, 0xff, 0xf, 0xcf, 0x3c,
    0xf3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3,

    /* U+004E "N" */
    0xc0, 0x3f, 0x3, 0xf0, 0x3c, 0xc3, 0xcc, 0x3c,
    0x33, 0xc3, 0x3c, 0xf, 0xc0, 0xfc, 0x3,

    /* U+004F "O" */
    0x3f, 0xcc, 0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c,
    0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x33, 0xfc,

    /* U+0050 "P" */
    0xff, 0xcc, 0x3, 0xc0, 0x3c, 0x3, 0xff, 0xcc,
    0x0, 0xc0, 0xc, 0x0, 0xc0, 0xc, 0x0,

    /* U+0051 "Q" */
    0x3f, 0xc3, 0x0, 0xcc, 0x3, 0x30, 0xc, 0xc0,
    0x33, 0x0, 0xcc, 0x3, 0x33, 0xcc, 0xf0, 0xf0,
    0xff, 0x0, 0x3, 0xc0,

    /* U+0052 "R" */
    0xff, 0xcc, 0x3, 0xc0, 0x3c, 0x3, 0xff, 0xcc,
    0x30, 0xc0, 0xcc, 0xc, 0xc0, 0x3c, 0x3,

    /* U+0053 "S" */
    0x3f, 0xcc, 0x3, 0xc0, 0x3c, 0x0, 0x3c, 0x0,
    0x3c, 0x0, 0x3c, 0x3, 0xc0, 0x33, 0xfc,

    /* U+0054 "T" */
    0xff, 0xfc, 0xc, 0x0, 0x30, 0x0, 0xc0, 0x3,
    0x0, 0xc, 0x0, 0x30, 0x0, 0xc0, 0x3, 0x0,
    0xc, 0x0,

    /* U+0055 "U" */
    0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c,
    0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x33, 0xfc,

    /* U+0056 "V" */
    0xc0, 0xf, 0x0, 0x3c, 0x0, 0xcc, 0xc, 0x30,
    0x30, 0xc0, 0xc0, 0xcc, 0x3, 0x30, 0x3, 0x0,
    0xc, 0x0,

    /* U+0057 "W" */
    0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xcf, 0x3c,
    0xf3, 0xf0, 0xff, 0xf, 0xc0, 0x3c, 0x3,

    /* U+0058 "X" */
    0xc0, 0x3c, 0x3, 0x30, 0xc3, 0xc, 0xf, 0x0,
    0xf0, 0x30, 0xc3, 0xc, 0xc0, 0x3c, 0x3,

    /* U+0059 "Y" */
    0xc0, 0xf, 0x0, 0x33, 0x3, 0xc, 0xc, 0xc,
    0xc0, 0xc, 0x0, 0x30, 0x0, 0xc0, 0x3, 0x0,
    0xc, 0x0,

    /* U+005A "Z" */
    0xff, 0xf0, 0x3, 0x0, 0x30, 0xc, 0x3, 0x0,
    0xc0, 0x30, 0xc, 0x0, 0xc0, 0xf, 0xff,

    /* U+005B "[" */
    0xff, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3, 0xc,
    0x3f,

    /* U+005C "\\" */
    0xc0, 0xc, 0x0, 0x30, 0x0, 0xc0, 0xc, 0x0,
    0x30, 0x3, 0x0, 0xc, 0x0, 0x30, 0x3,

    /* U+005D "]" */
    0xfc, 0x30, 0xc3, 0xc, 0x30, 0xc3, 0xc, 0x30,
    0xff,

    /* U+005E "^" */
    0xf, 0x3, 0xc, 0xc0, 0x30,

    /* U+005F "_" */
    0xff, 0xfc,

    /* U+0060 "`" */
    0xc0, 0xc0, 0xc0,

    /* U+0061 "a" */
    0x3f, 0xcc, 0x3, 0x0, 0x33, 0xff, 0xc0, 0x3c,
    0x3, 0xc0, 0xf3, 0xf3,

    /* U+0062 "b" */
    0xc0, 0xc, 0x0, 0xc0, 0xc, 0xfc, 0xf0, 0x3c,
    0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3f, 0x3, 0xcf,
    0xc0,

    /* U+0063 "c" */
    0x3f, 0xcc, 0x3, 0xc0, 0xc, 0x0, 0xc0, 0xc,
    0x0, 0xc0, 0x33, 0xfc,

    /* U+0064 "d" */
    0x0, 0x30, 0x3, 0x0, 0x33, 0xf3, 0xc0, 0xfc,
    0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0xf, 0x3f,
    0x30,

    /* U+0065 "e" */
    0x3f, 0xcc, 0x3, 0xc0, 0x3f, 0xff, 0xc0, 0xc,
    0x0, 0xc0, 0x33, 0xfc,

    /* U+0066 "f" */
    0x3, 0xc3, 0x0, 0xc0, 0x30, 0xff, 0xc3, 0x0,
    0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0,

    /* U+0067 "g" */
    0x0, 0x33, 0xf3, 0xc0, 0xcc, 0xc, 0xc0, 0xc3,
    0xf0, 0x30, 0x3, 0xfc, 0xc0, 0x3c, 0x3, 0x3f,
    0xc0,

    /* U+0068 "h" */
    0xc0, 0xc, 0x0, 0xc0, 0xc, 0xfc, 0xf0, 0x3c,
    0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xc0,
    0x30,

    /* U+0069 "i" */
    0xc, 0x3, 0x0, 0x0, 0xf0, 0xc, 0x3, 0x0,
    0xc0, 0x30, 0xc, 0x3, 0xf, 0xfc,

    /* U+006A "j" */
    0x0, 0xc0, 0x30, 0x0, 0xf, 0x0, 0xc0, 0x30,
    0xc, 0x3, 0x0, 0xc0, 0x30, 0xf, 0xc, 0x3c,
    0x0,

    /* U+006B "k" */
    0xc0, 0xc, 0x0, 0xc0, 0xc, 0xc, 0xc3, 0xc,
    0xc0, 0xf0, 0xc, 0xc0, 0xc3, 0xc, 0xc, 0xc0,
    0x30,

    /* U+006C "l" */
    0x3c, 0x3, 0x0, 0xc0, 0x30, 0xc, 0x3, 0x0,
    0xc0, 0x30, 0xc, 0x3, 0xf, 0xfc,

    /* U+006D "m" */
    0xfc, 0xf3, 0xc, 0x3c, 0x30, 0xf0, 0xc3, 0xc3,
    0xf, 0xc, 0x3c, 0x30, 0xf0, 0xc3,

    /* U+006E "n" */
    0xcf, 0xcf, 0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c,
    0x3, 0xc0, 0x3c, 0x3,

    /* U+006F "o" */
    0x3f, 0xcc, 0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c,
    0x3, 0xc0, 0x33, 0xfc,

    /* U+0070 "p" */
    0xcf, 0xcf, 0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c,
    0x3, 0xf0, 0x3c, 0xfc, 0xc0, 0xc, 0x0,

    /* U+0071 "q" */
    0x3f, 0x3c, 0xf, 0xc0, 0x3c, 0x3, 0xc0, 0x3c,
    0x3, 0xc0, 0xf3, 0xf3, 0x0, 0x30, 0x3,

    /* U+0072 "r" */
    0xcf, 0xcf, 0x3, 0xc0, 0x3c, 0x0, 0xc0, 0xc,
    0x0, 0xc0, 0xc, 0x0,

    /* U+0073 "s" */
    0x3f, 0xcc, 0x3, 0xc0, 0x3, 0xc0, 0x3, 0xc0,
    0x3, 0xc0, 0x33, 0xfc,

    /* U+0074 "t" */
    0xc, 0x3, 0x0, 0xc3, 0xff, 0xc, 0x3, 0x0,
    0xc0, 0x30, 0xc, 0x0, 0xf0,

    /* U+0075 "u" */
    0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c,
    0x3, 0xc0, 0xf3, 0xf3,

    /* U+0076 "v" */
    0xc0, 0x3c, 0x3, 0xc0, 0x33, 0xc, 0x30, 0xc3,
    0xc, 0xf, 0x0, 0xf0,

    /* U+0077 "w" */
    0xc0, 0xf, 0xc, 0x3c, 0x30, 0xf0, 0xc3, 0xc3,
    0xf, 0xc, 0x3c, 0x30, 0xcf, 0x3c,

    /* U+0078 "x" */
    0xc0, 0x3c, 0x3, 0x30, 0xc0, 0xf0, 0xf, 0x3,
    0xc, 0xc0, 0x3c, 0x3,

    /* U+0079 "y" */
    0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x33,
    0xf, 0xf, 0x30, 0x3, 0x0, 0x33, 0xfc,

    /* U+007A "z" */
    0xff, 0xf0, 0x3, 0x0, 0xc0, 0x30, 0xc, 0x3,
    0x0, 0xc0, 0xf, 0xff,

    /* U+007B "{" */
    0xf, 0x30, 0x30, 0xc, 0xc, 0x30, 0xc0, 0x30,
    0xc, 0xc, 0x30, 0x30, 0xf,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xf0,

    /* U+007D "}" */
    0xf0, 0xc, 0xc, 0x30, 0x30, 0xc, 0x3, 0xc,
    0x30, 0x30, 0xc, 0xc, 0xf0,

    /* U+007E "~" */
    0x3c, 0xf, 0xc, 0x3c, 0xf, 0x0,

    /* U+007F "" */
    0xcc, 0xcc, 0xcc, 0xcc, 0x0, 0x0, 0x0, 0x3,
    0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3,
    0xc0, 0x0, 0x0, 0x0, 0x3f, 0xf, 0xf3, 0x3,
    0xf0, 0xcc, 0x3, 0x0, 0x30, 0xcf, 0xf3, 0x3,
    0xf0, 0xcc, 0x3, 0x0, 0x3f, 0xf, 0xf3, 0xff,
    0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3,
    0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3,
    0xc0, 0x0, 0x0, 0x0, 0x33, 0x33, 0x33, 0x33
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 128, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 128, .box_w = 1, .box_h = 10, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 128, .box_w = 5, .box_h = 4, .ofs_x = 2, .ofs_y = 8},
    {.bitmap_index = 8, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 23, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 41, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 59, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 77, .adv_w = 128, .box_w = 1, .box_h = 4, .ofs_x = 4, .ofs_y = 8},
    {.bitmap_index = 78, .adv_w = 128, .box_w = 3, .box_h = 12, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 87, .adv_w = 128, .box_w = 3, .box_h = 12, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 96, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 109, .adv_w = 128, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 122, .adv_w = 128, .box_w = 2, .box_h = 4, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 124, .adv_w = 128, .box_w = 4, .box_h = 1, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 125, .adv_w = 128, .box_w = 2, .box_h = 2, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 126, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 141, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 156, .adv_w = 128, .box_w = 5, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 169, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 184, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 199, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 214, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 229, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 244, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 259, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 274, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 289, .adv_w = 128, .box_w = 2, .box_h = 7, .ofs_x = 3, .ofs_y = 1},
    {.bitmap_index = 293, .adv_w = 128, .box_w = 2, .box_h = 9, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 298, .adv_w = 128, .box_w = 5, .box_h = 9, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 310, .adv_w = 128, .box_w = 6, .box_h = 5, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 318, .adv_w = 128, .box_w = 5, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 330, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 345, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 360, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 375, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 390, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 405, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 420, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 435, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 450, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 465, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 480, .adv_w = 128, .box_w = 5, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 493, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 511, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 526, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 541, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 556, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 571, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 586, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 601, .adv_w = 128, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 621, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 636, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 651, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 669, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 684, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 702, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 717, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 732, .adv_w = 128, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 750, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 765, .adv_w = 128, .box_w = 3, .box_h = 12, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 774, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 789, .adv_w = 128, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 798, .adv_w = 128, .box_w = 6, .box_h = 3, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 803, .adv_w = 128, .box_w = 7, .box_h = 1, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 805, .adv_w = 128, .box_w = 3, .box_h = 3, .ofs_x = 2, .ofs_y = 10},
    {.bitmap_index = 808, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 820, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 837, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 849, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 866, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 878, .adv_w = 128, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 892, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 909, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 926, .adv_w = 128, .box_w = 5, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 940, .adv_w = 128, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 957, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 974, .adv_w = 128, .box_w = 5, .box_h = 11, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 988, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1002, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1014, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1026, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1041, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1056, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1068, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1080, .adv_w = 128, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1093, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1105, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1117, .adv_w = 128, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1131, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1143, .adv_w = 128, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1158, .adv_w = 128, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1170, .adv_w = 128, .box_w = 4, .box_h = 13, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 1183, .adv_w = 128, .box_w = 1, .box_h = 14, .ofs_x = 4, .ofs_y = -2},
    {.bitmap_index = 1187, .adv_w = 128, .box_w = 4, .box_h = 13, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 1200, .adv_w = 128, .box_w = 7, .box_h = 3, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 1206, .adv_w = 256, .box_w = 16, .box_h = 16, .ofs_x = 0, .ofs_y = -2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 96, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 2,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t UNIFONT_16PX = {
#else
lv_font_t UNIFONT_16PX = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 16,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -31,
    .underline_thickness = 13,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};
