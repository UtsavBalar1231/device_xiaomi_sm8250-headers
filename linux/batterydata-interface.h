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
#ifndef __BATTERYDATA_LIB_H__
#define __BATTERYDATA_LIB_H__
#include <linux/ioctl.h>
struct battery_params {
  int soc;
  int ocv_uv;
  int rbatt_sf;
  int batt_temp;
  int slope;
  int fcc_mah;
};
#define BPIOCXSOC _IOWR('B', 0x01, struct battery_params)
#define BPIOCXRBATT _IOWR('B', 0x02, struct battery_params)
#define BPIOCXSLOPE _IOWR('B', 0x03, struct battery_params)
#define BPIOCXFCC _IOWR('B', 0x04, struct battery_params)
#endif
