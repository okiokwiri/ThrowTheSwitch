#include "LED.h"
#include "Core.h"

#define LED_1 (18)
#define LED_2 (20)
#define LED_3 (21)
#define LED_4 (23)

#define LED_PORT 	LPC_GPIO1
#define LED_PINSEL   LPC_PINCON->PINSEL3

#define LED_PIN_BIT(bit) (0x3u << ((bit & 0x0F) << 1))

void LED_Init()
{
	LED_PINSEL = ~(BIT_TO_MASK(18)| BIT_TO_MASK(20) | BIT_TO_MASK(21) | BIT_TO_MASK(23));
	LED_PORT->FIODIR = (BIT_TO_MASK(18) | BIT_TO_MASK(20)  | BIT_TO_MASK(21) | BIT_TO_MASK(23));
	LED_PORT->FIOSET = (BIT_TO_MASK(18) | BIT_TO_MASK(20)  | BIT_TO_MASK(21) | BIT_TO_MASK(23));

}
