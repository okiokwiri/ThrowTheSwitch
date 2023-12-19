#ifndef ANALOG_MODEL_H
#define ANALOG_MODEL_H
#include "Defs.h"



void AnalogModel_Init(void);

uint16_t AnalogModel_GetChannel(uint8_t channel);

void AnalogModel_AddReading(uint8_t Channel, uint16_t Reading);
#endif // ANALOG_MODEL_H
