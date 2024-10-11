// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: PubRemote

#ifndef _UI_EVENTS_H
#define _UI_EVENTS_H

#ifdef __cplusplus
extern "C" {
#endif

void stats_screen_loaded(lv_event_t * e);
void stats_screen_unloaded(lv_event_t * e);
void stat_long_press(lv_event_t * e);
void stat_swipe_left(lv_event_t * e);
void stat_swipe_right(lv_event_t * e);
void stats_footer_long_press(lv_event_t * e);
void settings_screen_loaded(lv_event_t * e);
void settings_screen_unloaded(lv_event_t * e);
void enter_deep_sleep(lv_event_t * e);
void brightness_screen_loaded(lv_event_t * e);
void brightness_screen_unloaded(lv_event_t * e);
void brightness_slider_change(lv_event_t * e);
void brightness_save(lv_event_t * e);
void pairing_screen_loaded(lv_event_t * e);
void pairing_screen_unloaded(lv_event_t * e);
void power_screen_loaded(lv_event_t * e);
void power_screen_unloaded(lv_event_t * e);
void auto_off_select_change(lv_event_t * e);
void power_settings_save(lv_event_t * e);
void calibration_screen_loaded(lv_event_t * e);
void calibration_screen_unloaded(lv_event_t * e);
void expo_slider_change(lv_event_t * e);
void calibration_settings_secondary_button_press(lv_event_t * e);
void calibration_settings_primary_button_press(lv_event_t * e);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
