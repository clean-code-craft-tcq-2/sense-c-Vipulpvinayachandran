#include "stats.h"

struct stats
{
 int average = 0;
 int min = 0;
 int max = 0;
}s;
    
int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats compute_statistics)
{
 
}
