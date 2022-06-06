/*
 * HAL_TFT_Interface.h
 *
 *  Created on: Jun 1, 2022
 *      Author: Eng- Mohamed Mokhtar
 */

#ifndef SRC_HAL_TFT_HAL_TFT_INTERFACE_H_
#define SRC_HAL_TFT_HAL_TFT_INTERFACE_H_

/***************_APP_INCLUDES_*****************************/
#include "..\..\Src_APP\Utility\APP_Utility.h"

/***************_HAL_INCLUDES_*****************************/
#include "HAL_TFT_Private.h"
#include "HAL_TFT_Config.h"
#include "HAL_TFT_Commands.h"

/***************_MCAL_INCLUDES_****************************/
#include "../../Src_MCAL/RCC/MCAL_RCC_Interface.h"
#include "../../Src_MCAL/GPIO/MCAL_GPIO_Interface.h"
#include "../../Src_MCAL/SYSTIK/MCAL_SYSTIK_Interface.h"
#include "../../Src_MCAL/SPI/MCAL_SPI_Interface.h"

/***************_MACROS_CONFIGURATION_*********************/


/*============================================================================
  ==================_APIs Supported by "HAL_TFT DRIVER"_======================
  ============================================================================*/
/*Function to Initialize TFT*/
void HTFT_vInit(void);

/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
/*Function to TFT System*/
void HTFT_vWrite_Command(u8 Copy_u8Command);
void HTFT_vWrite_Data(u16 Copy_u8Data);
void HTFT_vSetCursorPosition(u16 X_Start, u16 Y_Start, u16 X_End, u16 Y_End);

/****************************************************************************/
/*Function to Display Image TFT*/
void HTFT_vDisplay_Image(const u16* Copy_Image); /*Const to go to flash memory not Ram memory*/ //ERROR

void HTFT_vDrawPic(u16 X_Start,u16 X_End, u16 Y_Start, u16 Y_End, const u16* Copy_Image);
void HTFT_vFillColor(u16 Copy_Color);

void HTFT_vDrawRectangle(u16 X_Start,u16 X_End, u16 Y_Start, u16 Y_End, u16 Copy_u16Color);
void HTFT_vClearScreen();

void HTFT_vDrawPixel(u8 x,u16 y, u16 color);
void HTFT_vDrawPicturesPixels(u8 x1,u8 x2,u16 y1,u16 y2, const u16*Copy_Image);
void HTFT_vDrawHLine(u8 x1, u16 y1, u8 lenght, u16 color);


#endif /* SRC_HAL_TFT_HAL_TFT_INTERFACE_H_ */
