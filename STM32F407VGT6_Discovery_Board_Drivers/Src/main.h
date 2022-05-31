/*
 * main.h
 *
 *  Created on: May 13, 2022
 *      Author: Eng- Mohamed Mokhtar
 */

#ifndef MAIN_H_
#define MAIN_H_

/***************_APP_INCLUDES_*****************************/
#include "../Src/Src_APP/Utility\APP_Utility.h"
#include "../Src/Src_APP/Debug\APP_Debug.h"

/***************_MyApp_INCLUDES_***************************/

/***************_HAL_INCLUDES_*****************************/
#include "../Src/Src_HAL/LED\HAL_LED_Interface.h"

/***************_MCAL_INCLUDES_****************************/
#include "../Src/Src_MCAL/RCC/MCAL_RCC_Interface.h"
#include "../Src/Src_MCAL/GPIO/MCAL_GPIO_Interface.h"
#include "../Src/Src_MCAL/NVIC/MCAL_NVIC_Interface.h"
#include "../Src/Src_MCAL/EXTIx/MCAL_EXTI_Interface.h"

/***************_main.c_FUNCTION_PROTOTYPE_****************/
void led_on(void);
void EXTI_0(void);

#endif /* MAIN_H_ */
