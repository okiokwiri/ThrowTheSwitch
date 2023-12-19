#ifndef USBDRIVER_H
#define USBDRIVER_H
#include "CommandConductor.h"
#include "PinNames.h"


#define USB_BUFFER_MAX (75)
void USBDriver_Init(void);
void USBDriver_Exec(void);
BOOL USBDriver_OkayToRead(void);
char USBDriver_GetChar(void);
BOOL USBDriver_PutChar(char data);
BOOL USBDriver_Connected(void);

#endif // USBDRIVER_H
