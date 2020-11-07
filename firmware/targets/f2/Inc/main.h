/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define BUTTON_BACK_Pin GPIO_PIN_13
#define BUTTON_BACK_GPIO_Port GPIOC
#define BUTTON_BACK_EXTI_IRQn EXTI15_10_IRQn
#define CHRG_Pin GPIO_PIN_2
#define CHRG_GPIO_Port GPIOC
#define CHRG_EXTI_IRQn EXTI2_IRQn
#define BATT_V_Pin GPIO_PIN_3
#define BATT_V_GPIO_Port GPIOC
#define IR_RX_Pin GPIO_PIN_0
#define IR_RX_GPIO_Port GPIOA
#define BUTTON_DOWN_Pin GPIO_PIN_1
#define BUTTON_DOWN_GPIO_Port GPIOA
#define BUTTON_DOWN_EXTI_IRQn EXTI1_IRQn
#define DISPLAY_DI_Pin GPIO_PIN_2
#define DISPLAY_DI_GPIO_Port GPIOA
#define SPEAKER_Pin GPIO_PIN_3
#define SPEAKER_GPIO_Port GPIOA
#define NFC_CS_Pin GPIO_PIN_4
#define NFC_CS_GPIO_Port GPIOC
#define RFID_RF_IN_Pin GPIO_PIN_5
#define RFID_RF_IN_GPIO_Port GPIOC
#define BUTTON_UP_Pin GPIO_PIN_0
#define BUTTON_UP_GPIO_Port GPIOB
#define BUTTON_UP_EXTI_IRQn EXTI0_IRQn
#define LED_BLUE_Pin GPIO_PIN_1
#define LED_BLUE_GPIO_Port GPIOB
#define DISPLAY_RST_Pin GPIO_PIN_10
#define DISPLAY_RST_GPIO_Port GPIOB
#define IR_TX_Pin GPIO_PIN_11
#define IR_TX_GPIO_Port GPIOB
#define RFID_OUT_Pin GPIO_PIN_13
#define RFID_OUT_GPIO_Port GPIOB
#define LED_GREEN_Pin GPIO_PIN_14
#define LED_GREEN_GPIO_Port GPIOB
#define RFID_PULL_Pin GPIO_PIN_15
#define RFID_PULL_GPIO_Port GPIOB
#define RFID_PULL_EXTI_IRQn EXTI15_10_IRQn
#define VIBRO_Pin GPIO_PIN_6
#define VIBRO_GPIO_Port GPIOC
#define iButton_Pin GPIO_PIN_7
#define iButton_GPIO_Port GPIOC
#define DISPLAY_CS_Pin GPIO_PIN_8
#define DISPLAY_CS_GPIO_Port GPIOC
#define SD_CS_Pin GPIO_PIN_9
#define SD_CS_GPIO_Port GPIOC
#define LED_RED_Pin GPIO_PIN_8
#define LED_RED_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define CC1101_CS_Pin GPIO_PIN_15
#define CC1101_CS_GPIO_Port GPIOA
#define BUTTON_LEFT_Pin GPIO_PIN_4
#define BUTTON_LEFT_GPIO_Port GPIOB
#define BUTTON_LEFT_EXTI_IRQn EXTI4_IRQn
#define DISPLAY_BACKLIGHT_Pin GPIO_PIN_6
#define DISPLAY_BACKLIGHT_GPIO_Port GPIOB
#define CC1101_G0_Pin GPIO_PIN_7
#define CC1101_G0_GPIO_Port GPIOB
#define BUTTON_RIGHT_Pin GPIO_PIN_8
#define BUTTON_RIGHT_GPIO_Port GPIOB
#define BUTTON_RIGHT_EXTI_IRQn EXTI9_5_IRQn
#define BUTTON_OK_Pin GPIO_PIN_9
#define BUTTON_OK_GPIO_Port GPIOB
#define BUTTON_OK_EXTI_IRQn EXTI9_5_IRQn
/* USER CODE BEGIN Private defines */

#define MISO_PIN GpioPin{.port = GPIOC, .pin = GPIO_PIN_11}

#define SPI_R hspi3
#define SPI_D hspi1
#define SPI_SD_HANDLE SPI_R

extern TIM_HandleTypeDef htim2;
extern TIM_HandleTypeDef htim5;
extern TIM_HandleTypeDef htim15;

#define TIM_A htim2
#define TIM_B htim5
#define TIM_C htim15

#define SPEAKER_TIM htim5
#define SPEAKER_CH TIM_CHANNEL_4

#define LFRFID_TIM htim15
#define LFRFID_CH TIM_CHANNEL_1

#define IRDA_TIM htim2
#define IRDA_CH TIM_CHANNEL_4

#define NFC_IRQ_Pin RFID_PULL_Pin
#define NFC_IRQ_GPIO_Port RFID_PULL_GPIO_Port

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/