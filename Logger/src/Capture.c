#include "Capture.h"
#include "Defs.h"
#include "Digital.h"
#include "Analog_Model.h"


STATUS_T Capture_GetResult(uint8_t* buffer, uint8_t* len, uint8_t maxLen)
{
	uint8_t i; //initialize index for the for loop for the Analog grabbing
	STATUS_T status;
	*len = ANALOG_NUM_CHANS * 2 + 2 + 1;

	for(i=0; i< *len; i++)
	{
		status = Buffer_Get(&CaptureBuffer, buffer++);
		if(status != STATUS_OK)
			return status;
	}

	return STATUS_OK;
}
void Capture_Exec()
{
	uint8_t i; //initialize index for the for loop for the Analog grabbing
	uint16_t data;

	Buffer_Put(&CaptureBuffer, Digital_GetBits());
	Buffer_Put(&CaptureBuffer, 0xC4);
	Buffer_Put(&CaptureBuffer,(uint8_t)(ANALOG_NUM_CHANS * 2));
		//capture the analog data
	for(i=0; i<ANALOG_NUM_CHANS;i++)
	{
		data = AnalogModel_GetChannel(i);
		Buffer_Put(&CaptureBuffer, (uint8_t)(data >> 8));
		Buffer_Put(&CaptureBuffer, (uint8_t)(data & 0x00FF));
	}
}
