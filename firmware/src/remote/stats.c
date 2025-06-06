#include "stats.h"
#include "receiver.h"
#include <screens/stats_screen.h>

RemoteStats remoteStats;

void update_stats_display() {
  if (is_stats_screen_active()) {
    update_stats_screen_display();
  }
}

static void reset_stats() {
  remoteStats.lastUpdated = 0;
  remoteStats.speed = 0.0;
  remoteStats.dutyCycle = 0;
  remoteStats.speedUnit = SPEED_UNIT_KMH;
  remoteStats.tempUnit = TEMP_UNIT_CELSIUS;
  remoteStats.batteryVoltage = 0.0;
  remoteStats.batteryPercentage = 0.0;
  remoteStats.tripDistance = 0.0;
  remoteStats.motorTemp = 0;
  remoteStats.controllerTemp = 0;
  remoteStats.signalStrength = -255;
  remoteStats.state = BOARD_STATE_STARTUP;
  remoteStats.switchState = SWITCH_STATE_OFF;
}

void init_stats() {
  reset_stats();
  update_stats_display();
}
