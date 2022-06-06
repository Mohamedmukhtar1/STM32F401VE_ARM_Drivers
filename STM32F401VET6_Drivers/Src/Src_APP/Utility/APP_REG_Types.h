/*
 * APP_REG_Types.h
 *
 *  Created on: May 13, 2022
 *      Author: Eng- Mohamed Mokhtar
 */

#ifndef INC_APP_UTILITY_APP_REG_TYPES_H_
#define INC_APP_UTILITY_APP_REG_TYPES_H_

/* 8_bit Register Typedef ***************************************************************/
typedef union
{
	struct{
		u8 BIT0:1;
		u8 BIT1:1;
		u8 BIT2:1;
		u8 BIT3:1;
		u8 BIT4:1;
		u8 BIT5:1;
		u8 BIT6:1;
		u8 BIT7:1;
		}BitAccess;
	u8 RegisterAccess;
}Reg_8Bit_Utag;

/* 16_bit Register Typedef **************************************************************/
typedef union
{
	struct Bit_Order{
		u16 BIT0:1;
		u16 BIT1:1;
		u16 BIT2:1;
		u16 BIT3:1;
		u16 BIT4:1;
		u16 BIT5:1;
		u16 BIT6:1;
		u16 BIT7:1;
		u16 BIT8:1;
		u16 BIT9:1;
		u16 BIT10:1;
		u16 BIT11:1;
		u16 BIT12:1;
		u16 BIT13:1;
		u16 BIT14:1;
		u16 BIT15:1;
		}BitAccess;
	struct{
		u16 BYTE0:8;
		u16 BYTE1:8;
		}ByteAccess;
	u16 RegisterAccess;
}Reg_16Bit_Utag;

/* 32_bit Register Typedef **************************************************************/
typedef union
{
	struct{
		u32 BIT0:1;
		u32 BIT1:1;
		u32 BIT2:1;
		u32 BIT3:1;
		u32 BIT4:1;
		u32 BIT5:1;
		u32 BIT6:1;
		u32 BIT7:1;
		u32 BIT8:1;
		u32 BIT9:1;
		u32 BIT10:1;
		u32 BIT11:1;
		u32 BIT12:1;
		u32 BIT13:1;
		u32 BIT14:1;
		u32 BIT15:1;
		u32 BIT16:1;
		u32 BIT17:1;
		u32 BIT18:1;
		u32 BIT19:1;
		u32 BIT20:1;
		u32 BIT21:1;
		u32 BIT22:1;
		u32 BIT23:1;
		u32 BIT24:1;
		u32 BIT25:1;
		u32 BIT26:1;
		u32 BIT27:1;
		u32 BIT28:1;
		u32 BIT29:1;
		u32 BIT30:1;
		u32 BIT31:1;
		}BitAccess;
	struct{
		u32 BYTE0:8;
		u32 BYTE1:8;
		u32 BYTE2:8;
		u32 BYTE3:8;
		}ByteAccess;
	u32 RegisterAccess;
}Reg_32Bit_Utag;

#endif /* INC_APP_UTILITY_APP_REG_TYPES_H_ */
