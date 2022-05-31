/*
 * HAL_LCD.c
 *
 *  Created on: May 30, 2022
 *      Author: Eng- Mohamed Mokhtar
 */

#include "HAL_LCD_Interface.h"

void HLCD_vInitiate(void)
{
	MRCC_vEnableBusClock(Bus_AHB1, LCD_BUS);
	/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
	MGPIO_vSetPinMode(LCD_RS_PIN, OUTPUT_MODE);
	MGPIO_vSetPinMode(LCD_RW_PIN, OUTPUT_MODE);
	MGPIO_vSetPinMode(LCD_EN_PIN, OUTPUT_MODE);
	MGPIO_vSetPinOutputSpeed(LCD_RS_PIN, OUTPUT_LOW_SPEED);
	MGPIO_vSetPinOutputSpeed(LCD_RW_PIN, OUTPUT_LOW_SPEED);
	MGPIO_vSetPinOutputSpeed(LCD_EN_PIN, OUTPUT_LOW_SPEED);
	MGPIO_vSetPinOutputType(LCD_RS_PIN, OUTPUT_PUSH_PULL_TYPE);
	MGPIO_vSetPinOutputType(LCD_RW_PIN, OUTPUT_PUSH_PULL_TYPE);
	MGPIO_vSetPinOutputType(LCD_EN_PIN, OUTPUT_PUSH_PULL_TYPE);
	/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
	#if LCD_MODE     ==   _8_BIT_MODE
	MGPIO_vSetPinMode(LCD_DATA_0_PIN, OUTPUT_MODE);
	MGPIO_vSetPinMode(LCD_DATA_1_PIN, OUTPUT_MODE);
	MGPIO_vSetPinMode(LCD_DATA_2_PIN, OUTPUT_MODE);
	MGPIO_vSetPinMode(LCD_DATA_3_PIN, OUTPUT_MODE);
	MGPIO_vSetPinOutputSpeed(LCD_DATA_0_PIN, OUTPUT_LOW_SPEED);
	MGPIO_vSetPinOutputSpeed(LCD_DATA_1_PIN, OUTPUT_LOW_SPEED);
	MGPIO_vSetPinOutputSpeed(LCD_DATA_2_PIN, OUTPUT_LOW_SPEED);
	MGPIO_vSetPinOutputSpeed(LCD_DATA_3_PIN, OUTPUT_LOW_SPEED);
	MGPIO_vSetPinOutputType(LCD_DATA_0_PIN, OUTPUT_PUSH_PULL_TYPE);
	MGPIO_vSetPinOutputType(LCD_DATA_1_PIN, OUTPUT_PUSH_PULL_TYPE);
	MGPIO_vSetPinOutputType(LCD_DATA_2_PIN, OUTPUT_PUSH_PULL_TYPE);
	MGPIO_vSetPinOutputType(LCD_DATA_3_PIN, OUTPUT_PUSH_PULL_TYPE);

	#elif LCD_MODE    ==   _4_BIT_MODE
				/**NOTHING**/
	#endif
/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
	MGPIO_vSetPinMode(LCD_DATA_4_PIN, OUTPUT_MODE);
	MGPIO_vSetPinMode(LCD_DATA_5_PIN, OUTPUT_MODE);
	MGPIO_vSetPinMode(LCD_DATA_6_PIN, OUTPUT_MODE);
	MGPIO_vSetPinMode(LCD_DATA_7_PIN, OUTPUT_MODE);
	MGPIO_vSetPinOutputSpeed(LCD_DATA_4_PIN, OUTPUT_LOW_SPEED);
	MGPIO_vSetPinOutputSpeed(LCD_DATA_5_PIN, OUTPUT_LOW_SPEED);
	MGPIO_vSetPinOutputSpeed(LCD_DATA_6_PIN, OUTPUT_LOW_SPEED);
	MGPIO_vSetPinOutputSpeed(LCD_DATA_7_PIN, OUTPUT_LOW_SPEED);
	MGPIO_vSetPinOutputType(LCD_DATA_4_PIN, OUTPUT_PUSH_PULL_TYPE);
	MGPIO_vSetPinOutputType(LCD_DATA_5_PIN, OUTPUT_PUSH_PULL_TYPE);
	MGPIO_vSetPinOutputType(LCD_DATA_6_PIN, OUTPUT_PUSH_PULL_TYPE);
	MGPIO_vSetPinOutputType(LCD_DATA_7_PIN, OUTPUT_PUSH_PULL_TYPE);

/*==============================================================================*/
	Delay_vMilliSecond16MHzoscillator(50); //Wait for H/W init...
	#if LCD_MODE     ==   _8_BIT_MODE
	HLCD_WriteCommand(LCD_COMMAND_ACTIVATE_8_BITMODE);
	Delay_vMilliSecond16MHzoscillator(5);
	#elif LCD_MODE    ==   _4_BIT_MODE
	Delay_vMilliSecond16MHzoscillator(5);
	HLCD_WriteCommand(LCD_COMMAND_1_ACTIVATE_4_BITMODE);
	Delay_vMilliSecond16MHzoscillator(5);
	HLCD_WriteCommand(LCD_COMMAND_2_ACTIVATE_4_BITMODE);
	Delay_vMilliSecond16MHzoscillator(5);
	HLCD_WriteCommand(LCD_COMMAND_3_ACTIVATE_4_BITMODE);
	Delay_vMilliSecond16MHzoscillator(5);
	#endif
	HLCD_WriteCommand(LCD_COMMAND_DISPLAY_ON_CURSOR_OFF);
	Delay_vMilliSecond16MHzoscillator(1);
	HLCD_WriteCommand(LCD_COMMAND_CLEAR_SCREEN);
	Delay_vMilliSecond16MHzoscillator(1);
	HLCD_WriteCommand(LCD_COMMAND_RETURN_HOME);
	Delay_vMilliSecond16MHzoscillator(1);
	HLCD_WriteCommand(LCD_COMMAND_CURSOR_INCREMENT);
	Delay_vMilliSecond16MHzoscillator(1);
}

