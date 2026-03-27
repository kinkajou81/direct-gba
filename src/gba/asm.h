#pragma once

// -------- memory --------------------------------------------------------------------------

// ----- ldr variants -----

sainline int32 ldrb(ptr addr) {
	int32 ret;
	asm volatile(
		"LDRB %0, [%1]"
		:"=r"(ret)
		:"r"(addr)
		:"memory"
	);
	return ret;
}

sainline int32 ldrh(ptr addr) {
	int32 ret;
	asm volatile(
		"LDRH %0, [%1]"
		:"=r"(ret)
		:"r"(addr)
		:"memory"
	);
	return ret;
}

sainline int32 ldrsb(ptr addr) {
	int32 ret;
	asm volatile(
		"LDRSB %0, [%1]"
		:"=r"(ret)
		:"r"(addr)
		:"memory"
	);
	return ret;
}

sainline int32 ldrsh(ptr addr) {
	int32 ret;
	asm volatile(
		"LDRSH %0, [%1]"
		:"=r"(ret)
		:"r"(addr)
		:"memory"
	);
	return ret;
}

sainline int32 ldr(ptr addr) {
	int32 ret;
	asm volatile(
		"LDR %0, [%1]"
		:"=r"(ret)
		:"r"(addr)
		:"memory"
	);
	return ret;
}

sainline int32 ldrt(ptr addr) {
	int32 ret;
	asm volatile(
		"LDRT %0, [%1]"
		:"=r"(ret)
		:"r"(addr)
		:"memory"
	);
	return ret;
}

sainline puint64 ldrd(ptr addr) {
	uint32 ret1, ret2;
	asm volatile(
		"LDRD %0, %1, [%2]"
		:"=r"(ret1), "=r"(ret2)
		:"r"(addr)
		:"memory"
	);
	uint64 ret = {.a = ret1, .b = ret2};
	return ret;
}

// ----- str variants -----

sainline void strb(uint32 data, ptr addr) {
	asm volatile(
		"STRB %1, [%0]"
		:
		:"r"(addr), "r"(data)
		:"memory"
	);
}

sainline void strh(uint32 data, ptr addr) {
	asm volatile(
		"STRH %1, [%0]"
		:
		:"r"(addr), "r"(data)
		:"memory"
	);
}

sainline void str(uint32 data, ptr addr) {
	asm volatile(
		"STR %1, [%0]"
		:
		:"r"(addr), "r"(data)
		:"memory"
	);
}

sainline void strt(uint32 data, ptr addr) {
	asm volatile(
		"STRT %1, [%0]"
		:
		:"r"(addr), "r"(data)
		:"memory"
	);
}

sainline void strd(puint64 data, ptr addr) {
	uint data1 = data.a
	uint data2 = data.b
	asm volatile(
		"STRD %1, %2, [%0]"
		:
		:"r"(addr), "r"(data1), "r"(data2)
		:"memory"
	);
}
