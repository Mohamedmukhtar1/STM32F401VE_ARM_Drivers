/*
 * HAL_LED.c
 *
 *  Created on: May 19, 2022
 *      Author: Eng- Mohamed Mokhtar
 */

#include "HAL_LED_Interface.h"

/**********_Hardware_LED_x_***********/
LED_Stag LEDs_0_;
LED_Stag LEDs_1_;
LED_Stag LEDs_2_;
/************************************/

void HLED_vConfigLEDs(U8 LED_Name)
{
	/*Each LED must be configuered here first with its elements*/
	switch(LED_Name)
	{
	case LED_0_:
		LEDs_0_.LED_PORT           = PHB1_GPIOA;
		LEDs_0_.LED_PIN            = GPIO_PIN_0;
		LEDs_0_.LED_PinOutputType  = OUTPUT_PUSH_PULL_TYPE;
		LEDs_0_.LED_PinOutputSpeed = OUTPUT_LOW_SPEED;
		break;
	case LED_1_:
		LEDs_1_.LED_PORT           = PHB1_GPIOA;
		LEDs_1_.LED_PIN            = GPIO_PIN_1;
		LEDs_1_.LED_PinOutputType  = OUTPUT_PUSH_PULL_TYPE;
		LEDs_1_.LED_PinOutputSpeed = OUTPUT_LOW_SPEED;
		break;
	case LED_2_:
		LEDs_2_.LED_PORT           = PHB1_GPIOA;
		LEDs_2_.LED_PIN            = GPIO_PIN_2;
		LEDs_2_.LED_PinOutputType  = OUTPUT_PUSH_PULL_TYPE;
		LEDs_2_.LED_PinOutputSpeed = OUTPUT_LOW_SPEED;
		break;
	default:
	break;
	}
}

void HLED_vInitLED(U8 LED_Name)
{
	LED_Stag *LED_ptr = NULL;
	switch(LED_Name)
	{
	case LED_0_:
		LED_ptr = &LEDs_0_;
		break;
	case LED_1_:
		LED_ptr = &LEDs_1_;
		break;
	case LED_2_:
		LED_ptr = &LEDs_2_;
		break;
	default:
	break;
	}
	MRCC_vEnableBusClock(Bus_AHB1, LED_ptr->LED_PORT);
	MGPIO_vSetPinMode(LED_ptr->LED_PORT, LED_ptr->LED_PIN, OUTPUT_MODE);
	MGPIO_vSetPinOutputType(LED_ptr->LED_PORT, LED_ptr->LED_PIN, LED_ptr->LED_PinOutputType);
	MGPIO_vSetPinOutputSpeed(LED_ptr->LED_PORT, LED_ptr->LED_PIN, LED_ptr->LED_PinOutputSpeed);
}

void HLED_vLEDStateControl(U8 LED_Name, U8 LED_State)
{
	LED_Stag *LED_ptr = NULL;
	switch(LED_Name)
	{
	case LED_0_:
		LED_ptr = &LEDs_0_;
		break;
	case LED_1_:
		LED_ptr = &LEDs_1_;
		break;
	case LED_2_:
		LED_ptr = &LEDs_2_;
		break;
	default:
	break;
	}
	MGPIO_vWritePinData(LED_ptr->LED_PORT, LED_ptr->LED_PIN, LED_State);
}

void HLED_vToggelLED(U8 LED_Name)
{
	LED_Stag *LED_ptr = NULL;
	switch(LED_Name)
	{
	case LED_0_:
		LED_ptr = &LEDs_0_;
		break;
	case LED_1_:
		LED_ptr = &LEDs_1_;
		break;
	case LED_2_:
		LED_ptr = &LEDs_2_;
		break;
	default:
	break;
	}
	MGPIO_vToggle_Pin(LED_ptr->LED_PORT, LED_ptr->LED_PIN);
}
