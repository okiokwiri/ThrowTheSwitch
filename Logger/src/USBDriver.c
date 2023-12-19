#include "USBDriver.h"
#include "Core.h"
#include "Buffer.h"
#include "serial_api.h"



static serial_t USBDriver_serial;
static uint8_t tx_data[USB_BUFFER_MAX];
static uint8_t rx_data[USB_BUFFER_MAX];
static BUFFER_T tx;
static BUFFER_T rx;

static BOOL initialized = FALSE;
void USBDriver_Init(void)
{
	serial_init(&USBDriver_serial, USBTX, USBRX );
	serial_clear(&USBDriver_serial);
	Buffer_Init(&tx, tx_data, USB_BUFFER_MAX);
	Buffer_Init(&rx, rx_data, USB_BUFFER_MAX);

	initialized = TRUE;
}
void USBDriver_Exec(void)
{
	uint8_t Val;
	while(serial_writable(&USBDriver_serial) && !Buffer_IsEmpty(&tx) && (STATUS_OK == Buffer_Get(&tx,&Val)))
	{
		serial_putc(&USBDriver_serial, Val);
	}
	while(serial_readable(&USBDriver_serial) && !Buffer_IsFull(&rx))
	{
		Val = serial_getc(&USBDriver_serial);
		Buffer_Put(&rx, Val);
	}
}
BOOL USBDriver_OkayToRead(void)
{
	return !Buffer_IsEmpty(&rx);
}
char USBDriver_GetChar(void)
{
	uint8_t Val;
	if(STATUS_OK == Buffer_Get(&tx,&Val))
			return (char)Val;
	else
		return 0x00;
}
BOOL USBDriver_PutChar(char data)
{
	 if (Buffer_IsFull(&tx))
	        return FALSE;

	    Buffer_Put(&tx, data);

	    return TRUE;
}
BOOL USBDriver_Connected(void)
{
	return initialized;
}
