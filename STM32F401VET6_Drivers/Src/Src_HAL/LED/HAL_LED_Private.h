/*
 * HAL_LED_Private.h
 *
 *  Created on: May 19, 2022
 *      Author: Eng- Mohamed Mokhtar
 */

#ifndef INC_HAL_LED_HAL_LED_PRIVATE_H_
#define INC_HAL_LED_HAL_LED_PRIVATE_H_

typedef struct
{
	u8 LED_PORT			  ;
	u8 LED_PIN			  ;
	u8 LED_PinOutputType  ;
	u8 LED_PinOutputSpeed ;
	u8 LED_PinPullType    ;
	u8 LED_State		  ;
}LED_Stag;

#define LED_ON		HIGH_STATE
#define LED_OFF		LOW_STATE

#define ENABLE_LED		1   //for CFG
#define DISABLE_LED		0	//for CFG

#endif /* INC_HAL_LED_HAL_LED_PRIVATE_H_ */
