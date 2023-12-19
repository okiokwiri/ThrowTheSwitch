#include "Core.h"
#include "unity.h"
#include "LED.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_LED_Init_should_TurnOnLED_18_20_21_23(void)
{
    //
    // NOTE: Do not attempt to test main() in Main.c directly.
    //       See Lecture 9 for how to handle this special case.
    //
	//LED_Init_Expect();
	LPC_GPIO1->FIOSET = 0;
	LPC_GPIO1->FIOCLR = 0;
	LPC_GPIO1->FIODIR = 0;
	LPC_PINCON->PINSEL3 = 0xFFFFFFFF;
	LED_Init();
	TEST_ASSERT_EQUAL_HEX(0xFF4BFFFF,LPC_PINCON->PINSEL3);
	TEST_ASSERT_EQUAL_HEX(0x00B40000,LPC_GPIO1->FIODIR);
	TEST_ASSERT_EQUAL_HEX(0x00B40000,LPC_GPIO1->FIOSET);
	TEST_ASSERT_EQUAL_HEX(0,LPC_GPIO1->FIOCLR);
}
void test_LED_Toggle_should_ToggleTheCorrectOutput(void)
{
	TEST_IGNORE_MESSAGE("Implement LED_Toggle");
}
void test_LED_On_should_EnableTheCorrectOutput(void)
{
	TEST_IGNORE_MESSAGE("Implement LED_ON");
}
void test_LED_Off_should_DisableTheCorrectOutput(void)
{
	TEST_IGNORE_MESSAGE("Implement LED_Off");
}
