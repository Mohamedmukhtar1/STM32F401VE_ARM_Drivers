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

/**********   **********/
typedef enum
{
   Bus_AHB1 =0,
   Bus_AHB2   ,
   Bus_APB1   ,
   Bus_APB2
}BusName_Etag;



/***************_MACROS_CONFIGURATION_*********************/


/*============================================================================
  ==================_APIs Supported by "MCAL_RCC DRIVER"_====================
  ============================================================================*/
void MCAL_RCC_Bus_Enable_Clock(BusName_Etag BusNamex , RCC_AHB1ENR_Etag Peripheralx);
void MCAL_RCC_Bus_Disable_Clock(BusName_Etag BusNamex , RCC_AHB1ENR_Etag Peripheralx);
void MCAL_RCC_Enable_Security_System(void);
void MCAL_RCC_Disable_Security_System(void);




#endif /* INC_MCAL_RCC_MCAL_RCC_INTERFACE_H_ */
