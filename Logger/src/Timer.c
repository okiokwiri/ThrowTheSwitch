#include "Timer.h"

#ifdef TEST
uint32_t TestCounter;
#define WAIT_UNTIL_EQUAL(a,b) while(a++ != b) { TestCounter++; }
#else
#define WAIT_UNTIL_EQUAL(a,b) while(a != b) {}
#endif

static volatile uint32_t TimeStamp;

void Timer_Init(void)
{
	}
void Timer_SetStamp(uint32_t Stamp)
{
	TimeStamp = Stamp;
}
uint32_t Timer_GetStamp(void)
{
	return TimeStamp;
	}
void Timer_WaitMilli(uint32_t msec)
{}
uint32_t Timer_WaitRemainder(uint32_t StartStamp, uint32_t msec)
{
	uint32_t Goal = StartStamp + msec;
	WAIT_UNTIL_EQUAL(TimeStamp, Goal);
	return TimeStamp;
}
