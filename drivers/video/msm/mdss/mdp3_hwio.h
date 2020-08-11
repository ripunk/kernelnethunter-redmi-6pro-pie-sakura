/* Copyright (c) 2013-2014, 2016, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef MDP3_HWIO_H
#define MDP3_HWIO_H

#include <linux/bitops.h>

/*synchronization*/
#define MDP3_REG_SYNC_CONFIG_0				0x0300
#define MDP3_REG_SYNC_CONFIG_1				0x0304
#define MDP3_REG_SYNC_CONFIG_2				0x0308
#define MDP3_REG_SYNC_STATUS_0				0x030c
#define MDP3_REG_SYNC_STATUS_1				0x0310
#define MDP3_REG_SYNC_STATUS_2				0x0314
#define MDP3_REG_PRIMARY_VSYNC_OUT_CTRL			0x0318
#define MDP3_REG_SECONDARY_VSYNC_OUT_CTRL		0x031c
#define MDP3_REG_EXTERNAL_VSYNC_OUT_CTRL		0x0320
#define MDP3_REG_VSYNC_SEL				0x0324
#define MDP3_REG_PRIMARY_VSYNC_INIT_VAL			0x0328
#define MDP3_REG_SECONDARY_VSYNC_INIT_VAL		0x032c
#define MDP3_REG_EXTERNAL_VSYNC_INIT_VAL		0x0330
#define MDP3_REG_AUTOREFRESH_CONFIG_P			0x034C
#define MDP3_REG_SYNC_THRESH_0				0x0200
#define MDP3_REG_SYNC_THRESH_1				0x0204
#define MDP3_REG_SYNC_THRESH_2				0x0208
#define MDP3_REG_TEAR_CHECK_EN				0x020C
#define MDP3_REG_PRIMARY_START_P0S			0x0210
#define MDP3_REG_SECONDARY_START_POS			0x0214
#define MDP3_REG_EXTERNAL_START_POS			0x0218

/*interrupt*/
#define MDP3_REG_INTR_ENABLE				0x0020
#define MDP3_REG_INTR_STATUS				0x0024
#define MDP3_REG_INTR_CLEAR				0x0028

#define MDP3_REG_PRIMARY_RD_PTR_IRQ			0x021C
#define MDP3_REG_SECONDARY_RD_PTR_IRQ			0x0220

/*operation control*/
#define MDP3_REG_DMA_P_START				0x0044
#define MDP3_REG_DMA_S_START				0x0048
#define MDP3_REG_DMA_E_START				0x004c

#define MDP3_REG_DISPLAY_STATUS				0x0038

#define MDP3_REG_HW_VERSION				0x0070
#define MDP3_REG_SW_RESET				0x0074
#define MDP3_REG_SEL_CLK_OR_HCLK_TEST_BUS		0x007C

/*EBI*/
#define MDP3_REG_EBI2_LCD0				0x003c
#define MDP3_REG_EBI2_LCD0_YSTRIDE			0x0050

/*clock control*/
#define MDP3_REG_CGC_EN					0x0100
#define MDP3_VBIF_REG_FORCE_EN				0x0004

/* QOS Remapper */
#define MDP3_DMA_P_QOS_REMAPPER				0x90090
#define MDP3_DMA_P_WATERMARK_0				0x90094
#define MDP3_DMA_P_WATERMARK_1				0x90098
#define MDP3_DMA_P_WATERMARK_2				0x9009C
#define MDP3_PANIC_ROBUST_CTRL				0x900A0
#define MDP3_PANIC_LUT0					0x900A4
#define MDP3_PANIC_LUT1					0x900A8
#define MDP3_ROBUST_LUT					0x900AC

/*danger safe*/
#define MDP3_PANIC_ROBUST_CTRL				0x900A0

