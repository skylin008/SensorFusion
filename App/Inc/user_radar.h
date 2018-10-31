#ifndef __USER_RADAR_H
#define __USER_RADAR_H

#include "stm32f4xx_hal.h"
#include "aebs.h"

typedef struct 
{
	float VrelLong;
	float MinRangeLong;
}ObjectTypeDef;

#if RADAR_TYPE==ARS408
	#include "ARS408.h"
  extern MW_RadarObjStatus RadarObjStatus;
	extern MW_RadarGeneral RadarGeneral[];
	extern uint8_t MW_RadarRxComplete;
	extern uint8_t CmdRxComplete;
#elif RADAR_TYPE==EMRR
	#include "EMRR.h"
  extern EMRR_RadarGeneral aEMRRGeneral[];
	extern EMRR_RadarGeneral EMRRGeneral_Closet;
	extern uint8_t EMRR_RadarRxComplete;
	extern uint8_t EMRR_RadarObjCount;
#endif

extern ObjectTypeDef RadarObject;

#endif
