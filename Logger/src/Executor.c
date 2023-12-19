#include "Executor.h"
#include "LED.h"
#include <stdint.h>
void Executor_Init(void)
{

}

_Bool Executor_Exec(void)
{
	uint8_t bits = Digital_GetBits();
	if((bits & 0x03) != 0)
	{
		LED_Toggle(LED0);
	}
	return true;
}
