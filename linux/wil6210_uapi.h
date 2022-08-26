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
#ifndef __WIL6210_UAPI_H__
#define __WIL6210_UAPI_H__
#define __user
#include <linux/sockios.h>
#define WIL_IOCTL_MEMIO (SIOCDEVPRIVATE + 2)
#define WIL_IOCTL_MEMIO_BLOCK (SIOCDEVPRIVATE + 3)
#define WIL_MMIO_READ 0
#define WIL_MMIO_WRITE 1
#define WIL_MMIO_OP_MASK 0xff
#define WIL_MMIO_ADDR_LINKER (0 << 8)
#define WIL_MMIO_ADDR_AHB (1 << 8)
#define WIL_MMIO_ADDR_BAR (2 << 8)
#define WIL_MMIO_ADDR_MASK 0xff00
struct wil_memio {
  uint32_t op;
  uint32_t addr;
  uint32_t val;
};
struct wil_memio_block {
  uint32_t op;
  uint32_t addr;
  uint32_t size;
  uint64_t block;
};
#endif
