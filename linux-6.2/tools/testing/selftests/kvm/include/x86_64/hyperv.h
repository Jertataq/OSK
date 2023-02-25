/* SPDX-License-Identifier: GPL-2.0 */
/*
 * tools/testing/selftests/kvm/include/x86_64/hyperv.h
 *
 * Copyright (C) 2021, Red Hat, Inc.
 *
 */

#ifndef SELFTEST_KVM_HYPERV_H
#define SELFTEST_KVM_HYPERV_H

#include "processor.h"

#define HYPERV_CPUID_VENDOR_AND_MAX_FUNCTIONS	0x40000000
#define HYPERV_CPUID_INTERFACE			0x40000001
#define HYPERV_CPUID_VERSION			0x40000002
#define HYPERV_CPUID_FEATURES			0x40000003
#define HYPERV_CPUID_ENLIGHTMENT_INFO		0x40000004
#define HYPERV_CPUID_IMPLEMENT_LIMITS		0x40000005
#define HYPERV_CPUID_CPU_MANAGEMENT_FEATURES	0x40000007
#define HYPERV_CPUID_NESTED_FEATURES		0x4000000A
#define HYPERV_CPUID_SYNDBG_VENDOR_AND_MAX_FUNCTIONS	0x40000080
#define HYPERV_CPUID_SYNDBG_INTERFACE			0x40000081
#define HYPERV_CPUID_SYNDBG_PLATFORM_CAPABILITIES	0x40000082

#define HV_X64_MSR_GUEST_OS_ID			0x40000000
#define HV_X64_MSR_HYPERCALL			0x40000001
#define HV_X64_MSR_VP_INDEX			0x40000002
#define HV_X64_MSR_RESET			0x40000003
#define HV_X64_MSR_VP_RUNTIME			0x40000010
#define HV_X64_MSR_TIME_REF_COUNT		0x40000020
#define HV_X64_MSR_REFERENCE_TSC		0x40000021
#define HV_X64_MSR_TSC_FREQUENCY		0x40000022
#define HV_X64_MSR_APIC_FREQUENCY		0x40000023
#define HV_X64_MSR_EOI				0x40000070
#define HV_X64_MSR_ICR				0x40000071
#define HV_X64_MSR_TPR				0x40000072
#define HV_X64_MSR_VP_ASSIST_PAGE		0x40000073
#define HV_X64_MSR_SCONTROL			0x40000080
#define HV_X64_MSR_SVERSION			0x40000081
#define HV_X64_MSR_SIEFP			0x40000082
#define HV_X64_MSR_SIMP				0x40000083
#define HV_X64_MSR_EOM				0x40000084
#define HV_X64_MSR_SINT0			0x40000090
#define HV_X64_MSR_SINT1			0x40000091
#define HV_X64_MSR_SINT2			0x40000092
#define HV_X64_MSR_SINT3			0x40000093
#define HV_X64_MSR_SINT4			0x40000094
#define HV_X64_MSR_SINT5			0x40000095
#define HV_X64_MSR_SINT6			0x40000096
#define HV_X64_MSR_SINT7			0x40000097
#define HV_X64_MSR_SINT8			0x40000098
#define HV_X64_MSR_SINT9			0x40000099
#define HV_X64_MSR_SINT10			0x4000009A
#define HV_X64_MSR_SINT11			0x4000009B
#define HV_X64_MSR_SINT12			0x4000009C
#define HV_X64_MSR_SINT13			0x4000009D
#define HV_X64_MSR_SINT14			0x4000009E
#define HV_X64_MSR_SINT15			0x4000009F
#define HV_X64_MSR_STIMER0_CONFIG		0x400000B0
#define HV_X64_MSR_STIMER0_COUNT		0x400000B1
#define HV_X64_MSR_STIMER1_CONFIG		0x400000B2
#define HV_X64_MSR_STIMER1_COUNT		0x400000B3
#define HV_X64_MSR_STIMER2_CONFIG		0x400000B4
#define HV_X64_MSR_STIMER2_COUNT		0x400000B5
#define HV_X64_MSR_STIMER3_CONFIG		0x400000B6
#define HV_X64_MSR_STIMER3_COUNT		0x400000B7
#define HV_X64_MSR_GUEST_IDLE			0x400000F0
#define HV_X64_MSR_CRASH_P0			0x40000100
#define HV_X64_MSR_CRASH_P1			0x40000101
#define HV_X64_MSR_CRASH_P2			0x40000102
#define HV_X64_MSR_CRASH_P3			0x40000103
#define HV_X64_MSR_CRASH_P4			0x40000104
#define HV_X64_MSR_CRASH_CTL			0x40000105
#define HV_X64_MSR_REENLIGHTENMENT_CONTROL	0x40000106
#define HV_X64_MSR_TSC_EMULATION_CONTROL	0x40000107
#define HV_X64_MSR_TSC_EMULATION_STATUS		0x40000108
#define HV_X64_MSR_TSC_INVARIANT_CONTROL	0x40000118

