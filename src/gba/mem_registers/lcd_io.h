#pragma once

typedef union {
	struct {
		uint8_t bg_mode : 3;
		bool gbc_mode : 1;
		bool dsp_frame_select : 1;
		bool h_blank_oam : 1;
		bool obj_vram_map : 1;
		bool forced_blank : 1;
		uint8_t dsp_bg : 4;
		bool dsp_obj : 1;
		uint8_t dsp_win : 2;
		bool dsp_win_obj : 1;
	} data;
	uint16_t val;
} dispcnt;

// 4000004h - Genel LCD Status (R/W)
typedef union {
	struct {
		bool vblank_flag : 1;
		bool hblank_flag : 1;
		bool vcounter_flag : 1;
		bool vblank_irq : 1;
		bool hblank_irq : 1;
		bool vcounter_irq : 1;
		uint8_t none : 2;
		uint8_t vcount_setting : 8;
	} data;
	uint16_t val;
} dispstat;

// 4000006h - Vertical Counter (R)
typedef union {
	struct {
		uint8_t scanline : 8;
		uint8_t none : 8;
	} data;
	uint16_t val;
} vcount;

#define SST_256_256 0 // screen size text mode 256x256
#define SST_512_256 1 // screen size text mode 512x256
#define SST_256_512 2 // screen size text mode 256x512
#define SST_512_512 3 // screen size text mode 512x512

#define SSRS_128_128 0 // screen size rotation-scaling mode 128x128
#define SSRS_256_256 1 // screen size rotation-scaling mode 256x256
#define SSRS_512_512 2 // screen size rotation-scaling mode 512x512
#define SSRS_1024_1024 3 // screen size rotation-scaling mode 1024x1024

// 4000008h - BG0 Control (R/W) (BG Modes 0,1 only)
// 400000Ah - BG1 Control (R/W) (BG Modes 0,1 only)
// 400000Ch - BG2 Control (R/W) (BG Modes 0,1,2 only)
// 400000Eh - BG3 Control (R/W) (BG Modes 0,2 only)
typedef union {
	struct {
		uint8_t priority : 2;
		uint8_t char_base_box : 2;
		uint8_t none : 2;
		bool mosaic : 1;
		bool col_mode : 1;
		uint8_t screen_base_block : 5;
		bool dsp_area_overflow : 1;
		uint8_t screen_size : 2;
	} data;
	uint16_t val;
} bg_control;

// 4000010h - BG0 X-Offset (W)
// 4000012h - BG0 Y-Offset (W)
// 4000014h - BG1 X-Offset (W)
// 4000016h - BG1 Y-Offset (W)
// 4000018h - BG2 X-Offset (W)
// 400001Ah - BG2 Y-Offset (W)
// 400001Ch - BG3 X-Offset (W)
// 400001Eh - BG3 Y-Offset (W)
typedef int8_t bg_offset;

// 4000028h - BG2 Reference Point X-Coordinate
// 400002Ch - BG2 Reference Point Y-Coordinate
// 4000038h - BG3 Reference Point X-Coordinate
// 400003Ch - BG3 Reference Point Y-Coordinate
typedef union {
	struct {
		uint8_t fractional : 8;
		uint8_t integer : 19;
		uint8_t sign : 1;
	} data;
	uint32 val;
} bg_refpoint;

// 4000020h - BG2 Rotation/Scaling Parameter A (alias dx) (W)
// 4000022h - BG2 Rotation/Scaling Parameter B (alias dmx) (W)
// 4000024h - BG2 Rotation/Scaling Parameter C (alias dy) (W)
// 4000026h - BG2 Rotation/Scaling Parameter D (alias dmy) (W)
// 4000030h - BG3 Rotation/Scaling Parameter A (alias dx) (W)
// 4000032h - BG3 Rotation/Scaling Parameter B (alias dmx) (W)
// 4000034h - BG3 Rotation/Scaling Parameter C (alias dy) (W)
// 4000036h - BG3 Rotation/Scaling Parameter D (alias dmy) (W)
typedef union {
	struct {
		uint8_t fractional : 8;
		uint8_t integer : 7;
		uint8_t sign : 1;
	} data;
	uint16_t val;
} bg_transforms;

// background rotations/scaling parameters A-D
sainline bg_transforms bg_rsp_a(fint8 x0, fint8 y0, fint8 angle) {
	fint8 o = cos(angle)/x0;
return (bg_transforms.val){o|(signbit(o)<<16);}
}
sainline bg_transforms bg_rsp_b(fint8 x0, fint8 y0, fint8 angle) {
	fint8 o = sin(angle)/x0;
return (bg_transforms.val){o|(signbit(o)<<16);}
}
sainline bg_transforms bg_rsp_c(fint8 x0, fint8 y0, fint8 angle) {
	fint8 o = sin(angle)/y0;
return (bg_transforms.val){o|(signbit(o)<<16);}
}
sainline bg_transforms bg_rsp_d(fint8 x0, fint8 y0, fint8 angle) {
	fint8 o = cos(angle)/y0;
return (bg_transforms.val){o|(signbit(o)<<16);}
}

// 4000040h - Window 0 Horizontal Dimensions (W)
// 4000042h - Window 1 Horizontal Dimensions (W)
// 4000044h - Window 0 Vertical Dimensions (W)
// 4000046h - Window 1 Vertical Dimensions (W)
typedef union {
	struct {
		uint8_t a;
		uint8_t b;
	} data;
	uint16_t val;
} win_pos

typedef union {
	struct {
		uint8_t win0_bg_bits : 4;
		bool win0_obj_bits : 1;
		bool win0_special : 1;
		uint8_t none1 : 2;
		uint8_t win1_bg_bits : 4;
		bool win1_obj_bits : 1;
		bool win1_special : 1;
		uint8_t none2 : 2;
	} data;
	uint16_t val;
} winin;

typedef union {
	struct {
		uint8_t win_out_bg_bits : 4;
		bool win_out_obj_bits : 1;
		bool win_out_special : 1;
		uint8_t none1 : 2;
uint8_t win_obj_bg_bits : 4;
		bool win_obj_obj_bits : 1;
		bool win_obj_special : 1;
		uint8_t none2 : 2;
	} data;
	uint16_t val;
} winout;

typedef union {
	struct {
		uint8_t bg_hsize : 4;
		uint8_t bg_vsize : 4;
		uint8_t obj_hsize : 4;
		uint8_t obj_vsize : 4;
	} data;
	uint16_t val;
} mosaic;
