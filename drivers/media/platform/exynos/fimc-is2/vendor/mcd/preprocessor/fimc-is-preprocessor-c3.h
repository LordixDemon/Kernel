/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2016 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef FIMC_IS_C73C3_H
#define FIMC_IS_C73C3_H

#define COMPANION_AF_CRC_POLYNOMIAL (0xEDB88320)
#define CRC_TABLE_SIZE		256

#define UNIT88			(1 << 8)
#define UNIT_PERMILLE		(1000)
#define GAIN_PERMILLE_TO_UNIT88(perm)	(((perm)*UNIT88 + (UNIT_PERMILLE/2))/UNIT_PERMILLE)

#define MAX_PDAF_STATS_SIZE 		(2336+8)
#define MIN_PDAF_STATS_SIZE 		(8)

#define C73C3_WAITING_TIME_CAL_DATA_CRC 5
#define C73C3_NUM_OF_DBG_SYS_REG 33

enum {
	//ERROR_SENSOR_NO				= 0,
	//ERROR_SENSOR_I2C_FAIL			= -EIO,
	ERROR_SENSOR_INVALID_SETTING		= -EINVAL,
	//ERROR_SENSOR_UNSUPPORT_PERI		= -ENODEV,
	ERROR_SENSOR_SETTING_TIME_OUT		= -ETIMEDOUT,
};

typedef enum
{
    C73C3_S5K2P2_CONFIG_5328X3000_30 = 0,
    C73C3_S5K2P2_CONFIG_5328X3000_24 = 1,
    C73C3_S5K2P2_CONFIG_4000X3000_30 = 2,
    C73C3_S5K2P2_CONFIG_4000X3000_24 = 3,
    C73C3_S5K2P2_CONFIG_3008X3000_30 = 4,
    C73C3_S5K2P2_CONFIG_3008X3000_24 = 5,
    C73C3_S5K2P2_CONFIG_2664X1500_60 = 6,
    C73C3_S5K2P2_CONFIG_1328X748_120 = 7,
    C73C3_S5K2P2_CONFIG_824X496_300  = 8,
    C73C3_S5K2P2_CONFIG_5328X3000_30_CLK_24MHz_MIPI_1296MHz = 9,
    C73C3_S5K2P2_CONFIG_2664X1500_30 = 10,
    C73C3_S5K2P2_CONFIG_824X496_240  = 11,
    TOTALCOUNT_C73C3_S5K2P2_CONFIG
}IS_C73C3_S5K2P2_ConfigEnum;

typedef enum
{
    C73C3_S5K2T2_CONFIG_5968X3368_30 = 0,
    C73C3_S5K2T2_CONFIG_5968X3368_24 = 1,
    C73C3_S5K2T2_CONFIG_4480X3368_30 = 2,
    C73C3_S5K2T2_CONFIG_4480X3368_24 = 3,
    C73C3_S5K2T2_CONFIG_3360X3368_30 = 4,
    C73C3_S5K2T2_CONFIG_3360X3368_24 = 5,
    C73C3_S5K2T2_CONFIG_2984X1680_60 = 6,
    C73C3_S5K2T2_CONFIG_2984X1680_30 = 7,
    C73C3_S5K2T2_CONFIG_1480X832_120 = 8,
    C73C3_S5K2T2_CONFIG_1480X832_240 = 9,
    C73C3_S5K2T2_CONFIG_924X556_300  = 10,
    TOTALCOUNT_C73C3_S5K2T2_CONFIG
}IS_C73C3_S5K2T2_ConfigEnum;

typedef enum
{
    C73C3_S5K2L2_CONFIG_8064x3024_30  = 0,
    C73C3_S5K2L2_CONFIG_8064x2268_30  = 1,
    C73C3_S5K2L2_CONFIG_6048X3024_30  = 2,
    C73C3_S5K2L2_CONFIG_4032X2268_60  = 3,
    C73C3_S5K2L2_CONFIG_2016X1134_120 = 4,
    C73C3_S5K2L2_CONFIG_2016X1134_30  = 5,
    C73C3_S5K2L2_CONFIG_2016X1134_240 = 6,
    C73C3_S5K2L2_CONFIG_2016X1512_30  = 7,
    C73C3_S5K2L2_CONFIG_1504X1504_30  = 8,
    C73C3_S5K2L2_CONFIG_1008X756_120  = 9,
    TOTALCOUNT_C73C3_S5K2L2_CONFIG
}IS_C73C3_S5K2L2_ConfigEnum;

typedef enum
{
    C73C3_S5K2L1_CONFIG_8064x3024_30  = 0,
    C73C3_S5K2L1_CONFIG_8064x2268_30  = 1,
    C73C3_S5K2L1_CONFIG_6048X3024_30  = 2,
    C73C3_S5K2L1_CONFIG_4032X2268_60  = 3,
    C73C3_S5K2L1_CONFIG_2016X1134_120 = 4,
    C73C3_S5K2L1_CONFIG_2016X1134_30  = 5,
    C73C3_S5K2L1_CONFIG_2016X1134_240 = 6,
    C73C3_S5K2L1_CONFIG_2016X1512_30  = 7,
    C73C3_S5K2L1_CONFIG_1504X1504_30  = 8,
    C73C3_S5K2L1_CONFIG_1008X756_120  = 9,
    TOTALCOUNT_C73C3_S5K2L1_CONFIG
}IS_C73C3_S5K2L1_ConfigEnum;

