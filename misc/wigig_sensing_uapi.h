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
#ifndef __WIGIG_SENSING_UAPI_H__
#define __WIGIG_SENSING_UAPI_H__
#define __user
#include <linux/types.h>
#include <linux/ioctl.h>
enum wigig_sensing_mode {
  WIGIG_SENSING_MODE_SEARCH = 1,
  WIGIG_SENSING_MODE_FACIAL_RECOGNITION = 2,
  WIGIG_SENSING_MODE_GESTURE_DETECTION = 3,
  WIGIG_SENSING_MODE_STOP = 7,
  WIGIG_SENSING_MODE_CUSTOM = 15
};
struct wigig_sensing_change_mode {
  enum wigig_sensing_mode mode;
  bool has_channel;
  uint32_t channel;
  uint32_t burst_size;
};
enum wigig_sensing_event {
  WIGIG_SENSING_EVENT_MIN,
  WIGIG_SENSING_EVENT_FW_READY,
  WIGIG_SENSING_EVENT_RESET,
  WIGIG_SENSING_EVENT_MAX,
};
#define WIGIG_SENSING_IOC_MAGIC 'r'
#define WIGIG_SENSING_IOCTL_SET_AUTO_RECOVERY (0)
#define WIGIG_SENSING_IOCTL_GET_MODE (1)
#define WIGIG_SENSING_IOCTL_CHANGE_MODE (2)
#define WIGIG_SENSING_IOCTL_CLEAR_DATA (3)
#define WIGIG_SENSING_IOCTL_GET_NUM_DROPPED_BURSTS (4)
#define WIGIG_SENSING_IOCTL_GET_EVENT (5)
#define WIGIG_SENSING_IOCTL_GET_NUM_AVAIL_BURSTS (6)
#define WIGIG_SENSING_IOC_SET_AUTO_RECOVERY _IO(WIGIG_SENSING_IOC_MAGIC, WIGIG_SENSING_IOCTL_SET_AUTO_RECOVERY)
#define WIGIG_SENSING_IOC_GET_MODE _IOR(WIGIG_SENSING_IOC_MAGIC, WIGIG_SENSING_IOCTL_GET_MODE, sizeof(enum wigig_sensing_mode))
#define WIGIG_SENSING_IOC_CHANGE_MODE _IOWR(WIGIG_SENSING_IOC_MAGIC, WIGIG_SENSING_IOCTL_CHANGE_MODE, sizeof(struct wigig_sensing_change_mode))
#define WIGIG_SENSING_IOC_CLEAR_DATA _IO(WIGIG_SENSING_IOC_MAGIC, WIGIG_SENSING_IOCTL_CLEAR_DATA)
#define WIGIG_SENSING_IOC_GET_NUM_DROPPED_BURSTS _IOR(WIGIG_SENSING_IOC_MAGIC, WIGIG_SENSING_IOCTL_GET_NUM_DROPPED_BURSTS, sizeof(uint32_t))
#define WIGIG_SENSING_IOC_GET_EVENT _IOR(WIGIG_SENSING_IOC_MAGIC, WIGIG_SENSING_IOCTL_GET_EVENT, sizeof(enum wigig_sensing_event))
#define WIGIG_SENSING_IOC_GET_NUM_AVAIL_BURSTS _IOR(WIGIG_SENSING_IOC_MAGIC, WIGIG_SENSING_IOCTL_GET_NUM_AVAIL_BURSTS, sizeof(uint32_t))
#endif
