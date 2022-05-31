/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Eng- Mohamed Mokhtar
 * @brief          : Main program body
 ******************************************************************************
 ******************************************************************************
 */

#include "main.h"

U8 Flag =0;

int main(void)
{
	/**************************************************************************
	 * ****************************_Debug_Section_*****************************
	 * >>>>>> ADebug_vAll_GPIO_Ports();
	 * >>>>>> ADebug_vFlashingPins();
	 * >>>>>> ADebug_vLED_Driver();
	 **************************************************************************/
	/*========================================================================*/
	MRCC_vInitSystemClock(); /*__System Clock Start -->>>>>>>>>>>>>>>>>>>>
	 >==================_BusClock_Peripheral_Enable_=========================>*/
	MRCC_vEnableBusClock(Bus_AHB1, AHB1ENR_GPIOAEN);
	MRCC_vEnableBusClock(Bus_APB2, APB2ENR_SYSCFGEN);

	/*************************_Main_Body_Start_********************************/
	HLED_vInitLED(LED_2_);

	/*****************************************************/
	//MGPIO_vSetPinAltFun(GPIOA_PORT, GPIO_PIN_0, ALTFUN_0);
	MGPIO_vSetPinMode(GPIOA_PORT, GPIO_PIN_0, INPUT_MODE);
	MGPIO_vSetPinPullType(GPIOA_PORT, GPIO_PIN_0, PULL_OFF_STATE);

	MGPIO_vSetPinMode(GPIOA_PORT, GPIO_PIN_4, OUTPUT_MODE);
	MGPIO_vSetPinOutputType(GPIOA_PORT, GPIO_PIN_4,OUTPUT_PUSH_PULL_TYPE);
	MGPIO_vSetPinOutputSpeed(GPIOA_PORT, GPIO_PIN_4, OUTPUT_LOW_SPEED);
	MGPIO_vSetPinPullType(GPIOA_PORT, GPIO_PIN_4, PULL_OFF_STATE);

	/*****************************************************/
	MNVIC_vEnableInterruptRequest_IRQ(IRQn_EXTI0);
	MNVIC_vASetGroupSubgroupPriority(IRQn_EXTI0, 0, 0);

	/*****************************************************/
	MEXTI_vSelectPort(EXTI_PORT_A, EXTI_LINE_0);
	MEXTI_vEnableInterruptLine(EXTI_LINE_0);
	MEXTI_vSelectEventTrigger(EXTI_LINE_0, TRIGGER_RISING);

	/*****************************************************/
	MEXTI_vSetCallBack(EXTI_0, EXTI_LINE_1);

	while(1)
	{

		HLED_vToggelLED(LED_2_);
		Delay_vMilliSecond16MHzoscillator(500);


	}
	return 0;
}


void EXTI_0(void)
{
   MGPIO_vWritePinData(GPIOA_PORT, GPIO_PIN_4, HIGH_STATE);
   MNVIC_vSet_IRQPendingInterrupt(IRQn_EXTI0);
   Delay_vMilliSecond16MHzoscillator(500);
   MGPIO_vWritePinData(GPIOA_PORT, GPIO_PIN_4, LOW_STATE);

}