typedef enum
{
	C73C3_S5K3H1_CONFIG_3264X2448_30 = 11,
	C73C3_S5K3H1_CONFIG_3264X1836_30 = 12,
	C73C3_S5K3H1_CONFIG_2448X2448_30 = 13,
	C73C3_S5K3H1_CONFIG_1632X918_60 = 14,
	C73C3_S5K3H1_CONFIG_1632X918_30 = 15,
	C73C3_S5K3H1_CONFIG_1632X1224_30 = 16,
	C73C3_S5K3H1_CONFIG_1224X1224_30 = 17,
	C73C3_S5K3H1_CONFIG_800X600_120 = 18,
	TOTALCOUNT_C73C3_S5K3H1_CONFIG
}IS_C73C3_S5K3H1_ConfigEnum;

typedef enum
{
    C73C3_S5K4E6_CONFIG_2608X1960_30 = 11,
    C73C3_S5K4E6_CONFIG_652X448_112  = 12,
    TOTALCOUNT_C73C3_S5K4E6_CONFIG
}IS_C73C3_S5K4E6_ConfigEnum;

typedef enum
{
	C73C3_IMX320_CONFIG_3264X2448_30 = 11,
	C73C3_IMX320_CONFIG_3264X1836_30 = 12,
	C73C3_IMX320_CONFIG_2448X2448_30 = 13,
	C73C3_IMX320_CONFIG_1632X918_60 = 14,
	C73C3_IMX320_CONFIG_1632X918_30 = 15,
	C73C3_IMX320_CONFIG_1632X1224_30 = 16,
	C73C3_IMX320_CONFIG_1224X1224_30 = 17,
	C73C3_IMX320_CONFIG_800X600_120 = 18,
	TOTALCOUNT_C73C3_IMX320_CONFIG
}IS_C73C3_IMX320_ConfigEnum;

typedef enum
{
    C73C3_IMX240_CONFIG_5328X3000_30 = 0,
    C73C3_IMX240_CONFIG_5328X3000_24 = 1,
    C73C3_IMX240_CONFIG_4000X3000_30 = 2,
    C73C3_IMX240_CONFIG_4000X3000_24 = 3,
    C73C3_IMX240_CONFIG_3008X3000_30 = 4,
    C73C3_IMX240_CONFIG_3008X3000_24 = 5,
    C73C3_IMX240_CONFIG_2664X1500_60 = 6,
    C73C3_IMX240_CONFIG_2664X1500_30 = 7,
    C73C3_IMX240_CONFIG_1328X748_120 = 8,
    TOTALCOUNT_C73C3_IMX240_CONFIG
}IS_C73C3_IMX240_ConfigEnum;

typedef enum
{
    C73C3_IMX228_CONFIG_5968X3368_30 = 0,
    C73C3_IMX228_CONFIG_5968X3368_24 = 1,
    C73C3_IMX228_CONFIG_4480X3368_30 = 2,
    C73C3_IMX228_CONFIG_4480X3368_24 = 3,
    C73C3_IMX228_CONFIG_3360X3368_30 = 4,
    C73C3_IMX228_CONFIG_3360X3368_24 = 5,
    C73C3_IMX228_CONFIG_2984X1680_60 = 6,
    C73C3_IMX228_CONFIG_2984X1680_30 = 7,
    C73C3_IMX228_CONFIG_1480X832_120 = 8,
    C73C3_IMX228_CONFIG_1480X832_240 = 9,
    C73C3_IMX228_CONFIG_924X556_300  = 10,
    C73C3_IMX228_CONFIG_5968X1680_60 = 11,
    TOTALCOUNT_C73C3_IMX228_CONFIG
}IS_C73C3_IMX228_ConfigEnum;

typedef enum
{
    C73C3_IMX260_CONFIG_8064x3024_30  = 0,
    C73C3_IMX260_CONFIG_8064x2268_30  = 1,
    C73C3_IMX260_CONFIG_6048X3024_30  = 2,
    C73C3_IMX260_CONFIG_4032X2268_60  = 3,
    C73C3_IMX260_CONFIG_2016X1134_120 = 4,
    C73C3_IMX260_CONFIG_2016X1134_30  = 5,
    C73C3_IMX260_CONFIG_2016X1134_240 = 6,
    C73C3_IMX260_CONFIG_2016X1512_30  = 7,
    C73C3_IMX260_CONFIG_1504X1504_30  = 8,
    C73C3_IMX260_CONFIG_1008X756_120  = 9,
    TOTALCOUNT_C73C3_IMX260_CONFIG
}IS_C73C3_IMX260_ConfigEnum;

typedef enum
{
    C73C3_IMX333_CONFIG_8064x3024_30  = 0,
    C73C3_IMX333_CONFIG_8064x2268_30  = 1,
    C73C3_IMX333_CONFIG_6048X3024_30  = 2,
    C73C3_IMX333_CONFIG_4032X2268_60  = 3,
    C73C3_IMX333_CONFIG_2016X1134_120 = 4,
    C73C3_IMX333_CONFIG_2016X1134_30  = 5,
    C73C3_IMX333_CONFIG_2016X1134_240 = 6,
    C73C3_IMX333_CONFIG_2016X1512_30  = 7,
    C73C3_IMX333_CONFIG_1504X1504_30  = 8,
    C73C3_IMX333_CONFIG_1008X756_120  = 9,
    TOTALCOUNT_C73C3_IMX333_CONFIG
}IS_C73C3_IMX333_ConfigEnum;