#define HV_X64_MSR_SYNDBG_CONTROL		0x400000F1
#define HV_X64_MSR_SYNDBG_STATUS		0x400000F2
#define HV_X64_MSR_SYNDBG_SEND_BUFFER		0x400000F3
#define HV_X64_MSR_SYNDBG_RECV_BUFFER		0x400000F4
#define HV_X64_MSR_SYNDBG_PENDING_BUFFER	0x400000F5
#define HV_X64_MSR_SYNDBG_OPTIONS		0x400000FF

/* HYPERV_CPUID_FEATURES.EAX */
#define HV_MSR_VP_RUNTIME_AVAILABLE		BIT(0)
#define HV_MSR_TIME_REF_COUNT_AVAILABLE		BIT(1)
#define HV_MSR_SYNIC_AVAILABLE			BIT(2)
#define HV_MSR_SYNTIMER_AVAILABLE		BIT(3)
#define HV_MSR_APIC_ACCESS_AVAILABLE		BIT(4)
#define HV_MSR_HYPERCALL_AVAILABLE		BIT(5)
#define HV_MSR_VP_INDEX_AVAILABLE		BIT(6)
#define HV_MSR_RESET_AVAILABLE			BIT(7)
#define HV_MSR_STAT_PAGES_AVAILABLE		BIT(8)
#define HV_MSR_REFERENCE_TSC_AVAILABLE		BIT(9)
#define HV_MSR_GUEST_IDLE_AVAILABLE		BIT(10)
#define HV_ACCESS_FREQUENCY_MSRS		BIT(11)
#define HV_ACCESS_REENLIGHTENMENT		BIT(13)
#define HV_ACCESS_TSC_INVARIANT			BIT(15)

/* HYPERV_CPUID_FEATURES.EBX */
#define HV_CREATE_PARTITIONS			BIT(0)
#define HV_ACCESS_PARTITION_ID			BIT(1)
#define HV_ACCESS_MEMORY_POOL			BIT(2)
#define HV_ADJUST_MESSAGE_BUFFERS		BIT(3)
#define HV_POST_MESSAGES			BIT(4)
#define HV_SIGNAL_EVENTS			BIT(5)
#define HV_CREATE_PORT				BIT(6)
#define HV_CONNECT_PORT				BIT(7)
#define HV_ACCESS_STATS				BIT(8)
#define HV_DEBUGGING				BIT(11)
#define HV_CPU_MANAGEMENT			BIT(12)
#define HV_ISOLATION				BIT(22)

/* HYPERV_CPUID_FEATURES.EDX */
#define HV_X64_MWAIT_AVAILABLE				BIT(0)
#define HV_X64_GUEST_DEBUGGING_AVAILABLE		BIT(1)
#define HV_X64_PERF_MONITOR_AVAILABLE			BIT(2)
#define HV_X64_CPU_DYNAMIC_PARTITIONING_AVAILABLE	BIT(3)
#define HV_X64_HYPERCALL_XMM_INPUT_AVAILABLE		BIT(4)
#define HV_X64_GUEST_IDLE_STATE_AVAILABLE		BIT(5)
#define HV_FEATURE_FREQUENCY_MSRS_AVAILABLE		BIT(8)
#define HV_FEATURE_GUEST_CRASH_MSR_AVAILABLE		BIT(10)
#define HV_FEATURE_DEBUG_MSRS_AVAILABLE			BIT(11)
#define HV_STIMER_DIRECT_MODE_AVAILABLE			BIT(19)

