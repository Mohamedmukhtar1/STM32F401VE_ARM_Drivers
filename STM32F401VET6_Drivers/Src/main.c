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
	MRCC_vEnableBusClock(Bus_AHB1, AHB1ENR_GPIOAEN);
	MRCC_vEnableBusClock(Bus_APB2, APB2ENR_SYSCFGEN);

	MGPIO_vSetPinMode(GPIOA_PORT, GPIO_PIN_0, OUTPUT_MODE);
	MGPIO_vSetPinOutputType(LED_ptr->LED_PORT, LED_ptr->LED_PIN, LED_ptr->LED_PinOutputType);
	MGPIO_vSetPinOutputSpeed(LED_ptr->LED_PORT, LED_ptr->LED_PIN, LED_ptr->LED_PinOutputSpeed);
	MGPIO_vSetPinPullType(LED_ptr->LED_PORT, LED_ptr->LED_PIN, LED_ptr->LED_PinPullType);

	MEXTI_vSelectPort(EXTI_PORT_A, EXTI_LINE_0);
	MEXTI_vEnableInterruptLine(EXTI_LINE_0);
	MEXTI_vSelectEventTrigger(EXTI_LINE_0, TRIGGER_RISING);
	/*****************************************************/
	MNVIC_vASetGroupSubgroupPriority(IRQn_EXTI0, 1, 0);
	MNVIC_vEnableInterruptRequest_IRQ(IRQn_EXTI0);
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
