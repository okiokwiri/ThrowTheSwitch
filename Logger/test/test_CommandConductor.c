#include "unity.h"
#include "MockCommandHardware.h"
#include "MockCommandHandlers.h"
#include "CommandConductor.h"

static MESSAGE_T msg;
static MESSAGE_T rsp;

void setUp(void)
{
}
void tearDown(void)
{
}
void test_CommandConductor_Init_ShouldInitializeSubModules(void)
{
    CommandHardware_Init_Expect();
    CommandHandlers_Init_Expect();

    CommandConductor_Init();
}
void test_CommandConductor_Exec_should_CheckForMessages_And_DoNothingIfNone(void)
{
	CommandHardware_Exec_Expect();
	CommandHardware_CheckForMsg_ExpectAnyArgsAndReturn( STATUS_NONE_YET );

	CommandConductor_Exec();

}
void test_CommandConductor_Exec_should_CheckForMessages_AndDoNothingIfUnkown(void)
{
	msg.Cmd = 'U'; //unknown command
	CommandHardware_Exec_Expect();
	CommandHardware_CheckForMsg_ExpectAnyArgsAndReturn( STATUS_OK );
	CommandHardware_CheckForMsg_ReturnThruPtr_msg (&msg);
	CommandHardware_SendError_ExpectAndReturn(&msg, STATUS_UNKNOWN_CMD, STATUS_OK);
	CommandConductor_Exec();
}
void test_CommandConductor_Exec_should_CheckForMessages_AndProcessIfVersionAndWriteResposne(void)
{
	msg.Cmd = 'V'; //Version request
	rsp.Cmd = 'v'; // show response to version required response

	CommandHardware_Exec_Expect();
	CommandHardware_CheckForMsg_ExpectAnyArgsAndReturn( STATUS_OK );
	CommandHardware_CheckForMsg_ReturnThruPtr_msg (&msg);
	CommandHandlerVersion_ExpectAndReturn(&msg, STATUS_OK);
	CommandHandlerVersion_ReturnThruPtr_Msg(&rsp);
	CommandHardware_SendResponse_ExpectAndReturn(&rsp, STATUS_OK);

	CommandConductor_Exec();

}
void test_CommandConductor_Exec_should_CheckForMessages_AndProcessIfVersionAndHandleErrors(void)
{
	msg.Cmd = 'V'; //version request
	rsp.Cmd = 'v'; //something different to show that it is a response

	CommandHardware_Exec_Expect();
	CommandHardware_CheckForMsg_ExpectAnyArgsAndReturn( STATUS_OK );
	CommandHardware_CheckForMsg_ReturnThruPtr_msg	(&msg);
	CommandHandlerVersion_ExpectAndReturn( &msg, STATUS_EXTRA_ARG );
	CommandHandlerVersion_ReturnThruPtr_Msg( &rsp );
	CommandHardware_SendError_ExpectAndReturn(&rsp, STATUS_EXTRA_ARG, STATUS_OK);

	CommandConductor_Exec();
}
void test_CommandConductor_Exec_should_CheckForMessages_AndProcessIfClockAndWriteResponse(void)
{
	msg.Cmd = 'C'; //clock request command
	rsp.Cmd = 'c'; //response

	CommandHardware_Exec_Expect();
	CommandHardware_CheckForMsg_ExpectAnyArgsAndReturn( STATUS_OK );
	CommandHardware_CheckForMsg_ReturnThruPtr_msg(&msg);
	CommandHandlerClock_ExpectAndReturn(&msg, STATUS_OK);
	CommandHandlerClock_ReturnThruPtr_Msg(&rsp);
	CommandHardware_SendResponse_ExpectAndReturn(&rsp, STATUS_OK);

	CommandConductor_Exec();
}
void test_CommandConductor_Exec_should_CheckForMessages_AndProcessIfClockAndHandleErrors(void)
{
	msg.Cmd = 'C'; //clock request command
	rsp.Cmd = 'c'; //response

	CommandHardware_Exec_Expect();
	CommandHardware_CheckForMsg_ExpectAnyArgsAndReturn( STATUS_OK );
	CommandHardware_CheckForMsg_ReturnThruPtr_msg(&msg);
	CommandHandlerClock_ExpectAndReturn(&msg, STATUS_EXTRA_ARG);
	CommandHandlerClock_ReturnThruPtr_Msg(&rsp);
	CommandHardware_SendError_ExpectAndReturn(&rsp, STATUS_EXTRA_ARG, STATUS_OK);

	CommandConductor_Exec();
}
void test_CommandConductor_Exec_should_CheckForMessages_AndProcessIfResultsAndWriteResponse(void)
{
	msg.Cmd = 'R'; //Results request Command
	rsp.Cmd = 'r'; //just to show the response is different

	CommandHardware_Exec_Expect();
	CommandHardware_CheckForMsg_ExpectAnyArgsAndReturn(	STATUS_OK	);
	CommandHardware_CheckForMsg_ReturnThruPtr_msg(&msg);
	CommandHandlerResults_ExpectAndReturn(&msg, STATUS_OK);
	CommandHandlerResults_ReturnThruPtr_Msg(&rsp);
	CommandHardware_SendResponse_ExpectAndReturn(&rsp, STATUS_OK);

	CommandConductor_Exec();
}
void test_CommandConductor_Exec_should_CheckForMessages_AndProcessIfResultsAndHandleErrors(void)
{
	msg.Cmd = 'R';		//Results request command
	rsp.Cmd = 'r';		//just to show the response is different

	CommandHardware_Exec_Expect();
	CommandHardware_CheckForMsg_ExpectAnyArgsAndReturn(STATUS_OK);
	CommandHardware_CheckForMsg_ReturnThruPtr_msg(&msg);
	CommandHandlerResults_ExpectAndReturn(&msg, STATUS_EXTRA_ARG);
	CommandHandlerResults_ReturnThruPtr_Msg(&rsp);
	CommandHardware_SendError_ExpectAndReturn(&rsp, STATUS_EXTRA_ARG, STATUS_OK);

	CommandConductor_Exec();

}
void test_CommandConductor_Exec_should_CheckForMessages_AndProcessIfArmAndWriteResponse(void)
{
	msg.Cmd = 'A'; // Arm Command
	rsp.Cmd = 'a';

	CommandHardware_Exec_Expect();
	CommandHardware_CheckForMsg_ExpectAnyArgsAndReturn(STATUS_OK);
	CommandHardware_CheckForMsg_ReturnThruPtr_msg(&msg);
	CommandHandlerArm_ExpectAndReturn(&msg, STATUS_OK);
	CommandHandlerArm_ReturnThruPtr_Msg(&rsp);
	CommandHardware_SendResponse_ExpectAndReturn(&rsp, STATUS_OK);

	CommandConductor_Exec();
}
void test_CommandConductor_Exec_should_CheckForMessages_AndProcessIfTriggerAndWriteResponse(void)
{
	msg.Cmd = 'T'; // Arm Command
	rsp.Cmd = 't';

	CommandHardware_Exec_Expect();
	CommandHardware_CheckForMsg_ExpectAnyArgsAndReturn(STATUS_OK);
	CommandHardware_CheckForMsg_ReturnThruPtr_msg(&msg);
	CommandHandlerTrigger_ExpectAndReturn(&msg, STATUS_OK);
	CommandHandlerTrigger_ReturnThruPtr_Msg(&rsp);
	CommandHardware_SendResponse_ExpectAndReturn(&rsp, STATUS_OK);

	CommandConductor_Exec();
}
