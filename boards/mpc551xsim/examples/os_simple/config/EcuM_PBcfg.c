/*
* Configuration of module: EcuM (EcuM_PBcfg.c)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    MPC551x
*
* Module vendor:           ArcCore
* Generator version:       2.1.11
*
* Generated by Arctic Studio (http://arccore.com) 
*/


#include "EcuM.h"
#include "EcuM_Generated_Types.h"

#if defined(USE_CANSM)
extern const CanSM_ConfigType CanSM_Config;
#endif
#if defined(USE_NM)
extern const Nm_ConfigType Nm_Config;
#endif
#if defined(USE_CANNM)
extern const CanNm_ConfigType CanNm_Config;
#endif
#if defined(USE_UDPNM)
extern const UdpNm_ConfigType UdpNm_Config;
#endif
#if defined(USE_COMM)
extern const ComM_ConfigType ComM_Config;
#endif

#if defined(USE_J1939TP)
extern const J1939Tp_ConfigType J1939Tp_Config;
#endif


const EcuM_SleepModeType EcuM_SleepModeConfig[] = {
	{ // EcuMSleepMode 
		.EcuMSleepModeId = ECUM_SLEEP_MODE_ECUMSLEEPMODE,
		.EcuMWakeupSourceMask = ECUM_WKSOURCE_ECUMWAKEUPSOURCE,
		.EcuMSleepModeMcuMode = MCU_MODE_RUN,
#if defined(USE_WDGM)
		.EcuMSleepModeWdgMMode = ECUM_SLEEP_MODE_WDGM_MODE_ILL,
#endif
	}
};

const EcuM_WakeupSourceConfigType EcuM_WakeupSourceConfig[] = {
	{ // EcuMWakeupSource 
		.EcuMWakeupSourceId = ECUM_WKSOURCE_ECUMWAKEUPSOURCE,
		.EcuMWakeupSourcePolling = false,
		.EcuMValidationTimeout = 0,
#if defined(USE_COMM)
		.EcuMComMChannel = ECUM_COMM_CHANNEL_ILL,
#endif
	}
};


EcuM_ConfigType EcuMConfig =
{
	.EcuMDefaultShutdownTarget = ECUM_STATE_OFF,
	.EcuMDefaultSleepMode = 0,
	.EcuMDefaultAppMode = OSDEFAULTAPPMODE,
	.EcuMNvramReadAllTimeout = ECUM_NVRAM_READALL_TIMEOUT,
	.EcuMNvramWriteAllTimeout = ECUM_NVRAM_WRITEALL_TIMEOUT,
	.EcuMRunMinimumDuration = ECUM_NVRAM_MIN_RUN_DURATION,
#if defined(USE_WDGM)
	.EcuMWdgMConfig = NULL,
#endif
  	.EcuMSleepModeConfig = EcuM_SleepModeConfig,
  	.EcuMWakeupSourceConfig = EcuM_WakeupSourceConfig,

#if defined(USE_MCU)
	.McuConfig = McuConfigData,
#endif
#if defined(USE_PORT)
	.PortConfig = &PortConfigData,
#endif
#if defined(USE_CAN)
	.CanConfig = &CanConfigData,
#endif
#if defined(USE_CANIF)
	.CanIfConfig = &CanIf_Config,
#endif
#if defined(USE_CANSM)
	.CanSMConfig = &CanSM_Config,
#endif
#if defined(USE_CANNM)
	.CanNmConfig = &CanNm_Config,
#endif
#if defined(USE_UDPNM)
	.UdpNmConfig = &UdpNm_Config,
#endif
#if defined(USE_COM)
	.ComConfig = &ComConfiguration,
#endif
#if defined(USE_COMM)
	.ComMConfig = &ComM_Config,
#endif
#if defined(USE_J1939TP)
	.J1939TpConfig = &J1939Tp_Config,
#endif
#if defined(USE_NM)
	.NmConfig = &Nm_Config,
#endif
#if defined(USE_PDUR)
	.PduRConfig = &PduR_Config,
#endif
#if defined(USE_J1939TP)
	.J1939TpConfig = &J1939Tp_Config,
#endif
#if defined(USE_DMA)
	.DmaConfig = DmaConfig,
#endif
#if defined(USE_ADC)
	.AdcConfig = AdcConfig,
#endif
#if defined(USE_PWM)
	.PwmConfig = &PwmConfig,
#endif
#if defined(USE_WDG)
    .WdgConfig = &WdgConfig,
#endif
#if defined(USE_WDGM)
    .WdgMConfig = &WdgMConfig,
#endif
#if defined(USE_WDGIF)
    .WdgIfConfig = &WdgIfConfig,
#endif
#if defined(USE_GPT)
	.GptConfig = GptConfigData,
#endif
#if defined(USE_FLS)
	.FlashConfig = FlsConfigSet,
#endif
#if defined(USE_EEP)
	.EepConfig = EepConfigData,
#endif
#if defined(USE_SPI)
	.SpiConfig = &SpiConfigData,
#endif
};
