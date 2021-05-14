/**
 * @file lv_100ask_demo_theme.h
 *
 */

#ifndef LV_100ASK_DEMO_THEME_H
#define LV_100ASK_DEMO_THEME_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "../lv_100ask_demo/lv_100ask_demo.h"

/*********************
 *      DEFINES
 *********************/
/*Colors*/
#define LV_100ASK_DEMO_WHITE           lv_color_hex(0xffffff)
#define LV_100ASK_DEMO_LIGHT           lv_color_hex(0xf3f8fe)
#define LV_100ASK_DEMO_GRAY            lv_color_hex(0x8a8a8a)
#define LV_100ASK_DEMO_LIGHT_GRAY      lv_color_hex(0xc4c4c4)
#define LV_100ASK_DEMO_BLUE            lv_color_hex(0x2f3243) //006fb6
#define LV_100ASK_DEMO_GREEN           lv_color_hex(0x4cb242)
#define LV_100ASK_DEMO_RED             lv_color_hex(0xd51732)

/**********************
 *      TYPEDEFS
 **********************/
typedef enum {
    LV_100ASK_DEMO_THEME_TITLE = _LV_THEME_BUILTIN_LAST,
    LV_100ASK_DEMO_THEME_LABEL_WHITE,
    LV_100ASK_DEMO_THEME_ICON,
    LV_100ASK_DEMO_THEME_BTN_BORDER,
    LV_100ASK_DEMO_THEME_BTN_CIRCLE,
    LV_100ASK_DEMO_THEME_BOX_BORDER,
    LV_100ASK_DEMO_THEME_BTN_BACK,
    LV_100ASK_DEMO_THEME_CHINESE_CHARACTER
}lv_100ask_demo_theme_t;

/**********************
 * GLOBAL PROTOTYPES
 **********************/


/**
 * Initialize the default
 * @param color_primary the primary color of the theme
 * @param color_secondary the secondary color for the theme
 * @param flags ORed flags starting with `LV_THEME_DEF_FLAG_...`
 * @param font_small pointer to a small font
 * @param font_normal pointer to a normal font
 * @param font_subtitle pointer to a large font
 * @param font_title pointer to a extra large font
 * @return a pointer to reference this theme later
 */
lv_theme_t * lv_100ask_demo_theme_init(lv_color_t color_primary, lv_color_t color_secondary, uint32_t flags,
                                    const lv_font_t * font_small, const lv_font_t * font_normal, const lv_font_t * font_subtitle,
                                    const lv_font_t * font_title);
/**********************
 *      MACROS
 **********************/

#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