enum {
	COMP_CMD_INIT = 0,
	COMP_CMD_SET_SIZE,
	COMP_CMD_STREAM_ON,
	COMP_CMD_STREAM_OFF,
	COMP_CMD_MODE_CHANGE,
	COMP_CMD_LSC_SET_3AA_INFO,
	COMP_CMD_WDR_SET_AE_INFO,
	COMP_CMD_AF_INFO,
	COMP_CMD_BLOCK_ON_OFF,
	COMP_CMD_MOTION_SET_INFO,
	COMP_CMD_DRC_SET_INFO,
	COMP_CMD_IR_SET_INFO,
	COMP_CMD_ROI_SET_INFO,
	COMP_CMD_BYPASS_SET_INFO,
	COMP_CMD_POWER_MODE,
	COMP_CMD_CHANGE_CONFIG,
	COMP_CMD_READ_SYS_REG,
	COMP_CMD_READ_USER_REG,
	COMP_CMD_READ_AF_REG,
	COMP_CMD_READ_AF_STAT_FROM_SPI,
	COMP_CMD_LEMODE_SET_INFO,
	COMP_CMD_SEAMLESSMODE_SET_INFO,
	COMP_CMD_UPDATE_SUPPORT_MODE,
	COMP_CMD_DEINIT,
	COMP_CMD_HISTOGRAM_ROI_SET_INFO,
	COMP_CMD_END,
};