/* HYPERV_CPUID_ENLIGHTMENT_INFO.EAX */
#define HV_X64_AS_SWITCH_RECOMMENDED			BIT(0)
#define HV_X64_LOCAL_TLB_FLUSH_RECOMMENDED		BIT(1)
#define HV_X64_REMOTE_TLB_FLUSH_RECOMMENDED		BIT(2)
#define HV_X64_APIC_ACCESS_RECOMMENDED			BIT(3)
#define HV_X64_SYSTEM_RESET_RECOMMENDED			BIT(4)
#define HV_X64_RELAXED_TIMING_RECOMMENDED		BIT(5)
#define HV_DEPRECATING_AEOI_RECOMMENDED			BIT(9)
#define HV_X64_CLUSTER_IPI_RECOMMENDED			BIT(10)
#define HV_X64_EX_PROCESSOR_MASKS_RECOMMENDED		BIT(11)
#define HV_X64_ENLIGHTENED_VMCS_RECOMMENDED		BIT(14)

/* HYPERV_CPUID_SYNDBG_PLATFORM_CAPABILITIES.EAX */
#define HV_X64_SYNDBG_CAP_ALLOW_KERNEL_DEBUGGING	BIT(1)

/* Hypercalls */
#define HVCALL_FLUSH_VIRTUAL_ADDRESS_SPACE	0x0002
#define HVCALL_FLUSH_VIRTUAL_ADDRESS_LIST	0x0003
#define HVCALL_NOTIFY_LONG_SPIN_WAIT		0x0008
#define HVCALL_SEND_IPI				0x000b
#define HVCALL_FLUSH_VIRTUAL_ADDRESS_SPACE_EX	0x0013
#define HVCALL_FLUSH_VIRTUAL_ADDRESS_LIST_EX	0x0014
#define HVCALL_SEND_IPI_EX			0x0015
#define HVCALL_GET_PARTITION_ID			0x0046
#define HVCALL_DEPOSIT_MEMORY			0x0048
#define HVCALL_CREATE_VP			0x004e
#define HVCALL_GET_VP_REGISTERS			0x0050
#define HVCALL_SET_VP_REGISTERS			0x0051
#define HVCALL_POST_MESSAGE			0x005c
#define HVCALL_SIGNAL_EVENT			0x005d
#define HVCALL_POST_DEBUG_DATA			0x0069
#define HVCALL_RETRIEVE_DEBUG_DATA		0x006a
#define HVCALL_RESET_DEBUG_SESSION		0x006b
#define HVCALL_ADD_LOGICAL_PROCESSOR		0x0076
#define HVCALL_MAP_DEVICE_INTERRUPT		0x007c
#define HVCALL_UNMAP_DEVICE_INTERRUPT		0x007d
#define HVCALL_RETARGET_INTERRUPT		0x007e
#define HVCALL_FLUSH_GUEST_PHYSICAL_ADDRESS_SPACE 0x00af
#define HVCALL_FLUSH_GUEST_PHYSICAL_ADDRESS_LIST 0x00b0

#define HV_FLUSH_ALL_PROCESSORS			BIT(0)
#define HV_FLUSH_ALL_VIRTUAL_ADDRESS_SPACES	BIT(1)
#define HV_FLUSH_NON_GLOBAL_MAPPINGS_ONLY	BIT(2)
#define HV_FLUSH_USE_EXTENDED_RANGE_FORMAT	BIT(3)

/* hypercall status code */
#define HV_STATUS_SUCCESS			0
#define HV_STATUS_INVALID_HYPERCALL_CODE	2
#define HV_STATUS_INVALID_HYPERCALL_INPUT	3
#define HV_STATUS_INVALID_ALIGNMENT		4
#define HV_STATUS_INVALID_PARAMETER		5
#define HV_STATUS_ACCESS_DENIED			6
#define HV_STATUS_OPERATION_DENIED		8
#define HV_STATUS_INSUFFICIENT_MEMORY		11
#define HV_STATUS_INVALID_PORT_ID		17
#define HV_STATUS_INVALID_CONNECTION_ID		18
#define HV_STATUS_INSUFFICIENT_BUFFERS		19

