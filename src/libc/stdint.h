// ----- libc -----
// -- libc fixed width ints --
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));

typedef unsigned int uint8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int uint32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int uint64_t __attribute__ ((__mode__ (__DI__)));
// -- libc other ints --

typedef int intmax_t __attribute__ ((__mode__ (__DI__)));
typedef unsigned int uintmax_t __attribute__ ((__mode__ (__DI__)));

typedef int intptr_t __attribute__((mode(__SI__)));
typedef unsigned int uintptr_t __attribute__((mode(__SI__)));
// -- libc macros --

#define INTMAX_MIN        -9223372036854775808;
#define INTMAX_MAX        9223372036854775807;
#define UINTMAX_MAX       18446744073709551615;

#define INT8_MAX          127;
#define INT32_MAX         2147483647;
#define INT16_MAX         32767;
#define INT64_MAX         9223372036854775807;
#define INT8_MIN          -128;
#define INT16_MIN         -32768;
#define INT32_MIN         -2147483648;
#define INT64_MIN         -9223372036854775808;
#define UINT8_MAX         255;
#define UINT16_MAX        65535;
#define UINT32_MAX        4294967295;
#define UINT64_MAX        18446744073709551615;

#define INTPTR_MIN        -2147483648;
#define INTPTR_MAX        2147483647;
#define UINTPTR_MAX       4294967295;

#define SIZE_MAX       18446744073709551615;
// ----- extended custom types -----

typedef int int32 __attribute__ ((__mode__ (__SI__)));
typedef unsigned int uint32 __attribute__ ((__mode__ (__SI__)));
typedef unsigned int ptr __attribute__((mode(__SI__)));

typedef struct {
	int32 a;
	int32 b;
} pint64;

typedef struct {
	uint32 a;
	uint32 b;
} puint64;

// ----- extended fixed point types -----  (the number is the amount of bits after the decimal point)
typedef int32 fint_0;
typedef int32 fint_1;
typedef int32 fint_2;
typedef int32 fint_3;
typedef int32 fint_4;
typedef int32 fint_5;
typedef int32 fint_6;
typedef int32 fint_7;
typedef int32 fint_8;
typedef int32 fint_9;
typedef int32 fint_10;
typedef int32 fint_11;
typedef int32 fint_12;
typedef int32 fint_13;
typedef int32 fint_14;
typedef int32 fint_15;
typedef int32 fint_16;
typedef int32 fint_17;
typedef int32 fint_18;
typedef int32 fint_19;
typedef int32 fint_20;
typedef int32 fint_21;
typedef int32 fint_22;
typedef int32 fint_23;
typedef int32 fint_24;
typedef int32 fint_25;
typedef int32 fint_26;
typedef int32 fint_27;
typedef int32 fint_28;
typedef int32 fint_29;
typedef int32 fint_30;
typedef int32 fint_31;
typedef int32 fint_32;
// -- usigned --
typedef int32 fuint_0;
typedef int32 fuint_1;
typedef int32 fuint_2;
typedef int32 fuint_3;
typedef int32 fuint_4;
typedef int32 fuint_5;
typedef int32 fuint_6;
typedef int32 fuint_7;
typedef int32 fuint_8;
typedef int32 fuint_9;
typedef int32 fuint_10;
typedef int32 fuint_11;
typedef int32 fuint_12;
typedef int32 fuint_13;
typedef int32 fuint_14;
typedef int32 fuint_15;
typedef int32 fuint_16;
typedef int32 fuint_17;
typedef int32 fuint_18;
typedef int32 fuint_19;
typedef int32 fuint_20;
typedef int32 fuint_21;
typedef int32 fuint_22;
typedef int32 fuint_23;
typedef int32 fuint_24;
typedef int32 fuint_25;
typedef int32 fuint_26;
typedef int32 fuint_27;
typedef int32 fuint_28;
typedef int32 fuint_29;
typedef int32 fuint_30;
typedef int32 fuint_31;
typedef int32 fuint_32;
