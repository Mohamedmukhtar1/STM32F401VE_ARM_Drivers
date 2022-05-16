/*
 * MCAL_RCC_Private.h
 *
 *  Created on: May 13, 2022
 *      Author: Eng- Mohamed Mokhtar
 */

#ifndef INC_MCAL_RCC_MCAL_RCC_PRIVATE_H_
#define INC_MCAL_RCC_MCAL_RCC_PRIVATE_H_

#define  HSE   0U
#define  HSI   1U
#define  PLL   2U
/*******            **********/
#define _HSE_CRYSTAL  0U
#define _HSE_RC       1U
/*******        **********/
#define _HSE_PLL      0U
#define _HSI_PLL      1U
/*******                **********/
#define MCO_1_SOURCE_LSE   0U
#define MCO_1_SOURCE_HSE   1U
#define MCO_1_SOURCE_HSI   2U
#define MCO_1_SOURCE_PLL   3U

#define MCO_1_PRESCALER_1   0U
#define MCO_1_PRESCALER_2   1U
#define MCO_1_PRESCALER_3   2U
#define MCO_1_PRESCALER_4   3U
#define MCO_1_PRESCALER_5   4U

#endif /* INC_MCAL_RCC_MCAL_RCC_PRIVATE_H_ */