/*DMA_P*/
#define MDP3_REG_DMA_P_CONFIG				0x90000
#define MDP3_REG_DMA_P_SIZE				0x90004
#define MDP3_REG_DMA_P_IBUF_ADDR			0x90008
#define MDP3_REG_DMA_P_IBUF_Y_STRIDE			0x9000C
#define MDP3_REG_DMA_P_PROFILE_EN			0x90020
#define MDP3_REG_DMA_P_OUT_XY				0x90010
#define MDP3_REG_DMA_P_CURSOR_FORMAT			0x90040
#define MDP3_REG_DMA_P_CURSOR_SIZE			0x90044
#define MDP3_REG_DMA_P_CURSOR_BUF_ADDR			0x90048
#define MDP3_REG_DMA_P_CURSOR_POS			0x9004c
#define MDP3_REG_DMA_P_CURSOR_BLEND_CONFIG		0x90060
#define MDP3_REG_DMA_P_CURSOR_BLEND_PARAM		0x90064
#define MDP3_REG_DMA_P_CURSOR_BLEND_TRANS_MASK		0x90068
#define MDP3_REG_DMA_P_COLOR_CORRECT_CONFIG		0x90070
#define MDP3_REG_DMA_P_CSC_BYPASS			0X93004
#define MDP3_REG_DMA_P_CSC_MV1				0x93400
#define MDP3_REG_DMA_P_CSC_MV2				0x93440
#define MDP3_REG_DMA_P_CSC_PRE_BV1			0x93500
#define MDP3_REG_DMA_P_CSC_PRE_BV2			0x93540
#define MDP3_REG_DMA_P_CSC_POST_BV1			0x93580
#define MDP3_REG_DMA_P_CSC_POST_BV2			0x935c0
#define MDP3_REG_DMA_P_CSC_PRE_LV1			0x93600
#define MDP3_REG_DMA_P_CSC_PRE_LV2			0x93640
#define MDP3_REG_DMA_P_CSC_POST_LV1			0x93680
#define MDP3_REG_DMA_P_CSC_POST_LV2			0x936c0
#define MDP3_REG_DMA_P_CSC_LUT1				0x93800
#define MDP3_REG_DMA_P_CSC_LUT2				0x93c00
#define MDP3_REG_DMA_P_HIST_START			0x94000
#define MDP3_REG_DMA_P_HIST_FRAME_CNT			0x94004
#define MDP3_REG_DMA_P_HIST_BIT_MASK			0x94008
#define MDP3_REG_DMA_P_HIST_RESET_SEQ_START		0x9400c
#define MDP3_REG_DMA_P_HIST_CONTROL			0x94010
#define MDP3_REG_DMA_P_HIST_INTR_STATUS			0x94014
#define MDP3_REG_DMA_P_HIST_INTR_CLEAR			0x94018
#define MDP3_REG_DMA_P_HIST_INTR_ENABLE			0x9401c
#define MDP3_REG_DMA_P_HIST_STOP_REQ			0x94020
#define MDP3_REG_DMA_P_HIST_CANCEL_REQ			0x94024
#define MDP3_REG_DMA_P_HIST_EXTRA_INFO_0		0x94028
#define MDP3_REG_DMA_P_HIST_EXTRA_INFO_1		0x9402c
#define MDP3_REG_DMA_P_HIST_R_DATA			0x94100
#define MDP3_REG_DMA_P_HIST_G_DATA			0x94200
#define MDP3_REG_DMA_P_HIST_B_DATA			0x94300
#define MDP3_REG_DMA_P_FETCH_CFG			0x90074
#define MDP3_REG_DMA_P_DCVS_CTRL			0x90080
#define MDP3_REG_DMA_P_DCVS_STATUS			0x90084

/*DMA_S*/
#define MDP3_REG_DMA_S_CONFIG				0xA0000
#define MDP3_REG_DMA_S_SIZE				0xA0004
#define MDP3_REG_DMA_S_IBUF_ADDR			0xA0008
#define MDP3_REG_DMA_S_IBUF_Y_STRIDE			0xA000C
#define MDP3_REG_DMA_S_OUT_XY				0xA0010

