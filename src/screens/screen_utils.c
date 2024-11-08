#include "screen_utils.h"
#include "lvgl.h"
#include <ui/ui.h>
#define BASE_RES 240
#define SCALE_FACTOR ((float)LV_HOR_RES / BASE_RES)

static void scale_padding(lv_obj_t *obj) {
  if (obj == NULL)
    return;

  // Get current padding values
  lv_coord_t left = lv_obj_get_style_pad_left(obj, 0);
  lv_coord_t right = lv_obj_get_style_pad_right(obj, 0);
  lv_coord_t top = lv_obj_get_style_pad_top(obj, 0);
  lv_coord_t bottom = lv_obj_get_style_pad_bottom(obj, 0);

  // Scale and set new padding values using SCALE_FACTOR
  lv_obj_set_style_pad_left(obj, (lv_coord_t)(left * SCALE_FACTOR), LV_STATE_DEFAULT);
  lv_obj_set_style_pad_right(obj, (lv_coord_t)(right * SCALE_FACTOR), LV_STATE_DEFAULT);
  lv_obj_set_style_pad_top(obj, (lv_coord_t)(top * SCALE_FACTOR), LV_STATE_DEFAULT);
  lv_obj_set_style_pad_bottom(obj, (lv_coord_t)(bottom * SCALE_FACTOR), LV_STATE_DEFAULT);
}

static void scale_arc_width(lv_obj_t *obj) {
  if (obj == NULL || lv_obj_check_type(obj, &lv_arc_class) == false)
    return;

  // Get current arc width
  lv_coord_t width = lv_obj_get_style_arc_width(obj, 0);

  // Scale and set new arc width using SCALE_FACTOR
  lv_obj_set_style_arc_width(obj, (lv_coord_t)(width * SCALE_FACTOR), LV_PART_MAIN | LV_STATE_DEFAULT);
}

static void scale_dimensions(lv_obj_t *obj) {
  if (obj == NULL) {
    return;
  }

  // Array of parts to process
  uint32_t parts[] = {
      LV_PART_MAIN,
      // LV_PART_KNOB,
      // LV_PART_INDICATOR,
      // LV_PART_SELECTED
  };

  for (size_t i = 0; i < sizeof(parts) / sizeof(parts[0]); i++) {
    uint32_t part = parts[i];

    lv_coord_t width = lv_obj_get_style_width(obj, part);
    lv_coord_t height = lv_obj_get_style_height(obj, part);

    if (width != NULL) {
      if (!LV_COORD_IS_PCT(width) && width != LV_SIZE_CONTENT) {
        lv_obj_set_width(obj, (lv_coord_t)(width * SCALE_FACTOR));
      }
    }

    if (height != NULL) {
      if (!LV_COORD_IS_PCT(height) && height != LV_SIZE_CONTENT) {
        lv_obj_set_height(obj, (lv_coord_t)(height * SCALE_FACTOR));
      }
    }
  }
}

static bool is_bold_font(lv_font_t *font) {
  if (font == &ui_font_Inter_Bold_14 || font == &ui_font_Inter_Bold_28 || font == &ui_font_Inter_Bold_48 ||
      font == &ui_font_Inter_Bold_96) {
    return true;
  }

  return false;
}

static uint8_t get_font_size(lv_font_t *font) {
  if (font == &ui_font_Inter_14 || font == &ui_font_Inter_Bold_14) {
    return 14;
  }
  else if (font == &ui_font_Inter_28 || font == &ui_font_Inter_Bold_28) {
    return 28;
  }
  else if (font == &ui_font_Inter_Bold_48) {
    return 48;
  }
  else if (font == &ui_font_Inter_Bold_96) {
    return 96;
  }
  return 14;
}

void scale_text(lv_obj_t *obj) {
  if (obj == NULL || (!lv_obj_check_type(obj, &lv_label_class) && !lv_obj_check_type(obj, &lv_dropdown_class))) {
    return;
  }

  uint32_t parts[] = {
      LV_PART_MAIN,
      // LV_PART_ITEMS,
      // LV_PART_SELECTED
  };

  for (size_t i = 0; i < sizeof(parts) / sizeof(parts[0]); i++) {
    uint32_t part = parts[i];
    lv_font_t *font = lv_obj_get_style_text_font(obj, part);

    if (font == NULL) {
      continue;
    }

    int size = get_font_size(font) * SCALE_FACTOR;
    bool is_bold = is_bold_font(font);

    lv_font_t *new_font = font;
    if (size <= 20) {
      if (is_bold) {
        new_font = &ui_font_Inter_Bold_14;
      }
      else {
        new_font = &ui_font_Inter_28;
      }
    }
    else if (size <= 36) {
      if (is_bold) {
        new_font = &ui_font_Inter_Bold_28;
      }
      else {
        new_font = &ui_font_Inter_28;
      }
    }
    else if (size <= 64) {
      if (is_bold) {
        new_font = &ui_font_Inter_Bold_48;
      }
      else {
        new_font = &ui_font_Inter_28;
      }
    }
    else {
      if (is_bold) {
        new_font = &ui_font_Inter_Bold_96;
      }
      else {
        new_font = &ui_font_Inter_28;
      }
    }

    lv_obj_set_style_text_font(obj, new_font, part);
  }
}

static void scale_position(lv_obj_t *obj) {
  if (obj == NULL) {
    return;
  }

  uint32_t parts[] = {
      LV_PART_MAIN,
      // LV_PART_ITEMS,
      // LV_PART_SELECTED
  };

  for (size_t i = 0; i < sizeof(parts) / sizeof(parts[0]); i++) {
    uint32_t part = parts[i];

    lv_coord_t x = lv_obj_get_style_x(obj, part);
    lv_coord_t y = lv_obj_get_style_y(obj, part);

    if (!LV_COORD_IS_PCT(x)) {
      lv_obj_set_x(obj, (lv_coord_t)(x * SCALE_FACTOR));
    }

    if (!LV_COORD_IS_PCT(y)) {
      lv_obj_set_y(obj, (lv_coord_t)(y * SCALE_FACTOR));
    }
  }
}

/**
 * Recursively process all children of an LVGL object
 * @param parent The parent object to start from
 * @param callback Function to call for each child
 */
static void process_children_recursive(lv_obj_t *parent, void (*callback)(lv_obj_t *obj)) {
  // callback(parent);
  uint32_t child_cnt = lv_obj_get_child_cnt(parent);

  for (uint32_t i = 0; i < child_cnt; i++) {
    lv_obj_t *child = lv_obj_get_child(parent, i);
    if (child != NULL) {
      // Process this child
      callback(child);

      // Recursively process its children
      process_children_recursive(child, callback);
    }
  }
}

void scale_element(lv_obj_t *element) {
  scale_padding(element);
  scale_dimensions(element);
  scale_arc_width(element);
  scale_text(element);
  scale_position(element);

  // Mark the style as modified
  lv_obj_mark_layout_as_dirty(element);
  lv_obj_refresh_style(element, LV_STYLE_PROP_ANY, LV_PART_MAIN);
}

void apply_ui_scale() {
  if (SCALE_FACTOR == 1.0) {
    return;
  }

  process_children_recursive(ui_SplashScreen, scale_element);
  process_children_recursive(ui_StatsScreen, scale_element);
  process_children_recursive(ui_SettingsScreen, scale_element);
  process_children_recursive(ui_BrightnessScreen, scale_element);
  process_children_recursive(ui_PowerScreen, scale_element);
  process_children_recursive(ui_CalibrationScreen, scale_element);
  process_children_recursive(ui_PairingScreen, scale_element);
}