void HLCD_WriteCommand(U8 loc_U8_LCD_COMMAND)
{
	MGPIO_vWritePinData(LCD_RS_PIN, LOW_STATE); // Fetal operation if High while "Command Transfer"
	MGPIO_vWritePinData(LCD_RW_PIN, LOW_STATE); // Held Low for "Write Operation"
	/**********************	_8_BIT_MODE	*************************/
	#if LCD_MODE    ==   _8_BIT_MODE
	MGPIO_vWritePinData(LCD_DATA_0_PIN, GET_BIT(loc_U8_LCD_COMMAND, 0));
	MGPIO_vWritePinData(LCD_DATA_1_PIN, GET_BIT(loc_U8_LCD_COMMAND, 1));
	MGPIO_vWritePinData(LCD_DATA_2_PIN, GET_BIT(loc_U8_LCD_COMMAND, 2));
	MGPIO_vWritePinData(LCD_DATA_3_PIN, GET_BIT(loc_U8_LCD_COMMAND, 3));
	MGPIO_vWritePinData(LCD_DATA_4_PIN, GET_BIT(loc_U8_LCD_COMMAND, 4));
	MGPIO_vWritePinData(LCD_DATA_5_PIN, GET_BIT(loc_U8_LCD_COMMAND, 5));
	MGPIO_vWritePinData(LCD_DATA_6_PIN, GET_BIT(loc_U8_LCD_COMMAND, 6));
	MGPIO_vWritePinData(LCD_DATA_7_PIN, GET_BIT(loc_U8_LCD_COMMAND, 7));
	MGPIO_vWritePinData(LCD_EN_PIN, HIGH_STATE);
	Delay_vMilliSecond16MHzoscillator(5);
	MGPIO_vWritePinData(LCD_EN_PIN, LOW_STATE);
	Delay_vMilliSecond16MHzoscillator(2);
	/**********************	_4_BIT_MODE	*************************/
	#elif LCD_MODE    ==   _4_BIT_MODE
	/***   Sending HIGH Nibble of 8 Bits Data   ***/
	MGPIO_vWritePinData(LCD_DATA_4_PIN, GET_BIT(loc_U8_LCD_COMMAND, 4U));
	MGPIO_vWritePinData(LCD_DATA_5_PIN, GET_BIT(loc_U8_LCD_COMMAND, 5U));
	MGPIO_vWritePinData(LCD_DATA_6_PIN, GET_BIT(loc_U8_LCD_COMMAND, 6U));
	MGPIO_vWritePinData(LCD_DATA_7_PIN, GET_BIT(loc_U8_LCD_COMMAND, 7U));
	MGPIO_vWritePinData(LCD_EN_PIN, HIGH_STATE);
	Delay_vMilliSecond16MHzoscillator(5);
	MGPIO_vWritePinData(LCD_EN_PIN, LOW_STATE);
	Delay_vMilliSecond16MHzoscillator(2);
	/***   Sending LOW Nibble of 8 Bits Data    ***/
	MGPIO_vWritePinData(LCD_DATA_4_PIN, GET_BIT(loc_U8_LCD_COMMAND, 0U));
	MGPIO_vWritePinData(LCD_DATA_5_PIN, GET_BIT(loc_U8_LCD_COMMAND, 1U));
	MGPIO_vWritePinData(LCD_DATA_6_PIN, GET_BIT(loc_U8_LCD_COMMAND, 2U));
	MGPIO_vWritePinData(LCD_DATA_7_PIN, GET_BIT(loc_U8_LCD_COMMAND, 3U));
	MGPIO_vWritePinData(LCD_EN_PIN, HIGH_STATE);
	Delay_vMilliSecond16MHzoscillator(5);
	MGPIO_vWritePinData(LCD_EN_PIN, LOW_STATE);
	Delay_vMilliSecond16MHzoscillator(2);
	#endif
}

