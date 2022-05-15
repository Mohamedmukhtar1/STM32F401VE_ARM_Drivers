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
 **********************_Mechanic_Style_***********************************************************
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
 *  **********************_Someone_Who_Finally_Understands_***************************************
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
 /***********************_Expert_Mode_*********************************************************/
typedef struct {
	volatile Register_32Bit_Utag REG_RCC_CR;                /*!< RCC clock control register,                                  Address offset: 0x00 */
	volatile Register_32Bit_Utag REG_RCC_PLLCFGR;           /*!< RCC PLL configuration register,                              Address offset: 0x04 */
	volatile Register_32Bit_Utag REG_RCC_CFGR;              /*!< RCC clock configuration register,                            Address offset: 0x08 */
	volatile Register_32Bit_Utag REG_RCC_CIR;               /*!< RCC clock interrupt register,                                Address offset: 0x0C */
	volatile Register_32Bit_Utag REG_RCC_AHB1RSTR;          /*!< RCC AHB1 peripheral reset register,                          Address offset: 0x10 */
	volatile Register_32Bit_Utag REG_RCC_AHB2RSTR;          /*!< RCC AHB2 peripheral reset register,                          Address offset: 0x14 */
	volatile U32                 REG_RCC_RESERVED_1_[2];    /*!< Reserved, 0x28-0x2C                                                               */
	volatile Register_32Bit_Utag REG_RCC_APB1RSTR;          /*!< RCC APB1 peripheral reset register,                          Address offset: 0x20 */
	volatile Register_32Bit_Utag REG_RCC_APB2RSTR;          /*!< RCC APB2 peripheral reset register,                          Address offset: 0x24 */
	volatile U32                 REG_RCC_RESERVED_2_[2];    /*!< Reserved, 0x28-0x2C                                                               */
	volatile Register_32Bit_Utag REG_RCC_AHB1ENR;           /*!< RCC AHB1 peripheral clock register,                          Address offset: 0x30 */
	volatile Register_32Bit_Utag REG_RCC_AHB2ENR;           /*!< RCC AHB2 peripheral clock register,                          Address offset: 0x34 */
	volatile U32                 REG_RCC_RESERVED_3_[2];	/*!< Reserved,                                                                */
	volatile Register_32Bit_Utag REG_RCC_APB1ENR;           /*!< RCC APB1 peripheral clock enable register,                   Address offset: 0x40 */
	volatile Register_32Bit_Utag REG_RCC_APB2ENR;           /*!< RCC APB2 peripheral clock enable register,                   Address offset: 0x44 */
	volatile U32                 REG_RCC_RESERVED_4_[2];    /*!< Reserved, 0x48-0x4C                                                               */
	volatile Register_32Bit_Utag REG_RCC_AHB1LPENR;         /*!< RCC AHB1 peripheral clock enable in low power mode register, Address offset: 0x50 */
	volatile Register_32Bit_Utag REG_RCC_AHB2LPENR;         /*!< RCC AHB2 peripheral clock enable in low power mode register, Address offset: 0x54 */
	volatile U32                 REG_RCC_RESERVED_5_[2];    /*!< Reserved, 0x48-0x4C                                                               */
	volatile Register_32Bit_Utag REG_RCC_APB1LPENR;         /*!< RCC APB1 peripheral clock enable in low power mode register, Address offset: 0x60 */
	volatile Register_32Bit_Utag REG_RCC_APB2LPENR;         /*!< RCC APB2 peripheral clock enable in low power mode register, Address offset: 0x64 */
	volatile U32                 REG_RCC_RESERVED_6_[2];    /*!< Reserved, 0x68-0x6C                                                               */
	volatile Register_32Bit_Utag REG_RCC_BDCR;              /*!< RCC Backup domain control register,                          Address offset: 0x70 */
	volatile Register_32Bit_Utag REG_RCC_CSR;               /*!< RCC clock control & status register,                         Address offset: 0x74 */
	volatile U32                 REG_RCC_RESERVED_7_[2];    /*!< Reserved, 0x78-0x7C                                                               */
	volatile Register_32Bit_Utag REG_RCC_SSCGR;             /*!< RCC spread spectrum clock generation register,               Address offset: 0x80 */
	volatile Register_32Bit_Utag REG_RCC_PLLI2SCFGR;        /*!< RCC PLLI2S configuration register,                           Address offset: 0x84 */
	volatile U32                 REG_RCC_RESERVED_8_[1];    /*!< Reserved, 0x88                                                                    */
	volatile Register_32Bit_Utag REG_RCC_DCKCFGR;           /*!< RCC Dedicated Clocks configuration register,                 Address offset: 0x8C */
} RCC_PERIPHERAL_Stag;