/*DMA MASK*/
#define MDP3_DMA_IBUF_FORMAT_MASK 0x06000000
#define MDP3_DMA_PACK_PATTERN_MASK 0x00003f00

/*MISR*/
#define MDP3_REG_MODE_CLK				0x000D0000
#define MDP3_REG_MISR_RESET_CLK			0x000D0004
#define MDP3_REG_EXPORT_MISR_CLK			0x000D0008
#define MDP3_REG_MISR_CURR_VAL_CLK			0x000D000C
#define MDP3_REG_MODE_HCLK				0x000D0100
#define MDP3_REG_MISR_RESET_HCLK			0x000D0104
#define MDP3_REG_EXPORT_MISR_HCLK			0x000D0108
#define MDP3_REG_MISR_CURR_VAL_HCLK			0x000D010C
#define MDP3_REG_MODE_DCLK				0x000D0200
#define MDP3_REG_MISR_RESET_DCLK			0x000D0204
#define MDP3_REG_EXPORT_MISR_DCLK			0x000D0208
#define MDP3_REG_MISR_CURR_VAL_DCLK			0x000D020C
#define MDP3_REG_CAPTURED_DCLK				0x000D0210
#define MDP3_REG_MISR_CAPT_VAL_DCLK			0x000D0214
#define MDP3_REG_MODE_TVCLK				0x000D0300
#define MDP3_REG_MISR_RESET_TVCLK			0x000D0304
#define MDP3_REG_EXPORT_MISR_TVCLK			0x000D0308
#define MDP3_REG_MISR_CURR_VAL_TVCLK			0x000D030C
#define MDP3_REG_CAPTURED_TVCLK			0x000D0310
#define MDP3_REG_MISR_CAPT_VAL_TVCLK			0x000D0314

/* Select DSI operation type(CMD/VIDEO) */
#define MDP3_REG_MODE_DSI_PCLK				0x000D0400
#define MDP3_REG_MODE_DSI_PCLK_BLOCK_DSI_CMD		0x10
#define MDP3_REG_MODE_DSI_PCLK_BLOCK_DSI_VIDEO1	0x20
#define MDP3_REG_MODE_DSI_PCLK_BLOCK_DSI_VIDEO2	0x30
/* RESET DSI MISR STATE */
#define MDP3_REG_MISR_RESET_DSI_PCLK			0x000D0404

/* For reading MISR State(1) and driving data on test bus(0) */
#define MDP3_REG_EXPORT_MISR_DSI_PCLK			0x000D0408
/* Read MISR signature */
#define MDP3_REG_MISR_CURR_VAL_DSI_PCLK		0x000D040C

/* MISR status Bit0 (1) Capture Done */
#define MDP3_REG_CAPTURED_DSI_PCLK			0x000D0410
#define MDP3_REG_MISR_CAPT_VAL_DSI_PCLK		0x000D0414
#define MDP3_REG_MISR_TESTBUS_CAPT_VAL			0x000D0600

/*interface*/
#define MDP3_REG_LCDC_EN				0xE0000
#define MDP3_REG_LCDC_HSYNC_CTL				0xE0004
#define MDP3_REG_LCDC_VSYNC_PERIOD			0xE0008
#define MDP3_REG_LCDC_VSYNC_PULSE_WIDTH			0xE000C
#define MDP3_REG_LCDC_DISPLAY_HCTL			0xE0010
#define MDP3_REG_LCDC_DISPLAY_V_START			0xE0014
#define MDP3_REG_LCDC_DISPLAY_V_END			0xE0018
#define MDP3_REG_LCDC_ACTIVE_HCTL			0xE001C
#define MDP3_REG_LCDC_ACTIVE_V_START			0xE0020
#define MDP3_REG_LCDC_ACTIVE_V_END			0xE0024
#define MDP3_REG_LCDC_BORDER_COLOR			0xE0028
#define MDP3_REG_LCDC_UNDERFLOW_CTL			0xE002C
#define MDP3_REG_LCDC_HSYNC_SKEW			0xE0030
#define MDP3_REG_LCDC_TEST_CTL				0xE0034
#define MDP3_REG_LCDC_CTL_POLARITY			0xE0038
#define MDP3_REG_LCDC_TEST_COL_VAR1			0xE003C
#define MDP3_REG_LCDC_TEST_COL_VAR2			0xE0040
#define MDP3_REG_LCDC_UFLOW_HIDING_CTL			0xE0044
#define MDP3_REG_LCDC_LOST_PIXEL_CNT_VALUE		0xE0048

