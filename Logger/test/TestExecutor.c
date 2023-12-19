#include "unity.h"
#include "MockLED.h"
#include "MockAnalog_Conductor.h"
#include "Executor.h"
#include "MockDigital.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_Executor_Init_should_InitializeAllSubsystems(void)
{
	LED_Init_Expect();
	//LED_Init_CMockExpect();
	Digital_Init_Expect();

	Executor_Init();

}
void test_Executor_Exec_should_ToggleLed0_when_Digital0IsHigh(void)
{
	Digital_GetBits_ExpectAndReturn(0x01);
	LED_Toggle_Expect(LED0);

	Executor_Exec();
}
void test_Executor_Exec_should_ToggleLed0_when_Digital1isHigh(void)
{
	Digital_GetBits_ExpectAndReturn(0x02);
	LED_Toggle_Expect(LED0);

	Executor_Exec();
}
void test_Executor_Exec_should_ToggleLed0_when_Digital0and1areHigh(void)
{
	Digital_GetBits_ExpectAndReturn(0x03);
	LED_Toggle_Expect(LED0);

	Executor_Exec();
}


