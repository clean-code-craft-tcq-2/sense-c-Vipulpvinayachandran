
struct Stats compute_statistics(const float* numberset, int setlength);

typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats compute_statistics);

extern int emailAlertCallCount;
extern int ledAlertCallCount;
