/*
 * APP_Debug.c
 *
 *  Created on: May 19, 2022
 *      Author: Eng- Mohamed Mokhtar
 */

#include "..\Src\Src_APP\Debug\APP_Debug.h"

void ADebug_All_GPIO_Ports (void)
{
	U8 i =0;
	MRCC_vEnableBusClock(Bus_AHB1, PHB1_GPIOA);
	MRCC_vEnableBusClock(Bus_AHB1, PHB1_GPIOB);
	MRCC_vEnableBusClock(Bus_AHB1, PHB1_GPIOC);
	MRCC_vEnableBusClock(Bus_AHB1, PHB1_GPIOD);
	MRCC_vEnableBusClock(Bus_AHB1, PHB1_GPIOE);
	MRCC_vEnableBusClock(Bus_AHB1, PHB1_GPIOH);

	MGPIO_vFastPortConfigMode(GPIOA_PORT, OUTPUT_PORT_MODE);
	MGPIO_vFastPortConfigMode(GPIOB_PORT, OUTPUT_PORT_MODE);
	MGPIO_vFastPortConfigMode(GPIOC_PORT, OUTPUT_PORT_MODE);
	MGPIO_vFastPortConfigMode(GPIOD_PORT, OUTPUT_PORT_MODE);
	MGPIO_vFastPortConfigMode(GPIOE_PORT, OUTPUT_PORT_MODE);
	MGPIO_vFastPortConfigMode(GPIOH_PORT, OUTPUT_PORT_MODE);

	for(i=0; i<16 ;i++)
	{
		MGPIO_vSetPinOutputType(GPIOA_PORT, (U8)i, OUTPUT_PUSH_PULL_TYPE);
		MGPIO_vSetPinOutputSpeed(GPIOA_PORT, (U8)i, OUTPUT_LOW_SPEED);

		MGPIO_vSetPinOutputType(GPIOB_PORT ,i ,OUTPUT_PUSH_PULL_TYPE);
		MGPIO_vSetPinOutputSpeed(GPIOB_PORT ,i ,OUTPUT_LOW_SPEED);

		MGPIO_vSetPinOutputType(GPIOC_PORT ,i ,OUTPUT_PUSH_PULL_TYPE);
		MGPIO_vSetPinOutputSpeed(GPIOC_PORT ,i ,OUTPUT_LOW_SPEED);

		MGPIO_vSetPinOutputType(GPIOD_PORT ,i ,OUTPUT_PUSH_PULL_TYPE);
		MGPIO_vSetPinOutputSpeed(GPIOD_PORT ,i ,OUTPUT_LOW_SPEED);

		MGPIO_vSetPinOutputType(GPIOE_PORT ,i ,OUTPUT_PUSH_PULL_TYPE);
		MGPIO_vSetPinOutputSpeed(GPIOE_PORT ,i ,OUTPUT_LOW_SPEED);

		MGPIO_vSetPinOutputType(GPIOH_PORT ,i ,OUTPUT_PUSH_PULL_TYPE);
		MGPIO_vSetPinOutputSpeed(GPIOH_PORT ,i ,OUTPUT_LOW_SPEED);/**/
	}

	for (i=0; i<16 ;i++)
	{
		MGPIO_vWritePinData(GPIOA_PORT, i, HIGH_STATE);
		MGPIO_vWritePinData(GPIOB_PORT, i, HIGH_STATE);
		MGPIO_vWritePinData(GPIOC_PORT, i, HIGH_STATE);
		MGPIO_vWritePinData(GPIOD_PORT, i, HIGH_STATE);
		MGPIO_vWritePinData(GPIOE_PORT, i, HIGH_STATE);
		MGPIO_vWritePinData(GPIOH_PORT, i, HIGH_STATE);
	}
}
