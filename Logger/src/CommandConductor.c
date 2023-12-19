#include "CommandConductor.h"
#include "Core.h"
#include "CommandHardware.h"
#include "CommandHandlers.h"


typedef STATUS_T (*COMMAND_HANDLER_T)(MESSAGE_T* Msg);

static const struct _COMMAND_HANDLERS
{
    char Cmd;
    COMMAND_HANDLER_T Func;
} CommandHandlers[] =
{
	{'C', CommandHandlerClock		},
    { 'V', CommandHandlerVersion    },
	{'R', CommandHandlerResults		},
	{'A', CommandHandlerArm},
	{'T', CommandHandlerTrigger}
};
void CommandConductor_Init(void)
{
	CommandHardware_Init();
	CommandHandlers_Init();

}
void CommandConductor_Exec(void)
{
	uint32_t i;
	MESSAGE_T msg;
	STATUS_T retval;
	CommandHardware_Exec();

	if(CommandHardware_CheckForMsg(&msg) == STATUS_OK)
	{
		retval = STATUS_UNKNOWN_CMD;
		for(i=0; i<DIMENSION_OF(CommandHandlers);i++)
		{
			if(CommandHandlers[i].Cmd == msg.Cmd)
			{
				retval = CommandHandlers[i].Func(&msg);
				break;
			}
		}
		//handle our response
		if (retval == STATUS_OK)
		   {
		       CommandHardware_SendResponse(&msg);
		    }
		      else
		       {
		            CommandHardware_SendError(&msg, retval);
		       }
	}
}
