#include "Analog_Model.h"
#include "Analog_Hardware.h"
#include "Analog_Conductor.h"

void AnalogConductor_Init(void)
{
	AnalogModel_Init();
	AnalogHardware_Init();
}
void AnalogConductor_Exec(void)
{
	uint8_t i;
	uint16_t Value;

	//check up on the Analog Channels
	for(i=0; i<6;i++)
	{
		if(AnalogHardware_IsReady(i) == STATUS_OK)
		{

			Value = AnalogHardware_GetReading(i);
			AnalogModel_AddReading(i,Value);
		}
	}
}
