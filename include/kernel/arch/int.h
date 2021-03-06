/*
** Copyright 2001-2004, Travis Geiselbrecht. All rights reserved.
** Distributed under the terms of the NewOS License.
*/
#ifndef _NEWOS_KERNEL_ARCH_INT_H
#define _NEWOS_KERNEL_ARCH_INT_H

#include <kernel/ktypes.h>
#include <boot/stage2.h>

int arch_int_init(kernel_args *ka);
int arch_int_init2(kernel_args *ka);

void arch_int_enable_interrupts(void);
void arch_int_disable_interrupts(void);
void arch_int_enable_io_interrupt(int irq);
void arch_int_disable_io_interrupt(int irq);
bool arch_int_are_interrupts_enabled(void);

#include INC_ARCH(kernel/arch,int.h)

#endif

