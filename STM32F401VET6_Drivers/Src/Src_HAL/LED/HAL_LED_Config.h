/*
 * HAL_LED_Config.h
 *
 *  Created on: May 19, 2022
 *      Author: Eng- Mohamed Mokhtar
 */

#ifndef INC_HAL_LED_HAL_LED_CONFIG_H_
#define INC_HAL_LED_HAL_LED_CONFIG_H_

typedef struct
{
	U8 LED_PORT			  ;
	U8 LED_PIN			  ;
	U8 LED_PinOutputType  ;
	U8 LED_PinOutputSpeed ;
	U8 LED_State		  ;
}LED_Stag;

#endif /* INC_HAL_LED_HAL_LED_CONFIG_H_ */
