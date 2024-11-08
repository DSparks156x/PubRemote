// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: PubRemote

#ifndef _PUBREMOTE_UI_H
#define _PUBREMOTE_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"
#include "ui_theme_manager.h"
#include "ui_themes.h"


// SCREEN: ui_SplashScreen
void ui_SplashScreen_screen_init(void);
void ui_event_SplashScreen(lv_event_t * e);
extern lv_obj_t * ui_SplashScreen;
extern lv_obj_t * ui_SplashScreenLogo;
// CUSTOM VARIABLES

// SCREEN: ui_StatsScreen
void ui_StatsScreen_screen_init(void);
void ui_event_StatsScreen(lv_event_t * e);
extern lv_obj_t * ui_StatsScreen;
extern lv_obj_t * ui_SpeedDial;
extern lv_obj_t * ui_UtilizationDial;
extern lv_obj_t * ui_LeftSensor;
extern lv_obj_t * ui_RightSensor;
extern lv_obj_t * ui_StatsContent;
extern lv_obj_t * ui_StatsHeader;
extern lv_obj_t * ui_StatsHeaderIndicatorContainer;
extern lv_obj_t * ui_BatteryIndicatorContainer;
extern lv_obj_t * ui_BatteryTip;
extern lv_obj_t * ui_BatteryOutline;
extern lv_obj_t * ui_BatteryFill;
extern lv_obj_t * ui_RSSIContainer;
extern lv_obj_t * ui_RSSI1;
extern lv_obj_t * ui_RSSI2;
extern lv_obj_t * ui_RSSI3;
extern lv_obj_t * ui_MessageText;
void ui_event_StatsBody(lv_event_t * e);
extern lv_obj_t * ui_StatsBody;
extern lv_obj_t * ui_PrimaryStat;
extern lv_obj_t * ui_PrimaryStatUnit;
extern lv_obj_t * ui_SecondaryStat;
void ui_event_StatsFooter(lv_event_t * e);
extern lv_obj_t * ui_StatsFooter;
extern lv_obj_t * ui_BatteryDisplay;
// CUSTOM VARIABLES

// SCREEN: ui_SettingsScreen
void ui_SettingsScreen_screen_init(void);
void ui_event_SettingsScreen(lv_event_t * e);
extern lv_obj_t * ui_SettingsScreen;
extern lv_obj_t * ui_Content;
extern lv_obj_t * ui_SettingsBody;
void ui_event_SettingsBackButton(lv_event_t * e);
extern lv_obj_t * ui_SettingsBackButton;
extern lv_obj_t * ui_SettingsBackButtonLabel;
extern lv_obj_t * ui_SettingsCategoryLabel;
void ui_event_SettingsBrightnessButton(lv_event_t * e);
extern lv_obj_t * ui_SettingsBrightnessButton;
extern lv_obj_t * ui_SettingsBrightnessButtonLabel;
void ui_event_SettingsPowerButton(lv_event_t * e);
extern lv_obj_t * ui_SettingsPowerButton;
extern lv_obj_t * ui_SettingsPowerButtonLabel;
void ui_event_SettingsCalibrateButton(lv_event_t * e);
extern lv_obj_t * ui_SettingsCalibrateButton;
extern lv_obj_t * ui_SettingsCalibrateButtonLabel;
extern lv_obj_t * ui_ActionsCategoryLabel;
void ui_event_SettingsPairButton(lv_event_t * e);
extern lv_obj_t * ui_SettingsPairButton;
extern lv_obj_t * ui_SettingsPairButtonLabel;
void ui_event_SettingsShutdownButton(lv_event_t * e);
extern lv_obj_t * ui_SettingsShutdownButton;
extern lv_obj_t * ui_SettingsShutdownButtonLabel;
// CUSTOM VARIABLES

// SCREEN: ui_BrightnessScreen
void ui_BrightnessScreen_screen_init(void);
void ui_event_BrightnessScreen(lv_event_t * e);
extern lv_obj_t * ui_BrightnessScreen;
extern lv_obj_t * ui_BrightnessContent;
extern lv_obj_t * ui_BrightnessHeader;
extern lv_obj_t * ui_BrightnessBody;
void ui_event_BrightnessSlider(lv_event_t * e);
extern lv_obj_t * ui_BrightnessSlider;
extern lv_obj_t * ui_BrightnessLabel;
extern lv_obj_t * ui_BrightnessFooter;
void ui_event_BrightnessMainActionButton(lv_event_t * e);
extern lv_obj_t * ui_BrightnessMainActionButton;
extern lv_obj_t * ui_BrightnessMainActionButtonLabel;
// CUSTOM VARIABLES

