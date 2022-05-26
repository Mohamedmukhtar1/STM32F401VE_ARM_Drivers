/*
 * MCAL_NVIC_Register.h
 *
 *  Created on: May 17, 2022
 *      Author: Eng- Mohamed Mokhtar
 */

#ifndef INC_MCAL_NVIC_MCAL_NVIC_REGISTER_H_
#define INC_MCAL_NVIC_MCAL_NVIC_REGISTER_H_

#define NVIC_PERIPHERAL_BASE_ADDRESS   0xE000E100

typedef struct
{
  volatile Reg_32Bit_Utag ISER[8U];          /*!< Offset: 0x000 (R/W)  Interrupt Set Enable Register */
  volatile U32 			  RESERVED_0_[24U];
  volatile Reg_32Bit_Utag ICER[8U];          /*!< Offset: 0x080 (R/W)  Interrupt Clear Enable Register */
  volatile U32 			  RESERVED_1_[24U];
  volatile Reg_32Bit_Utag ISPR[8U];          /*!< Offset: 0x100 (R/W)  Interrupt Set Pending Register */
  volatile U32 			  RESERVED_2_[24U];
  volatile Reg_32Bit_Utag ICPR[8U];          /*!< Offset: 0x180 (R/W)  Interrupt Clear Pending Register */
  volatile U32 			  RESERVED_3_[24U];
  volatile Reg_32Bit_Utag IABR[8U];          /*!< Offset: 0x200 (R/W)  Interrupt Active bit Register */
  volatile U32 			  RESERVED_4_[56U];
  volatile Reg_8Bit_Utag  IP[240U];          /*!< Offset: 0x300 (R/W)  Interrupt Priority Register (8Bit wide) */
  volatile U32 			  RESERVED_5_[644U];
  volatile Reg_32Bit_Utag STIR;              /*!< Offset: 0xE00 ( /W)  Software Trigger Interrupt Register */
} NVIC_PERIPHERAL_Stag;

#define NVIC_SPTR     ((NVIC_PERIPHERAL_Stag *)(NVIC_PERIPHERAL_BASE_ADDRESS))

#define SCB_BASE_ADDRESS             0xE000ED00
#define SCB_AIRCR   (*((volatile U32 *)(SCB_BASE_ADDRESS + 0X0C )))


/*=================================================================================
	-----> Macros
			  *  Register Map	NVIC
===================================================================================*/
/* Enable External interrupts from 0  to 31 */
#define NVIC_ISER_0              (*((volatile U32*)0xE000E100)) /* Enable External interrupts from 0  to 31 */
#define NVIC_ISER_1              (*((volatile U32*)0xE000E104)) /* Enable External interrupts from 32 to 63 */
#define NVIC_ISER_2              (*((volatile U32*)0xE000E108)) /* Enable External interrupts from 0  to 31 */

#define NVIC_ISER                ((U32 *)(0xE000E100))

/**********************************************************************************/
#define NVIC_ICER0               (*((volatile U32*)0xE000E180)) /* Enable External interrupts from 0  to 31 */
#define NVIC_ICER1               (*((volatile U32*)0xE000E184)) /* Enable External interrupts from 32 to 63 */
#define NVIC_ICER2               (*((volatile U32*)0xE000E188)) /* Enable External interrupts from 32 to 63 */

/**********************************************************************************/
#define NVIC_ISPR0               (*((volatile U32*)0xE000E200) )
#define NVIC_ISPR1               (*((volatile U32*)0xE000E204) )
#define NVIC_ISPR2               (*((volatile U32*)0xE000E208) )

/**********************************************************************************/
#define NVIC_ICPR0       		 (*((volatile U32*)0xE000E280))
#define NVIC_ICPR1       		 (*((volatile U32*)0xE000E284))
#define NVIC_ICPR2       		 (*((volatile U32*)0xE000E288))

/**********************************************************************************/
#define NVIC_IABR0               (*((volatile U32*)0xE000E300))
#define NVIC_IABR1               (*((volatile U32*)0xE000E304))
#define NVIC_IABR2               (*((volatile U32*)0xE000E308))

/**********************************************************************************/


#endif /* INC_MCAL_NVIC_MCAL_NVIC_REGISTER_H_ */
