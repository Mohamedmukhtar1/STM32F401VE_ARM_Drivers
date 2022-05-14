/*
 * MCAL_RCC.c
 *
 *  Created on: May 13, 2022
 *      Author: Eng- Mohamed Mokhtar
 */

#include "MCAL_RCC_Interface.h"

void MCAL_RCC_Bus_Enable_Clock(BusName_Etag BusNamex , RCC_AHB1ENR_Etag Peripheralx)
{
	switch(BusNamex)
	{
		case Bus_AHB1:
			SET_BIT(RCC_SPTR->REG_RCC_AHB1ENR.RegisterAccess, Peripheralx);  break ;
		case Bus_AHB2:
			SET_BIT(RCC_SPTR->REG_RCC_AHB2ENR.RegisterAccess, Peripheralx);  break ;
		case Bus_APB1:
			SET_BIT(RCC_SPTR->REG_RCC_APB1ENR.RegisterAccess, Peripheralx);  break ;
		case Bus_APB2:
			SET_BIT(RCC_SPTR->REG_RCC_APB2ENR.RegisterAccess, Peripheralx);  break ;
		default :        /************ERROR*/             				break ;
	}
}

void MCAL_RCC_Bus_Disable_Clock(BusName_Etag BusNamex , RCC_AHB1ENR_Etag Peripheralx)
{
	switch(BusNamex)
	{
		case Bus_AHB1:
			CLR_BIT(RCC_SPTR->REG_RCC_AHB1ENR.RegisterAccess, Peripheralx);  break ;
		case Bus_AHB2:
			CLR_BIT(RCC_SPTR->REG_RCC_AHB2ENR.RegisterAccess, Peripheralx);  break ;
		case Bus_APB1:
			CLR_BIT(RCC_SPTR->REG_RCC_APB1ENR.RegisterAccess, Peripheralx);  break ;
		case Bus_APB2:
			CLR_BIT(RCC_SPTR->REG_RCC_APB2ENR.RegisterAccess, Peripheralx);  break ;
		default :        /************ERROR*/             				break ;
	}
}

void MCAL_RCC_Enable_Security_System(void)
{
	SET_BIT(RCC_SPTR->REG_RCC_CR.RegisterAccess, CR_CSSON);
}

void MCAL_RCC_Disable_Security_System(void)
{
	CLR_BIT(RCC_SPTR->REG_RCC_CR.RegisterAccess, CR_CSSON);
}

