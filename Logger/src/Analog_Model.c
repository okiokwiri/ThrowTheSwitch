#include "Analog_Model.h"

static uint16_t AnalogValues[6];
void AnalogModel_Init(void)
{

	int i;
	for(i=0;i<6;i++)
		AnalogValues[i] = 0;
}

uint16_t AnalogModel_GetChannel(uint8_t channel)
{
	if (channel<6)

		return AnalogValues[channel];
	else
		return 0;

}
void AnalogModel_AddReading(uint8_t Channel, uint16_t Reading)
{
	if(Channel < 6)
		AnalogValues[Channel]= Filter_AddVal(AnalogValues[Channel],Reading);
}
