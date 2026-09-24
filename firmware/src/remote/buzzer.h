#pragma once

#include "tones.h"
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

#ifdef __cplusplus
extern "C"
{
#endif

  typedef enum {
    BUZZER_PATTERN_NONE,
    BUZZER_PATTERN_MELODY,
    BUZZER_PATTERN_SOLID,
  } BuzzerPatttern;

  // NOTE_REST is silence. A short gap comes off the end of each step so repeats stay distinct.
  typedef struct {
    uint16_t frequency;
    uint16_t duration_ms;
  } BuzzerNote;

  void buzzer_init();
  void buzzer_deinit();

  // notes must outlive playback (pass a static array)
  void buzzer_play_sequence(const BuzzerNote *notes, size_t count, bool repeat);
  bool buzzer_sequence_playing();
  void buzzer_set_pattern(BuzzerPatttern pattern);
  void buzzer_set_tone(BuzzerToneFrequency note, int duration);
  void buzzer_stop();

#ifdef __cplusplus
}
#endif
