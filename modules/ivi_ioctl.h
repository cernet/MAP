/*************************************************************************
 *
 * ivi_ioctl.h :
 * 
 * This file is the header file for the 'ivi_ioctl.c' file,
 *
 * Copyright (C) 2013 CERNET Network Center
 * All rights reserved.
 * 
 * Design and coding: 
 *   Xing Li <xing@cernet.edu.cn> 
 *	 Congxiao Bao <congxiao@cernet.edu.cn>
 *   Guoliang Han <bupthgl@gmail.com>
 * 	 Yuncheng Zhu <haoyu@cernet.edu.cn>
 * 	 Wentao Shang <wentaoshang@gmail.com>
 * 	 
 * 
 * Contributions:
 *
 * This file is part of MAP-T/MAP-E Kernel Module.
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * You should have received a copy of the GNU General Public License 
 * along with MAP-T/MAP-E Kernel Module. If not, see 
 * <http://www.gnu.org/licenses/>.
 *
 * For more versions, please send an email to <bupthgl@gmail.com> to
 * obtain an password to access the svn server.
 *
 * LIC: GPLv3
 *
 ************************************************************************/


#ifndef IVI_IOCTL_H
#define IVI_IOCTL_H

#include "ivi_config.h"

#define IVI_DEVNAME	"ivi"

#define IVI_IOCTL	24

#define IVI_IOC_V4DEV	_IOW(IVI_IOCTL, 0x10, int)
#define IVI_IOC_V6DEV	_IOW(IVI_IOCTL, 0x11, int)
#define IVI_IOC_START	_IO(IVI_IOCTL, 0x12)
#define IVI_IOC_STOP	_IO(IVI_IOCTL, 0x13)

#define IVI_IOC_V4NET	_IOW(IVI_IOCTL, 0x14, int)
#define IVI_IOC_V4MASK	_IOW(IVI_IOCTL, 0x15, int)
#define IVI_IOC_V6NET	_IOW(IVI_IOCTL, 0x16, int)
#define IVI_IOC_V6MASK	_IOW(IVI_IOCTL, 0x17, int)
#define IVI_IOC_V4PUB	_IOW(IVI_IOCTL, 0x18, int)
#define IVI_IOC_V4PUBMASK	_IOW(IVI_IOCTL, 0x1f, int)

#define IVI_IOC_NAT	_IO(IVI_IOCTL, 0x19)
#define IVI_IOC_NONAT	_IO(IVI_IOCTL, 0x1a)
#define IVI_IOC_HGW_MAPX	_IOW(IVI_IOCTL, 0x29, int)

#define IVI_IOC_MAPT	_IOW(IVI_IOCTL, 0x1e, int)

#define IVI_IOC_MSS_LIMIT	_IOW(IVI_IOCTL, 0x1d, int)

#define IVI_IOC_ADJACENT	_IOW(IVI_IOCTL, 0x20, int)

#define IVI_IOC_ADD_RULE	_IOW(IVI_IOCTL, 0x21, int)

#define IVI_IOC_TRANSPT	_IOW(IVI_IOCTL, 0x23, int)

#define IVI_IOCTL_LEN	32

#ifdef __KERNEL__

extern int ivi_ioctl_init(void);
extern void ivi_ioctl_exit(void);

#endif

#endif /* IVI_IOCTL_H */

