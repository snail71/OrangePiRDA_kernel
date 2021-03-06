	#define Y_ANA_OFFSET 		0x608
	#define Y_LMT_OFFSET 		0x60C
	#define Y_CTRL_MISC 		0x610

	#define AE_CTRL2 		0x614
	#define AE_CTRL3 		0x618
	#define AE_CTRL4 		0x61C
	#define AE_EXP_OFFSET_H 	0x620
	#define G3_EXP_POFST 		0x624
	#define G3_EXP_NOFST 		0x628
	#define AE_XGAP1 		0x62C
	#define AE_XGAP2 		0x630
	#define AE_YGAP1 		0x634
	#define AE_YGAP2 		0x638
	#define AE_HIST_TOPLEFT 	0x63C
	#define AE_DK_HIST_THR 		0x640
	#define AE_BR_HIST_THR 		0x644
	#define IMAGE_EFF 		0x648
	#define LUMA_OFFSET 		0x64C
	#define SEPIA_CR 		0x650
	#define SEPIA_CB 		0x654
	#define CSUP_Y_MIN_H 		0x658
	#define CSUP_GAIN_H 		0x65C
	#define CSUP_Y_MAX_L 		0x660
	#define CSUP_GAIN_L 		0x664
	#define AE_DRC_GAIN_IN 		0x668
	#define AE_DARK_HIST 		0x66C
	#define AE_BRIGHT_HIST 		0x670
	#define YWAVE_OUT 		0x674
	#define YAVE_OUT 		0x678
	#define EXP_OUT 		0x67C
	#define GAIN_EXP_OUT 		0x680
	#define AWB_DEBUG_OUT 		0x684
	#define AE_DRC_GAIN 		0x688
	#define R_AWB_GAIN 		0x68C
	#define B_AWB_GAIN 		0x690
	#define AWB_R_PEDEST 		0x694
	#define AWB_G_PEDEST 		0x698
	#define AWB_B_PEDEST 		0x69C

	#define LSC_CTRL 		0x6A0
	#define LSC_X_CENT 		0x6A4
	#define LSC_Y_CENT 		0x6A8
	#define BLC_CTRL 		0x6AC
	#define BLC_INIT 		0x6B0
	#define BLC_OFFSET 		0x6B4
	#define BLC_THR 		0x6B8
	#define DRC_CLAMP_CTRL 		0x6BC
	#define DRC_R_CLP_VALUE 	0x6C0
	#define DRC_GR_CLP_VALUE 	0x6C4
	#define DRC_GB_CLP_VALUE 	0x6C8
	#define DRC_B_CLP_VALUE 	0x6CC

	#define GAMMA_CTRL 		0x6D0
	#define BAYER_GAMMA_B0 		0x6D4
	#define BAYER_GAMMA_B1 		0x6D8
	#define BAYER_GAMMA_B2 		0x6DC
	#define BAYER_GAMMA_B3 		0x6E0
	#define BAYER_GAMMA_B4 		0x6E4
	#define BAYER_GAMMA_B5 		0x6E8
	#define BAYER_GAMMA_B6 		0x6EC
	#define BAYER_GAMMA_B8 		0x6F0
	#define BAYER_GAMMA_B10 	0x6F4
	#define BAYER_GAMMA_B12 	0x6F8
	#define BAYER_GAMMA_B14 	0x6FC
	#define BAYER_GAMMA_B16 	0x700
	#define BAYER_GAMMA_B18 	0x704
	#define BAYER_GAMMA_B20 	0x708
	#define BAYER_GAMMA_B24 	0x70C
	#define BAYER_GAMMA_B28 	0x710
	#define BAYER_GAMMA_B32 	0x714
	#define LSC_P2_UP_R 		0x718
	#define LSC_P2_UP_G 		0x71C
	#define LSC_P2_UP_B 		0x720
	#define LSC_P2_DOWN_R 		0x724
	#define LSC_P2_DOWN_G 		0x728
	#define LSC_P2_DOWN_B 		0x72C
	#define LSC_P2_LEFT_R 		0x730
	#define LSC_P2_LEFT_G 		0x734
	#define LSC_P2_LEFT_B 		0x738
	#define LSC_P2_RIGHT_R 		0x73C
	#define LSC_P2_RIGHT_G 		0x740
	#define LSC_P2_RIGHT_B 		0x744
	#define LSC_P4_Q1 		0x748
	#define LSC_P4_Q2 		0x74C
	#define LSC_P4_Q3 		0x750
	#define LSC_P4_Q4 		0x754
	#define BLC_OUT0 		0x758
	#define BLC_OUT1 		0x75C
	#define DPC_CTRL0 		0x760
	#define DPC_CTRL1 		0x764
	#define DPC_DEAD_THR 		0x768
	#define DPC_HOT_THR 		0x76C
	#define DPC_LUM_THR 		0x770
	#define DPC_NUM_DEFECT 		0x774
	#define DPC_Y_THR_DATA 		0x778
	#define DPC_AU1 		0x77C
	#define DPC_AU2 		0x780
	#define DPC_AU3 		0x784
	#define DPC_INT_THR 		0x788
	#define DPC_NRF_THR1 		0x78C
	#define DPC_NRF_THR2 		0x790
	#define DPC_NRF_WEI_HI 		0x794
	#define DPC_NRF_WEI_MID 	0x798
	#define DPC_NRF_WEI_LOW 	0x79C
	#define DPC_NR_LF_STR 		0x7A0
	#define DPC_NR_HF_STR 		0x7A4
	#define DPC_NR_AREA_THR 	0x7A8
	#define INTP_CTRL 		0x7AC
	#define INTP_CFA_H_THR 		0x7B0
	#define INTP_CFA_V_THR 		0x7B4
	#define INTP_GRGB_SEL_LMT 	0x7B8
	#define INTP_GF_LMT_THR 	0x7BC
	#define CC_R_OFFSET 		0x7C0
	#define CC_G_OFFSET 		0x7C4
	#define CC_B_OFFSET 		0x7C8
	#define CC_00 			0x7CC
	#define CC_01 			0x7D0
	#define CC_02 			0x7D4
	#define CC_10 			0x7D8
	#define CC_11 			0x7DC
	#define CC_12 			0x7E0
	#define CC_20 			0x7E4
	#define CC_21 			0x7E8
	#define CC_22 			0x7EC
	#define INTP_CFA_HV 		0x7F0
	#define AE_VDARK_HIST 		0x7F4
	#define AE_VBRIGHT_HIST 	0x7F8
	#define Y_THR7 			0x7FC

	#define EE_CTRL 		0x608
	#define EE_HL_THR 		0x60C
	#define EE_LL_THR 		0x610
	#define EE_EDGE_GAIN 		0x614
	#define EE_H_LF_STR 		0x618
	#define EE_H_AREA_THR 		0x61C
	#define EE_L_LF_STR 		0x620
	#define EE_L_AREA_THR 		0x624
	#define EE_H_MINUS_STR 		0x628
	#define EE_H_PLUS_STR 		0x62C
	#define EE_M_MINUS_STR 		0x630
	#define EE_M_PLUS_STR 		0x634
	#define EE_L_MINUS_STR 		0x638
	#define EE_L_PLUS_STR 		0x63C
	#define EE_B0 			0x640
	#define EE_B1 			0x644
	#define EE_B2 			0x648
	#define EE_B3 			0x64C
	#define EE_B4 			0x650
	#define EE_B5 			0x654
	#define EE_B6 			0x658
	#define EE_B7 			0x65C
	#define EE_B8 			0x660
	#define EE_B9 			0x664
	#define EE_B10 			0x668
	#define EE_B11 			0x66C
	#define EE_B12 			0x670
	#define EE_B13 			0x674
	#define EE_B14 			0x678
	#define EE_B15 			0x67C
	#define EE_B16 			0x680
	#define EE_INT_Y_THR 		0x684

	#define YCNR_CTRL 		0x688
	#define CNR_2ST_STR 		0x68C
	#define YNR_LL_AREA_THR 	0x690
	#define YNR_LL_HF_STR 		0x694
	#define YNR_LL_LF_STR 		0x698
	#define YNR_LL_LF_METHOD_STR 	0x69C
	#define YNR_HL_AREA_THR 	0x6A0
	#define YNR_HL_HF_STR 		0x6A4
	#define YNR_HL_LF_STR 		0x6A8
	#define YNR_HL_LF_METHOD_STR 	0x6AC
	#define YNR_1ST_LL_THR 		0x6B0
	#define YNR_1ST_HL_THR 		0x6B4
	#define YNR_2ND_AREA_THR 	0x6B8
	#define YNR_2ND_HF_STR 		0x6BC
	#define YNR_2ND_LF_STR 		0x6C0
	#define YNR_2ND_LF_METHOD_STR 	0x6C4
	#define YNR_2ND_HF_METHOD_STR 	0x6C8

	#define RGB_GAMMA_B0 		0x6CC
	#define RGB_GAMMA_B1 		0x6D0
	#define RGB_GAMMA_B2 		0x6D4
	#define RGB_GAMMA_B3 		0x6D8
	#define RGB_GAMMA_B4 		0x6DC
	#define RGB_GAMMA_B6 		0x6E0
	#define RGB_GAMMA_B8 		0x6E4
	#define RGB_GAMMA_B10 		0x6E8
	#define RGB_GAMMA_B12 		0x6EC
	#define RGB_GAMMA_B16 		0x6F0
	#define RGB_GAMMA_B20 		0x6F4
	#define RGB_GAMMA_B24 		0x6F8
	#define RGB_GAMMA_B28 		0x6FC
	#define RGB_GAMMA_B32 		0x700
	#define RGB_GAMMA_B40 		0x704
	#define RGB_GAMMA_B48 		0x708
	#define RGB_GAMMA_B56 		0x70C
	#define RGB_GAMMA_B64 		0x710
	#define RGB_GAMMA_B80 		0x714
	#define RGB_GAMMA_B96 		0x718
	#define RGB_GAMMA_B112 		0x71C
	#define RGB_GAMMA_B128 		0x720

	#define CONST_REG 		0x724
	#define SATUR_REG 		0x728
	#define CONST_SATUR_OFF 	0x72C
	#define EXP_CHG_0 		0x730
	#define EXP_CHG_1 		0x734
	#define HIST_DP_LEVEL 		0x738
	#define HIST_BP_LEVEL 		0x73C
	#define HIST_DP_NUM 		0x740
	#define HIST_BP_NUM 		0x744
	#define HIST_VDP_LEVEL 		0x748
	#define HIST_VBP_LEVEL 		0x74C
	#define HIST_VDP_NUM 		0x750
	#define HIST_VBP_NUM 		0x754
	#define EE_INT_CTRL 		0x758
	#define YNR_INT_Y_THR 		0x75C
	#define YNR_INT_CTRL 		0x760
	#define EXP_CTRL 		0x764
	#define CNR_1D_CTRL 		0x768
	#define CNR_1D_STR 		0x76C
	#define CHECK_G_DIFF 		0x770
	#define CC_R_OFFSET 		0x774
	#define CC_G_OFFSET 		0x778
	#define CC_B_OFFSET 		0x77C
	#define G0_EXP_LOW 		0x780
	#define G0_EXP_HIGH 		0x784
	#define G0_EXP_HIGH_LOW 	0x788
	#define G1_EXP_LOW 		0x78C
	#define G1_EXP_HIGH 		0x790
	#define G1_EXP_HIGH_LOW 	0x794
	#define G2_EXP_LOW 		0x798
	#define G2_EXP_HIGH 		0x79C
	#define G2_EXP_HIGH_LOW 	0x7A0
	#define G3_EXP_LOW 		0x7A4
	#define G3_EXP_HIGH 		0x7A8
	#define G3_EXP_HIGH_LOW 	0x7AC
	#define G4_EXP_LOW 		0x7B0
	#define G4_EXP_HIGH 		0x7B4
	#define G4_EXP_HIGH_LOW 	0x7B8
	#define G1_EXP_INIT_M1 		0x7BC
	#define G1_EXP_INIT_P1 		0x7C0
	#define G1_EXP_INIT 		0x7C4
	#define G2_EXP_INIT_M1 		0x7C8
	#define G2_EXP_INIT_P1 		0x7CC
	#define G2_EXP_INIT 		0x7D0
	#define G3_EXP_INIT_M1 		0x7D4
	#define G3_EXP_INIT_P1 		0x7D8
	#define G3_EXP_INIT 		0x7DC
	#define G0_EXP_INIT_M1 		0x7E0
	#define G4_EXP_INIT_P1 		0x7E4
	#define G04_EXP_INIT 		0x7E8
	#define SHAPE_DIFF_THR 		0x7EC
	#define CHECK_ROUND_DIFF 	0x7F0
	#define Y_THR6_REG 		0x7F4
	#define AE_CTRL_5 		0x7F8
	#define RESERVE 		0x7FC

	#define ISP_SOFT_RST 		0x400
	#define ISP_PAGE 		0x438
	#define ISP_SUB_MODE 		0x474
	#define ISP_CTRL0 		0x51C
	#define ISP_CTRL1 		0x520
	#define ISP_CTRL2 		0x524

	#define TOP_DUMMY_REG0 		0x528
	#define LEFT_DUMMY_REG0 	0x52C
	#define LINE_NUM_1_REG0 	0x530
	#define PIX_NUM_1_REG0 		0x534
	#define LINE_PIX_H_REG0 	0x538
	#define V_DUMMY_REG0 		0x53C

	#define TOP_DUMMY_REG1 		0x540
	#define LEFT_DUMMY_REG1 	0x544
	#define LINE_NUM_1_REG1 	0x548
	#define PIX_NUM_1_REG1 		0x54C
	#define LINE_PIX_H_REG1 	0x550
	#define V_DUMMY_REG1 		0x554

	#define SCG_REG 		0x558
	#define Y_GAMMA_B0_REG 		0x55C
	#define Y_GAMMA_B1_REG 		0x560
	#define Y_GAMMA_B2_REG 		0x564
	#define Y_GAMMA_B4_REG 		0x568
	#define Y_GAMMA_B6_REG 		0x56C
	#define Y_GAMMA_B8_REG 		0x570
	#define Y_GAMMA_B10_REG 	0x574
	#define Y_GAMMA_B12_REG 	0x578
	#define Y_GAMMA_B16_REG 	0x57C
	#define Y_GAMMA_B20_REG 	0x580
	#define Y_GAMMA_B24_REG 	0x584
	#define Y_GAMMA_B28_REG 	0x588
	#define Y_GAMMA_B32_REG 	0x58C

	#define R_AWB_GAIN_IN_REG 	0x590
	#define G_AWB_GAIN_IN_REG 	0x594
	#define B_AWB_GAIN_IN_REG 	0x598
	#define R_DRC_GAIN_IN_REG 	0x59C
	#define GR_DRC_GAIN_IN_REG 	0x5A0
	#define GB_DRC_GAIN_IN_REG 	0x5A4
	#define B_DRC_GAIN_IN_REG 	0x5A8

	#define AE_CTRL_REG 		0x5AC
	#define AE_ANA_GAIN_H_L_REG 	0x5B0
	#define AE_LCNT_TOP_REG 	0x5B4
	#define AE_PCNT_TOP_REG 	0x5B8
	#define AE_EXP_LOW_REG 		0x5BC
	#define AE_EXP_HIGH_REG 	0x5C0
	#define AE_EXP_HIGH_LOW_REG 	0x5C4
	#define AE_EXP_INIT_REG 	0x5C8
	#define AE_EXP_CEIL_REG 	0x5CC
	#define AE_EXP_CEIL_INIT_REG 	0x5D0
	#define AE_EXP_POFFSET_L 	0x5D4
	#define AE_EXP_NOFFSET_L 	0x5D8

	#define AWB_CTRL_REG 		0x5DC
	#define AWB_DRC_REG 		0x5E0
	#define AWB_STOP_REG 		0x5E4
	#define AE_EXP_BTHR_REG 	0x5E8
	#define AWB_ALGO_REG 		0x5EC
	#define AWB_DRC_GAIN_H_REG 	0x5F0
	#define AWB_DRC_GAIN_L_REG 	0x5F4
	#define AWB_GAIN_H_REG 		0x5F8
	#define AWB_GAIN_L_REG 		0x5FC

	#define Y_AVE_TARGET_REG 	0x600
	#define Y_DRC_OFFSET_REG 	0x604

