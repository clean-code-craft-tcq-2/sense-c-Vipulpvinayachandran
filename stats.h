struct stats
{
 float average = 0;
 float min = 0;
 float max = 0;
}computedStats;

void compute_statistics(const float* numberset, int setlength);
typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats);

extern int emailAlertCallCount;
extern int ledAlertCallCount;