/* hypercall options */
#define HV_HYPERCALL_FAST_BIT		BIT(16)
#define HV_HYPERCALL_VARHEAD_OFFSET	17
#define HV_HYPERCALL_REP_COMP_OFFSET	32

/*
 * Issue a Hyper-V hypercall. Returns exception vector raised or 0, 'hv_status'
 * is set to the hypercall status (if no exception occurred).
 */
static inline uint8_t __hyperv_hypercall(u64 control, vm_vaddr_t input_address,
					 vm_vaddr_t output_address,
					 uint64_t *hv_status)
{
	uint64_t error_code;
	uint8_t vector;

	/* Note both the hypercall and the "asm safe" clobber r9-r11. */
	asm volatile("mov %[output_address], %%r8\n\t"
		     KVM_ASM_SAFE("vmcall")
		     : "=a" (*hv_status),
		       "+c" (control), "+d" (input_address),
		       KVM_ASM_SAFE_OUTPUTS(vector, error_code)
		     : [output_address] "r"(output_address),
		       "a" (-EFAULT)
		     : "cc", "memory", "r8", KVM_ASM_SAFE_CLOBBERS);
	return vector;
}

/* Issue a Hyper-V hypercall and assert that it succeeded. */
static inline void hyperv_hypercall(u64 control, vm_vaddr_t input_address,
				    vm_vaddr_t output_address)
{
	uint64_t hv_status;
	uint8_t vector;

	vector = __hyperv_hypercall(control, input_address, output_address, &hv_status);

	GUEST_ASSERT(!vector);
	GUEST_ASSERT((hv_status & 0xffff) == 0);
}

/* Write 'Fast' hypercall input 'data' to the first 'n_sse_regs' SSE regs */
static inline void hyperv_write_xmm_input(void *data, int n_sse_regs)
{
	int i;

	for (i = 0; i < n_sse_regs; i++)
		write_sse_reg(i, (sse128_t *)(data + sizeof(sse128_t) * i));
}

/* Proper HV_X64_MSR_GUEST_OS_ID value */
#define HYPERV_LINUX_OS_ID ((u64)0x8100 << 48)

#define HV_X64_MSR_VP_ASSIST_PAGE		0x40000073
#define HV_X64_MSR_VP_ASSIST_PAGE_ENABLE	0x00000001
#define HV_X64_MSR_VP_ASSIST_PAGE_ADDRESS_SHIFT	12
#define HV_X64_MSR_VP_ASSIST_PAGE_ADDRESS_MASK	\
		(~((1ull << HV_X64_MSR_VP_ASSIST_PAGE_ADDRESS_SHIFT) - 1))

struct hv_nested_enlightenments_control {
	struct {
		__u32 directhypercall:1;
		__u32 reserved:31;
	} features;
	struct {
		__u32 reserved;
	} hypercallControls;
} __packed;

/* Define virtual processor assist page structure. */
struct hv_vp_assist_page {
	__u32 apic_assist;
	__u32 reserved1;
	__u64 vtl_control[3];
	struct hv_nested_enlightenments_control nested_control;
	__u8 enlighten_vmentry;
	__u8 reserved2[7];
	__u64 current_nested_vmcs;
} __packed;

extern struct hv_vp_assist_page *current_vp_assist;

int enable_vp_assist(uint64_t vp_assist_pa, void *vp_assist);

struct hyperv_test_pages {
	/* VP assist page */
	void *vp_assist_hva;
	uint64_t vp_assist_gpa;
	void *vp_assist;

	/* Partition assist page */
	void *partition_assist_hva;
	uint64_t partition_assist_gpa;
	void *partition_assist;

	/* Enlightened VMCS */
	void *enlightened_vmcs_hva;
	uint64_t enlightened_vmcs_gpa;
	void *enlightened_vmcs;
};

struct hyperv_test_pages *vcpu_alloc_hyperv_test_pages(struct kvm_vm *vm,
						       vm_vaddr_t *p_hv_pages_gva);

#endif /* !SELFTEST_KVM_HYPERV_H */