#define MDP3_REG_DSI_VIDEO_EN				0xF0000
#define MDP3_REG_DSI_VIDEO_HSYNC_CTL			0xF0004
#define MDP3_REG_DSI_VIDEO_VSYNC_PERIOD			0xF0008
#define MDP3_REG_DSI_VIDEO_VSYNC_PULSE_WIDTH		0xF000C
#define MDP3_REG_DSI_VIDEO_DISPLAY_HCTL			0xF0010
#define MDP3_REG_DSI_VIDEO_DISPLAY_V_START		0xF0014
#define MDP3_REG_DSI_VIDEO_DISPLAY_V_END		0xF0018
#define MDP3_REG_DSI_VIDEO_ACTIVE_HCTL			0xF001C
#define MDP3_REG_DSI_VIDEO_ACTIVE_V_START		0xF0020
#define MDP3_REG_DSI_VIDEO_ACTIVE_V_END			0xF0024
#define MDP3_REG_DSI_VIDEO_BORDER_COLOR			0xF0028
#define MDP3_REG_DSI_VIDEO_UNDERFLOW_CTL		0xF002C
#define MDP3_REG_DSI_VIDEO_HSYNC_SKEW			0xF0030
#define MDP3_REG_DSI_VIDEO_TEST_CTL			0xF0034
#define MDP3_REG_DSI_VIDEO_CTL_POLARITY			0xF0038
#define MDP3_REG_DSI_VIDEO_TEST_COL_VAR1		0xF003C
#define MDP3_REG_DSI_VIDEO_TEST_COL_VAR2		0xF0040
#define MDP3_REG_DSI_VIDEO_UFLOW_HIDING_CTL		0xF0044
#define MDP3_REG_DSI_VIDEO_LOST_PIXEL_CNT_VALUE		0xF0048

#define MDP3_REG_DSI_CMD_MODE_ID_MAP			0xF1000
#define MDP3_REG_DSI_CMD_MODE_TRIGGER_EN		0xF1004

#define MDP3_PPP_CSC_PFMVn(n)		(0x40400 + (4 * (n)))
#define MDP3_PPP_CSC_PRMVn(n)		(0x40440 + (4 * (n)))
#define MDP3_PPP_CSC_PBVn(n)		(0x40500 + (4 * (n)))
#define MDP3_PPP_CSC_PLVn(n)		(0x40580 + (4 * (n)))

#define MDP3_PPP_CSC_SFMVn(n)		(0x40480 + (4 * (n)))
#define MDP3_PPP_CSC_SRMVn(n)		(0x404C0 + (4 * (n)))
#define MDP3_PPP_CSC_SBVn(n)		(0x40540 + (4 * (n)))
#define MDP3_PPP_CSC_SLVn(n)		(0x405C0 + (4 * (n)))

#define MDP3_PPP_SCALE_PHASEX_INIT	0x1013C
#define MDP3_PPP_SCALE_PHASEY_INIT	0x10140
#define MDP3_PPP_SCALE_PHASEX_STEP	0x10144
#define MDP3_PPP_SCALE_PHASEY_STEP	0x10148