// SCREEN: ui_PairingScreen
void ui_PairingScreen_screen_init(void);
void ui_event_PairingScreen(lv_event_t * e);
extern lv_obj_t * ui_PairingScreen;
extern lv_obj_t * ui_PairingContent;
extern lv_obj_t * ui_PairingHeader;
extern lv_obj_t * ui_PairingBody;
extern lv_obj_t * ui_PairingCode;
extern lv_obj_t * ui_PairingCodeLabel;
extern lv_obj_t * ui_PairingFooter;
void ui_event_PairingMainActionButton(lv_event_t * e);
extern lv_obj_t * ui_PairingMainActionButton;
extern lv_obj_t * ui_PairingMainActionButtonLabel;
// CUSTOM VARIABLES

// SCREEN: ui_PowerScreen
void ui_PowerScreen_screen_init(void);
void ui_event_PowerScreen(lv_event_t * e);
extern lv_obj_t * ui_PowerScreen;
extern lv_obj_t * ui_PowerContent;
extern lv_obj_t * ui_PowerHeader;
extern lv_obj_t * ui_PowerBody;
void ui_event_AutoOffTime(lv_event_t * e);
extern lv_obj_t * ui_AutoOffTime;
extern lv_obj_t * ui_PowerLabel;
extern lv_obj_t * ui_PowerFooter;
void ui_event_PowerMainActionButton(lv_event_t * e);
extern lv_obj_t * ui_PowerMainActionButton;
extern lv_obj_t * ui_PowerMainActionButtonLabel;
// CUSTOM VARIABLES

// SCREEN: ui_CalibrationScreen
void ui_CalibrationScreen_screen_init(void);
void ui_event_CalibrationScreen(lv_event_t * e);
extern lv_obj_t * ui_CalibrationScreen;
extern lv_obj_t * ui_CalibrationContent;
extern lv_obj_t * ui_CalibrationHeader;
extern lv_obj_t * ui_CalibrationHeaderLabel;
extern lv_obj_t * ui_CalibrationBody;
extern lv_obj_t * ui_CalibrationStepContent;
void ui_event_ExpoSlider(lv_event_t * e);
extern lv_obj_t * ui_ExpoSlider;
extern lv_obj_t * ui_CalibrationIndicatorContainer;
extern lv_obj_t * ui_DeadbandIndicator;
extern lv_obj_t * ui_CalibrationLineVert;
extern lv_obj_t * ui_CalibrationLineHoriz;
extern lv_obj_t * ui_PositionIndicatorContainer;
extern lv_obj_t * ui_PositionIndicatorHoriz;
extern lv_obj_t * ui_PositionIndicatorVert;
extern lv_obj_t * ui_CalibrationStepLabel;
extern lv_obj_t * ui_CalibrationFooter;
void ui_event_CalibrationSecondaryActionButton(lv_event_t * e);
extern lv_obj_t * ui_CalibrationSecondaryActionButton;
extern lv_obj_t * ui_CalibrationSecondaryActionButtonLabel;
void ui_event_CalibrationPrimaryActionButton(lv_event_t * e);
extern lv_obj_t * ui_CalibrationPrimaryActionButton;
extern lv_obj_t * ui_CalibrationPrimaryActionButtonLabel;
// CUSTOM VARIABLES

// EVENTS

extern lv_obj_t * ui____initial_actions0;

// IMAGES AND IMAGE SETS
LV_IMG_DECLARE(ui_img_icon_png);    // assets/icon.png

// FONTS
LV_FONT_DECLARE(ui_font_Inter_14);
LV_FONT_DECLARE(ui_font_Inter_28);
LV_FONT_DECLARE(ui_font_Inter_Bold_14);
LV_FONT_DECLARE(ui_font_Inter_Bold_28);
LV_FONT_DECLARE(ui_font_Inter_Bold_48);
LV_FONT_DECLARE(ui_font_Inter_Bold_96);

// UI INIT
void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
