/* 
** Copyright 2001-2004, Travis Geiselbrecht. All rights reserved.
** Distributed under the terms of the NewOS License.
*/
#include <kernel/kernel.h>
#include <kernel/faults.h>
#include <kernel/faults_priv.h>
#include <kernel/vm.h>
#include <kernel/debug.h>
#include <kernel/console.h>
#include <kernel/int.h>

#include <kernel/arch/cpu.h>
#include <kernel/arch/int.h>
#include <kernel/arch/faults.h>

#include <kernel/arch/x86_64/interrupts.h>
#include <kernel/arch/x86_64/faults.h>

#include <boot/stage2.h>

#include <string.h>

// XXX this module is largely outdated. Will probably be removed later.

int arch_faults_init(kernel_args *ka)
{
	return 0;
}

int x86_64_general_protection_fault(int errorcode)
{
	return general_protection_fault(errorcode);
}

int x86_64_double_fault(int errorcode)
{
	kprintf("double fault! errorcode = 0x%x\n", errorcode);
	dprintf("double fault! errorcode = 0x%x\n", errorcode);
	for(;;);
	return INT_NO_RESCHEDULE;
}

