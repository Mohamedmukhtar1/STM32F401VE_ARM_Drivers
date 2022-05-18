/*
 * MCAL_GPIO.c
 *
 *  Created on: May 16, 2022
 *      Author: Eng- Mohamed Mokhtar
 */

#include "MCAL_GPIO_Interface.h"

void MGPIO_vSetPinMode(U8 PortName ,U8 PinNum ,U8 DirectionMode)
{
	/* INPUT_MODE, OUTPUT_MODE, ALTERNATE_FUNCTION_MODE, ANALOG_MODE */
	switch(PortName)
	{
	    //GIVE_BIT(GPIOA_SPTR->GPIO_MODER.RegisterAccess, 2U* PinNum, (U32)DirectionMode) ; break;
		case GPIOA_PORT :GPIOA_SPTR->GPIO_MODER.RegisterAccess |= (U32)(DirectionMode<<(2U* PinNum)) ; break;
		case GPIOB_PORT :GPIOB_SPTR->GPIO_MODER.RegisterAccess |= (U32)(DirectionMode<<(2U* PinNum)) ; break;
		case GPIOC_PORT :GPIOC_SPTR->GPIO_MODER.RegisterAccess |= (U32)(DirectionMode<<(2U* PinNum)) ; break;
		case GPIOD_PORT :GPIOD_SPTR->GPIO_MODER.RegisterAccess |= (U32)(DirectionMode<<(2U* PinNum)) ; break;
		case GPIOE_PORT :GPIOE_SPTR->GPIO_MODER.RegisterAccess |= (U32)(DirectionMode<<(2U* PinNum)) ; break;
		case GPIOH_PORT :GPIOH_SPTR->GPIO_MODER.RegisterAccess |= (U32)(DirectionMode<<(2U* PinNum)) ; break;
		default : /*ERROR*/ break ;
    }
}

void MGPIO_vSetPinOutputType(U8 PortName ,U8 PinNum ,U8 OutPutType)
{
	/*OUTPUT_PUSH_PULL_TYPE, OUTPUT_OPEN_DRAIN_TYPE*/
	switch(PortName)
	{
		case GPIOA_PORT :GPIOA_SPTR->GPIO_OTYPER.RegisterAccess |= (U32)(OutPutType<<(PinNum)) ; break;
		case GPIOB_PORT :GPIOB_SPTR->GPIO_OTYPER.RegisterAccess |= (U32)(OutPutType<<(PinNum)) ; break;
		case GPIOC_PORT :GPIOC_SPTR->GPIO_OTYPER.RegisterAccess |= (U32)(OutPutType<<(PinNum)) ; break;
		case GPIOD_PORT :GPIOD_SPTR->GPIO_OTYPER.RegisterAccess |= (U32)(OutPutType<<(PinNum)) ; break;
		case GPIOE_PORT :GPIOE_SPTR->GPIO_OTYPER.RegisterAccess |= (U32)(OutPutType<<(PinNum)) ; break;
		case GPIOH_PORT :GPIOH_SPTR->GPIO_OTYPER.RegisterAccess |= (U32)(OutPutType<<(PinNum)) ; break;
		default : /*ERROR*/ break ;
     }
}

void MGPIO_vSetPinOutputSpeed(U8 PortName ,U8 PinNum ,U8 OutputSpeed )
{
	/*OUTPUT_LOW_SPEED, OUTPUT_MEDUIM_SPEED, OUTPUT_HIGH_SPEED, OUTPUT_VERY_HIGH_SPEED*/
	switch(PortName)
	{
	  case GPIOA_PORT :GPIOA_SPTR->GPIO_OSPEEDR.RegisterAccess |= (U32)(OutputSpeed<<(2U* PinNum)) ; break;
	  case GPIOB_PORT :GPIOB_SPTR->GPIO_OSPEEDR.RegisterAccess |= (U32)(OutputSpeed<<(2U* PinNum)) ; break;
	  case GPIOC_PORT :GPIOC_SPTR->GPIO_OSPEEDR.RegisterAccess |= (U32)(OutputSpeed<<(2U* PinNum)) ; break;
	  case GPIOD_PORT :GPIOD_SPTR->GPIO_OSPEEDR.RegisterAccess |= (U32)(OutputSpeed<<(2U* PinNum)) ; break;
	  case GPIOE_PORT :GPIOE_SPTR->GPIO_OSPEEDR.RegisterAccess |= (U32)(OutputSpeed<<(2U* PinNum)) ; break;
	  case GPIOH_PORT :GPIOH_SPTR->GPIO_OSPEEDR.RegisterAccess |= (U32)(OutputSpeed<<(2U* PinNum)) ; break;
	  default : /*ERROR*/ break ;
	}
}

