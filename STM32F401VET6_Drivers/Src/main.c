/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Eng- Mohamed Mokhtar
 * @brief          : Main program body
 ******************************************************************************
 ******************************************************************************
 */

#include "main.h"

u8 G_key = 0;

int main(void)
{
	MRCC_vInitSystemClock();
	MSTK_Init(STK_CLK_SRC_HCLK_Div8);

	MRCC_vEnableBusClock(Bus_AHB1, PHB1_GPIOA);
	MRCC_vEnableBusClock(Bus_APB2, PPB2_SPI1);
	MRCC_vEnableBusClock(Bus_APB2, PPB2_SYSCFG);


	MSPI_vInit(SPI_1_);
	MSPI_vEnable(SPI_1_);
	HTFT_vInit();



	while(1)
	{

	}
}
