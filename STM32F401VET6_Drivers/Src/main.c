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
	 * >>>>>> ADebug_vAll_GPIO_Ports();
	 * >>>>>> ADebug_vFlashingPins();
	 * >>>>>> void ADebug_vLED_Driver();
	 **************************************************************************/
		MRCC_vInitSystemClock(); //System Clock Start -->>>>>>>>>>>>>>>>>>>>>>>
	/*************************_Main_Body_Start_********************************/



	while(1)
	{

	}
	return 0;
}





/*	MRCC_vInitSystemClock();
	MRCC_vEnableBusClock(Bus_AHB1, PHB1_GPIOA);
	MGPIO_vSetPinMode(GPIOA_PORT, GPIO_PIN_1, OUTPUT_MODE);
	MGPIO_vSetPinOutputType(GPIOA_PORT, GPIO_PIN_1, OUTPUT_PUSH_PULL_TYPE);
	MGPIO_vSetPinOutputSpeed(GPIOA_PORT, GPIO_PIN_1, OUTPUT_LOW_SPEED);
	MGPIO_vWritePinData(GPIOA_PORT, GPIO_PIN_1, HIGH_STATE);*/
