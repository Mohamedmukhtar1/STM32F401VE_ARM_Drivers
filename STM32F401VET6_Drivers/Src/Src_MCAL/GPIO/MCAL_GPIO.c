/*
 * MCAL_GPIO.c
 *
 *  Created on: May 16, 2022
 *      Author: Eng- Mohamed Mokhtar
 */

#include "MCAL_GPIO_Interface.h"

void MGPIO_vSetPinMode(U8 PortName ,U8 PinNum ,U8 DirectionMode)
{
	switch(PortName)
	{
		case GPIOA_PORT :
			GIVE_BIT(GPIOA_SPTR->GPIO_MODER.RegisterAccess, 2U* PinNum, (U32)DirectionMode);
			break;
		case GPIOB_PORT :GPIOB_SPTR->GPIO_MODER.RegisterAccess |= (U32)(DirectionMode<<(2U* PinNum)) ; break;
		case GPIOC_PORT :GPIOC_SPTR->GPIO_MODER.RegisterAccess |= (U32)(DirectionMode<<(2U* PinNum)) ; break;
		case GPIOD_PORT :GPIOD_SPTR->GPIO_MODER.RegisterAccess |= (U32)(DirectionMode<<(2U* PinNum)) ; break;
		case GPIOE_PORT :GPIOE_SPTR->GPIO_MODER.RegisterAccess |= (U32)(DirectionMode<<(2U* PinNum)) ; break;
		case GPIOH_PORT :GPIOH_SPTR->GPIO_MODER.RegisterAccess |= (U32)(DirectionMode<<(2U* PinNum)) ; break;
		default : /*ERROR*/ break ;
    }
}

void MGPIO_vSetPinOutPutType(U8 PortName ,U8 PinNum ,U8 OutPutType)
{
	switch(PortName)
	{
		case GPIOA_PORT :GPIOA_SPTR->GPIO_OTYPER.RegisterAccess |= (U32)(OutPutType<<(2U* PinNum)) ; break;
		case GPIOB_PORT :GPIOB_SPTR->GPIO_OTYPER.RegisterAccess |= (U32)(OutPutType<<(2U* PinNum)) ; break;
		case GPIOC_PORT :GPIOC_SPTR->GPIO_OTYPER.RegisterAccess |= (U32)(OutPutType<<(2U* PinNum)) ; break;
		case GPIOD_PORT :GPIOD_SPTR->GPIO_OTYPER.RegisterAccess |= (U32)(OutPutType<<(2U* PinNum)) ; break;
		case GPIOE_PORT :GPIOE_SPTR->GPIO_OTYPER.RegisterAccess |= (U32)(OutPutType<<(2U* PinNum)) ; break;
		case GPIOH_PORT :GPIOH_SPTR->GPIO_OTYPER.RegisterAccess |= (U32)(OutPutType<<(2U* PinNum)) ; break;
		default : /*ERROR*/ break ;
     }
}

void MGPIO_vSetPinOutSpeed(U8 Copy_u8PortName ,U32 Copy_u8PinNum ,U32 Copy_u8OutSpeed )
{
	switch(Copy_u8PortName)
	{
	  case GPIOA_PORT :GPIOA_SPTR->GPIO_OSPEEDR.RegisterAccess |= (U32)(Copy_u8OutSpeed<<(2U* Copy_u8PinNum)) ; break;
	  case GPIOB_PORT :GPIOB_SPTR->GPIO_OSPEEDR.RegisterAccess |= (U32)(Copy_u8OutSpeed<<(2U* Copy_u8PinNum)) ; break;
	  case GPIOC_PORT :GPIOC_SPTR->GPIO_OSPEEDR.RegisterAccess |= (U32)(Copy_u8OutSpeed<<(2U* Copy_u8PinNum)) ; break;
	  case GPIOD_PORT :GPIOD_SPTR->GPIO_OSPEEDR.RegisterAccess |= (U32)(Copy_u8OutSpeed<<(2U* Copy_u8PinNum)) ; break;
	  case GPIOE_PORT :GPIOE_SPTR->GPIO_OSPEEDR.RegisterAccess |= (U32)(Copy_u8OutSpeed<<(2U* Copy_u8PinNum)) ; break;
	  case GPIOH_PORT :GPIOH_SPTR->GPIO_OSPEEDR.RegisterAccess |= (U32)(Copy_u8OutSpeed<<(2U* Copy_u8PinNum)) ; break;
	  default : /*ERROR*/ break ;
	}
}

void MGPIO_vSetPullType(U8 Copy_u8PortName ,U32 Copy_u8PinNum ,U32 Copy_u8PullType )
{
	switch(Copy_u8PortName)
	{
	  case GPIOA_PORT :GPIOA_SPTR->GPIO_PUPDR.RegisterAccess |= (U32) ( Copy_u8PullType << ( 2U* Copy_u8PinNum )) ; break;
	  case GPIOB_PORT :GPIOB_SPTR->GPIO_PUPDR.RegisterAccess |= (U32) ( Copy_u8PullType << ( 2U* Copy_u8PinNum )) ; break;
	  case GPIOC_PORT :GPIOC_SPTR->GPIO_PUPDR.RegisterAccess |= (U32) ( Copy_u8PullType << ( 2U* Copy_u8PinNum )) ; break;
	  case GPIOD_PORT :GPIOD_SPTR->GPIO_PUPDR.RegisterAccess |= (U32) ( Copy_u8PullType << ( 2U* Copy_u8PinNum )) ; break;
	  case GPIOE_PORT :GPIOE_SPTR->GPIO_PUPDR.RegisterAccess |= (U32) ( Copy_u8PullType << ( 2U* Copy_u8PinNum )) ; break;
	  case GPIOH_PORT :GPIOH_SPTR->GPIO_PUPDR.RegisterAccess |= (U32) ( Copy_u8PullType << ( 2U* Copy_u8PinNum )) ; break;
	  default : /*ERROR*/ break ;
	}
}