#define MDP3_PPP_OP_MODE			0x10138

#define MDP3_PPP_PRE_LUT			0x40800
#define MDP3_PPP_POST_LUT			0x40C00
#define MDP3_PPP_LUTn(n)			((4 * (n)))

#define MDP3_PPP_BG_EDGE_REP		0x101BC
#define MDP3_PPP_SRC_EDGE_REP		0x101B8

#define MDP3_PPP_STRIDE_MASK		0x3FFF
#define MDP3_PPP_STRIDE1_OFFSET		16

#define MDP3_PPP_XY_MASK			0x0FFF
#define MDP3_PPP_XY_OFFSET			16

#define MDP3_PPP_SRC_SIZE			0x10108
#define MDP3_PPP_SRCP0_ADDR			0x1010C
#define MDP3_PPP_SRCP1_ADDR			0x10110
#define MDP3_PPP_SRCP3_ADDR			0x10118
#define MDP3_PPP_SRC_YSTRIDE1_ADDR	0x1011C
#define MDP3_PPP_SRC_YSTRIDE2_ADDR	0x10120
#define MDP3_PPP_SRC_FORMAT			0x10124
#define MDP3_PPP_SRC_UNPACK_PATTERN1	0x10128
#define MDP3_PPP_SRC_UNPACK_PATTERN2	0x1012C

#define MDP3_PPP_OUT_FORMAT			0x10150
#define MDP3_PPP_OUT_PACK_PATTERN1	0x10154
#define MDP3_PPP_OUT_PACK_PATTERN2	0x10158
#define MDP3_PPP_OUT_SIZE			0x10164
#define MDP3_PPP_OUTP0_ADDR			0x10168
#define MDP3_PPP_OUTP1_ADDR			0x1016C
#define MDP3_PPP_OUTP3_ADDR			0x10174
#define MDP3_PPP_OUT_YSTRIDE1_ADDR	0x10178
#define MDP3_PPP_OUT_YSTRIDE2_ADDR	0x1017C
#define MDP3_PPP_OUT_XY				0x1019C

#define MDP3_PPP_BGP0_ADDR			0x101C0
#define MDP3_PPP_BGP1_ADDR			0x101C4
#define MDP3_PPP_BGP3_ADDR			0x101C8
#define MDP3_PPP_BG_YSTRIDE1_ADDR	0x101CC
#define MDP3_PPP_BG_YSTRIDE2_ADDR	0x101D0
#define MDP3_PPP_BG_FORMAT			0x101D4
#define MDP3_PPP_BG_UNPACK_PATTERN1	0x101D8
#define MDP3_PPP_BG_UNPACK_PATTERN2	0x101DC

#define MDP3_TFETCH_SOLID_FILL		0x20004
#define MDP3_TFETCH_FILL_COLOR		0x20040

#define MDP3_PPP_BLEND_PARAM		0x1014C

#define MDP3_PPP_BLEND_BG_ALPHA_SEL	0x70010

#define MDP3_PPP_ACTIVE BIT(0)

/*interrupt mask*/

