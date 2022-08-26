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
#ifndef __DRV8846_H__
#define __DRV8846_H__
#include <linux/types.h>
#include <linux/ioctl.h>
#define UP 1
#define DOWN 0
#define MOTOR_IOC_MAGIC 'D'
#define MOTOR_PRIVATE 103
#define DRV8846_CLASS_NAME "drv8846"
#define DRV8846_DEV_NAME "ti,drv8846"
#define DRV8846_DRV_NAME "ti-drv8846"
#define DEFAULT_PARAMS 0
#define PERIOD_DEFAULT DEFAULT_PARAMS
#define DUTY_DEFAULT DEFAULT_PARAMS
#define DURATION_DEFAULT DEFAULT_PARAMS
#define DEFAULT_STEP_MODE 2
enum running_state {
  STILL = 10,
  SPEEDUP,
  SLOWDOWN,
  STOP
};
struct drv8846_private_data {
  uint32_t dir;
  uint32_t speed_duration;
  uint32_t speed_period;
  uint32_t slow_duration;
  uint32_t slow_period;
  long pwm_time;
  enum running_state pwm_state;
};
#define MOTOR_IOC_SET_AUTO _IOW(MOTOR_IOC_MAGIC, MOTOR_PRIVATE + 0x01, struct drv8846_private_data)
#define MOTOR_IOC_SET_MANUAL _IOW(MOTOR_IOC_MAGIC, MOTOR_PRIVATE + 0x02, struct drv8846_private_data)
#define MOTOR_IOC_GET_REMAIN_TIME _IOR(MOTOR_IOC_MAGIC, MOTOR_PRIVATE + 0x10, struct drv8846_private_data)
#define MOTOR_IOC_GET_STATE _IOR(MOTOR_IOC_MAGIC, MOTOR_PRIVATE + 0x11, struct drv8846_private_data)
#endif
