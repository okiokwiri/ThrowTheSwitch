#ifndef COMMANDHANDLERS_H
#define COMMANDHANDLERS_H
#include "CommandConductor.h"


void CommandHandlers_Init(void);
STATUS_T CommandHandlerVersion(MESSAGE_T* Msg);
STATUS_T CommandHandlerClock(MESSAGE_T* Msg);
STATUS_T CommandHandlerResults(MESSAGE_T* Msg);
STATUS_T CommandHandlerArm(MESSAGE_T* Msg);
STATUS_T CommandHandlerTrigger(MESSAGE_T* Msg);
#endif // COMMANDHANDLERS_H