#define MDP3_INTR_DP0_ROI_DONE_BIT			BIT(0)
#define MDP3_INTR_DP1_ROI_DONE_BIT			BIT(1)
#define MDP3_INTR_DMA_S_DONE_BIT			BIT(2)
#define MDP3_INTR_DMA_E_DONE_BIT			BIT(3)
#define MDP3_INTR_DP0_TERMINAL_FRAME_DONE_BIT		BIT(4)
#define MDP3_INTR_DP1_TERMINAL_FRAME_DONE_BIT		BIT(5)
#define MDP3_INTR_DMA_TV_DONE_BIT			BIT(6)
#define MDP3_INTR_TV_ENCODER_UNDER_RUN_BIT		BIT(7)
#define MDP3_INTR_SYNC_PRIMARY_LINE_BIT			BIT(8)
#define MDP3_INTR_SYNC_SECONDARY_LINE_BIT		BIT(9)
#define MDP3_INTR_SYNC_EXTERNAL_LINE_BIT		BIT(10)
#define MDP3_INTR_DP0_FETCH_DONE_BIT			BIT(11)
#define MDP3_INTR_DP1_FETCH_DONE_BIT			BIT(12)
#define MDP3_INTR_TV_OUT_FRAME_START_BIT		BIT(13)
#define MDP3_INTR_DMA_P_DONE_BIT			BIT(14)
#define MDP3_INTR_LCDC_START_OF_FRAME_BIT		BIT(15)
#define MDP3_INTR_LCDC_UNDERFLOW_BIT			BIT(16)
#define MDP3_INTR_DMA_P_LINE_BIT			BIT(17)
#define MDP3_INTR_DMA_S_LINE_BIT			BIT(18)
#define MDP3_INTR_DMA_E_LINE_BIT			BIT(19)
#define MDP3_INTR_DMA_P_HISTO_BIT			BIT(20)
#define MDP3_INTR_DTV_OUT_DONE_BIT			BIT(21)
#define MDP3_INTR_DTV_OUT_START_OF_FRAME_BIT		BIT(22)
#define MDP3_INTR_DTV_OUT_UNDERFLOW_BIT			BIT(23)
#define MDP3_INTR_DTV_OUT_LINE_BIT			BIT(24)
#define MDP3_INTR_DMA_P_AUTO_FREFRESH_START_BIT		BIT(25)
#define MDP3_INTR_DMA_S_AUTO_FREFRESH_START_BIT		BIT(26)
#define MDP3_INTR_QPIC_EOF_ENABLE_BIT			BIT(27)

enum {
	MDP3_INTR_DP0_ROI_DONE,
	MDP3_INTR_DP1_ROI_DONE,
	MDP3_INTR_DMA_S_DONE,
	MDP3_INTR_DMA_E_DONE,
	MDP3_INTR_DP0_TERMINAL_FRAME_DONE,
	MDP3_INTR_DP1_TERMINAL_FRAME_DONE,
	MDP3_INTR_DMA_TV_DONE,
	MDP3_INTR_TV_ENCODER_UNDER_RUN,
	MDP3_INTR_SYNC_PRIMARY_LINE,
	MDP3_INTR_SYNC_SECONDARY_LINE,
	MDP3_INTR_SYNC_EXTERNAL_LINE,
	MDP3_INTR_DP0_FETCH_DONE,
	MDP3_INTR_DP1_FETCH_DONE,
	MDP3_INTR_TV_OUT_FRAME_START,
	MDP3_INTR_DMA_P_DONE,
	MDP3_INTR_LCDC_START_OF_FRAME,
	MDP3_INTR_LCDC_UNDERFLOW,
	MDP3_INTR_DMA_P_LINE,
	MDP3_INTR_DMA_S_LINE,
	MDP3_INTR_DMA_E_LINE,
	MDP3_INTR_DMA_P_HISTO,
	MDP3_INTR_DTV_OUT_DONE,
	MDP3_INTR_DTV_OUT_START_OF_FRAME,
	MDP3_INTR_DTV_OUT_UNDERFLOW,
	MDP3_INTR_DTV_OUT_LINE,
	MDP3_INTR_DMA_P_AUTO_FREFRESH_START,
	MDP3_INTR_DMA_S_AUTO_FREFRESH_START,
	MDP3_INTR_QPIC_EOF_ENABLE,
};

#define MDP3_DMA_P_HIST_INTR_RESET_DONE_BIT		BIT(0)
#define MDP3_DMA_P_HIST_INTR_HIST_DONE_BIT		BIT(1)
#define MDP3_PPP_DONE MDP3_INTR_DP0_ROI_DONE

#define MDP3_DMA_P_BUSY_BIT				BIT(6)

#endif /* MDP3_HWIO_H */
