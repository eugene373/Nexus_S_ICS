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
#define ARMVOLT 1450000
#define INTVOLT 1250000
#else
#define ARMVOLT 1450000
#define INTVOLT 1250000
#endif

#define VDDARM  1500000
#define VDDINT  1250000

#define DVSARM1 1390000 
#define DVSARM2 1330000 
#define DVSARM3 1250000 
#define DVSARM4 1200000 
#define DVSARM5 1050000 
#define DVSARM6 950000 

#define DVSINT0 1195000
#define DVSINT1 1175000
#define DVSINT2 1100000 
#define DVSINT3 1000000 

#endif /* __ASM_ARCH_VOLTAGES_H */