typedef enum {
	CR_HSION		=0U,
	CR_HSIRDY		=1U,
	CR_HSEON		=16U,
	CR_HSERDY		=17U,
	CR_HSEBYP		=18U,
	CR_CSSON 		=19U,
	CR_PLLON 		=24U,
	CR_PLLRDY 		=25U
}RCC_CR_Etag;

typedef enum {
	PLLCFGR_PLLSRC		=22U,
}RCC_PLLCFGR_Etag;

typedef enum {
	CFGR_SW0		=0U,
	CFGR_SW1		=1U,
	CFGR_MCO1		=22U
}RCC_CFGR_Etag;

typedef enum {
	AHB1ENR_GPIOA_EN       =0U,
	AHB1ENR_GPIOB_EN       =1U,
	AHB1ENR_GPIOC_EN	   =2U,
	AHB1ENR_GPIOD_EN	   =3U,
	AHB1ENR_GPIOE_EN	   =4U,
	AHB1ENR_GPIOH_EN	   =5U,
	AHB1ENR_CRC_EN	       =6U,
	AHB1ENR_DMA1_EN        =7U,
	AHB1ENR_DMA2_EN        =8U
}RCC_AHB1ENR_Etag;

/*============================================================================================
	-)	Struct Pointer :	Base_Address ->	RRC
  ============================================================================================*/
#define RCC_SPTR      ((volatile RCC_PERIPHERAL_Stag *)RCC_PERIPHERAL_BASE_ADDRESS)

#endif /* INC_MCAL_RCC_MCAL_RCC_REGISTER_H_ */

/**********************************************************************************************
 *
***
 *      _____   _____ _____      _____ _____             _____            _     _
 *     |  __ \ / ____/ ____|    / ____|  __ \           |  __ \          (_)   | |
 *     | |__) | |   | |        | |    | |__) |  ______  | |__) |___  __ _ _ ___| |_ ___ _ __
 *     |  _  /| |   | |        | |    |  _  /  |______| |  _  // _ \/ _` | / __| __/ _ \ '__|
 *     | | \ \| |___| |____ _  | |____| | \ \           | | \ \  __/ (_| | \__ \ ||  __/ |
 *     |_|  \_\\_____\_____(_)  \_____|_|  \_\          |_|  \_\___|\__, |_|___/\__\___|_|
 *                                                                   __/ |
 *                                                                  |___/
 * [RCC_CR] -> Clock Control Register
 * 		Every flag is set by "Hardware", Configuration is set by "Software"
 *REGISTER MISSION:
 *             [1]  PLLI2S clock ready #flag                  [unlocked / locked]
 *             [2]  PLLI2S enable                             [OFF / ON]
 *             ----------------------------------------------------------------------------------
 *             [3]  Main PLL (PLL) clock ready #flag          [unlocked / locked]
 *             [4]  Main PLL (PLL) enable                     [OFF / ON]
 *             [5]  CCS - Clock security system enable        [OFF / ON]
 *             ----------------------------------------------------------------------------------
 *             [6]  External high-speed clock bypass control  [not bypassed / bypassed]
 *             [7]  External high-speed clock ready flag      [not ready / ready]
 *             [8]  External high-speed clock enable          [OFF / ON]
 *             ----------------------------------------------------------------------------------
 *             [9]  Internal high-speed clock calibration     [initialized automatically at startup]
 *             [10] Internal high-speed clock trimming        [provide an additional programmable trimming]
 *             [11] Internal high-speed clock ready flag      [not ready / ready]
 *             [12] Internal high-speed clock enable          [OFF / ON]
 *********************************************************************************************/
