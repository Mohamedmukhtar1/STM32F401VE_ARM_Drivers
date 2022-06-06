/*
 * HAL_LED_Interface.h
 *
 *  Created on: May 19, 2022
 *      Author: Eng- Mohamed Mokhtar
 */

#ifndef INC_HAL_LED_HAL_LED_INTERFACE_H_
#define INC_HAL_LED_HAL_LED_INTERFACE_H_

/***************_APP_INCLUDES_*****************************/
#include "..\..\Src_APP\Utility\APP_Utility.h"

/***************_HAL_INCLUDES_*****************************/
#include "HAL_LED_Private.h"
#include "HAL_LED_Config.h"

/***************_MCAL_INCLUDES_****************************/
#include "..\..\Src_MCAL\RCC\MCAL_RCC_Interface.h"
#include "..\..\Src_MCAL\GPIO\MCAL_GPIO_Interface.h"


#define LED_0_	((u8)0U)
#define LED_1_	((u8)1U)
#define LED_2_	((u8)2U)

/*============================================================================
  ==================_APIs Supported by "HAL_LED DRIVER"_======================
  ============================================================================*/
void HLED_vInitLED(u8 LED_Name);
void HLED_vLEDStateControl(u8 LED_Name, u8 LED_State);
void HLED_vToggelLED(u8 LED_Name);

#endif /* INC_HAL_LED_HAL_LED_INTERFACE_H_ */
