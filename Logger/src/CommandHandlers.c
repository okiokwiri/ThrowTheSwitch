#include "CommandHandlers.h"
#include "Utils.h"
#include "Timer.h"
#include "Capture.h"
#include "Trigger.h"
STATUS_T CommandHandlerVersion(MESSAGE_T* Msg)
{
	return STATUS_OK;
}
STATUS_T CommandHandlerClock(MESSAGE_T* Msg)
{
	uint32_t timeStamp = 0x00000000;
	if(Msg->Len == 0)
	{
		timeStamp = Timer_GetStamp();
		Msg->Data[0] = UINT32_BYTE3(timeStamp);
		Msg->Data[1] = UINT32_BYTE2(timeStamp);
		Msg->Data[2] = UINT32_BYTE1(timeStamp);
		Msg->Data[3] = UINT32_BYTE0(timeStamp);
		Msg->Len = 4;
	}
	else
	{
		if(Msg->Len > 4)
			return STATUS_EXTRA_ARG;
		if((Msg->Len > 0) && (Msg->Len < 4))
			return STATUS_MISSING_ARG;
		timeStamp = BYTE3_TO_UINT32(Msg->Data[0]);
		timeStamp |= BYTE2_TO_UINT32(Msg->Data[1]);
		timeStamp |= BYTE1_TO_UINT32(Msg->Data[2]);
		timeStamp |= BYTE0_TO_UINT32(Msg->Data[3]);

		Timer_SetStamp(timeStamp);
	}
	return STATUS_OK;
}
STATUS_T CommandHandlerResults(MESSAGE_T* Msg)
{
	STATUS_T retval = STATUS_NONE_YET;
	if(Msg->Len > 0)
		return	STATUS_INVALID_ARG;
	retval =  Capture_GetResult((uint8_t*)( Msg->Data), (uint8_t*)(Msg->Len), COMMAND_MAX_LEN);
	return retval;
}
STATUS_T CommandHandlerArm(MESSAGE_T* Msg)
{
	STATUS_T retval = STATUS_UNKNOWN_ERR;
	if(Msg->Len > 0)
		return STATUS_INVALID_ARG;
	return retval;
}
STATUS_T CommandHandlerTrigger(MESSAGE_T* Msg)
{
	TRIGGER_T TriggerStyle = Msg->Data[0];
	uint32_t timestamp;
	if(Msg->Len < 1)
	{

		Msg->Len = 1;
		Msg->Data[0]= Trigger_GetStyle();
		return STATUS_OK;
	}
	switch (TriggerStyle)
	{
		case TRIGGER_NOW:
			if(Msg->Len != 1)
			{
				return STATUS_EXTRA_ARG;
			}

			return Trigger_Now();
		break;

		case TRIGGER_BIT_CHANGE:

			if(Msg->Len < 2)
			{
				return STATUS_MISSING_ARG;
			}
			if(Msg->Len > 2)
			{
				return STATUS_EXTRA_ARG;
			}
			else
			{
			return Trigger_OnBitChange(Msg->Data[1]);
			}
		break;

		case TRIGGER_BIT_STATE:
			if(Msg->Len < 3)
			{
				return STATUS_MISSING_ARG;
			}
			if(Msg->Len > 3)
			{
				return STATUS_EXTRA_ARG;
			}

			return Trigger_OnBitState(Msg->Data[1], Msg->Data[2]);
		break;
		case TRIGGER_SEQUENCE:
			if(Msg->Len < 3)
			{
				return STATUS_MISSING_ARG;
			}
			return Trigger_OnSequence(Msg->Data[1], (uint8_t *)(&Msg->Data[2]), Msg->Len - 2);
			break;
		case TRIGGER_TIMESTAMP:
			if(Msg->Len < 5)
			{
				return STATUS_MISSING_ARG;
			}
			if(Msg->Len > 5)
			{
				return STATUS_EXTRA_ARG;
			}
			timestamp  = BYTE3_TO_UINT32( Msg->Data[1] );
			timestamp |= BYTE2_TO_UINT32( Msg->Data[2] );
			timestamp |= BYTE1_TO_UINT32( Msg->Data[3] );
			timestamp |= BYTE0_TO_UINT32( Msg->Data[4] );

			return Trigger_OnTimeStamp(timestamp);
		default:
			return  STATUS_UNKNOWN_ERR;
	}

}