void HLCD_ClearScreen(void)
{
	HLCD_WriteCommand(LCD_COMMAND_CLEAR_SCREEN); //Refer to the command sheet "HAL_LCD_COMMANDS"
}

void HLCD_GoTo(U8 loc_U8_Row, U8 loc_U8_Col)
{
	#if   LCD_DIMENSIONS   ==   LCD_2_BY_16
	U8 loc_Arr_RC_Commands[2] = {LCD_COMMAND_GOTO_1stLINE_POS_0,
							     LCD_COMMAND_GOTO_2ndLINE_POS_0 };
	#elif LCD_DIMENSIONS   ==   LCD_4_BY_16
	U8 loc_Arr_RC_Commands[4] = {LCD_COMMAND_GOTO_1stLINE_POS_0,
								 LCD_COMMAND_GOTO_2ndLINE_POS_0,
								 LCD_COMMAND_GOTO_3ndLINE_POS_0,
							     LCD_COMMAND_GOTO_4ndLINE_POS_0 };
	#endif
	//Refer to the command sheet "HAL_LCD_COMMANDS"
	HLCD_WriteCommand(loc_Arr_RC_Commands[loc_U8_Row]+loc_U8_Col);
}

void HLCD_WriteCharacter(U8 loc_U8_CHARACTER)
{
	MGPIO_vWritePinData(LCD_RS_PIN, HIGH_STATE); // Fetal operation if Low while "Data Transfer"
	MGPIO_vWritePinData(LCD_RW_PIN, LOW_STATE);  // Held Low for "Write Operation"
	/**********************	_8_BIT_MODE	*************************/
	#if LCD_MODE    ==   _8_BIT_MODE
	MGPIO_vWritePinData(LCD_DATA_0_PIN, GET_BIT(loc_U8_CHARACTER, 0));
	MGPIO_vWritePinData(LCD_DATA_1_PIN, GET_BIT(loc_U8_CHARACTER, 1));
	MGPIO_vWritePinData(LCD_DATA_2_PIN, GET_BIT(loc_U8_CHARACTER, 2));
	MGPIO_vWritePinData(LCD_DATA_3_PIN, GET_BIT(loc_U8_CHARACTER, 3));
	MGPIO_vWritePinData(LCD_DATA_4_PIN, GET_BIT(loc_U8_CHARACTER, 4));
	MGPIO_vWritePinData(LCD_DATA_5_PIN, GET_BIT(loc_U8_CHARACTER, 5));
	MGPIO_vWritePinData(LCD_DATA_6_PIN, GET_BIT(loc_U8_CHARACTER, 6));
	MGPIO_vWritePinData(LCD_DATA_7_PIN, GET_BIT(loc_U8_CHARACTER, 7));
	MGPIO_vWritePinData(LCD_EN_PIN, HIGH_STATE);
	Delay_vMilliSecond16MHzoscillator(5);
	MGPIO_vWritePinData(LCD_EN_PIN, LOW_STATE);
	Delay_vMilliSecond16MHzoscillator(2);
	/**********************	_4_BIT_MODE	*************************/
	#elif LCD_MODE    ==   _4_BIT_MODE
	/***   Sending HIGH Nibble of 8 Bits Data   ***/
	MGPIO_vWritePinData(LCD_DATA_4_PIN, GET_BIT(loc_U8_CHARACTER, 4U));
	MGPIO_vWritePinData(LCD_DATA_5_PIN, GET_BIT(loc_U8_CHARACTER, 5U));
	MGPIO_vWritePinData(LCD_DATA_6_PIN, GET_BIT(loc_U8_CHARACTER, 6U));
	MGPIO_vWritePinData(LCD_DATA_7_PIN, GET_BIT(loc_U8_CHARACTER, 7U));
	MGPIO_vWritePinData(LCD_EN_PIN, HIGH_STATE);
	Delay_vMilliSecond16MHzoscillator(5);
	MGPIO_vWritePinData(LCD_EN_PIN, LOW_STATE);
	Delay_vMilliSecond16MHzoscillator(2);
	/***   Sending LOW Nibble of 8 Bits Data    ***/
	MGPIO_vWritePinData(LCD_DATA_4_PIN, GET_BIT(loc_U8_CHARACTER, 0U));
	MGPIO_vWritePinData(LCD_DATA_5_PIN, GET_BIT(loc_U8_CHARACTER, 1U));
	MGPIO_vWritePinData(LCD_DATA_6_PIN, GET_BIT(loc_U8_CHARACTER, 2U));
	MGPIO_vWritePinData(LCD_DATA_7_PIN, GET_BIT(loc_U8_CHARACTER, 3U));
	MGPIO_vWritePinData(LCD_EN_PIN, HIGH_STATE);
	Delay_vMilliSecond16MHzoscillator(5);
	MGPIO_vWritePinData(LCD_EN_PIN, LOW_STATE);
	Delay_vMilliSecond16MHzoscillator(2);
	#endif
}

