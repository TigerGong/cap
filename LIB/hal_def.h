
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __HAL_DEF
#define __HAL_DEF

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
//#include "stm32l4xx.h"
#include <stdio.h>


/**
  * @brief  HAL Status structures definition
  */
typedef enum
{
  HAL_OK       = 0x00,
  HAL_ERROR    = 0x01,
  HAL_BUSY     = 0x02,
  HAL_TIMEOUT  = 0x03
} HAL_StatusTypeDef;


/**
  * @brief  HAL Lock structures definition
  */
typedef enum
{
  HAL_UNLOCKED = 0x00,
  HAL_LOCKED   = 0x01
} HAL_LockTypeDef;



/* Exported macros -----------------------------------------------------------*/

#define HAL_MAX_DELAY      0xFFFFFFFFU

#define HAL_IS_BIT_SET(REG, BIT)         (((REG) & (BIT)) == (BIT))
#define HAL_IS_BIT_CLR(REG, BIT)         (((REG) & (BIT)) == RESET)

#define __HAL_LINKDMA(__HANDLE__, __PPP_DMA_FIELD__, __DMA_HANDLE__)             \
                        do{                                                      \
                            (__HANDLE__)->__PPP_DMA_FIELD__ = &(__DMA_HANDLE__); \
                            (__DMA_HANDLE__).Parent = (__HANDLE__);              \
                        } while(0)


#define UNUSED(x) ((void)(x))

#define __HAL_LOCK(__HANDLE__)						   \
			do{ 									   \
				if((__HANDLE__)->Lock == HAL_LOCKED)   \
				{									   \
					return HAL_BUSY; 				   \
				}									   \
				else								   \
				{									   \
					(__HANDLE__)->Lock = HAL_LOCKED;   \
				}									   \
			}while (0)
	
#define __HAL_UNLOCK(__HANDLE__)					  \
			do{ 									  \
				(__HANDLE__)->Lock = HAL_UNLOCKED;	  \
			}while (0)

#ifdef __cplusplus
}
#endif

#endif /* ___HAL_DEF */

/************************ (C) COPYRIGHT  *****END OF FILE****/