void MGPIO_vSetPinPullType(U8 PortName ,U8 PinNum ,U8 PullType )
{
	/*PULL_OFF_STATE, PULL_UP_STATE, PULL_DOWN_STATE*/
	switch(PortName)
	{
	  case GPIOA_PORT :GPIOA_SPTR->GPIO_PUPDR.RegisterAccess |= (U32)(PullType<<(2U* PinNum)) ; break;
	  case GPIOB_PORT :GPIOB_SPTR->GPIO_PUPDR.RegisterAccess |= (U32)(PullType<<(2U* PinNum)) ; break;
	  case GPIOC_PORT :GPIOC_SPTR->GPIO_PUPDR.RegisterAccess |= (U32)(PullType<<(2U* PinNum)) ; break;
	  case GPIOD_PORT :GPIOD_SPTR->GPIO_PUPDR.RegisterAccess |= (U32)(PullType<<(2U* PinNum)) ; break;
	  case GPIOE_PORT :GPIOE_SPTR->GPIO_PUPDR.RegisterAccess |= (U32)(PullType<<(2U* PinNum)) ; break;
	  case GPIOH_PORT :GPIOH_SPTR->GPIO_PUPDR.RegisterAccess |= (U32)(PullType<<(2U* PinNum)) ; break;
	  default : /*ERROR*/ break ;
	}
}

U8 MGPIO_U8ReadPinData(U8 PortName ,U8 PinNum)
{
	U8 L_U8Pin_Read_Data =0;
	switch(PortName)
	{
	  case GPIOA_PORT :L_U8Pin_Read_Data = GET_BIT(GPIOA_SPTR->GPIO_IDR.RegisterAccess, PinNum) ; break;
	  case GPIOB_PORT :L_U8Pin_Read_Data = GET_BIT(GPIOA_SPTR->GPIO_IDR.RegisterAccess, PinNum) ; break;
	  case GPIOC_PORT :L_U8Pin_Read_Data = GET_BIT(GPIOA_SPTR->GPIO_IDR.RegisterAccess, PinNum) ; break;
	  case GPIOD_PORT :L_U8Pin_Read_Data = GET_BIT(GPIOA_SPTR->GPIO_IDR.RegisterAccess, PinNum) ; break;
	  case GPIOE_PORT :L_U8Pin_Read_Data = GET_BIT(GPIOA_SPTR->GPIO_IDR.RegisterAccess, PinNum) ; break;
	  case GPIOH_PORT :L_U8Pin_Read_Data = GET_BIT(GPIOA_SPTR->GPIO_IDR.RegisterAccess, PinNum) ; break;
	  default : /*ERROR*/ break ;
	}
	return L_U8Pin_Read_Data;
}

U16 MGPIO_U16ReadPortData(U8 PortName)
{
	U8 L_U8Pin_Read_Data =0;
	switch(PortName)
	{
	  case GPIOA_PORT :L_U8Pin_Read_Data = GET_REG(GPIOA_SPTR->GPIO_IDR.RegisterAccess) ; break;
	  case GPIOB_PORT :L_U8Pin_Read_Data = GET_REG(GPIOA_SPTR->GPIO_IDR.RegisterAccess) ; break;
	  case GPIOC_PORT :L_U8Pin_Read_Data = GET_REG(GPIOA_SPTR->GPIO_IDR.RegisterAccess) ; break;
	  case GPIOD_PORT :L_U8Pin_Read_Data = GET_REG(GPIOA_SPTR->GPIO_IDR.RegisterAccess) ; break;
	  case GPIOE_PORT :L_U8Pin_Read_Data = GET_REG(GPIOA_SPTR->GPIO_IDR.RegisterAccess) ; break;
	  case GPIOH_PORT :L_U8Pin_Read_Data = GET_REG(GPIOA_SPTR->GPIO_IDR.RegisterAccess) ; break;
	  default : /*ERROR*/ break ;
	}
	return L_U8Pin_Read_Data;
}

void MGPIO_vWritePinData(U8 PortName ,U8 PinNum, U8 OutputState)
{
	/*LOW_STATE, HIGH_STATE*/
	switch(PortName)
	{
	    case GPIOA_PORT :GPIOA_SPTR->GPIO_ODR.RegisterAccess |= (U32)(OutputState<<(PinNum)) ; break;
	    case GPIOB_PORT :GPIOB_SPTR->GPIO_ODR.RegisterAccess |= (U32)(OutputState<<(PinNum)) ; break;
	    case GPIOC_PORT :GPIOC_SPTR->GPIO_ODR.RegisterAccess |= (U32)(OutputState<<(PinNum)) ; break;
	    case GPIOD_PORT :GPIOD_SPTR->GPIO_ODR.RegisterAccess |= (U32)(OutputState<<(PinNum)) ; break;
	    case GPIOE_PORT :GPIOE_SPTR->GPIO_ODR.RegisterAccess |= (U32)(OutputState<<(PinNum)) ; break;
	    case GPIOH_PORT :GPIOH_SPTR->GPIO_ODR.RegisterAccess |= (U32)(OutputState<<(PinNum)) ; break;
		default : /*ERROR*/ break ;
	}
}


