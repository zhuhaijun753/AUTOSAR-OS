/*
 * Configuration of module NvM (NvM_Cfg.h)
 *
 * Created by: 
 * Configured for (MCU): MPC551x
 *
 * Module vendor: ArcCore
 * Module version: 2.0.2
 *
 * 
 * Generated by Arctic Studio (http://arccore.com) 
 *           on Mon Nov 22 09:20:07 CET 2010
 */


#warning "This default file may only be used as an example!"

	
#ifndef NVM_CFG_H_
#define NVM_CFG_H_

#include "NvM_Types.h"
#include "NvM_ConfigTypes.h"

#define NVM_DEV_ERROR_DETECT			STD_ON
#define NVM_VERSION_INFO_API    		STD_ON
#define NVM_SET_RAM_BLOCK_STATUS_API	STD_OFF

#define NVM_API_CONFIG_CLASS			NVM_API_CONFIG_CLASS_1	// Class 1-3
#define NVM_COMPILED_CONFIG_ID			0						// 0..65535
#define NVM_CRC_NUM_OF_BYTES			0						// 1..65535
#define NVM_DATASET_SELECTION_BITS		0						// 0..8
#define NVM_DRV_MODE_SWITCH				STD_OFF					// OFF = SLOW, ON = FAST
#define NVM_DYNAMIC_CONFIGURATION		STD_OFF					// OFF..ON
#define NVM_JOB_PRIORIZATION			STD_OFF					// OFF..ON
#define NVM_MAX_NUMBER_OF_WRITE_RETRIES	2						// 0..7
#define NVM_POLLING_MODE				STD_OFF					// OFF..ON
#define NVM_SIZE_IMMEDIATE_JOB_QUEUE	0						// 1..255
#define NVM_SIZE_STANDARD_JOB_QUEUE		0						// 1..255

#define NVM_NUM_OF_NVRAM_BLOCKS			0


#endif /*NVM_CFG_H_*/
