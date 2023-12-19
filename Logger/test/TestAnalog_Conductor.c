#include "unity.h"

#include "MockAnalog_Model.h"
#include "MockAnalog_Hardware.h"
#include "Analog_Conductor.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_AnalogConductor_Init_should_InitSubmodules(void)
{
	AnalogModel_Init_Expect();
	AnalogHardware_Init_Expect();


	AnalogConductor_Init();
}
void test_AnalogConductor_Exec_should_NotUpdateTheModelIfNoChannelIsReady(void)
{
	AnalogHardware_IsReady_ExpectAndReturn(0,STATUS_NONE_YET);
	AnalogHardware_IsReady_ExpectAndReturn(1,STATUS_NONE_YET);
	AnalogHardware_IsReady_ExpectAndReturn(2,STATUS_NONE_YET);
	AnalogHardware_IsReady_ExpectAndReturn(3,STATUS_NONE_YET);
	AnalogHardware_IsReady_ExpectAndReturn(4,STATUS_NONE_YET);
	AnalogHardware_IsReady_ExpectAndReturn(5,STATUS_NONE_YET);


	AnalogConductor_Exec();
}
void test_AnalogConductor_Exec_should_UpdateTheModelForChannelsWithData(void)
{
	AnalogHardware_IsReady_ExpectAndReturn(0,STATUS_OK);
	AnalogHardware_GetReading_ExpectAndReturn(0,0x1234);
	AnalogModel_AddReading_Expect(0,0x1234);
	AnalogHardware_IsReady_ExpectAndReturn(1,STATUS_NONE_YET);
	AnalogHardware_IsReady_ExpectAndReturn(2,STATUS_NONE_YET);
	AnalogHardware_IsReady_ExpectAndReturn(3,STATUS_NONE_YET);
	AnalogHardware_IsReady_ExpectAndReturn(4,STATUS_NONE_YET);
	AnalogHardware_IsReady_ExpectAndReturn(5,STATUS_NONE_YET);


	AnalogConductor_Exec();
}

