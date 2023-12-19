#include "unity.h"
#include "MockFilter.h"
#include "Analog_Model.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_AnalogModel_GetChannel_should_ReturnLatestDataForChan0(void)
{
	AnalogModel_Init();

	Filter_AddVal_ExpectAndReturn(0x0000, 0x1234, 0x4321);
	AnalogModel_AddReading(0,0x1234);
	TEST_ASSERT_EQUAL_HEX16(0x4321, AnalogModel_GetChannel(0));
	TEST_ASSERT_EQUAL_HEX16(0, AnalogModel_GetChannel(3));
	TEST_ASSERT_EQUAL_HEX16(0, AnalogModel_GetChannel(4));

}
void test_AnalogModel_GetChannel_should_ReturnLatestDataForLastChan(void)
{
	AnalogModel_Init();

	Filter_AddVal_ExpectAndReturn(0x0000, 0x1234, 0x4321);
	AnalogModel_AddReading(5, 0x1234);

	TEST_ASSERT_EQUAL_HEX16(0, AnalogModel_GetChannel(0));
	TEST_ASSERT_EQUAL_HEX16(0, AnalogModel_GetChannel(4));
	TEST_ASSERT_EQUAL_HEX16(0x4321, AnalogModel_GetChannel(5));


}
void test_AnalogModel_GetChannel_shouldNotCareAboutStaleness(void)
{
	AnalogModel_Init();
	Filter_AddVal_ExpectAndReturn(0x0000,11, 0x4321);
	AnalogModel_AddReading(0,11);
	Filter_AddVal_ExpectAndReturn(0x0000, 22, 0x43FF);
	AnalogModel_AddReading(1,22);

	TEST_ASSERT_EQUAL_HEX16(0x4321, AnalogModel_GetChannel(0));
    TEST_ASSERT_EQUAL_HEX16(0x43FF, AnalogModel_GetChannel(1));
	TEST_ASSERT_EQUAL_HEX16(0, AnalogModel_GetChannel(2));

	Filter_AddVal_ExpectAndReturn(0x43FF,222, 0x43EE);
	AnalogModel_AddReading(1,222);
	Filter_AddVal_ExpectAndReturn(0x0000,333, 0x43AA);
    AnalogModel_AddReading(2,333);

    TEST_ASSERT_EQUAL_HEX16(0x4321, AnalogModel_GetChannel(0));
    TEST_ASSERT_EQUAL_HEX16(0x43EE, AnalogModel_GetChannel(1));
    TEST_ASSERT_EQUAL_HEX16(0x43AA, AnalogModel_GetChannel(2));
}
void test_AnalogModel_GetChannel_should_ReturnZeroWhenChannelIllegal(void)
{
    TEST_ASSERT_EQUAL_HEX16(0, AnalogModel_GetChannel(6));
}

void test_AnalogModel_GetChannel_should_ReturnZeroWhenNoValueCapturedYet(void)
{
	 AnalogModel_Init();
	 TEST_ASSERT_EQUAL_HEX16(0, AnalogModel_GetChannel(0));
	 TEST_ASSERT_EQUAL_HEX16(0, AnalogModel_GetChannel(4));
}