void MGPIO_vPinLock(U8 PortNum, U8 PinNum )
{
	switch(PortNum)
	{
	  case _GPIOA_PORT  :
		  SET_BIT(GPIOA_SPTR->GPIO_LCKR.RegisterAccess, (U32)(PinNum)) ; break;
		  SET_BIT(GPIOA_SPTR->GPIO_LCKR.RegisterAccess, (U32)(16U))    ; break;
		  while(!(GPIOA_SPTR->GPIO_LCKR.RegisterAccess, (U32)(16U)));
		  break ;
	  case _GPIOB_PORT  :
		  SET_BIT(GPIOB_SPTR->GPIO_LCKR.RegisterAccess, (U32)(PinNum)) ; break;
		  SET_BIT(GPIOB_SPTR->GPIO_LCKR.RegisterAccess, (U32)(16U))    ; break;
		  while(!(GPIOB_SPTR->GPIO_LCKR.RegisterAccess, (U32)(16U)));
		  break ;
	  case _GPIOC_PORT  :
		  SET_BIT(GPIOC_SPTR->GPIO_LCKR.RegisterAccess, (U32)(PinNum)) ; break;
		  SET_BIT(GPIOC_SPTR->GPIO_LCKR.RegisterAccess, (U32)(16U))    ; break;
		  while(!(GPIOC_SPTR->GPIO_LCKR.RegisterAccess, (U32)(16U)));
		  break ;
	  case _GPIOD_PORT  :
		  SET_BIT(GPIOD_SPTR->GPIO_LCKR.RegisterAccess, (U32)(PinNum)) ; break;
		  SET_BIT(GPIOD_SPTR->GPIO_LCKR.RegisterAccess, (U32)(16U))    ; break;
		  while(!(GPIOD_SPTR->GPIO_LCKR.RegisterAccess, (U32)(16U)));
		  break ;
	  case _GPIOE_PORT  :
		  SET_BIT(GPIOE_SPTR->GPIO_LCKR.RegisterAccess, (U32)(PinNum)) ; break;
		  SET_BIT(GPIOE_SPTR->GPIO_LCKR.RegisterAccess, (U32)(16U))    ; break;
		  while(!(GPIOE_SPTR->GPIO_LCKR.RegisterAccess, (U32)(16U)));
		  break ;
	  case _GPIOH_PORT  :
		  SET_BIT(GPIOH_SPTR->GPIO_LCKR.RegisterAccess, (U32)(PinNum)) ; break;
		  SET_BIT(GPIOH_SPTR->GPIO_LCKR.RegisterAccess, (U32)(16U))    ; break;
		  while(!(GPIOH_SPTR->GPIO_LCKR.RegisterAccess, (U32)(16U)));
		  break ;
	  default : /*ERROR*/ break ;
	}
}

void MGPIO_vSetPinAltFun(U8 Copy_u8PortNum, U8 PinNum, U8 ALTFUN )
{
	if(PinNum <=7U)
	{
		switch(Copy_u8PortNum )
		{
			 case GPIOA_PORT  : GPIOA_SPTR->GPIO_AFRL.RegisterAccess |= (U32)(ALTFUN<<(4U*PinNum)) ; break ;
			 case GPIOB_PORT  : GPIOB_SPTR->GPIO_AFRL.RegisterAccess |= (U32)(ALTFUN<<(4U*PinNum)) ; break ;
			 case GPIOC_PORT  : GPIOC_SPTR->GPIO_AFRL.RegisterAccess |= (U32)(ALTFUN<<(4U*PinNum)) ; break ;
			 case GPIOD_PORT  : GPIOD_SPTR->GPIO_AFRL.RegisterAccess |= (U32)(ALTFUN<<(4U*PinNum)) ; break ;
			 case GPIOE_PORT  : GPIOE_SPTR->GPIO_AFRL.RegisterAccess |= (U32)(ALTFUN<<(4U*PinNum)) ; break ;
			 case GPIOH_PORT  : GPIOH_SPTR->GPIO_AFRL.RegisterAccess |= (U32)(ALTFUN<<(4U*PinNum)) ; break ;
			 default : /*ERROR*/ break ;
		}
	}
	else	// 8 : 15
	{
		PinNum %=8;
		switch(Copy_u8PortNum )
		{
			 case GPIOA_PORT  : GPIOA_SPTR->GPIO_AFRH.RegisterAccess |= (U32)(ALTFUN<<(4U*PinNum)) ; break ;
			 case GPIOB_PORT  : GPIOB_SPTR->GPIO_AFRH.RegisterAccess |= (U32)(ALTFUN<<(4U*PinNum)) ; break ;
			 case GPIOC_PORT  : GPIOC_SPTR->GPIO_AFRH.RegisterAccess |= (U32)(ALTFUN<<(4U*PinNum)) ; break ;
			 case GPIOD_PORT  : GPIOD_SPTR->GPIO_AFRH.RegisterAccess |= (U32)(ALTFUN<<(4U*PinNum)) ; break ;
			 case GPIOE_PORT  : GPIOE_SPTR->GPIO_AFRH.RegisterAccess |= (U32)(ALTFUN<<(4U*PinNum)) ; break ;
			 case GPIOH_PORT  : GPIOH_SPTR->GPIO_AFRH.RegisterAccess |= (U32)(ALTFUN<<(4U*PinNum)) ; break ;
			 default : /*ERROR*/ break ;
		}
	}
}
