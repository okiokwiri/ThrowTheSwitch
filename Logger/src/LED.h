#ifndef LED_H
#define LED_H

#define LED_PIN_BIT(bit) (0x3u << ((bit & 0x0F) << 1))

void LED_Init(void);

typedef enum _LED_ID_T
{
	LED0 =0,
	LED1,
	LED2,
	LED3,
	NUM_LED
}LED_ID_T;

void LED_Toggle(LED_ID_T id);
void LED_On(void);
void LED_Off(void);

#endif //LED_H
