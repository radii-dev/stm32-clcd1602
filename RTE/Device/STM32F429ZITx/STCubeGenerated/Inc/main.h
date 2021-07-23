/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f4xx_hal.h"

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
/* USER CODE BEGIN Private defines */
#define E_Pin GPIO_PIN_2
#define E_GPIO_Port GPIOE
#define D4_Pin GPIO_PIN_4
#define D4_GPIO_Port GPIOE
#define D5_Pin GPIO_PIN_5
#define D5_GPIO_Port GPIOE
#define D6_Pin GPIO_PIN_6
#define D6_GPIO_Port GPIOE
#define D7_Pin GPIO_PIN_7
#define D7_GPIO_Port GPIOE
#define SCD_7seg_F_Pin GPIO_PIN_8
#define SCD_7seg_F_GPIO_Port GPIOE
#define SCD_7seg_A_Pin GPIO_PIN_9
#define SCD_7seg_A_GPIO_Port GPIOE
#define SCD_7seg_B_Pin GPIO_PIN_10
#define SCD_7seg_B_GPIO_Port GPIOE
#define SCD_7seg_DP_Pin GPIO_PIN_11
#define SCD_7seg_DP_GPIO_Port GPIOE
#define SCD_7seg_C_Pin GPIO_PIN_12
#define SCD_7seg_C_GPIO_Port GPIOE
#define SCD_7seg_G_Pin GPIO_PIN_13
#define SCD_7seg_G_GPIO_Port GPIOE
#define SCD_7seg_D_Pin GPIO_PIN_14
#define SCD_7seg_D_GPIO_Port GPIOE
#define SCD_7seg_E_Pin GPIO_PIN_15
#define SCD_7seg_E_GPIO_Port GPIOE
#define FST_7seg_B_Pin GPIO_PIN_8
#define FST_7seg_B_GPIO_Port GPIOA
#define FST_7seg_A_Pin GPIO_PIN_9
#define FST_7seg_A_GPIO_Port GPIOA
#define FST_7seg_G_Pin GPIO_PIN_10
#define FST_7seg_G_GPIO_Port GPIOA
#define FST_7seg_F_Pin GPIO_PIN_11
#define FST_7seg_F_GPIO_Port GPIOA
#define FST_7seg_E_Pin GPIO_PIN_12
#define FST_7seg_E_GPIO_Port GPIOA
#define FST_7seg_D_Pin GPIO_PIN_5
#define FST_7seg_D_GPIO_Port GPIOD
#define FST_7seg_C_Pin GPIO_PIN_6
#define FST_7seg_C_GPIO_Port GPIOD
#define FST_7seg_DP_Pin GPIO_PIN_7
#define FST_7seg_DP_GPIO_Port GPIOD
#define RS_Pin GPIO_PIN_0
#define RS_GPIO_Port GPIOE


/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
