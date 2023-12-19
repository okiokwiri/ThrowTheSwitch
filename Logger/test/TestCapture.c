#include "Core.h"
#include "unity.h"

#include "MockDigital.h"
#include "MockAnalog_Model.h"
#include "MockBuffer.h"
#include "Capture.h"

#define TestMaxLen		75
static uint8_t TestBuffer[TestMaxLen];
void setUp(void)
{
}

void tearDown(void)
{
}

void test_Capture_Exec_should_GrabTheLatestDigitalAndAnalogData(void)
{
		uint8_t i;
		uint8_t Len;
	    uint8_t ExpectedData[] = { 0x17,       //Digital
	                               0xC4, 0x0C, //Analog Header
	                               0x00, 0x00, //Analog Channel 0
	                               0x11, 0x01, //Analog Channel 1
	                               0x22, 0x02, //Analog Channel 2
	                               0x33, 0x03, //Analog Channel 3
	                               0x44, 0x04, //Analog Channel 4
	                               0x55, 0x05, //Analog Channel 5
	                             };

	    Digital_GetBits_ExpectAndReturn(0x17);
	    AnalogModel_GetChannel_ExpectAndReturn( 0, 0x0000 );
	    AnalogModel_GetChannel_ExpectAndReturn( 1, 0x1101 );
	    AnalogModel_GetChannel_ExpectAndReturn( 2, 0x2202 );
	    AnalogModel_GetChannel_ExpectAndReturn( 3, 0x3303 );
	    AnalogModel_GetChannel_ExpectAndReturn( 4, 0x4404 );
	    AnalogModel_GetChannel_ExpectAndReturn( 5, 0x5505 );

	    for(i=0; i<DIMENSION_OF(ExpectedData); i++)
	    {
	    	Buffer_Put_ExpectAndReturn(NULL, ExpectedData[i],STATUS_OK);
	    	Buffer_Put_IgnoreArg_Buffer();
	    }

	   Capture_Exec();

}
void test_Capture_GetResult_should_GrabTheLastDataFromTheBuffer(void)
{
		uint8_t i;
		uint8_t Len;
		uint8_t ExpectedData[] = { 0x17,       //Digital
		                               0xC4, 0x0C, //Analog Header
		                               0x00, 0x00, //Analog Channel 0
		                               0x11, 0x01, //Analog Channel 1
		                               0x22, 0x02, //Analog Channel 2
		                               0x33, 0x03, //Analog Channel 3
		                               0x44, 0x04, //Analog Channel 4
		                               0x55, 0x05, //Analog Channel 5
		                             };

		 for(i=0; i<DIMENSION_OF(ExpectedData); i++)
			    {
			    	Buffer_Get_ExpectAndReturn(NULL, &ExpectedData[i],STATUS_OK);
			    	Buffer_Get_IgnoreArg_Buffer();
			    }

		 TEST_ASSERT_EQUAL(STATUS_OK, Capture_GetResult(TestBuffer, &Len,TestMaxLen));
		 TEST_ASSERT_EQUAL_INT8(sizeof(ExpectedData), Len);
		 TEST_ASSERT_EQUAL_HEX8_ARRAY(ExpectedData, TestBuffer, sizeof(ExpectedData));
}
void test_Capture_GetResult_should_FailWhenNotEnoughData(void)
{
	uint8_t Len;

	Buffer_Get_IgnoreAndReturn(STATUS_NONE_YET);

	TEST_ASSERT_EQUAL(STATUS_NONE_YET, Capture_GetResult(TestBuffer, &Len, TestMaxLen));
}
void test_Capture_Exec_should_StopIfBufferIsFull(void)
{
	//STATUS_OVERFLOW
	Digital_GetBits_ExpectAndReturn(0x17);
	AnalogModel_GetChannel_ExpectAndReturn( 0, 0x0000 );
	Buffer_Put_ExpectAndReturn(NULL, 0x17, STATUS_OK);
	Buffer_Put_IgnoreArg_Buffer();
	Buffer_Put_ExpectAndReturn(NULL, 0xC4, STATUS_OK);
	Buffer_Put_IgnoreArg_Buffer();
	Buffer_Put_ExpectAndReturn(NULL, 0x0C, STATUS_OK);
	Buffer_Put_IgnoreArg_Buffer();
	Buffer_Put_ExpectAndReturn(NULL, 0x00, STATUS_OK);
	Buffer_Put_ExpectAndReturn(NULL, 0x00, STATUS_OVERFLOW);
	Buffer_Put_IgnoreArg_Buffer();

	Capture_Exec();



}