typedef enum _AfParameter_73C2 {
	AF_PARAMETERS_73C2_API_PAFSTAT_NUMWINDOWS,
	AF_PARAMETERS_73C2_API_PAFSTAT_WINDOWS_0__TOPLEFT_X,
	AF_PARAMETERS_73C2_API_PAFSTAT_WINDOWS_0__TOPLEFT_Y,
	AF_PARAMETERS_73C2_API_PAFSTAT_WINDOWS_0__BOTTOMRIGHT_X,
	AF_PARAMETERS_73C2_API_PAFSTAT_WINDOWS_0__BOTTOMRIGHT_Y,
	AF_PARAMETERS_73C2_API_PAFSTAT_WINDOWS_1__TOPLEFT_X,
	AF_PARAMETERS_73C2_API_PAFSTAT_WINDOWS_1__TOPLEFT_Y,
	AF_PARAMETERS_73C2_API_PAFSTAT_WINDOWS_1__BOTTOMRIGHT_X,
	AF_PARAMETERS_73C2_API_PAFSTAT_WINDOWS_1__BOTTOMRIGHT_Y,
	AF_PARAMETERS_73C2_API_PAFSTAT_WINDOWS_2__TOPLEFT_X,
	AF_PARAMETERS_73C2_API_PAFSTAT_WINDOWS_2__TOPLEFT_Y,
	AF_PARAMETERS_73C2_API_PAFSTAT_WINDOWS_2__BOTTOMRIGHT_X,
	AF_PARAMETERS_73C2_API_PAFSTAT_WINDOWS_2__BOTTOMRIGHT_Y,
	AF_PARAMETERS_73C2_API_PAFSTAT_WINDOWS_3__TOPLEFT_X,
	AF_PARAMETERS_73C2_API_PAFSTAT_WINDOWS_3__TOPLEFT_Y,
	AF_PARAMETERS_73C2_API_PAFSTAT_WINDOWS_3__BOTTOMRIGHT_X,
	AF_PARAMETERS_73C2_API_PAFSTAT_WINDOWS_3__BOTTOMRIGHT_Y,
	AF_PARAMETERS_73C2_API_PAFSTAT_WINDOWS_4__TOPLEFT_X,
	AF_PARAMETERS_73C2_API_PAFSTAT_WINDOWS_4__TOPLEFT_Y,
	AF_PARAMETERS_73C2_API_PAFSTAT_WINDOWS_4__BOTTOMRIGHT_X,
	AF_PARAMETERS_73C2_API_PAFSTAT_WINDOWS_4__BOTTOMRIGHT_Y,
	AF_PARAMETERS_73C2_API_PAFSTAT_WIN0CSIZE_WIDTH,
	AF_PARAMETERS_73C2_API_PAFSTAT_WIN0CSIZE_HEIGHT,
	AF_PARAMETERS_73C2_API_PAFSTAT_WIN0SSIZE_WIDTH,
	AF_PARAMETERS_73C2_API_PAFSTAT_WIN0SSIZE_HEIGHT,

	AF_PARAMETERS_73C2_API_PAFSTAT_MULTIWINDOWSENABLE,
	AF_PARAMETERS_73C2_API_PAFSTAT_MULTIWINDOWS_TOPLEFT_X,
	AF_PARAMETERS_73C2_API_PAFSTAT_MULTIWINDOWS_TOPLEFT_Y,
	AF_PARAMETERS_73C2_API_PAFSTAT_MULTIWINDOWS_SPAN_WIDTH,
	AF_PARAMETERS_73C2_API_PAFSTAT_MULTIWINDOWS_SPAN_HEIGHT,
	AF_PARAMETERS_73C2_API_PAFSTAT_MULTIWINDOWSGAP_X,
	AF_PARAMETERS_73C2_API_PAFSTAT_MULTIWINDOWSGAP_Y,
	AF_PARAMETERS_73C2_API_PAFSTAT_MULTIWINDOWSNUMX,
	AF_PARAMETERS_73C2_API_PAFSTAT_MULTIWINDOWSNUMY,

	AF_PARAMETERS_73C2_API_CAFSTAT_NUMWINDOWS,
	AF_PARAMETERS_73C2_API_CAFSTAT_WINDOWS_0__TOPLEFT_X,
	AF_PARAMETERS_73C2_API_CAFSTAT_WINDOWS_0__TOPLEFT_Y,
	AF_PARAMETERS_73C2_API_CAFSTAT_WINDOWS_0__BOTTOMRIGHT_X,
	AF_PARAMETERS_73C2_API_CAFSTAT_WINDOWS_0__BOTTOMRIGHT_Y,
	AF_PARAMETERS_73C2_API_CAFSTAT_WINDOWS_1__TOPLEFT_X,
	AF_PARAMETERS_73C2_API_CAFSTAT_WINDOWS_1__TOPLEFT_Y,
	AF_PARAMETERS_73C2_API_CAFSTAT_WINDOWS_1__BOTTOMRIGHT_X,
	AF_PARAMETERS_73C2_API_CAFSTAT_WINDOWS_1__BOTTOMRIGHT_Y,
	AF_PARAMETERS_73C2_API_CAFSTAT_WINDOWS_2__TOPLEFT_X,
	AF_PARAMETERS_73C2_API_CAFSTAT_WINDOWS_2__TOPLEFT_Y,
	AF_PARAMETERS_73C2_API_CAFSTAT_WINDOWS_2__BOTTOMRIGHT_X,
	AF_PARAMETERS_73C2_API_CAFSTAT_WINDOWS_2__BOTTOMRIGHT_Y,
	AF_PARAMETERS_73C2_API_CAFSTAT_WINDOWS_3__TOPLEFT_X,
	AF_PARAMETERS_73C2_API_CAFSTAT_WINDOWS_3__TOPLEFT_Y,
	AF_PARAMETERS_73C2_API_CAFSTAT_WINDOWS_3__BOTTOMRIGHT_X,
	AF_PARAMETERS_73C2_API_CAFSTAT_WINDOWS_3__BOTTOMRIGHT_Y,
	AF_PARAMETERS_73C2_API_CAFSTAT_WINDOWS_4__TOPLEFT_X,
	AF_PARAMETERS_73C2_API_CAFSTAT_WINDOWS_4__TOPLEFT_Y,
	AF_PARAMETERS_73C2_API_CAFSTAT_WINDOWS_4__BOTTOMRIGHT_X,
	AF_PARAMETERS_73C2_API_CAFSTAT_WINDOWS_4__BOTTOMRIGHT_Y,
	AF_PARAMETERS_73C2_API_CAFSTAT_WIN0CSIZE_WIDTH,
	AF_PARAMETERS_73C2_API_CAFSTAT_WIN0CSIZE_HEIGHT,
	AF_PARAMETERS_73C2_API_CAFSTAT_WIN0SSIZE_WIDTH,
	AF_PARAMETERS_73C2_API_CAFSTAT_WIN0SSIZE_HEIGHT,

	AF_PARAMETERS_73C2_API_CAFSTAT_MULTIWINDOWSENABLE,
	AF_PARAMETERS_73C2_API_CAFSTAT_MULTIWINDOWS_TOPLEFT_X,
	AF_PARAMETERS_73C2_API_CAFSTAT_MULTIWINDOWS_TOPLEFT_Y,
	AF_PARAMETERS_73C2_API_CAFSTAT_MULTIWINDOWS_SPAN_WIDTH,
	AF_PARAMETERS_73C2_API_CAFSTAT_MULTIWINDOWS_SPAN_HEIGHT,
	AF_PARAMETERS_73C2_API_CAFSTAT_MULTIWINDOWSGAP_X,
	AF_PARAMETERS_73C2_API_CAFSTAT_MULTIWINDOWSGAP_Y,
	AF_PARAMETERS_73C2_API_CAFSTAT_MULTIWINDOWSNUMX,
	AF_PARAMETERS_73C2_API_CAFSTAT_MULTIWINDOWSNUMY,

	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_CROP_ON,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_CROP_START_X,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_CROP_START_Y,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_CROP_END_X,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_CROP_END_Y,

	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_P0_K01,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_P0_K02,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_P0_K03,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_P0_K11,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_P0_K12,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_P0_K13,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_P0_K21,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_P0_K22,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_P0_K23,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_P0_FTYPE2,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_P0_FTYPE3,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_P0_BYPASS1,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_P0_BYPASS2,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_P0_BYPASS3,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_P0_CORING,

	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_P1_K01,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_P1_K02,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_P1_K03,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_P1_K11,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_P1_K12,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_P1_K13,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_P1_K21,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_P1_K22,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_P1_K23,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_P1_FTYPE2,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_P1_FTYPE3,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_P1_BYPASS1,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_P1_BYPASS2,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_P1_BYPASS3,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_P1_CORING,

	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C0_K01,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C0_K02,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C0_K03,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C0_K11,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C0_K12,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C0_K13,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C0_K21,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C0_K22,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C0_K23,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C0_FTYPE1,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C0_FTYPE2,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C0_BY1,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C0_BY2,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C0_BY3,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C0_COR,

	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C1_K01,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C1_K02,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C1_K03,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C1_K11,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C1_K12,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C1_K13,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C1_K21,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C1_K22,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C1_K23,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C1_FTYPE1,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C1_FTYPE2,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C1_BY1,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C1_BY2,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C1_BY3,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C1_COR,

	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C_V_ON,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C_V_YSEL,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C_V_CSEL,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C2_COR,

	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_BIN_NUM,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_BIN_SKIP,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_COR_BITSHIFT,

	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_SHD_ON,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_SHD_GAP,

	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_DEF_MAIN_ON,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_HISTO_ON,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_COR_TYPE,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_G_SSD,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_PHASE_RANGE,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_OB_ENABLE,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_OB_VALUE,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_AF_LAYOUT,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_AF_PATTERN,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_AF_DEBUG_MODE,

	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_DEPTH_DMODE,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_DEPTH_DSOURCE,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_DEPTH_DKSIZE1,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_DEPTH_DKSIZE2,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_DEPTH_DSHIFT,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_DEPTH_ECOEFFH,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_DEPTH_ECOEFFV,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_DEPTH_EDLAY,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_DEPTH_INTER_K1,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_DEPTH_INTER_K2,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_DEPTH_INTER_A,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_DEPTH_INTER_M,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_DEPTH_DOUT_XS,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_DEPTH_DOUT_XE,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_DEPTH_DOUT_YS,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_DEPTH_DOUT_YE,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_DEPTH_DOUT_BIN,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_DEPTH_DOUT_MODE,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_DEPTH_DTH_SNR0,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_DEPTH_DTH_SNR1,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_DEPTH_DTH_SNR2,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_DEPTH_DTH_EDGE0,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_DEPTH_DTH_EDGE1,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_PAF_DEPTH_DTH_EDGE2,

	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_YGEN_COR,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C_YG_SX,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C_YG_SY,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C_YG_EX,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C_YG_EY,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C_GR_COEF,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C_R_COEF,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C_B_COEF,
	AF_PARAMETERS_73C2_DMCTUNINGPARAMS_CAF_C_GB_COEF,

	NUM_OF_73C2_AF_PARAMETERS
} AfParameter_73C2;

