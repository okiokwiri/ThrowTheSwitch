#include "unity.h"
#include "core.h"
#include "Timer.h"

extern uint32_t TestCounter;

void setUp(void)
{
}

void tearDown(void)
{
}

void test_Timer_WaitReminder_shouldReturnNewTimeStamp()
{
	TEST_ASSERT_EQUAL(151, Timer_WaitRemainder(100, 50));
    TEST_ASSERT_EQUAL(141, Timer_WaitRemainder(90, 50));
}
void test_Timer_WaitReminder_shouldHandleRollOverInCounter()
{
	TestCounter = 0;
	Timer_SetStamp(0xFFFFFFF0);
	Timer_WaitRemainder(0xFFFFFF00, 256);
	TEST_ASSERT_EQUAL(16, TestCounter);

}
void test_Timer_WaitReminder_shouldHandleRollOverInCurrentStamp()
{
	TestCounter = 0;
	Timer_SetStamp(64);
	TEST_ASSERT_EQUAL(192, TestCounter);

}
