// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: PubRemote

#include "ui.h"

void ui_MenuScreen_screen_init(void)
{
    ui_MenuScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_MenuScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_MenuScreen, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MenuScreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MenuContent = lv_obj_create(ui_MenuScreen);
    lv_obj_remove_style_all(ui_MenuContent);
    lv_obj_set_width(ui_MenuContent, lv_pct(100));
    lv_obj_set_height(ui_MenuContent, lv_pct(100));
    lv_obj_set_align(ui_MenuContent, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_MenuContent, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_MenuContent, LV_FLEX_ALIGN_SPACE_BETWEEN, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_MenuContent, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_text_font(ui_MenuContent, &ui_font_Inter_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MenuBody = lv_obj_create(ui_MenuContent);
    lv_obj_remove_style_all(ui_MenuBody);
    lv_obj_set_width(ui_MenuBody, lv_pct(65));
    lv_obj_set_height(ui_MenuBody, lv_pct(100));
    lv_obj_set_align(ui_MenuBody, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_MenuBody, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_MenuBody, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_MenuBody, LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLL_ELASTIC |
                      LV_OBJ_FLAG_SCROLL_MOMENTUM);     /// Flags
    lv_obj_set_scrollbar_mode(ui_MenuBody, LV_SCROLLBAR_MODE_ACTIVE);
    lv_obj_set_scroll_dir(ui_MenuBody, LV_DIR_VER);
    lv_obj_set_style_pad_left(ui_MenuBody, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_MenuBody, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_MenuBody, 40, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_MenuBody, 40, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_MenuBody, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_MenuBody, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_MenuBody, &ui_font_Inter_Bold_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_MenuBackButton = lv_btn_create(ui_MenuBody);
    lv_obj_set_height(ui_MenuBackButton, 42);
    lv_obj_set_width(ui_MenuBackButton, lv_pct(100));
    lv_obj_set_align(ui_MenuBackButton, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MenuBackButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_MenuBackButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_MenuBackButtonLabel = lv_label_create(ui_MenuBackButton);
    lv_obj_set_width(ui_MenuBackButtonLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MenuBackButtonLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_MenuBackButtonLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_MenuBackButtonLabel, "Back");

    ui_MenuAboutButton = lv_btn_create(ui_MenuBody);
    lv_obj_set_height(ui_MenuAboutButton, 42);
    lv_obj_set_width(ui_MenuAboutButton, lv_pct(100));
    lv_obj_set_align(ui_MenuAboutButton, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MenuAboutButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_MenuAboutButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_MenuAboutButtonLabel = lv_label_create(ui_MenuAboutButton);
    lv_obj_set_width(ui_MenuAboutButtonLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MenuAboutButtonLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_MenuAboutButtonLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_MenuAboutButtonLabel, "About");

    ui_MenuSettingsButton = lv_btn_create(ui_MenuBody);
    lv_obj_set_height(ui_MenuSettingsButton, 42);
    lv_obj_set_width(ui_MenuSettingsButton, lv_pct(100));
    lv_obj_set_align(ui_MenuSettingsButton, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MenuSettingsButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_MenuSettingsButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_MenuSettingsButtonLabel = lv_label_create(ui_MenuSettingsButton);
    lv_obj_set_width(ui_MenuSettingsButtonLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MenuSettingsButtonLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_MenuSettingsButtonLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_MenuSettingsButtonLabel, "Settings");

    ui_MenuCalibrateButton = lv_btn_create(ui_MenuBody);
    lv_obj_set_height(ui_MenuCalibrateButton, 42);
    lv_obj_set_width(ui_MenuCalibrateButton, lv_pct(100));
    lv_obj_set_align(ui_MenuCalibrateButton, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MenuCalibrateButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_MenuCalibrateButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_MenuCalibrateButtonLabel = lv_label_create(ui_MenuCalibrateButton);
    lv_obj_set_width(ui_MenuCalibrateButtonLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MenuCalibrateButtonLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_MenuCalibrateButtonLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_MenuCalibrateButtonLabel, "Calibration");

    ui_MenuPairButton = lv_btn_create(ui_MenuBody);
    lv_obj_set_height(ui_MenuPairButton, 42);
    lv_obj_set_width(ui_MenuPairButton, lv_pct(100));
    lv_obj_set_align(ui_MenuPairButton, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MenuPairButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_MenuPairButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_MenuPairButtonLabel = lv_label_create(ui_MenuPairButton);
    lv_obj_set_width(ui_MenuPairButtonLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MenuPairButtonLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_MenuPairButtonLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_MenuPairButtonLabel, "Pairing");

    ui_MenuShutdownButton = lv_btn_create(ui_MenuBody);
    lv_obj_set_height(ui_MenuShutdownButton, 42);
    lv_obj_set_width(ui_MenuShutdownButton, lv_pct(100));
    lv_obj_set_align(ui_MenuShutdownButton, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_MenuShutdownButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_MenuShutdownButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_MenuShutdownButtonLabel = lv_label_create(ui_MenuShutdownButton);
    lv_obj_set_width(ui_MenuShutdownButtonLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_MenuShutdownButtonLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_MenuShutdownButtonLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_MenuShutdownButtonLabel, "Shutdown");

    lv_obj_add_event_cb(ui_MenuBackButton, ui_event_MenuBackButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_MenuAboutButton, ui_event_MenuAboutButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_MenuSettingsButton, ui_event_MenuSettingsButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_MenuCalibrateButton, ui_event_MenuCalibrateButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_MenuPairButton, ui_event_MenuPairButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_MenuShutdownButton, ui_event_MenuShutdownButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_MenuScreen, ui_event_MenuScreen, LV_EVENT_ALL, NULL);

}