/*
 * MCAL_NVIC_Private.h
 *
 *  Created on: May 17, 2022
 *      Author: Eng- Mohamed Mokhtar
 */

#ifndef INC_MCAL_NVIC_MCAL_NVIC_PRIVATE_H_
#define INC_MCAL_NVIC_MCAL_NVIC_PRIVATE_H_

/*=================================================================================
	-----> Macros
			  *  Register Map	NVIC
===================================================================================*/
/* Enable External interrupts from 0  to 31 */
#define NVIC_ISER_0              (*((volatile u32*)0xE000E100)) /* Enable External interrupts from 0  to 31 */
#define NVIC_ISER_1              (*((volatile u32*)0xE000E104)) /* Enable External interrupts from 32 to 63 */
#define NVIC_ISER_2              (*((volatile u32*)0xE000E108)) /* Enable External interrupts from 0  to 31 */

#define NVIC_ISER                     ((u32     *)(0xE000E100))


/**********************************************************************************/

#define NVIC_ICER0               (*((volatile u32*)0xE000E180)) /* Enable External interrupts from 0  to 31 */
#define NVIC_ICER1               (*((volatile u32*)0xE000E184)) /* Enable External interrupts from 32 to 63 */
#define NVIC_ICER2               (*((volatile u32*)0xE000E188)) /* Enable External interrupts from 32 to 63 */


/**********************************************************************************/

#define NVIC_ISPR0               (*((volatile u32*)0xE000E200) )
#define NVIC_ISPR1               (*((volatile u32*)0xE000E204) )
#define NVIC_ISPR2               (*((volatile u32*)0xE000E208) )


/**********************************************************************************/
#define NVIC_ICPR0       		(*((u32*)0xE000E280))
#define NVIC_ICPR1       		(*((u32*)0xE000E284))
#define NVIC_ICPR2       		(*((u32*)0xE000E288))

/**********************************************************************************/

#define NVIC_IABR0       (*((volatile u32*)0xE000E300))
#define NVIC_IABR1       (*((volatile u32*)0xE000E304))
#define NVIC_IABR2       (*((volatile u32*)0xE000E308))


/**********************************************************************************/


#define NVIC_BASE_ADDRESS   0xE000E100

typedef struct
{
  volatile U32 ISER[8U];               /*!< Offset: 0x000 (R/W)  Interrupt Set Enable Register */
  volatile U32 RESERVED0[24U];
  volatile U32 ICER[8U];               /*!< Offset: 0x080 (R/W)  Interrupt Clear Enable Register */
  volatile U32 RESERVED1[24U];
  volatile U32 ISPR[8U];               /*!< Offset: 0x100 (R/W)  Interrupt Set Pending Register */
  volatile U32 RESERVED2[24U];
  volatile U32 ICPR[8U];               /*!< Offset: 0x180 (R/W)  Interrupt Clear Pending Register */
  volatile U32 RESERVED3[24U];
  volatile U32 IABR[8U];               /*!< Offset: 0x200 (R/W)  Interrupt Active bit Register */
  volatile U32 RESERVED4[56U];
  volatile U8  IP[240U];               /*!< Offset: 0x300 (R/W)  Interrupt Priority Register (8Bit wide) */
  volatile U32 RESERVED5[644U];
  volatile U32 STIR;                   /*!< Offset: 0xE00 ( /W)  Software Trigger Interrupt Register */
}  NVIC_t;


#define MNVIC     ((NVIC_t    * )(NVIC_BASE_ADDRESS))

#define SCB_BASE_ADDRESS             0xE000ED00
#define SCB_AIRCR   (*((  volatile u32  *)  (SCB_BASE_ADDRESS + 0X0C )))


#define ALL_16_GROUP           0
#define _8_GROUP_2_SUPGROUP    1
#define _4_GROUP_4_SUPGROUP    2
#define _2_GROUP_8_SUPGROUP    3
#define ALL_16_SUPGROUP        4


#endif /* INC_MCAL_NVIC_MCAL_NVIC_PRIVATE_H_ */
