/*
 * MCAL_NVIC.c
 *
 *  Created on: May 17, 2022
 *      Author: Eng- Mohamed Mokhtar
 */

#include "MCAL_NVIC_Interface.h"

void MNVIC_vEnableInterruptRequest_IRQ(IRQn_t Copy_tIRQ)
{
	NVIC_SPTR->ISER[Copy_tIRQ /32].RegisterAccess = (1U<<(Copy_tIRQ %32));
}

void MNVIC_vDisableInterruptRequest_IRQ(IRQn_t Copy_tIRQ)
{
	NVIC_SPTR->ICER[Copy_tIRQ /32].RegisterAccess = (1U<<(Copy_tIRQ %32));
}

void MNVIC_vSetPendingInterrupt(IRQn_t Copy_tIRQ)
{
	NVIC_SPTR->ISPR[Copy_tIRQ /32].RegisterAccess = (1U<<(Copy_tIRQ %32));
}

void MNVIC_vClearPendingInterrupt(IRQn_t Copy_tIRQ)
{
	NVIC_SPTR->ICPR[Copy_tIRQ /32].RegisterAccess = (1U<<(Copy_tIRQ %32));
}

U8 MNVIC_U8Get_IRQ_ActiveFlag(IRQn_t Copy_tIRQ)
{
	U8 L_U8GetActiveFlag = 0U ;
	L_U8GetActiveFlag = GET_BIT(NVIC_SPTR->ICPR[Copy_tIRQ /32].RegisterAccess, (Copy_tIRQ %32));
	return L_U8GetActiveFlag ;
}

void MNVIC_vASetGroupSubgroupPriority( IRQn_t Copy_tIRQ  , U8 Copy_u8GroupPri   , U8 Copy_u8SubGroupPri  )
{

#if		PRIORITY_MODE  ==	_ALL_GROUP
	 	/*1) CONFIG SCB_AIRCR */
			//SCB_AIRCR |= 0x05FA0300;
		/*2)SET GROUP P	 */
			NVIC_SPTR->IP[Copy_tIRQ].RegisterAccess = Copy_u8GroupPri <<4;
#elif 	PRIORITY_MODE  ==	_3GROUP_1SUB
		/*1) CONFIG SCB_AIRCR */
			//SCB_AIRCR |= 0x05FA0400;
		/*2)SET GROUP P	 */
			NVIC_SPTR->IP[Copy_tIRQ].RegisterAccess = (Copy_u8GroupPri <<5)|(Copy_u8SubGroupPri <<4);
#elif 	PRIORITY_MODE  ==	_2GROUP_2SUB
		/*1) CONFIG SCB_AIRCR */
			//SCB_AIRCR |= 0x05FA0500;
		/*2)SET GROUP P	 */
			NVIC_SPTR->IP[Copy_tIRQ].RegisterAccess = (Copy_u8GroupPri <<6)|(Copy_u8SubGroupPri <<4);
#elif 	PRIORITY_MODE  ==	_1GROUP_3SUB
		/*1) CONFIG SCB_AIRCR */
			//SCB_AIRCR |= 0x05FA0600;
		/*2)SET GROUP P	 */
			NVIC_SPTR->IP[Copy_tIRQ].RegisterAccess = (Copy_u8GroupPri <<7)|(Copy_u8SubGroupPri <<4);
#elif 	PRIORITY_MODE  ==	_ALL_SUB
		/*1) CONFIG SCB_AIRCR */
			//SCB_AIRCR |= 0x05FA0700;
		/*2)SET GROUP P	 */
			NVIC_SPTR->IP[Copy_tIRQ].RegisterAccess = Copy_u8SubGroupPri <<4;
#endif
}

