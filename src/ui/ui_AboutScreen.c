// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: PubRemote

#include "ui.h"

void ui_AboutScreen_screen_init(void)
{
    ui_AboutScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_AboutScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    ui_object_set_themeable_style_property(ui_AboutScreen, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_Background);
    ui_object_set_themeable_style_property(ui_AboutScreen, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_Background);

    ui_AboutContent = lv_obj_create(ui_AboutScreen);
    lv_obj_remove_style_all(ui_AboutContent);
    lv_obj_set_width(ui_AboutContent, lv_pct(100));
    lv_obj_set_height(ui_AboutContent, lv_pct(100));
    lv_obj_set_align(ui_AboutContent, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_AboutContent, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_AboutContent, LV_FLEX_ALIGN_SPACE_BETWEEN, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_AboutContent, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_text_font(ui_AboutContent, &ui_font_Inter_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_AboutBody = lv_obj_create(ui_AboutContent);
    lv_obj_remove_style_all(ui_AboutBody);
    lv_obj_set_width(ui_AboutBody, lv_pct(65));
    lv_obj_set_height(ui_AboutBody, lv_pct(75));
    lv_obj_set_align(ui_AboutBody, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_AboutBody, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_AboutBodyLabel = lv_label_create(ui_AboutBody);
    lv_obj_set_width(ui_AboutBodyLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_AboutBodyLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_AboutBodyLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_AboutBodyLabel, "Nothing to see here...");

    ui_AboutFooter = lv_obj_create(ui_AboutContent);
    lv_obj_remove_style_all(ui_AboutFooter);
    lv_obj_set_width(ui_AboutFooter, lv_pct(65));
    lv_obj_set_height(ui_AboutFooter, lv_pct(25));
    lv_obj_set_align(ui_AboutFooter, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_AboutFooter, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_AboutFooter, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_AboutFooter, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_pad_left(ui_AboutFooter, 48, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_AboutFooter, 48, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_AboutFooter, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_AboutFooter, 24, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_AboutFooter, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_AboutFooter, 12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_AboutMainActionButton = lv_btn_create(ui_AboutFooter);
    lv_obj_set_width(ui_AboutMainActionButton, 80);
    lv_obj_set_height(ui_AboutMainActionButton, 42);
    lv_obj_set_align(ui_AboutMainActionButton, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_AboutMainActionButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_AboutMainActionButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_text_font(ui_AboutMainActionButton, &ui_font_Inter_Bold_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_AboutMainActionButtonLabel = lv_label_create(ui_AboutMainActionButton);
    lv_obj_set_width(ui_AboutMainActionButtonLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_AboutMainActionButtonLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_AboutMainActionButtonLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_AboutMainActionButtonLabel, "Back");

    lv_obj_add_event_cb(ui_AboutMainActionButton, ui_event_AboutMainActionButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_AboutScreen, ui_event_AboutScreen, LV_EVENT_ALL, NULL);

}