typedef enum _AfParameter_73C3 {
	AF_PARAMETERS_73C3_API_INFO_OTF_AF_PRESET_INDEX,

	AF_PARAMETERS_73C3_API_PAFSTAT_ROI_TOPLEFT_X,
	AF_PARAMETERS_73C3_API_PAFSTAT_ROI_TOPLEFT_Y,
	AF_PARAMETERS_73C3_API_PAFSTAT_ROI_BOTTOMRIGHT_X,
	AF_PARAMETERS_73C3_API_PAFSTAT_ROI_BOTTOMRIGHT_Y,

	AF_PARAMETERS_73C3_API_PAFSTAT_NUMWINDOWS,
	AF_PARAMETERS_73C3_API_PAFSTAT_WINDOWS_0__TOPLEFT_X,
	AF_PARAMETERS_73C3_API_PAFSTAT_WINDOWS_0__TOPLEFT_Y,
	AF_PARAMETERS_73C3_API_PAFSTAT_WINDOWS_0__BOTTOMRIGHT_X,
	AF_PARAMETERS_73C3_API_PAFSTAT_WINDOWS_0__BOTTOMRIGHT_Y,
	AF_PARAMETERS_73C3_API_PAFSTAT_WINDOWS_1__TOPLEFT_X,
	AF_PARAMETERS_73C3_API_PAFSTAT_WINDOWS_1__TOPLEFT_Y,
	AF_PARAMETERS_73C3_API_PAFSTAT_WINDOWS_1__BOTTOMRIGHT_X,
	AF_PARAMETERS_73C3_API_PAFSTAT_WINDOWS_1__BOTTOMRIGHT_Y,
	AF_PARAMETERS_73C3_API_PAFSTAT_WINDOWS_2__TOPLEFT_X,
	AF_PARAMETERS_73C3_API_PAFSTAT_WINDOWS_2__TOPLEFT_Y,
	AF_PARAMETERS_73C3_API_PAFSTAT_WINDOWS_2__BOTTOMRIGHT_X,
	AF_PARAMETERS_73C3_API_PAFSTAT_WINDOWS_2__BOTTOMRIGHT_Y,
	AF_PARAMETERS_73C3_API_PAFSTAT_WINDOWS_3__TOPLEFT_X,
	AF_PARAMETERS_73C3_API_PAFSTAT_WINDOWS_3__TOPLEFT_Y,
	AF_PARAMETERS_73C3_API_PAFSTAT_WINDOWS_3__BOTTOMRIGHT_X,
	AF_PARAMETERS_73C3_API_PAFSTAT_WINDOWS_3__BOTTOMRIGHT_Y,

	AF_PARAMETERS_73C3_API_PAFSTAT_MWM_C_X,
	AF_PARAMETERS_73C3_API_PAFSTAT_MWM_C_Y,
	AF_PARAMETERS_73C3_API_PAFSTAT_MWM_TOPLEFT_X,
	AF_PARAMETERS_73C3_API_PAFSTAT_MWM_TOPLEFT_Y,
	AF_PARAMETERS_73C3_API_PAFSTAT_MWM_BOTTOMRIGHT_X,
	AF_PARAMETERS_73C3_API_PAFSTAT_MWM_BOTTOMRIGHT_Y,

	AF_PARAMETERS_73C3_API_PAFSTAT_MWSENABLE,
	AF_PARAMETERS_73C3_API_PAFSTAT_MWS_TOPLEFT_X,
	AF_PARAMETERS_73C3_API_PAFSTAT_MWS_TOPLEFT_Y,
	AF_PARAMETERS_73C3_API_PAFSTAT_MWS_SPAN_WIDTH,
	AF_PARAMETERS_73C3_API_PAFSTAT_MWS_SPAN_HEIGHT,
	AF_PARAMETERS_73C3_API_PAFSTAT_MWSGAP_X,
	AF_PARAMETERS_73C3_API_PAFSTAT_MWSGAP_Y,
	AF_PARAMETERS_73C3_API_PAFSTAT_MWSNO_X,
	AF_PARAMETERS_73C3_API_PAFSTAT_MWSNO_Y,

	AF_PARAMETERS_73C3_API_CAFSTAT_NUMWINDOWS,
	AF_PARAMETERS_73C3_API_CAFSTAT_WINDOWS_0__TOPLEFT_X,
	AF_PARAMETERS_73C3_API_CAFSTAT_WINDOWS_0__TOPLEFT_Y,
	AF_PARAMETERS_73C3_API_CAFSTAT_WINDOWS_0__BOTTOMRIGHT_X,
	AF_PARAMETERS_73C3_API_CAFSTAT_WINDOWS_0__BOTTOMRIGHT_Y,
	AF_PARAMETERS_73C3_API_CAFSTAT_WINDOWS_1__TOPLEFT_X,
	AF_PARAMETERS_73C3_API_CAFSTAT_WINDOWS_1__TOPLEFT_Y,
	AF_PARAMETERS_73C3_API_CAFSTAT_WINDOWS_1__BOTTOMRIGHT_X,
	AF_PARAMETERS_73C3_API_CAFSTAT_WINDOWS_1__BOTTOMRIGHT_Y,
	AF_PARAMETERS_73C3_API_CAFSTAT_WINDOWS_2__TOPLEFT_X,
	AF_PARAMETERS_73C3_API_CAFSTAT_WINDOWS_2__TOPLEFT_Y,
	AF_PARAMETERS_73C3_API_CAFSTAT_WINDOWS_2__BOTTOMRIGHT_X,
	AF_PARAMETERS_73C3_API_CAFSTAT_WINDOWS_2__BOTTOMRIGHT_Y,
	AF_PARAMETERS_73C3_API_CAFSTAT_WINDOWS_3__TOPLEFT_X,
	AF_PARAMETERS_73C3_API_CAFSTAT_WINDOWS_3__TOPLEFT_Y,
	AF_PARAMETERS_73C3_API_CAFSTAT_WINDOWS_3__BOTTOMRIGHT_X,
	AF_PARAMETERS_73C3_API_CAFSTAT_WINDOWS_3__BOTTOMRIGHT_Y,
	AF_PARAMETERS_73C3_API_CAFSTAT_MWM_C_X,
	AF_PARAMETERS_73C3_API_CAFSTAT_MWM_C_Y,
	AF_PARAMETERS_73C3_API_CAFSTAT_MWM_TOPLEFT_X,
	AF_PARAMETERS_73C3_API_CAFSTAT_MWM_TOPLEFT_Y,
	AF_PARAMETERS_73C3_API_CAFSTAT_MWM_BOTTOMRIGHT_X,
	AF_PARAMETERS_73C3_API_CAFSTAT_MWM_BOTTOMRIGHT_Y,

	AF_PARAMETERS_73C3_API_CAFSTAT_MWSENABLE,
	AF_PARAMETERS_73C3_API_CAFSTAT_MWS_TOPLEFT_X,
	AF_PARAMETERS_73C3_API_CAFSTAT_MWS_TOPLEFT_Y,
	AF_PARAMETERS_73C3_API_CAFSTAT_MWS_SPAN_WIDTH,
	AF_PARAMETERS_73C3_API_CAFSTAT_MWS_SPAN_HEIGHT,
	AF_PARAMETERS_73C3_API_CAFSTAT_MWSGAP_X,
	AF_PARAMETERS_73C3_API_CAFSTAT_MWSGAP_Y,
	AF_PARAMETERS_73C3_API_CAFSTAT_MWSNO_X,
	AF_PARAMETERS_73C3_API_CAFSTAT_MWSNO_Y,

	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_GR_COEF,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_R_COEF,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_B_COEF,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_GB_COEF,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_STAT_SEL,

	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_KN_INC_0_,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_KN_INC_1_,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_KN_INC_2_,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_KN_INC_3_,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_KN_INC_4_,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_KN_INC_5_,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_KN_INC_6_,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_KN_INC_7_,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_KN_INC_8_,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_KN_INC_9_,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_KN_INC_10_,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_KN_INC_11_,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_KN_OFFSET_0_,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_KN_OFFSET_1_,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_KN_OFFSET_2_,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_KN_OFFSET_3_,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_KN_OFFSET_4_,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_KN_OFFSET_5_,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_KN_OFFSET_6_,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_KN_OFFSET_7_,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_KN_OFFSET_8_,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_KN_OFFSET_9_,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_KN_OFFSET_10_,

	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_BIN1,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_BIN2,

	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I0_G0,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I0_K01,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I0_K02,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I0_FTYPE0,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I0_G1,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I0_K11,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I0_K12,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I0_C11,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I0_C12,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I0_G2,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I0_K21,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I0_K22,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I0_C21,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I0_C22,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I0_BY0,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I0_BY1,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I0_BY2,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I0_COR,

	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I1_G0,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I1_K01,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I1_K02,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I1_FTYPE0,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I1_G1,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I1_K11,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I1_K12,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I1_C11,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I1_C12,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I1_G2,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I1_K21,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I1_K22,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I1_C21,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I1_C22,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I1_BY0,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I1_BY1,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I1_BY2,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I1_COR,

	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I2_G0,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I2_K01,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I2_K02,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I2_FTYPE0,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I2_G1,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I2_K11,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I2_K12,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I2_C11,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I2_C12,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I2_G2,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I2_K21,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I2_K22,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I2_C21,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I2_C22,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I2_BY0,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I2_BY1,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I2_BY2,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I2_COR,

	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I3_G,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I3_K1,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I3_K2,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I3_KI,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I3_FTYPE,
	AF_PARAMETERS_73C3_CAFTUNINGPARAMS_I3_COR,

	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_XCOR_ON,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_AF_CROSS,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_MPD_ON,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_MPD_HBIN,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_MPD_VBIN,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_MPD_VSFT,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_MPD_DP,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_MPD_DP_TH,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_PHASE_RANGE,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_DPC_ON,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_LMV_ON,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_LMV_SHIFT,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_ALC_ON,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_ALC_GAP,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_B2_EN,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_CROP_ON,

	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I0_G0,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I0_K01,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I0_K02,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I0_FTYPE0,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I0_G1,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I0_K11,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I0_K12,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I0_C11,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I0_C12,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I0_G2,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I0_K21,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I0_K22,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I0_C21,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I0_C22,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I0_BY0,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I0_BY1,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I0_BY2,

	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I1_G0,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I1_K01,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I1_K02,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I1_FTYPE0,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I1_G1,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I1_K11,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I1_K12,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I1_C11,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I1_C12,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I1_G2,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I1_K21,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I1_K22,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I1_C21,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I1_C22,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I1_BY0,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I1_BY1,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I1_BY2,

	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I2_G0,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I2_K01,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I2_K02,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I2_FTYPE0,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I2_G1,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I2_K11,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I2_K12,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I2_C11,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I2_C12,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I2_G2,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I2_K21,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I2_K22,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I2_C21,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I2_C22,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I2_BY0,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I2_BY1,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I2_BY2,

	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_IL_G0,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_IL_K01,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_IL_K02,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_IL_FTYPE0,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_IL_G1,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_IL_K11,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_IL_K12,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_IL_C11,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_IL_C12,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_IL_G2,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_IL_K21,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_IL_K22,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_IL_C21,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_IL_C22,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_IL_BY0,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_IL_BY1,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_IL_BY2,

	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_CORING_TY,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_CORING_TH,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I0_CORING,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I1_CORING,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_I2_CORING,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_IL_CORING,

	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_BIN_FIRST,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_BINNING_NUM_B0,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_BINNING_NUM_B1,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_BINNING_NUM_B2,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_BINNING_NUM_LMV,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_BIN0_SKIP,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_BIN1_SKIP,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_BIN2_SKIP,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_BINL_SKIP,

	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_AF_DEBUG_MODE,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_LF_SHIFT,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_PAFSAT_ON,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_SAT_LV,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_SAT_LV1,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_SAT_LV2,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_SAT_LV3,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_SAT_SRC,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_COR_TYPE,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_G_SSD,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_OB_VALUE,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_AF_LAYOUT,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_AF_PATTERN,

	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_KNEE_ON,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_KN_INC_0_,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_KN_INC_1_,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_KN_INC_2_,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_KN_INC_3_,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_KN_INC_4_,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_KN_INC_5_,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_KN_INC_6_,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_KN_INC_7_,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_KN_OFFSET_0_,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_KN_OFFSET_1_,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_KN_OFFSET_2_,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_KN_OFFSET_3_,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_KN_OFFSET_4_,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_KN_OFFSET_5_,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_KN_OFFSET_6_,

	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_WDR_ON,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_WDR_COEF_LONG,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_WDR_COEF_SHORT,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_WDR_SHFT_LONG,
	AF_PARAMETERS_73C3_PAFTUNINGPARAMS_WDR_SHFT_SHORT,

	AF_PARAMETERS_73C3_YEXTTUNINGPARAMS_MAXNOSKIPPXG,
	AF_PARAMETERS_73C3_YEXTTUNINGPARAMS_SKIPLEVELTH,
	AF_PARAMETERS_73C3_YEXTTUNINGPARAMS_PXSAT_G,
	AF_PARAMETERS_73C3_YEXTTUNINGPARAMS_PXSAT_R,
	AF_PARAMETERS_73C3_YEXTTUNINGPARAMS_PXSAT_B,
	AF_PARAMETERS_73C3_YEXTTUNINGPARAMS_SAT_NO_G,
	AF_PARAMETERS_73C3_YEXTTUNINGPARAMS_SAT_NO_R,
	AF_PARAMETERS_73C3_YEXTTUNINGPARAMS_SAT_NO_B,
	AF_PARAMETERS_73C3_YEXTTUNINGPARAMS_SAT_G,
	AF_PARAMETERS_73C3_YEXTTUNINGPARAMS_SAT_R,
	AF_PARAMETERS_73C3_YEXTTUNINGPARAMS_SAT_B,
	AF_PARAMETERS_73C3_YEXTTUNINGPARAMS_COEF_R_SHORT,
	AF_PARAMETERS_73C3_YEXTTUNINGPARAMS_COEF_G_SHORT,
	AF_PARAMETERS_73C3_YEXTTUNINGPARAMS_COEF_B_SHORT,
	AF_PARAMETERS_73C3_YEXTTUNINGPARAMS_COEF_R_LONG,
	AF_PARAMETERS_73C3_YEXTTUNINGPARAMS_COEF_G_LONG,
	AF_PARAMETERS_73C3_YEXTTUNINGPARAMS_COEF_B_LONG,

	NUM_OF_73C3_AF_PARAMETERS
} AfParameter_73C3;

