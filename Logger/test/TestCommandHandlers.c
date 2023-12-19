#include "unity.h"
#include "MockTimer.h"
#include "MockCapture.h"
#include "CommandHandlers.h"
#include "MockTrigger.h"

static uint8_t Seq[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
void setUp(void)
{
}

void tearDown(void)
{
}

void test_CommandHandlerClock_should_GetTimeStamp_when_Empty(void)
{
	MESSAGE_T Msg;
	Msg.Cmd = 'C';
	Msg.Len = 0;

	Timer_GetStamp_ExpectAndReturn(0x12345678);


	TEST_ASSERT_EQUAL(STATUS_OK, CommandHandlerClock(&Msg));
	TEST_ASSERT_EQUAL_INT8(4, Msg.Len);
	TEST_ASSERT_EQUAL_HEX8(0x12, Msg.Data[0]);
	TEST_ASSERT_EQUAL_HEX8(0x34,Msg.Data[1]);
	TEST_ASSERT_EQUAL_HEX8(0x56,Msg.Data[2]);
	TEST_ASSERT_EQUAL_HEX8(0x78,Msg.Data[3]);

}
void test_CommandHandlerClock_should_setTimeStamp_when_FourBytesLong(void)
{
	MESSAGE_T Msg;
	Msg.Cmd = 'C';
	Msg.Len = 4;
	Msg.Data[0] = 0x11;
	Msg.Data[1]	= 0x23;
	Msg.Data[2] = 0x45;
	Msg.Data[3] = 0x67;

	Timer_SetStamp_Expect(0x67452311);
	TEST_ASSERT_EQUAL(STATUS_OK, CommandHandlerClock(&Msg));
	TEST_ASSERT_EQUAL_INT8( 4, Msg.Len );
	TEST_ASSERT_EQUAL_HEX8(	0x11, Msg.Data[0] );
	TEST_ASSERT_EQUAL_HEX8( 0x23, Msg.Data[1] );
	TEST_ASSERT_EQUAL_HEX8( 0x45, Msg.Data[2] );
	TEST_ASSERT_EQUAL_HEX8( 0x67, Msg.Data[3] );

}
void test_CommandHandlerClock_should_IgnoreUndersizedMessages(void)
{
	MESSAGE_T Msg;
	Msg.Cmd = 'C';
	Msg.Len = 3;

	TEST_ASSERT_EQUAL(STATUS_MISSING_ARG, CommandHandlerClock(&Msg));
}
void test_CommandHandlerClock_should_IgnoreOversizedMessages(void)
{
	MESSAGE_T Msg;
	Msg.Cmd = 'C';
	Msg.Len = 5;

	TEST_ASSERT_EQUAL(STATUS_EXTRA_ARG,CommandHandlerClock(&Msg));
}
void test_CommandHandlerResults_should_FillResults_when_CapturingResultsSucceeds(void)
{
    MESSAGE_T Msg;
    Msg.Cmd = 'R';
    Msg.Len = 0;

    uint8_t CapturedData[] = { 0x13, 0x24, 0x35, 0x46, 0x57, 0x68, 0x79 };
    uint8_t CapturedLen = sizeof( CapturedData );

    Capture_GetResult_ExpectAnyArgsAndReturn(STATUS_OK);
    Capture_GetResult_ReturnArrayThruPtr_buffer( CapturedData, CapturedLen );
    Capture_GetResult_ReturnThruPtr_len( &CapturedLen );

    TEST_ASSERT_EQUAL( STATUS_OK, CommandHandlerResults(&Msg) );
    TEST_ASSERT_EQUAL_INT8( CapturedLen, Msg.Len );
    TEST_ASSERT_EQUAL_HEX8_ARRAY( CapturedData, Msg.Data, CapturedLen );
}
void test_CommandHanlerArm_should_ReturnError_when_GivenInvalidData(void)
{
	MESSAGE_T Msg;
	Msg.Cmd = 'A';
	Msg.Len = 1;

	Msg.Data[0] = 'A';
	Msg.Data[1]	= 'B';

	TEST_ASSERT_EQUAL(STATUS_INVALID_ARG,CommandHandlerArm(&Msg));
}
void test_CommandHandlerTrigger_shouldReturnTriggerStyle_when_NotSuppliedStyle(void)
{
	MESSAGE_T Msg;
	Msg.Cmd = 'T';
	Msg.Len = 0;

	Trigger_GetStyle_ExpectAndReturn(TRIGGER_NOW);
	TEST_ASSERT_EQUAL( STATUS_OK, CommandHandlerTrigger(&Msg));
	TEST_ASSERT_EQUAL('T',Msg.Cmd);
	TEST_ASSERT_EQUAL_INT8(1, Msg.Len);
	TEST_ASSERT_EQUAL( TRIGGER_NOW, Msg.Data[0] );

}
void test_CommandHandlerTrigger_should_Trigger_Now_when_SuppliedWithValidStyle(void)
{
	MESSAGE_T Msg;
	Msg.Cmd = 'T';
	Msg.Len = 1;
	Msg.Data[0] = 0;

	 Trigger_Now_ExpectAndReturn(STATUS_OK);
	 TEST_ASSERT_EQUAL( STATUS_OK, CommandHandlerTrigger(&Msg));

}
void test_CommandHandler_should_ThrowError_Trigger_Now_is_supplied_WithInvalidData(void)
{
	MESSAGE_T Msg;
	Msg.Cmd = 'T';
	Msg.Len = 2;
	Msg.Data[0] = 0;
	Msg.Data[1] = 0x12;
	TEST_ASSERT_EQUAL( STATUS_EXTRA_ARG,CommandHandlerTrigger(&Msg));

}
void test_CommandHandlerTrigger_should_TriggerOnBitChange_when_Suppliedwith_ValidMask(void)
{
	MESSAGE_T Msg;
	Msg.Cmd = 'T';
	Msg.Len = 2;
	Msg.Data[0] = 1;
	Msg.Data[1] = 0x33;
	Trigger_OnBitChange_ExpectAndReturn(0x33, STATUS_OK);
	TEST_ASSERT_EQUAL(STATUS_OK, CommandHandlerTrigger(&Msg));
}
void test_CommandHandlerTrigger_should_TriggerOnBitState_whenSupplied_withValidMaskAndState(void)
{
	MESSAGE_T Msg;
	Msg.Cmd = 'T';
	Msg.Len = 3;
	Msg.Data[0] = 2;
	Msg.Data[1] = 0x33;
	Msg.Data[2] = 0x12;

	Trigger_OnBitState_ExpectAndReturn(0x33,0x12, STATUS_OK);
	TEST_ASSERT_EQUAL(STATUS_OK, CommandHandlerTrigger(&Msg));
}
void test_CommandHandlerTrigger_should_returnError_On_TriggerOnBitState_whenSupplied_with_InvalidData(void)
{
	MESSAGE_T Msg;
	Msg.Cmd = 'T';
	Msg.Len = 4;
	Msg.Data[0] = 2;
	Msg.Data[1] = 0x33;
	Msg.Data[2] = 0x12;
	Msg.Data[3] = 0x11;
	TEST_ASSERT_EQUAL(STATUS_EXTRA_ARG, CommandHandlerTrigger(&Msg));

	Msg.Len = 2;
	TEST_ASSERT_EQUAL(STATUS_MISSING_ARG, CommandHandlerTrigger(&Msg));


}
void test_CommandHandler_should_Trigger_OnBitsSequence_whenSupplied_withShortestSequence(void)
{
	MESSAGE_T Msg;
	Msg.Cmd = 'T';
	Msg.Len = 3;
	Msg.Data[0] = 3;
	Msg.Data[1] = 0x07;
	Msg.Data[2] = 1;
	Trigger_OnSequence_ExpectWithArrayAndReturn(0x07,Seq, 1,1, STATUS_OK);
	TEST_ASSERT_EQUAL(STATUS_OK, CommandHandlerTrigger(&Msg));
}
void test_CommandHandler_should_Trigger_OnBitSequence_whenSuppliedWith_LongestSequence(void)
{
	MESSAGE_T Msg;
	Msg.Cmd = 'T';
	Msg.Len = 10;
	Msg.Data[0] = 3;
	Msg.Data[1] = 0x07;
	Msg.Data[2] = 1;
	Msg.Data[3] = 2;
	Msg.Data[4] = 3;
	Msg.Data[5] = 4;
	Msg.Data[6] = 5;
	Msg.Data[7] = 6;
	Msg.Data[8] = 7;
	Msg.Data[9] = 8;

	Trigger_OnSequence_ExpectWithArrayAndReturn(0x07, Seq, 8,8, STATUS_OK);
	TEST_ASSERT_EQUAL(STATUS_OK, CommandHandlerTrigger(&Msg));

}
void test_CommandHandlerTrigger_should_ReturnErrors_when_TriggerOnSequenceAndNotCorrectBytes(void)
{
    MESSAGE_T Msg;
    Msg.Cmd = 'T';
    Msg.Len = 2;
    Msg.Data[0] = 3;
    Msg.Data[1] = 0x07;

    TEST_ASSERT_EQUAL( STATUS_MISSING_ARG, CommandHandlerTrigger(&Msg) );
}
void test_CommandHandlerTrigger_should_Trigger_when_TriggerOnTimestamp_WithValidData(void)
{
	MESSAGE_T Msg;
	Msg.Cmd = 'T';
	Msg.Len = 5;
	Msg.Data[0] = 4;
	Msg.Data[1] = 0x33;
	Msg.Data[2] = 0x44;
	Msg.Data[3] = 0x56;
	Msg.Data[4] = 0x99;

	Trigger_OnTimeStamp_ExpectAndReturn(0x99564433,STATUS_OK);
	TEST_ASSERT_EQUAL(STATUS_OK, CommandHandlerTrigger(&Msg));

}
void test_CommandHandlerTrigger_should_ReturnErrors_when_TriggerOnTimeButInvalidLength(void)
{
    MESSAGE_T Msg;
    Msg.Cmd = 'T';
    Msg.Len = 6;
    Msg.Data[0] = 4;
    Msg.Data[1] = 0x33;
    Msg.Data[2] = 0x55;
    Msg.Data[3] = 0x77;
    Msg.Data[4] = 0x99;
    Msg.Data[5] = 0xBB;

    TEST_ASSERT_EQUAL( STATUS_EXTRA_ARG, CommandHandlerTrigger(&Msg) );

    Msg.Len = 4;

    TEST_ASSERT_EQUAL( STATUS_MISSING_ARG, CommandHandlerTrigger(&Msg) );
}


