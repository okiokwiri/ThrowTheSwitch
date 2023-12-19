#ifndef COMMANDHARDWARE_H
#define COMMANDHARDWARE_H

#include "CommandConductor.h"

void CommandHardware_Init(void);
void CommandHardware_Exec(void);
STATUS_T CommandHardware_CheckForMsg(MESSAGE_T* msg);
STATUS_T CommandHardware_SendResponse(MESSAGE_T* msg);
STATUS_T CommandHardware_SendError(MESSAGE_T* msg, STATUS_T Error);
#endif // COMMANDHARDWARE_H
