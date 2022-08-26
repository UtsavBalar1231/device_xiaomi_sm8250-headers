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
#ifndef __UAPI_SYNX_H__
#define __UAPI_SYNX_H__
#include <linux/types.h>
#include <linux/ioctl.h>
#define SYNX_USER_PAYLOAD_SIZE 4
#define SYNX_STATE_INVALID 0
#define SYNX_STATE_ACTIVE 1
#define SYNX_STATE_SIGNALED_SUCCESS 2
#define SYNX_STATE_SIGNALED_ERROR 3
#define SYNX_MAX_WAITING_SYNX 16
#define SYNX_CALLBACK_RESULT_SUCCESS 2
#define SYNX_CALLBACK_RESULT_FAILED 3
#define SYNX_CALLBACK_RESULT_CANCELED 4
#define SYNX_TYPE_CSL 0
#define SYNX_MAX_BIND_TYPES 1
struct synx_info {
  char name[64];
  __s32 synx_obj;
};
struct synx_userpayload_info {
  __s32 synx_obj;
  __u32 reserved;
  __u64 payload[SYNX_USER_PAYLOAD_SIZE];
};
struct synx_signal {
  __s32 synx_obj;
  __u32 synx_state;
};
struct synx_merge {
  __u64 synx_objs;
  __u32 num_objs;
  __s32 merged;
};
struct synx_wait {
  __s32 synx_obj;
  __u32 reserved;
  __u64 timeout_ms;
};
struct synx_external_desc {
  __u32 type;
  __u32 reserved;
  __s32 id[2];
};
struct synx_bind {
  __s32 synx_obj;
  __u32 reserved;
  struct synx_external_desc ext_sync_desc;
};
struct synx_addrefcount {
  __s32 synx_obj;
  __u32 count;
};
struct synx_id_info {
  __s32 synx_obj;
  __u32 secure_key;
  __s32 new_synx_obj;
  __u32 padding;
};
struct synx_private_ioctl_arg {
  __u32 id;
  __u32 size;
  __u32 result;
  __u32 reserved;
  __u64 ioctl_ptr;
};
#define SYNX_PRIVATE_MAGIC_NUM 's'
#define SYNX_PRIVATE_IOCTL_CMD _IOWR(SYNX_PRIVATE_MAGIC_NUM, 130, struct synx_private_ioctl_arg)
#define SYNX_CREATE 0
#define SYNX_RELEASE 1
#define SYNX_SIGNAL 2
#define SYNX_MERGE 3
#define SYNX_REGISTER_PAYLOAD 4
#define SYNX_DEREGISTER_PAYLOAD 5
#define SYNX_WAIT 6
#define SYNX_BIND 7
#define SYNX_ADDREFCOUNT 8
#define SYNX_GETSTATUS 9
#define SYNX_IMPORT 10
#define SYNX_EXPORT 11
#endif
