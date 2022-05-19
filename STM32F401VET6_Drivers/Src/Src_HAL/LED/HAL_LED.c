/*
 * HAL_LED.c
 *
 *  Created on: May 19, 2022
 *      Author: Eng- Mohamed Mokhtar
 */

#include "..\Inc\Inc_HAL\LED\HAL_LED_Interface.h"

struct LED
{
	U8 LED_BUS		      ;
	U8 LED_PORT			  ;
	U8 LED_PIN			  ;
	U8 LED_PinOutputType  ;
	U8 LED_PinOutputSpeed ;
};

struct LED LED_0_;
struct LED LED_1_;
struct LED LED_2_;

LED_0_.LED_BUS = 1;

typedef struct
{
	U8 Led_BUS		      ;
	U8 Led_PORT			  ;
	U8 Led_PIN			  ;
	U8 Led_PinOutputType  ;
	U8 Led_PinOutputSpeed ;
}LED_SS;

LED_SS ALI;
//ALI.Led_BUS = 1;
//LED_0_.Led_BUS = Bus_AHB1;


void HLED_vInitLed(U8 LED_NAME)
{
	switch(LED_NAME)
	{
		case 0:
			MRCC_vEnableBusClock(Bus_AHB1, PHB1_GPIOA);
			MGPIO_vSetPinMode(GPIOA_PORT, GPIO_PIN_0, OUTPUT_MODE);
			MGPIO_vSetPinOutputType(GPIOA_PORT, GPIO_PIN_0, OUTPUT_PUSH_PULL_TYPE);
			MGPIO_vSetPinOutputSpeed(GPIOA_PORT, GPIO_PIN_0, OUTPUT_LOW_SPEED);
			MGPIO_vWritePinData(GPIOA_PORT, GPIO_PIN_0, HIGH_STATE);
			break;
		case 1:

		break;
		case 2:

		break;
		default:
		break;
	}
}