typedef struct {
	void *pParam;
	unsigned int uiReturnValue;
} setting_info;

struct comp_share_data {
    bool bCompanionAvailable;

    unsigned int uiCompName;
    bool bStreamOn;
    unsigned int uiCompConfigIndexCur;
    unsigned int uiCompConfigIndexPre;

    unsigned int uiConfigIdx;
    unsigned int uiStatMethodAddr;
    unsigned int uiStatEnableAddr;
    unsigned short uiStatEnableVal;

    bool bBypass;
    bool bStatEnable;
    bool bPafStatValid;
    bool bPafStatEnable;
    bool bCafStatValid;
    bool bCafStatEnable;
    bool bEnableLsc;
    bool bEnableDrc;
    bool bEnableDynamicBpc;
    bool bEnableTangoBpc;
    bool bEnablePdafBpc;
    bool bEnableXtalk;

    enum companion_wdr_mode enableWdrPre;
    enum companion_wdr_mode enableWdr;
    enum companion_disparity_mode disparityMode;

    unsigned int pPreAfSetting_73C3[NUM_OF_73C3_AF_PARAMETERS];
};

typedef struct {
	bool is_active_area;
	unsigned int sen_vsync_count;
	unsigned int stream_id;
	unsigned int product_name;
	unsigned int sens_config_index_cur;
	/*u16 pOisCaptureState[4];*/ //temp size
	is_shared_data *is_data;
} sSharedData_smia;

