#include "stats.h"

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], Stats computedStats)
{
  if(computedStats.max > maxThreshold)
  {
    (*alerters[0])();
    (*alerters[1])();
  }
}

void emailAlerter(void)
{
   emailAlertCallCount = 1;
}

void ledAlerter(void)
{
   ledAlertCallCount = 1;
}
