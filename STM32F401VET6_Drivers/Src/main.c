/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Eng- Mohamed Mokhtar
 * @brief          : Main program body
 ******************************************************************************
 ******************************************************************************
 */

#include "main.h"
U8 Key_Flag =0;
U8 i=0;

int main(void)
{
	MRCC_vInitSystemClock();
	MSTK_Init(STK_CLK_SRC_HCLK_Div8);
	MRCC_vEnableBusClock(Bus_AHB1, PHB1_GPIOA);
	//HKEYPAD_vInitiate();

	//MGPIO_vSetPinMode(GPIOA_PORT, GPIO_PIN_0, OUTPUT_MODE);
	//MGPIO_vSetPinMode(GPIOA_PORT, GPIO_PIN_1, OUTPUT_MODE);
	//MGPIO_vSetPinOutputSpeed(GPIOA_PORT, GPIO_PIN_0, OUTPUT_LOW_SPEED);
	//MGPIO_vSetPinOutputSpeed(GPIOA_PORT, GPIO_PIN_1, OUTPUT_LOW_SPEED);
	//MGPIO_vSetPinOutputType(GPIOA_PORT, GPIO_PIN_0, OUTPUT_PUSH_PULL_TYPE);
	//MGPIO_vSetPinOutputType(GPIOA_PORT, GPIO_PIN_1, OUTPUT_PUSH_PULL_TYPE);

	while(1)
	{

	}
}

/*
 * 		Key_Flag = HKEYPAD_U8READ();
 *
 if(Key_Flag =='7')
		{
			MGPIO_vWritePinData(PHB1_GPIOA, GPIO_PIN_2, LOW_STATE);
			Key_Flag=0;
		}
		else if (Key_Flag =='8')
		{
			MGPIO_vWritePinData(PHB1_GPIOA, GPIO_PIN_2, HIGH_STATE);
			Key_Flag=0;
		}
		else{	}
 * */
