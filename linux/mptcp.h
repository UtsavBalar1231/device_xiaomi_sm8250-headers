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
#ifndef _LINUX_MPTCP_H
#define _LINUX_MPTCP_H
#define MPTCP_GENL_NAME "mptcp"
#define MPTCP_GENL_EV_GRP_NAME "mptcp_events"
#define MPTCP_GENL_CMD_GRP_NAME "mptcp_commands"
#define MPTCP_GENL_VER 0x1
enum {
  MPTCP_ATTR_UNSPEC = 0,
  MPTCP_ATTR_TOKEN,
  MPTCP_ATTR_FAMILY,
  MPTCP_ATTR_LOC_ID,
  MPTCP_ATTR_REM_ID,
  MPTCP_ATTR_SADDR4,
  MPTCP_ATTR_SADDR6,
  MPTCP_ATTR_DADDR4,
  MPTCP_ATTR_DADDR6,
  MPTCP_ATTR_SPORT,
  MPTCP_ATTR_DPORT,
  MPTCP_ATTR_BACKUP,
  MPTCP_ATTR_ERROR,
  MPTCP_ATTR_FLAGS,
  MPTCP_ATTR_TIMEOUT,
  MPTCP_ATTR_IF_IDX,
  __MPTCP_ATTR_AFTER_LAST
};
#define MPTCP_ATTR_MAX (__MPTCP_ATTR_AFTER_LAST - 1)
enum {
  MPTCP_CMD_UNSPEC = 0,
  MPTCP_EVENT_CREATED,
  MPTCP_EVENT_ESTABLISHED,
  MPTCP_EVENT_CLOSED,
  MPTCP_CMD_ANNOUNCE,
  MPTCP_CMD_REMOVE,
  MPTCP_EVENT_ANNOUNCED,
  MPTCP_EVENT_REMOVED,
  MPTCP_CMD_SUB_CREATE,
  MPTCP_CMD_SUB_DESTROY,
  MPTCP_EVENT_SUB_ESTABLISHED,
  MPTCP_EVENT_SUB_CLOSED,
  MPTCP_CMD_SUB_PRIORITY,
  MPTCP_EVENT_SUB_PRIORITY,
  MPTCP_CMD_SET_FILTER,
  MPTCP_CMD_EXIST,
  __MPTCP_CMD_AFTER_LAST
};
#define MPTCP_CMD_MAX (__MPTCP_CMD_AFTER_LAST - 1)
enum {
  MPTCPF_EVENT_CREATED = (1 << 1),
  MPTCPF_EVENT_ESTABLISHED = (1 << 2),
  MPTCPF_EVENT_CLOSED = (1 << 3),
  MPTCPF_EVENT_ANNOUNCED = (1 << 4),
  MPTCPF_EVENT_REMOVED = (1 << 5),
  MPTCPF_EVENT_SUB_ESTABLISHED = (1 << 6),
  MPTCPF_EVENT_SUB_CLOSED = (1 << 7),
  MPTCPF_EVENT_SUB_PRIORITY = (1 << 8),
};
#endif