void MCAL_RCC_Init_System_CLK(void)
{
	#if CLOCK_SOURCE == HSI		/** HSI oscillator selected as system clock**********/
		/* 1- CLK SYS --> HSI */
		CLR_BIT(RCC_SPTR->REG_RCC_CFGR.RegisterAccess, CFGR_SW0);
		CLR_BIT(RCC_SPTR->REG_RCC_CFGR.RegisterAccess, CFGR_SW1);
		/* 2- EN HSI */
		SET_BIT(RCC_SPTR->REG_RCC_CR.RegisterAccess, CR_HSION);
		/*
		while( ( ( GET_BIT( MRCC->CR , 1 ) ) == 0 ) && ( LOC_u32TimeOut < 100000 ) ){ LOC_u32TimeOut++; }
		if( LOC_u32TimeOut >= 100000 ){ TimeOut }*/

	#elif CLOCK_SOURCE == HSE	/** HSE oscillator selected as system clock**********/
		#if HSE_SOURCE == CRYSTAL
			/* 1- DIS HSE */
			CLR_BIT(RCC_SPTR->REG_RCC_CR.RegisterAccess, CR_HSEON);
			/* 2- Disable BYP */
			CLR_BIT(RCC_SPTR->REG_RCC_CR.RegisterAccess, CR_HSEBYP);
			/* 3- CLK SYS --> HSE */
			SET_BIT(RCC_SPTR->REG_RCC_CFGR.RegisterAccess, CFGR_SW0);
			CLR_BIT(RCC_SPTR->REG_RCC_CFGR.RegisterAccess, CFGR_SW1);
			/* 4- EN HSE */
			SET_BIT(RCC_SPTR->REG_RCC_CR.RegisterAccess, CR_HSEON);
			/* Bit 17 -> Checking While The HSE Clock Is Stable
			while( ( ( GET_BIT( MRCC->CR , 17 ) ) == 0 ) && ( LOC_u32TimeOut < 100000 ) ){ LOC_u32TimeOut++; }
			if( LOC_u32TimeOut >= 100000 ){ TimeOut}*/

	/*****************************************************************/
		#elif HSE_SOURCE == RC
			/* 1- EN HSE */
			CLR_BIT(RCC_SPTR->REG_RCC_CR.RegisterAccess, CR_HSEON);
			/* 2- Enable BYP */
			SET_BIT(RCC_SPTR->REG_RCC_CR.RegisterAccess, CR_HSEBYP);
			/* 3- CLK SYS --> HSE */
			SET_BIT(RCC_SPTR->REG_RCC_CFGR.RegisterAccess, CFGR_SW0);
			CLR_BIT(RCC_SPTR->REG_RCC_CFGR.RegisterAccess, CFGR_SW1);
			/* 4- EN HSE */
			SET_BIT(RCC_SPTR->REG_RCC_CR.RegisterAccess, CR_HSEON);
			/* Bit 17 -> Checking While The HSE Clock Is Stable
			while( ( ( GET_BIT( MRCC->CR , 17 ) ) == 0 ) && ( LOC_u32TimeOut < 100000 ) ){ LOC_u32TimeOut++; }
			if( LOC_u32TimeOut >= 100000 ){ TimeOut}*/
		#else
			/* Error*/
		#endif

	#elif CLOCK_SOURCE == PLL	/** PLL selected as system clock*********************/
		#if PLL_SOURCE == _HSE_PLL
			/*1-Enable HSE */
			SET_BIT(RCC_SPTR->REG_RCC_CR.RegisterAccess, CR_HSEON);
			/* while ( GET_BIT(RCC_CR, 17)==0);*/
			/*2- Disable PLL*/
			CLR_BIT(RCC_SPTR->REG_RCC_CR.RegisterAccess, CR_PLLON);
			/* while ( GET_BIT(RCC_CR, 25)==0);*/
			/* 3- PLL From HSE */
			SET_BIT(RCC_SPTR->REG_RCC_PLLCFGR.RegisterAccess, PLLCFGR_PLLSRC);
			/*4- Enable PLL*/
			SET_BIT(RCC_SPTR->REG_RCC_CR.RegisterAccess, CR_PLLON);
			/* 5- System Clk  PLL */
			CLR_BIT(RCC_SPTR->REG_RCC_CFGR.RegisterAccess, CFGR_SW0);
			SET_BIT(RCC_SPTR->REG_RCC_CFGR.RegisterAccess, CFGR_SW1);
			/*************************/
			#if HSE_SRC == 	 CRYSTAL
				/*- Disable BYP */
				CLR_BIT(RCC_SPTR->REG_RCC_CR.RegisterAccess, CR_HSEBYP);
			#elif HSE_SRC == RC
				/* - Enable BYP */
				SET_BIT(RCC_SPTR->REG_RCC_CR.RegisterAccess, CR_HSEBYP);
			#else
				/*	ERROR	*/
			#endif
	/*****************************************************************/
		#elif PLL_SOURCE == _HSI_PLL
			/* Enable HSI */
			SET_BIT(RCC_SPTR->REG_RCC_CR.RegisterAccess, CR_HSION);
			/*2- Disable PLL*/
			CLR_BIT(RCC_SPTR->REG_RCC_CR.RegisterAccess, CR_PLLON);
			/* 3- PLL From HSI */
			CLR_BIT(RCC_SPTR->REG_RCC_PLLCFGR.RegisterAccess, PLLCFGR_PLLSRC);
			/*4- Enable PLL*/
			SET_BIT(RCC_SPTR->REG_RCC_CR.RegisterAccess, CR_PLLON);
			/* 5- System Clk  PLL */
			CLR_BIT(RCC_SPTR->REG_RCC_CFGR.RegisterAccess, CFGR_SW0);
			SET_BIT(RCC_SPTR->REG_RCC_CFGR.RegisterAccess, CFGR_SW1);
		#else
			/* Error*/
		#endif
	#else
			/* Error*/
	#endif
}
