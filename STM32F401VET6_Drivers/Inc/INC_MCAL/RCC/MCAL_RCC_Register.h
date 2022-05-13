/*
 * MCAL_RCC_Register.h
 *
 *  Created on: May 13, 2022
 *      Author: Eng- Mohamed Mokhtar
 */

#ifndef INC_MCAL_RCC_MCAL_RCC_REGISTER_H_
#define INC_MCAL_RCC_MCAL_RCC_REGISTER_H_

/***************_APP_INCLUDES_*****************************/
#include "APP_Utility.h"
/**********************************************************/
/*      _____   _____ _____       _____          _       _                    _
 *     |  __ \ / ____/ ____|     |  __ \        (_)     | |                  | |
 *     | |__) | |   | |          | |__) |__ _ __ _ _ __ | |__   ___ _ __ __ _| |
 *     |  _  /| |   | |          |  ___/ _ \ '__| | '_ \| '_ \ / _ \ '__/ _` | |
 *     | | \ \| |___| |____   _  | |  |  __/ |  | | |_) | | | |  __/ | | (_| | |
 *     |_|  \_\\_____\_____| (_) |_|   \___|_|  |_| .__/|_| |_|\___|_|  \__,_|_|
 *                                                | |
 *                                                |_|
 */
				#define RCC_PERIPHERAL_BASE_ADDRESS     0x40023800
