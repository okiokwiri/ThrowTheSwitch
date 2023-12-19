#ifndef ANALOG_HARDWARE_H
#define ANALOG_HARDWARE_H

void AnalogHardware_Init(void);
STATUS_T AnalogHardware_IsReady(uint8_t Channel);
uint16_t AnalogHardware_GetReading(uint8_t Channel);
#endif // ANALOG_HARDWARE_H
