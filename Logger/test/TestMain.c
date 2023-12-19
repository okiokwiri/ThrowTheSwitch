
#include "unity.h"
#include "MockExecutor.h"
#include "MockTimer.h"
#include "Main.h"
#include <stdbool.h>

void setUp(void)
{
}

void tearDown(void)
{
}

void test_Main_Should_InitializeTheDriversThenCallMainLoop(void)
{
    //
    // NOTE: Do not attempt to test main() in Main.c directly.
    //       See Lecture 9 for how to handle this special case.
    //
	Timer_GetStamp_IgnoreAndReturn(0);
	Timer_WaitRemainder_IgnoreAndReturn(0);
	Executor_Init_Expect();

	Executor_Exec_ExpectAndReturn(true);
	Executor_Exec_ExpectAndReturn(true);
	Executor_Exec_ExpectAndReturn(false);

    TEST_ASSERT_EQUAL(0,TestableMain());
}
void test_Main_Should_ExecuteTheMainLoopAtAPeriodicRate(void)
{
	Executor_Init_Expect();
	Timer_GetStamp_ExpectAndReturn(0);

	Executor_Exec_ExpectAndReturn(true);
	Timer_WaitRemainder_ExpectAndReturn(0,50,50);
	Executor_Exec_ExpectAndReturn(true);
	Timer_WaitRemainder_ExpectAndReturn(50,50,101);
	Executor_Exec_ExpectAndReturn(false);

	TEST_ASSERT_EQUAL(0,TestableMain());


}
