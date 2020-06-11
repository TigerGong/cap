/******************************************************************************
 * @file     rtc.h
 * @brief    rtc driver header file for RN821x series SOC
 * @author   Renergy Technology
 * @version  V1.1
 * @date     2017-08-23
 *
 * @note
 * Copyright (C) 2008, Renergy Technology Inc. All rights reserved.
 *
 * History
 *   v1.0   -           initial version
 *   v1.1   2017.8.23	ADD return value for function RtcWriteDota
 *
 ******************************************************************************/
#ifndef __RTC_H
#define __RTC_H

#define RTC_PASS                      0
#define RTC_FAIL                      1

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief RtcReadDota
 *
 * @param 
 *    none
 * @return 
 *    uint16_t dota: dota value of RTC
 *
 */
uint16_t  RtcReadDota(void);

/**
 * @brief RtcWriteDota
 *
 * @param 
 *    in uint16_t dota: dota value of RTC
 * @return 
 *    NVM_PASS: rtc-dota write pass
 *    NVM_FAIL: rtc-dota write fail
 *
 */
uint32_t   RtcWriteDota(uint16_t dota);

void sysUpdate(void);
#ifdef __cplusplusw
}
#endif

#endif
