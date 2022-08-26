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
#ifndef __VM_BMS_H__
#define __VM_BMS_H__
#define VM_BMS_DEVICE "/dev/vm_bms"
#define MAX_FIFO_REGS 8
struct qpnp_vm_bms_data {
  unsigned int num_fifo;
  unsigned int fifo_uv[MAX_FIFO_REGS];
  unsigned int sample_interval_ms;
  unsigned int sample_count;
  unsigned int acc_uv;
  unsigned int acc_count;
  unsigned int seq_num;
};
enum vmbms_power_usecase {
  VMBMS_IGNORE_ALL_BIT = 1,
  VMBMS_VOICE_CALL_BIT = (1 << 4),
  VMBMS_STATIC_DISPLAY_BIT = (1 << 5),
};
#endif
