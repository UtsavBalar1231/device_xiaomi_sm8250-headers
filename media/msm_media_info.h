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
#ifndef __MSM_MEDIA_INFO_H__
#define __MSM_MEDIA_INFO_H__
#include <asm/bitsperlong.h>
#if __BITS_PER_LONG == 64
#define NV12_STRIDE_ALIGNMENT 512
#define NV12_SCANLINE_ALIGNMENT 512
#else
#define NV12_STRIDE_ALIGNMENT 128
#define NV12_SCANLINE_ALIGNMENT 32
#endif
#ifdef VENUS_USE_64BIT_ALIGNMENT
#undef NV12_STRIDE_ALIGNMENT
#undef NV12_SCANLINE_ALIGNMENT
#define NV12_STRIDE_ALIGNMENT 512
#define NV12_SCANLINE_ALIGNMENT 512
#endif
#define INTERLACE_WIDTH_MAX 1920
#define INTERLACE_HEIGHT_MAX 1920
#define INTERLACE_MB_PER_FRAME_MAX ((1920 * 1088) / 256)
#ifndef MSM_MEDIA_ALIGN
#define MSM_MEDIA_ALIGN(__sz,__align) (((__align) & ((__align) - 1)) ? ((((__sz) + (__align) - 1) / (__align)) * (__align)) : (((__sz) + (__align) - 1) & (~((__align) - 1))))
#endif
#ifndef MSM_MEDIA_ROUNDUP
#define MSM_MEDIA_ROUNDUP(__sz,__r) (((__sz) + ((__r) - 1)) / (__r))
#endif
enum color_fmts {
  COLOR_FMT_NV12,
  COLOR_FMT_NV12_128,
  COLOR_FMT_NV21,
  COLOR_FMT_NV12_UBWC,
  COLOR_FMT_NV12_BPP10_UBWC,
  COLOR_FMT_RGBA8888,
  COLOR_FMT_RGBA8888_UBWC,
  COLOR_FMT_RGBA1010102_UBWC,
  COLOR_FMT_RGB565_UBWC,
  COLOR_FMT_P010_UBWC,
  COLOR_FMT_P010,
  COLOR_FMT_NV12_512,
};
#endif
