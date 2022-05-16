/*
 * MCAL_RCC_Interface.h
 *
 *  Created on: May 13, 2022
 *      Author: Eng- Mohamed Mokhtar
 */

#ifndef INC_MCAL_RCC_MCAL_RCC_INTERFACE_H_
#define INC_MCAL_RCC_MCAL_RCC_INTERFACE_H_

/***************_INCLUDES_****************************/
#include "APP_Utility.h"
#include "MCAL_RCC_Private.h"
#include "MCAL_RCC_Config.h"
#include "MCAL_RCC_Register.h"

/*********        **********/
#define   Bus_AHB1   0U  /**/
#define   Bus_AHB2   1U  /**/
#define   Bus_APB1   2U  /**/
#define   Bus_APB2   3U  /**/
/***************************/



/***************_MACROS_CONFIGURATION_*********************/


/*============================================================================
  ==================_APIs Supported by "MCAL_RCC DRIVER"_====================
  ============================================================================*/
void MCAL_RCC_Bus_Enable_Clock(U8 AxBxENR_RCC_Bus ,U8 Peripheralx);
void MCAL_RCC_Bus_Disable_Clock(U8 AxBxENR_RCC_Bus ,U8 Peripheralx);
void MCAL_RCC_Enable_Security_System(void);
void MCAL_RCC_Disable_Security_System(void);
void MCAL_RCC_Out_MCO_1(U8 MCO_1_Source);
void MCAL_RCC_Out_MCO_1_Prescaler(U8 MCO_1_Prescaler);




#endif /* INC_MCAL_RCC_MCAL_RCC_INTERFACE_H_ */
