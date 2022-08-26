/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _UAPI_SPSS_UTILS_H_
#define _UAPI_SPSS_UTILS_H_
#include <linux/types.h>
#include <linux/ioctl.h>
#define SPSS_IOC_MAGIC 'S'
#define NUM_SPU_UEFI_APPS 3
#define CMAC_SIZE_IN_WORDS 4
struct spss_ioc_set_fw_cmac {
  uint32_t cmac[CMAC_SIZE_IN_WORDS];
  uint32_t app_cmacs[NUM_SPU_UEFI_APPS][CMAC_SIZE_IN_WORDS];
} __packed;
#define SPSS_IOC_SET_FW_CMAC _IOWR(SPSS_IOC_MAGIC, 1, struct spss_ioc_set_fw_cmac)
enum _spss_event_id {
  SPSS_EVENT_ID_PIL_CALLED = 0,
  SPSS_EVENT_ID_NVM_READY = 1,
  SPSS_EVENT_ID_SPU_READY = 2,
  SPSS_NUM_USER_EVENTS,
  SPSS_EVENT_ID_SPU_POWER_DOWN = 6,
  SPSS_EVENT_ID_SPU_POWER_UP = 7,
  SPSS_NUM_EVENTS,
} spss_event_id;
enum _spss_event_status {
  EVENT_STATUS_SIGNALED = 0xAAAA,
  EVENT_STATUS_NOT_SIGNALED = 0xFFFF,
  EVENT_STATUS_TIMEOUT = 0xEEE1,
  EVENT_STATUS_ABORTED = 0xEEE2,
} spss_event_status;
struct spss_ioc_wait_for_event {
  uint32_t event_id;
  uint32_t timeout_sec;
  uint32_t status;
} __packed;
#define SPSS_IOC_WAIT_FOR_EVENT _IOWR(SPSS_IOC_MAGIC, 2, struct spss_ioc_wait_for_event)
struct spss_ioc_signal_event {
  uint32_t event_id;
  uint32_t status;
} __packed;
#define SPSS_IOC_SIGNAL_EVENT _IOWR(SPSS_IOC_MAGIC, 3, struct spss_ioc_signal_event)
struct spss_ioc_is_signaled {
  uint32_t event_id;
  uint32_t status;
} __attribute__((packed));
#define SPSS_IOC_IS_EVENT_SIGNALED _IOWR(SPSS_IOC_MAGIC, 4, struct spss_ioc_is_signaled)
#endif
