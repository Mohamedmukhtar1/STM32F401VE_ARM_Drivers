/*
 * HAL_LED.c
 *
 *  Created on: May 19, 2022
 *      Author: Eng- Mohamed Mokhtar
 */

#include "..\Inc\Inc_HAL\LED\HAL_LED_Interface.h"

LED_Stag LED_0_;
LED_Stag LED_1_;
LED_Stag LED_2_;

//LED_0_.Led_BUS = Bus_AHB1;

void HLED_vConfigLEDs(void)
{
	/*Each LED must be configuered here first with its elements*/
	LED_0_.LED_PORT           = PHB1_GPIOA;
	LED_0_.LED_PIN            = GPIO_PIN_0;
	LED_0_.LED_PinOutputType  = OUTPUT_PUSH_PULL_TYPE;
	LED_0_.LED_PinOutputSpeed = OUTPUT_LOW_SPEED;

	LED_1_.LED_PORT           = PHB1_GPIOA;
	LED_1_.LED_PIN            = GPIO_PIN_1;
	LED_1_.LED_PinOutputType  = OUTPUT_PUSH_PULL_TYPE;
	LED_1_.LED_PinOutputSpeed = OUTPUT_LOW_SPEED;

	LED_1_.LED_PORT           = PHB1_GPIOA;
	LED_1_.LED_PIN            = GPIO_PIN_2;
	LED_1_.LED_PinOutputType  = OUTPUT_PUSH_PULL_TYPE;
	LED_1_.LED_PinOutputSpeed = OUTPUT_LOW_SPEED;
}

void HLED_vInitLed(LED_Stag *LED_ptr)
{
	MRCC_vEnableBusClock(Bus_AHB1, LED_ptr->LED_PORT);
	MGPIO_vSetPinMode(LED_ptr->LED_PORT, LED_ptr->LED_PIN, OUTPUT_MODE);
	MGPIO_vSetPinOutputType(LED_ptr->LED_PORT, LED_ptr->LED_PIN, LED_ptr->LED_PinOutputType);
	MGPIO_vSetPinOutputSpeed(LED_ptr->LED_PORT, LED_ptr->LED_PIN, LED_ptr->LED_PinOutputSpeed);
}

void HLED_vStateControl(LED_Stag *LED_ptr, U8 LED_State)
{
	MGPIO_vWritePinData(LED_ptr->LED_PORT, LED_ptr->LED_PIN, LED_State);
}

void HLED_vTOGGEL(LED_Stag *LED_ptr)
{
	MGPIO_vToggle_Pin(LED_ptr->LED_PORT, LED_ptr->LED_PIN);
}