/*==========================================================================================
	-----> Register Map
============================================================================================*/
/*
#define RCC_REG_CR                      (*(( volatile u32* )(RCC_PERIPHERAL_BASE_ADDRESS + 0x00)))
#define RCC_REG_PLLCFGR                 (*(( volatile u32* )(RCC_PERIPHERAL_BASE_ADDRESS + 0x04)))
#define RCC_REG_CFGR                    (*(( volatile u32* )(RCC_PERIPHERAL_BASE_ADDRESS + 0x08)))
#define RCC_REG_CIR                     (*(( volatile u32* )(RCC_PERIPHERAL_BASE_ADDRESS + 0x0C)))
#define RCC_REG_AHB1RSTR                (*(( volatile u32* )(RCC_PERIPHERAL_BASE_ADDRESS + 0x10)))
#define RCC_REG_AHB2RSTR                (*(( volatile u32* )(RCC_PERIPHERAL_BASE_ADDRESS + 0x14)))
#define RCC_REG_APB1RSTR                (*(( volatile u32* )(RCC_PERIPHERAL_BASE_ADDRESS + 0x20)))
#define RCC_REG_APB2RSTR                (*(( volatile u32* )(RCC_PERIPHERAL_BASE_ADDRESS + 0x24)))
#define RCC_REG_AHB1ENR                 (*(( volatile u32* )(RCC_PERIPHERAL_BASE_ADDRESS + 0x30)))
#define RCC_REG_AHB2ENR                 (*(( volatile u32* )(RCC_PERIPHERAL_BASE_ADDRESS + 0x34)))
#define RCC_REG_APB1ENR                 (*(( volatile u32* )(RCC_PERIPHERAL_BASE_ADDRESS + 0x40)))
#define RCC_REG_APB2ENR                 (*(( volatile u32* )(RCC_PERIPHERAL_BASE_ADDRESS + 0x44)))
#define RCC_REG_AHB1LPENR               (*(( volatile u32* )(RCC_PERIPHERAL_BASE_ADDRESS + 0x50)))
#define RCC_REG_AHB2LPENR               (*(( volatile u32* )(RCC_PERIPHERAL_BASE_ADDRESS + 0x54)))
#define RCC_REG_APB1LPENR               (*(( volatile u32* )(RCC_PERIPHERAL_BASE_ADDRESS + 0x60)))
#define RCC_REG_APB2LPENR               (*(( volatile u32* )(RCC_PERIPHERAL_BASE_ADDRESS + 0x64)))
#define RCC_REG_BDCR                    (*(( volatile u32* )(RCC_PERIPHERAL_BASE_ADDRESS + 0x70)))
#define RCC_REG_CSR                     (*(( volatile u32* )(RCC_PERIPHERAL_BASE_ADDRESS + 0x74)))
#define RCC_REG_SSCGR                   (*(( volatile u32* )(RCC_PERIPHERAL_BASE_ADDRESS + 0x80)))
#define RCC_REG_PLLI2SCFGR              (*(( volatile u32* )(RCC_PERIPHERAL_BASE_ADDRESS + 0x84)))
#define RCC_REG_DCKCFGR                 (*(( volatile u32* )(RCC_PERIPHERAL_BASE_ADDRESS + 0x8c)))
*/
/*
typedef struct {
	volatile U32 REG_RCC_CR;                //!< RCC clock control register,                                  Address offset: 0x00
	volatile U32 REG_RCC_PLLCFGR;           //!< RCC PLL configuration register,                              Address offset: 0x04
	volatile U32 REG_RCC_CFGR;              //!< RCC clock configuration register,                            Address offset: 0x08
	volatile U32 REG_RCC_CIR;               //!< RCC clock interrupt register,                                Address offset: 0x0C
	volatile U32 REG_RCC_AHB1RSTR;          //!< RCC AHB1 peripheral reset register,                          Address offset: 0x10
	volatile U32 REG_RCC_AHB2RSTR;          //!< RCC AHB2 peripheral reset register,                          Address offset: 0x14
	volatile U32 REG_RCC_RESERVED_1_[2];    //!< Reserved, 0x28-0x2C
	volatile U32 REG_RCC_APB1RSTR;          //!< RCC APB1 peripheral reset register,                          Address offset: 0x20
	volatile U32 REG_RCC_APB2RSTR;          //!< RCC APB2 peripheral reset register,                          Address offset: 0x24
	volatile U32 REG_RCC_RESERVED_2_[2];    //!< Reserved, 0x28-0x2C
	volatile U32 REG_RCC_AHB1ENR;           //!< RCC AHB1 peripheral clock register,                          Address offset: 0x30
	volatile U32 REG_RCC_AHB2ENR;           //!< RCC AHB2 peripheral clock register,                          Address offset: 0x34
	volatile U32 REG_RCC_RESERVED_3_[2];	//!< Reserved,
	volatile U32 REG_RCC_APB1ENR;           //!< RCC APB1 peripheral clock enable register,                   Address offset: 0x40
	volatile U32 REG_RCC_APB2ENR;           //!< RCC APB2 peripheral clock enable register,                   Address offset: 0x44
	volatile U32 REG_RCC_RESERVED_4_[2];    //!< Reserved, 0x48-0x4C
	volatile U32 REG_RCC_AHB1LPENR;         //!< RCC AHB1 peripheral clock enable in low power mode register, Address offset: 0x50
	volatile U32 REG_RCC_AHB2LPENR;         //!< RCC AHB2 peripheral clock enable in low power mode register, Address offset: 0x54
	volatile U32 REG_RCC_RESERVED_5_[2];    //!< Reserved, 0x48-0x4C
	volatile U32 REG_RCC_APB1LPENR;         //!< RCC APB1 peripheral clock enable in low power mode register, Address offset: 0x60
	volatile U32 REG_RCC_APB2LPENR;         //!< RCC APB2 peripheral clock enable in low power mode register, Address offset: 0x64
	volatile U32 REG_RCC_RESERVED_6_[2];    //!< Reserved, 0x68-0x6C
	volatile U32 REG_RCC_BDCR;              //!< RCC Backup domain control register,                          Address offset: 0x70
	volatile U32 REG_RCC_CSR;               //!< RCC clock control & status register,                         Address offset: 0x74
	volatile U32 REG_RCC_RESERVED_7_[2];    //!< Reserved, 0x78-0x7C
	volatile U32 REG_RCC_SSCGR;             //!< RCC spread spectrum clock generation register,               Address offset: 0x80
	volatile U32 REG_RCC_PLLI2SCFGR;        //!< RCC PLLI2S configuration register,                           Address offset: 0x84
	volatile U32 REG_RCC_RESERVED_8_[1];    //!< Reserved, 0x88
	volatile U32 REG_RCC_DCKCFGR;           //!< RCC Dedicated Clocks configuration register,                 Address offset: 0x8C
} RCC_PERIPHERAL_Stag;
*/
typedef struct {
	volatile Register_32Bit_Utag REG_RCC_CR;                /*!< RCC clock control register,                                  Address offset: 0x00 */
	volatile Register_32Bit_Utag REG_RCC_PLLCFGR;           /*!< RCC PLL configuration register,                              Address offset: 0x04 */
	volatile Register_32Bit_Utag REG_RCC_CFGR;              /*!< RCC clock configuration register,                            Address offset: 0x08 */
	volatile Register_32Bit_Utag REG_RCC_CIR;               /*!< RCC clock interrupt register,                                Address offset: 0x0C */
	volatile Register_32Bit_Utag REG_RCC_AHB1RSTR;          /*!< RCC AHB1 peripheral reset register,                          Address offset: 0x10 */
	volatile Register_32Bit_Utag REG_RCC_AHB2RSTR;          /*!< RCC AHB2 peripheral reset register,                          Address offset: 0x14 */
	volatile U32 				 REG_RCC_RESERVED_1_[2];    /*!< Reserved, 0x28-0x2C                                                               */
	volatile Register_32Bit_Utag REG_RCC_APB1RSTR;          /*!< RCC APB1 peripheral reset register,                          Address offset: 0x20 */
	volatile Register_32Bit_Utag REG_RCC_APB2RSTR;          /*!< RCC APB2 peripheral reset register,                          Address offset: 0x24 */
	volatile U32 				 REG_RCC_RESERVED_2_[2];    /*!< Reserved, 0x28-0x2C                                                               */
	volatile Register_32Bit_Utag REG_RCC_AHB1ENR;           /*!< RCC AHB1 peripheral clock register,                          Address offset: 0x30 */
	volatile Register_32Bit_Utag REG_RCC_AHB2ENR;           /*!< RCC AHB2 peripheral clock register,                          Address offset: 0x34 */
	volatile U32 			     REG_RCC_RESERVED_3_[2];	/*!< Reserved,                                                                */
	volatile Register_32Bit_Utag REG_RCC_APB1ENR;           /*!< RCC APB1 peripheral clock enable register,                   Address offset: 0x40 */
	volatile Register_32Bit_Utag REG_RCC_APB2ENR;           /*!< RCC APB2 peripheral clock enable register,                   Address offset: 0x44 */
	volatile U32 				 REG_RCC_RESERVED_4_[2];    /*!< Reserved, 0x48-0x4C                                                               */
	volatile Register_32Bit_Utag REG_RCC_AHB1LPENR;         /*!< RCC AHB1 peripheral clock enable in low power mode register, Address offset: 0x50 */
	volatile Register_32Bit_Utag REG_RCC_AHB2LPENR;         /*!< RCC AHB2 peripheral clock enable in low power mode register, Address offset: 0x54 */
	volatile U32			     REG_RCC_RESERVED_5_[2];    /*!< Reserved, 0x48-0x4C                                                               */
	volatile Register_32Bit_Utag REG_RCC_APB1LPENR;         /*!< RCC APB1 peripheral clock enable in low power mode register, Address offset: 0x60 */
	volatile Register_32Bit_Utag REG_RCC_APB2LPENR;         /*!< RCC APB2 peripheral clock enable in low power mode register, Address offset: 0x64 */
	volatile U32				 REG_RCC_RESERVED_6_[2];    /*!< Reserved, 0x68-0x6C                                                               */
	volatile Register_32Bit_Utag REG_RCC_BDCR;              /*!< RCC Backup domain control register,                          Address offset: 0x70 */
	volatile Register_32Bit_Utag REG_RCC_CSR;               /*!< RCC clock control & status register,                         Address offset: 0x74 */
	volatile U32				 REG_RCC_RESERVED_7_[2];    /*!< Reserved, 0x78-0x7C                                                               */
	volatile Register_32Bit_Utag REG_RCC_SSCGR;             /*!< RCC spread spectrum clock generation register,               Address offset: 0x80 */
	volatile Register_32Bit_Utag REG_RCC_PLLI2SCFGR;        /*!< RCC PLLI2S configuration register,                           Address offset: 0x84 */
	volatile U32 				 REG_RCC_RESERVED_8_[1];    /*!< Reserved, 0x88                                                                    */
	volatile Register_32Bit_Utag REG_RCC_DCKCFGR;           /*!< RCC Dedicated Clocks configuration register,                 Address offset: 0x8C */
} RCC_PERIPHERAL_Stag;

typedef enum {
	CR_HSI_ON		=0,
	CR_HSI_RDY		=1,
	CR_HSE_RDY		=17,
	CR_HSE_ON		=16,
	CR_HSE_BYP		=18,
	CR_CSS_ON 		=19,
	CR_PLL_ON 		=24,
	CR_PLL_RDY 		=25,
	CR_PLLI2S_ON 	=26,
	CR_PLLI2S_RDY 	=27
}RCC_CR_Etag;


/*============================================================================================
	-)	Struct Pointer :	Base_Address ->	RRC
  ============================================================================================*/
#define RCC_SPTR      ((RCC_PERIPHERAL_Stag *)RCC_PERIPHERAL_BASE_ADDRESS)

#endif /* INC_MCAL_RCC_MCAL_RCC_REGISTER_H_ */
