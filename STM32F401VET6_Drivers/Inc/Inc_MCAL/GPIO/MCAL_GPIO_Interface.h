/*
 * MCAL_GPIO_Interface.h
 *
 *  Created on: May 16, 2022
 *      Author: Eng- Mohamed Mokhtar
 */

#ifndef INC_MCAL_GPIO_MCAL_GPIO_INTERFACE_H_
#define INC_MCAL_GPIO_MCAL_GPIO_INTERFACE_H_

/***************_INCLUDES_****************************/
#include "APP_Utility.h"
#include "MCAL_GPIO_Private.h"
#include "MCAL_GPIO_Config.h"
#include "MCAL_GPIO_Register.h"

/***************_MACROS_CONFIGURATION_*********************/
/*======== Macros Of Port ========*/
#define GPIOA_PORT   		      (0U)            /*!< GPIO (A) PORT  */
#define GPIOB_PORT   		      (1U)            /*!< GPIO (B) PORT  */
#define GPIOC_PORT   		      (2U)            /*!< GPIO (C) PORT  */
#define GPIOD_PORT   		      (3U)            /*!< GPIO (D) PORT  */
#define GPIOE_PORT   		      (4U)            /*!< GPIO (E) PORT  */
#define GPIOH_PORT   		      (5U)            /*!< GPIO (H) PORT  */

/*======== Macros Of Pins ========*/
#define GPIO_PIN_0              ((u16)0U )       /*!< Pin 0 selected    */
#define GPIO_PIN_1              ((u16)1U )       /*!< Pin 1 selected    */
#define GPIO_PIN_2              ((u16)2U )       /*!< Pin 2 selected    */
#define GPIO_PIN_3              ((u16)3U )       /*!< Pin 3 selected    */
#define GPIO_PIN_4              ((u16)4U )       /*!< Pin 4 selected    */
#define GPIO_PIN_5              ((u16)5U )       /*!< Pin 5 selected    */
#define GPIO_PIN_6              ((u16)6U )       /*!< Pin 6 selected    */
#define GPIO_PIN_7              ((u16)7U )       /*!< Pin 7 selected    */
#define GPIO_PIN_8              ((u16)8U )       /*!< Pin 8 selected    */
#define GPIO_PIN_9              ((u16)9U )       /*!< Pin 9 selected    */
#define GPIO_PIN_10             ((u16)10U)       /*!< Pin 10 selected   */
#define GPIO_PIN_11             ((u16)11U)       /*!< Pin 11 selected   */
#define GPIO_PIN_12             ((u16)12U)       /*!< Pin 12 selected   */
#define GPIO_PIN_13             ((u16)13U)       /*!< Pin 13 selected   */
#define GPIO_PIN_14             ((u16)14U)       /*!< Pin 14 selected   */
#define GPIO_PIN_15             ((u16)15U)       /*!< Pin 15 selected   */
#define GPIO_PIN_All            ((u16)0xFFFF)    /*!< All pins selected */

/*======== Macros Of Mode ========*/
#define INPUT_MODE  	      (0b00)          /*!< MODE ---> INPUT     */
#define OUTPUT_MODE   	      (0b01)          /*!< MODE ---> OUTPUT    */
#define ALTF_MODE   	      (0b10)          /*!< MODE ---> ALTF      */
#define ANALOG_MODE   	      (0b11)          /*!< MODE ---> ANALOG    */

/*======== Macros Of Output Type ========*/
#define OP_TYPE_PUSH_PULL    (0U)             /*!< OUTPUT TYPE ---> PUSH PULL   */
#define OP_TYPE_OPEN_DRAIN   (1U)             /*!< OUTPUT TYPE ---> OPEN DRAIN  */
/*======== Macros Of Speed ========*/

#define OUTPUT_SPEED_LOW         (0x00000000U)  /*!< IO works at 2 MHz, please refer to the product datasheet */
#define OUTPUT_SPEED_MEDUIM      (0x00000001U)  /*!< range 12,5 MHz to 50 MHz, please refer to the product datasheet */
#define OUTPUT_SPEED_HIGH        (0x00000002U)  /*!< range 25 MHz to 100 MHz, please refer to the product datasheet  */
#define OUTPUT_SPEED_VERY_HIGH   (0x00000003U)  /*!< range 50 MHz to 200 MHz, please refer to the product datasheet  */

/*======== Macros Of PULL  ========*/
#define PULL_OFF_STATE                 (0x00000000U)   /*!< No Pull-up or Pull-down activation  */
#define PULL_UP_STATE                  (0x00000001U)   /*!< Pull-up activation                  */
#define PULL_DOWN_STATE                (0x00000002U)   /*!< Pull-down activation                */

/*======== Macros Write Data  ========*/
#define LOW_STATE                    (0U)
#define HIGH_STATE	                 (1U)

/*======== Macros ALTF  ========*/
#define ALTFN_0                  (0b0000)      /*!< ALTF  --> 0  */
#define ALTFN_1                  (0b0001)      /*!< ALTF  --> 1  */
#define ALTFN_2                  (0b0010)      /*!< ALTF  --> 2  */
#define ALTFN_3                  (0b0011)      /*!< ALTF  --> 3  */
#define ALTFN_4                  (0b0100)      /*!< ALTF  --> 4  */
#define ALTFN_5                  (0b0101)      /*!< ALTF  --> 5  */
#define ALTFN_6                  (0b0110)      /*!< ALTF  --> 6  */
#define ALTFN_7                  (0b0111)      /*!< ALTF  --> 7  */
#define ALTFN_8                  (0b1000)      /*!< ALTF  --> 8  */
#define ALTFN_9                  (0b1001)      /*!< ALTF  --> 9  */
#define ALTFN_10                 (0b1010)      /*!< ALTF  --> 10 */
#define ALTFN_11                 (0b1011)      /*!< ALTF  --> 11 */
#define ALTFN_12                 (0b1100)      /*!< ALTF  --> 12 */
#define ALTFN_13                 (0b1101)      /*!< ALTF  --> 13 */
#define ALTFN_14                 (0b1110)      /*!< ALTF  --> 14 */
#define ALTFN_15                 (0b1111)      /*!< ALTF  --> 15 */


/*============================================================================
  ==================_APIs Supported by "MCAL_GPIO DRIVER"_====================
  ============================================================================*/
void MGPIO_vSetPinMode(U8 PortName ,U8 PinNum ,U8 DirectionMode);
void MGPIO_vSetPinOutPutType(U8 PortName ,U8 PinNum ,U8 OutPutType);
void MGPIO_vSetPinOutSpeed(U8 Copy_u8PortName ,U32 Copy_u8PinNum ,U32 Copy_u8OutSpeed );
void MGPIO_vSetPullType(U8 Copy_u8PortName ,U32 Copy_u8PinNum ,U32 Copy_u8PullType );


#endif /* INC_MCAL_GPIO_MCAL_GPIO_INTERFACE_H_ */
