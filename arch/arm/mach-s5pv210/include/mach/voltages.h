/* arch/arm/mach-s5pv210/include/mach/voltages.h
*
* Copyright (c) 2010 Samsung Electronics Co., Ltd.
*
* S5PV210/S5PC110 CPU frequency scaling support
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License version 2 as
* published by the Free Software Foundation.
*/

#ifndef __ASM_ARCH_VOLTAGES_H
#define __ASM_ARCH_VOLTAGES_H

#ifdef CONFIG_CUSTOM_VOLTAGE
#define ARMVOLT 1500000
#define INTVOLT 1250000
#else
#define ARMVOLT 1500000
#define INTVOLT 1250000
#endif

#define VDDARM  1450000
#define VDDINT  1200000


/* 1300Mhz to 100Mhz Config */
#define DVSARM1 1425000 
#define DVSARM2 1375000 
#define DVSARM3 1250000 
#define DVSARM4 1200000 
#define DVSARM5 1050000 
#define DVSARM6 950000 

#define DVSINT0 1200000
#define DVSINT1 1150000
#define DVSINT2 1100000 
#define DVSINT3 1000000  
/* 1300Mhz to 100Mhz Config */

#endif /* __ASM_ARCH_VOLTAGES_H */