void HLCD_WriteString(U8 *loc_U8_PTR_STRING)
{
	U8 loc_U8_Counter =0;
	while(loc_U8_PTR_STRING[loc_U8_Counter] != '\0')
	{
		HLCD_WriteCharacter(loc_U8_PTR_STRING[loc_U8_Counter]);
		loc_U8_Counter++;
	}
}

void HAL_LCD_WRITE_NUMBER(F32 loc_F32_NUMBER)
{
	S8 loc_S8_counter =0;		//must be S to include the -Ve counter state of -1 in (counter >= 0)
	S8 loc_S8_counter_copy =0;	//makes a valid non changed state of counter to be compared
	U8 loc_U8_Float_Flag =0;		//indicates that the inserted number is float or non-float

	U8 POINT_POSITION =1;		//indicates that the float point position
	U8 loc_U8_Arr_Digit_Display [10] = {0};	//the maximum digits for 32-bit number is ~ 10

	S32 loc_S32_Number_Copy = loc_F32_NUMBER;
	S32 loc_S32_FloatCast = (S32)loc_F32_NUMBER*FLOAT_RESELUTION; //integer powered copy
	S32 loc_S32_FloatHold = loc_F32_NUMBER*FLOAT_RESELUTION; //float powered copy

	if(loc_F32_NUMBER <0){ //CHK for '-Ve' state
		HLCD_WriteCharacter('-');
		loc_S32_Number_Copy = loc_S32_Number_Copy*(-1);	// -Ve ~ +Ve
		loc_S32_FloatHold   = loc_S32_FloatHold*(-1);	// -Ve ~ +Ve
		loc_S32_FloatCast   = loc_S32_FloatCast*(-1);	// -Ve ~ +Ve
	}
	else if(loc_F32_NUMBER == 0){ //CHK for '0' state
		HLCD_WriteCharacter('0');
	}
	else {/*NOTHING*/}
	/****************************STORING PROCCES********************************/
	if (loc_S32_FloatHold > loc_S32_FloatCast){ //CHK for 'float' state
		loc_U8_Float_Flag =1;
		if (loc_S32_FloatCast == 0)
		{
			HLCD_WriteCharacter('0');
			HLCD_WriteCharacter('.');
		}
		else {/*NOTHING*/}
		while(loc_S32_FloatHold != 0)
		{ //inserting the digits to array from the 0-indx to the N-indx
			loc_U8_Arr_Digit_Display [loc_S8_counter] = loc_S32_FloatHold % 10;
			loc_S8_counter++;
			loc_S32_FloatHold = loc_S32_FloatHold / 10;
		}
		loc_S32_FloatCast = loc_S32_FloatCast /FLOAT_RESELUTION;
		while(loc_S32_FloatCast != 0)
		{ //Detecting where's the float point exactly
			POINT_POSITION++;
			loc_S32_FloatCast = loc_S32_FloatCast / 10;
		}
	}
	else { //'integer' state
		loc_U8_Float_Flag =0;
		while(loc_S32_Number_Copy != 0)
		{ //inserting the digits to array from the 0-indx to the N-indx
			loc_U8_Arr_Digit_Display [loc_S8_counter] = loc_S32_Number_Copy % 10;
			loc_S8_counter++;
			loc_S32_Number_Copy = loc_S32_Number_Copy / 10;
		}
	}
	loc_S8_counter_copy = loc_S8_counter;
	loc_S8_counter--;
	/****************************PRINTING PROCCES********************************/
	while (loc_S8_counter >= 0)
	{ //Displaying the digits while it's being stored backward
		HLCD_WriteCharacter(loc_U8_Arr_Digit_Display[loc_S8_counter] + ASCII_NUM_INIT);
		loc_S8_counter--; //Escaping Counter
		if ((loc_S8_counter_copy-POINT_POSITION)==loc_S8_counter && (loc_U8_Float_Flag==1)){
			//it doesn't apply for POINT_POSITION =1 , POINT_POSITION has to be >1 to be seen
			HLCD_WriteCharacter('.');
		}
		else {/*NOTHING*/}
	}
}