#define FIMC_IS_PREPROC_CFG(w, h, f, m) {	\
	.width		= w,			\
	.height		= h,			\
	.framerate	= f,			\
	.mode		= m,			\
}

struct fimc_is_preproc_cfg {
	u32 width;
	u32 height;
	u32 framerate;
	int mode;
};

#define ReadByte_Reg2Data2(client, regAddr, data16) ({ \
		int ret = fimc_is_comp_i2c_read_2(client, regAddr, data16); \
		ret ? false : true;	\
	})

#define ReadByte_Reg2Data4(client, regAddr, data32) ({ \
		int ret = fimc_is_comp_i2c_read_4(client, regAddr, data32); \
		ret ? false : true;	\
	})

#define ReadByte_Reg2DataN( client, regAddr, buf, size) ({ \
		int ret = fimc_is_comp_i2c_read_multi(client, regAddr, buf, size); \
		ret ? false : true;	\
	})

#define SendByte_Reg2Data2(client, regAddr, data16) ({ \
		int ret = fimc_is_comp_i2c_write_2(client, regAddr, data16); \
		ret ? false : true;	\
	})

#define SendByteArray(client, buf, size) ({ \
		int ret =fimc_is_comp_i2c_write_multi(client, buf, size); \
		ret ? false : true;	\
	})

#define PrintAfErrorWithTag(fmt, args...)

typedef int (*sencmd_func)(struct v4l2_subdev *subdev, preproc_setting_info *setinfo, cis_shared_data *cis_data);

int C73C3_ReadAfStatFromSpi(struct spi_device *spi, preproc_setting_info *setinfo, cis_shared_data *cis_data, u8 **buf);

int init_comp_func_73c3(sencmd_func *func_list, cis_shared_data *cis_data, bool actuator, u32 sensor_name);

int fimc_is_comp_i2c_read_2(struct i2c_client *client, u16 addr, u16 *data);
int fimc_is_comp_i2c_read_4(struct i2c_client *client, u16 addr, u32 *data);
int fimc_is_comp_i2c_read_multi(struct i2c_client *client, u16 addr, u8 *buf, int size);
int fimc_is_comp_i2c_write_2(struct i2c_client *client, u16 addr, u16 data);
int fimc_is_comp_i2c_write_multi(struct i2c_client *client, u8 *buf, u32 size);
void fimc_is_get_preproc_cfg(struct fimc_is_preproc_cfg **cfg, u32 *size, cis_shared_data *cis_data);
#endif
