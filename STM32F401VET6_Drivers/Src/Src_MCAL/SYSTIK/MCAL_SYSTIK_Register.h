/*
 * MCAL_SYSTIK_Register.h
 *
 *  Created on: May 31, 2022
 *      Author: Eng- Mohamed Mokhtar
 */

#ifndef SRC_MCAL_SYSTIK_MCAL_SYSTIK_REGISTER_H_
#define SRC_MCAL_SYSTIK_MCAL_SYSTIK_REGISTER_H_

#define STK_BASE_ADDRES				0xE000E010

typedef struct
{
	volatile U32 CTRL  ;
	volatile U32 LOAD  ;
	volatile U32 VAL   ;
	volatile U32 CALIB ;
}STK_TypeDef;

#define STK				((STK_TypeDef*)(STK_BASE_ADDRES))

#endif /* SRC_MCAL_SYSTIK_MCAL_SYSTIK_REGISTER_H_ */
