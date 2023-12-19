#include "Filter.h"

uint16_t Filter_AddVal(uint16_t PrevVal, uint16_t NewVal)
{
	uint16_t filteredOutput;
	if(PrevVal == NewVal)
	{
		filteredOutput = PrevVal;
	}
	else
	{
	filteredOutput =((3*PrevVal)+NewVal + 2)/4;
	}
	return filteredOutput;
}
