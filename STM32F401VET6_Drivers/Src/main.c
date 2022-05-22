/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Eng- Mohamed Mokhtar
 * @brief          : Main program body
 ******************************************************************************
 ******************************************************************************
 */

#include "main.h"

int main(void)
{
	/**************************************************************************
	 * ****************************_Debug_Section_*****************************
	 * >>>>>> ADebug_All_GPIO_Ports();
	 * >>>>>>
	 **************************************************************************/
		MRCC_vInitSystemClock(); //System Clock Start -->>>>>>>>>>>>>>>>>>>>>>>
	/*************************_Main_Body_Start_********************************/

	/*
	HLED_vConfigLEDs(LED_1_);
	HLED_vInitLED(LED_1_);
	HLED_vLEDStateControl(LED_1_, LED_OFF);
	Delay_vMilliSecond16MHzoscillator(5000);
	HLED_vLEDStateControl(LED_1_, LED_ON);
	Delay_vMilliSecond16MHzoscillator(5000);*/
		MRCC_vEnableBusClock(Bus_AHB1, PHB1_GPIOA);
		MGPIO_vSetPinMode(GPIOA_PORT, GPIO_PIN_0, OUTPUT_MODE);
		MGPIO_vSetPinOutputType(GPIOA_PORT, GPIO_PIN_0, OUTPUT_PUSH_PULL_TYPE);
		MGPIO_vSetPinOutputSpeed(GPIOA_PORT, GPIO_PIN_0, OUTPUT_LOW_SPEED);
		MRCC_vEnableBusClock(Bus_AHB1, PHB1_GPIOA);
		MGPIO_vSetPinMode(GPIOA_PORT, GPIO_PIN_1, OUTPUT_MODE);
		MGPIO_vSetPinOutputType(GPIOA_PORT, GPIO_PIN_1, OUTPUT_PUSH_PULL_TYPE);
		MGPIO_vSetPinOutputSpeed(GPIOA_PORT, GPIO_PIN_1, OUTPUT_LOW_SPEED);
		MRCC_vEnableBusClock(Bus_AHB1, PHB1_GPIOA);
		MGPIO_vSetPinMode(GPIOA_PORT, GPIO_PIN_2, OUTPUT_MODE);
		MGPIO_vSetPinOutputType(GPIOA_PORT, GPIO_PIN_2, OUTPUT_PUSH_PULL_TYPE);
		MGPIO_vSetPinOutputSpeed(GPIOA_PORT, GPIO_PIN_2, OUTPUT_LOW_SPEED);

	while(1)
	{
		MGPIO_vWritePinData(GPIOA_PORT, GPIO_PIN_0, HIGH_STATE);
		Delay_vMilliSecond16MHzoscillator(1000);
		MGPIO_vWritePinData(GPIOA_PORT, GPIO_PIN_1, HIGH_STATE);
		Delay_vMilliSecond16MHzoscillator(1000);
		MGPIO_vWritePinData(GPIOA_PORT, GPIO_PIN_2, HIGH_STATE);
		Delay_vMilliSecond16MHzoscillator(1000);
		MGPIO_vWritePinData(GPIOA_PORT, GPIO_PIN_0, LOW_STATE);
		Delay_vMilliSecond16MHzoscillator(1000);
		MGPIO_vWritePinData(GPIOA_PORT, GPIO_PIN_1, LOW_STATE);
		Delay_vMilliSecond16MHzoscillator(1000);
		MGPIO_vWritePinData(GPIOA_PORT, GPIO_PIN_2, LOW_STATE);
		Delay_vMilliSecond16MHzoscillator(1000);
	}
	return 0;
}





/*	MRCC_vInitSystemClock();
	MRCC_vEnableBusClock(Bus_AHB1, PHB1_GPIOA);
	MGPIO_vSetPinMode(GPIOA_PORT, GPIO_PIN_1, OUTPUT_MODE);
	MGPIO_vSetPinOutputType(GPIOA_PORT, GPIO_PIN_1, OUTPUT_PUSH_PULL_TYPE);
	MGPIO_vSetPinOutputSpeed(GPIOA_PORT, GPIO_PIN_1, OUTPUT_LOW_SPEED);
	MGPIO_vWritePinData(GPIOA_PORT, GPIO_PIN_1, HIGH_STATE);*/
