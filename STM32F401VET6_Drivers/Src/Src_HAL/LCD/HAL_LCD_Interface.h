/*
 * HAL_LCD_Interface.h
 *
 *  Created on: May 30, 2022
 *      Author: Eng- Mohamed Mokhtar
 */

#ifndef SRC_HAL_LCD_HAL_LCD_INTERFACE_H_
#define SRC_HAL_LCD_HAL_LCD_INTERFACE_H_

/***************_APP_INCLUDES_*****************************/
#include "..\..\Src_APP\Utility\APP_Utility.h"

/***************_HAL_INCLUDES_*****************************/
#include "HAL_LCD_Private.h"
#include "HAL_LCD_Config.h"
#include "HAL_LCD_Commands.h"

/***************_MCAL_INCLUDES_****************************/
#include "..\..\Src_MCAL\RCC\MCAL_RCC_Interface.h"
#include "..\..\Src_MCAL\GPIO\MCAL_GPIO_Interface.h"

/*FLOAT_RESELUTION options:
[1]->0,						[0 point]
[10]->0.0,					[1 point]
[100]->0.00,				[2 point]
[1000]->0.000,				[3 point]
[10000]->0.0000				[4 point]
Max[100000000]->0.000000	[6 point]*/
#define FLOAT_RESELUTION		100

/*============================================================================
  ==================_APIs Supported by "HAL_LCD DRIVER"_======================
  ============================================================================*/
void HLCD_vInitiate(void);
void HLCD_WriteCommand(U8 loc_U8_LCD_COMMAND);
void HLCD_ClearScreen(void);
void HLCD_GoTo(U8 loc_U8_Row, U8 loc_U8_Col);
/***********************************************************************/
void HLCD_WriteCharacter(U8 loc_U8_CHARACTER);
void HLCD_WriteString(U8 *loc_U8_PTR_STRING);
void HAL_LCD_WRITE_NUMBER(F64 loc_F32_NUMBER);




#endif /* SRC_HAL_LCD_HAL_LCD_INTERFACE_H_ */
