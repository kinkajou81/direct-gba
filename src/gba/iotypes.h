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

typedef int8_t bg_offset;
