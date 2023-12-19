#include "CommandHardware.h"
#include "CommandConductor.h"
#include "USBDriver.h"
#include "Parser.h"
#include "Packer.h"
#include "Utils.h"
STATIC char DataOut[USB_MAX_BUFFER_LENGTH];
void CommandHardware_Init(void)
{}
void CommandHardware_Exec(void)
{}
STATUS_T CommandHardware_CheckForMsg(MESSAGE_T* message)
{
	if(USBDriver_OkayToRead())
	{
		char byte = USBDriver_GetChar();
		char* ParsedPacket = Parser_AddChar(byte);
		if (ParsedPacket != NULL)
		{
			message->Cmd = ParsedPacket[1];
			message->Len = (ParsedPacket[2] - '0');
			HexToBin(&ParsedPacket[3],message->Data,message->Len);
			return STATUS_OK;
		}
	}
	return STATUS_NONE_YET;
}
STATUS_T CommandHardware_SendResponse(MESSAGE_T* msg)
{
	char* PacketOut;
	BinToHex(msg->Data, DataOut, msg->Len);
	PacketOut = Packer_AddMsg(msg->Cmd,DataOut,msg->Len);
	if(PacketOut == NULL)
		return STATUS_BAD_MSG;

	while(*PacketOut)
	{
		 if(!USBDriver_PutChar(*PacketOut++))
		 {
			 return STATUS_OVERFLOW;
		 }
	}
	return STATUS_OK;
}
STATUS_T CommandHardware_SendError(MESSAGE_T* msg, STATUS_T Error)
{
	msg->Cmd 	= 'E';
	msg->Data[0]= Error;
	msg->Len 	= 1;
	return CommandHardware_SendResponse(msg);
}
