/*
 * HAL_LED_Interface.h
 *
 *  Created on: May 19, 2022
 *      Author: Eng- Mohamed Mokhtar
 */

#ifndef INC_HAL_LED_HAL_LED_INTERFACE_H_
#define INC_HAL_LED_HAL_LED_INTERFACE_H_

/***************_APP_INCLUDES_*****************************/
#include "..\Inc\Inc_APP\Utility\APP_Utility.h"

/***************_HAL_INCLUDES_*****************************/
#include "HAL_LED_Private.h"
#include "HAL_LED_Config.h"

/***************_MCAL_INCLUDES_****************************/
#include "..\Inc\Inc_MCAL\RCC\MCAL_RCC_Interface.h"
#include "..\Inc\Inc_MCAL\GPIO\MCAL_GPIO_Interface.h"

/*============================================================================
  ==================_APIs Supported by "HAL_LED DRIVER"_====================
  ============================================================================*/
void HLED_vConfigLEDs(void);
void HLED_vInitLed(LED_Stag *LED_ptr);
void HLED_vStateControl(LED_Stag *LED_ptr, U8 LED_State);
void HLED_vTOGGEL(LED_Stag *LED_ptr);

#endif /* INC_HAL_LED_HAL_LED_INTERFACE_H_ */
