/*******************************************************************************/
/*  This file is auto-generated by Azure RTOS GUIX Studio. Do not edit this    */
/*  file by hand. Modifications to this file should only be made by running    */
/*  the Azure RTOS GUIX Studio application and re-generating the application   */
/*  specification file(s). For more information please refer to the Azure RTOS */
/*  GUIX Studio User Guide, or visit our web site at azure.com/rtos            */
/*                                                                             */
/*  GUIX Studio Revision 6.2.0.1                                               */
/*  Date (dd.mm.yyyy): 31.10.2022   Time (hh:mm): 14:09                        */
/*******************************************************************************/


#ifndef _DYNAMIC_MENU_SPECIFICATIONS_H_
#define _DYNAMIC_MENU_SPECIFICATIONS_H_

#include "gx_api.h"

/* Determine if C++ compiler is being used, if so use standard C.              */
#ifdef __cplusplus
extern   "C" {
#endif

/* Define widget ids                                                           */

#define IDB_BACK 1
#define ID_ALBUMS 2
#define ID_ARTISTS 3
#define ID_GENRES 4
#define ID_PLAYLISTS 5
#define ID_SONGS 6
#define ID_SETTINGS 7


/* Define animation ids                                                        */

#define GX_NEXT_ANIMATION_ID 1


/* Define user event ids                                                       */

#define GX_NEXT_USER_EVENT_ID GX_FIRST_USER_EVENT


/* Declare properties structures for each utilized widget type                 */

typedef struct GX_STUDIO_WIDGET_STRUCT
{
   GX_CHAR *widget_name;
   USHORT  widget_type;
   USHORT  widget_id;
   #if defined(GX_WIDGET_USER_DATA)
   INT   user_data;
   #endif
   ULONG style;
   ULONG status;
   ULONG control_block_size;
   GX_RESOURCE_ID normal_fill_color_id;
   GX_RESOURCE_ID selected_fill_color_id;
   GX_RESOURCE_ID disabled_fill_color_id;
   UINT (*create_function) (GX_CONST struct GX_STUDIO_WIDGET_STRUCT *, GX_WIDGET *, GX_WIDGET *);
   void (*draw_function) (GX_WIDGET *);
   UINT (*event_function) (GX_WIDGET *, GX_EVENT *);
   GX_RECTANGLE size;
   GX_CONST struct GX_STUDIO_WIDGET_STRUCT *next_widget;
   GX_CONST struct GX_STUDIO_WIDGET_STRUCT *child_widget;
   ULONG control_block_offset;
   GX_CONST void *properties;
} GX_STUDIO_WIDGET;

typedef struct
{
    GX_CONST GX_STUDIO_WIDGET *widget_information;
    GX_WIDGET        *widget;
} GX_STUDIO_WIDGET_ENTRY;

typedef struct
{
    GX_RESOURCE_ID string_id; 
    GX_RESOURCE_ID font_id;
    GX_RESOURCE_ID normal_text_color_id;
    GX_RESOURCE_ID selected_text_color_id;
    GX_RESOURCE_ID disabled_text_color_id;
} GX_TEXT_BUTTON_PROPERTIES;

typedef struct
{
    GX_RESOURCE_ID string_id;
    GX_RESOURCE_ID font_id;
    GX_RESOURCE_ID normal_text_color_id;
    GX_RESOURCE_ID selected_text_color_id;
    GX_RESOURCE_ID disabled_text_color_id;
} GX_PROMPT_PROPERTIES;

typedef struct
{
    GX_RESOURCE_ID string_id;
    GX_RESOURCE_ID font_id;
    GX_RESOURCE_ID normal_text_color_id;
    GX_RESOURCE_ID selected_text_color_id;
    GX_RESOURCE_ID disabled_text_color_id;
    GX_RESOURCE_ID left_map_id;
    GX_RESOURCE_ID fill_map_id;
    GX_RESOURCE_ID right_map_id;
    GX_RESOURCE_ID selected_left_map_id;
    GX_RESOURCE_ID selected_fill_map_id;
    GX_RESOURCE_ID selected_right_map_id;
} GX_PIXELMAP_PROMPT_PROPERTIES;

typedef struct
{
    GX_RESOURCE_ID wallpaper_id;
} GX_WINDOW_PROPERTIES;

typedef struct
{
    GX_RESOURCE_ID wallpaper_id;
    VOID (*callback)(GX_VERTICAL_LIST *, GX_WIDGET *, INT);
    int total_rows;
} GX_VERTICAL_LIST_PROPERTIES;

typedef struct
{
   GX_CONST GX_STUDIO_WIDGET *base_info;
   UINT (*base_create_function) (GX_CONST struct GX_STUDIO_WIDGET_STRUCT *, GX_WIDGET *, GX_WIDGET *);
   GX_RECTANGLE size;
} GX_TEMPLATE_PROPERTIES;


/* Declare top-level control blocks                                            */

typedef struct MENU_SCREEN_TEMPLATE_CONTROL_BLOCK_STRUCT
{
    GX_WINDOW_MEMBERS_DECLARE
    GX_TEXT_BUTTON menu_screen_template_back_button;
} MENU_SCREEN_TEMPLATE_CONTROL_BLOCK;

typedef struct TOP_MENU_CONTROL_BLOCK_STRUCT
{
    GX_WINDOW_MEMBERS_DECLARE
    GX_PIXELMAP_PROMPT top_menu_albums_button;
    GX_PIXELMAP_PROMPT top_menu_artists_button;
    GX_PIXELMAP_PROMPT top_menu_genres_button;
    GX_PIXELMAP_PROMPT top_menu_playlist_button;
    GX_PIXELMAP_PROMPT top_menu_songs_button;
    GX_PIXELMAP_PROMPT top_menu_settings;
} TOP_MENU_CONTROL_BLOCK;

typedef struct SECOND_LEVEL_TEMPLATE_CONTROL_BLOCK_STRUCT
{
    MENU_SCREEN_TEMPLATE_CONTROL_BLOCK base;
    GX_WINDOW second_level_template_second_level_template_child;
    GX_PROMPT second_level_template_prompt_5;
} SECOND_LEVEL_TEMPLATE_CONTROL_BLOCK;

typedef struct PLAYLIST_SCREEN_CONTROL_BLOCK_STRUCT
{
    MENU_SCREEN_TEMPLATE_CONTROL_BLOCK base;
} PLAYLIST_SCREEN_CONTROL_BLOCK;

typedef struct GENRE_SCREEN_CONTROL_BLOCK_STRUCT
{
    MENU_SCREEN_TEMPLATE_CONTROL_BLOCK base;
    GX_PIXELMAP_PROMPT genre_screen_prompt_3;
} GENRE_SCREEN_CONTROL_BLOCK;

typedef struct ARTISTS_SCREEN_CONTROL_BLOCK_STRUCT
{
    MENU_SCREEN_TEMPLATE_CONTROL_BLOCK base;
    GX_PIXELMAP_PROMPT artists_screen_prompt_2;
    GX_VERTICAL_LIST artists_screen_vertical_list_2;
    GX_TEXT_BUTTON artists_screen_button_14;
    GX_TEXT_BUTTON artists_screen_button_15;
    GX_TEXT_BUTTON artists_screen_button_16;
    GX_TEXT_BUTTON artists_screen_button_10_1;
    GX_TEXT_BUTTON artists_screen_button_11_1;
    GX_TEXT_BUTTON artists_screen_button_12_1;
    GX_TEXT_BUTTON artists_screen_button_13_1;
} ARTISTS_SCREEN_CONTROL_BLOCK;

typedef struct ALBUMS_SCREEN_CONTROL_BLOCK_STRUCT
{
    MENU_SCREEN_TEMPLATE_CONTROL_BLOCK base;
} ALBUMS_SCREEN_CONTROL_BLOCK;

typedef struct SONGS_SCREEN_CONTROL_BLOCK_STRUCT
{
    MENU_SCREEN_TEMPLATE_CONTROL_BLOCK base;
} SONGS_SCREEN_CONTROL_BLOCK;

typedef struct SECOND_LEVEL_DERIVED_SCREEN_CONTROL_BLOCK_STRUCT
{
    SECOND_LEVEL_TEMPLATE_CONTROL_BLOCK base;
} SECOND_LEVEL_DERIVED_SCREEN_CONTROL_BLOCK;


/* extern statically defined control blocks                                    */

#ifndef GUIX_STUDIO_GENERATED_FILE
extern SECOND_LEVEL_TEMPLATE_CONTROL_BLOCK second_level_template;
extern GENRE_SCREEN_CONTROL_BLOCK genre_screen;
extern ARTISTS_SCREEN_CONTROL_BLOCK artists_screen;
extern MENU_SCREEN_TEMPLATE_CONTROL_BLOCK menu_screen_template;
extern TOP_MENU_CONTROL_BLOCK top_menu;
#endif

/* Declare event process functions, draw functions, and callback functions     */

UINT sub_menu_event(GX_WINDOW *widget, GX_EVENT *event_ptr);
UINT top_menu_event(GX_WINDOW *widget, GX_EVENT *event_ptr);

/* Declare the GX_STUDIO_DISPLAY_INFO structure                                */


typedef struct GX_STUDIO_DISPLAY_INFO_STRUCT 
{
    GX_CONST GX_CHAR *name;
    GX_CONST GX_CHAR *canvas_name;
    GX_CONST GX_THEME **theme_table;
    GX_CONST GX_STRING **language_table;
    USHORT   theme_table_size;
    USHORT   language_table_size;
    UINT     string_table_size;
    UINT     x_resolution;
    UINT     y_resolution;
    GX_DISPLAY *display;
    GX_CANVAS  *canvas;
    GX_WINDOW_ROOT *root_window;
    GX_COLOR   *canvas_memory;
    ULONG      canvas_memory_size;
    USHORT     rotation_angle;
} GX_STUDIO_DISPLAY_INFO;


/* Declare Studio-generated functions for creating top-level widgets           */

UINT gx_studio_text_button_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_prompt_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_pixelmap_prompt_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_window_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_vertical_list_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
UINT gx_studio_template_create(GX_CONST GX_STUDIO_WIDGET *info, GX_WIDGET *control_block, GX_WIDGET *parent);
GX_WIDGET *gx_studio_widget_create(GX_BYTE *storage, GX_CONST GX_STUDIO_WIDGET *definition, GX_WIDGET *parent);
UINT gx_studio_named_widget_create(char *name, GX_WIDGET *parent, GX_WIDGET **new_widget);
UINT gx_studio_display_configure(USHORT display, UINT (*driver)(GX_DISPLAY *), GX_UBYTE language, USHORT theme, GX_WINDOW_ROOT **return_root);

/* Determine if a C++ compiler is being used.  If so, complete the standard
  C conditional started above.                                                 */
#ifdef __cplusplus
}
#endif

#endif                                       /* sentry                         */