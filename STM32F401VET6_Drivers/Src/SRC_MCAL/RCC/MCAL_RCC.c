/*
 * MCAL_RCC.c
 *
 *  Created on: May 13, 2022
 *      Author: Eng- Mohamed Mokhtar
 */

#include "APP_Utility.h"
#include "MCAL_RCC_Interface.h"
#include "MCAL_RCC_Private.h"
#include "MCAL_RCC_Config.h"
#include "MCAL_RCC_Register.h"


void MCAL_RCC_Enable_Clock(BusName_Etag BusName , U8 Copy_u8PerNum )
{
	switch(BusName)
	{
		case Bus_AHB1:  SET_BIT(RCC_SPTR->REG_RCC_AHB1ENR.RegisterAccess, Copy_u8PerNum );	break ;
		case Bus_AHB2:  SET_BIT(RCC_SPTR->REG_RCC_AHB1ENR.BitAccess_Stag.BIT0, Copy_u8PerNum );         break ;
		case Bus_APB1:  /*SET_BIT(RCC_APB1ENR,Copy_u8PerNum );*/         break ;
		case Bus_APB2:  /*SET_BIT(RCC_APB2ENR,Copy_u8PerNum );*/         break ;
		default :        /*ERROR*/             							break ;

	}
}
//		case  0 : SET_BIT(RCC->AHBENR.ByteAccess , Copy_u8Peripheral); break;
//		case  1 : SET_BIT(RCC->APB1ENR.ByteAccess, Copy_u8Peripheral); break;
//		case  2 : SET_BIT(RCC->APB2ENR.ByteAccess, Copy_u8Peripheral); break;
//		default : /* no thing */ break;

