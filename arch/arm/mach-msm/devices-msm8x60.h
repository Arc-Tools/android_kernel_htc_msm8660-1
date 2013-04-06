/* Copyright (c) 2010-2011, Code Aurora Forum. All rights reserved.
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
#ifndef __ARCH_ARM_MACH_MSM_DEVICES_MSM8X60_H
#define __ARCH_ARM_MACH_MSM_DEVICES_MSM8X60_H

#ifdef CONFIG_CMDLINE_OPTIONS
/* cmdline_gpu variables */
#define CMDLINE_3DGPU_DEFKHZ_0 266667000
#define CMDLINE_3DGPU_DEFKHZ_1 228571000
#define CMDLINE_2DGPU_DEFKHZ 200000000

extern unsigned int cmdline_2dgpu;
extern unsigned int cmdline_3dgpu[2];
#endif

#define MSM_GSBI3_QUP_I2C_BUS_ID 0
#define MSM_GSBI4_QUP_I2C_BUS_ID 1
#define MSM_GSBI9_QUP_I2C_BUS_ID 2
#define MSM_GSBI8_QUP_I2C_BUS_ID 3
#define MSM_GSBI7_QUP_I2C_BUS_ID 4
#define MSM_GSBI12_QUP_I2C_BUS_ID 5
#define MSM_SSBI1_I2C_BUS_ID     6
#define MSM_SSBI2_I2C_BUS_ID     7
#define MSM_SSBI3_I2C_BUS_ID     8
#define MSM_GSBI2_QUP_I2C_BUS_ID 9
#define MSM_GSBI5_QUP_I2C_BUS_ID 10
#define MSM_GSBI10_QUP_I2C_BUS_ID 11

#ifdef CONFIG_SND_SOC_MSM8660_APQ
extern struct platform_device msm_pcm;
extern struct platform_device msm_pcm_routing;
extern struct platform_device msm_cpudai0;
extern struct platform_device msm_cpudai1;
extern struct platform_device msm_cpudai_hdmi_rx;
extern struct platform_device msm_cpudai_bt_rx;
extern struct platform_device msm_cpudai_bt_tx;
extern struct platform_device msm_cpudai_fm_rx;
extern struct platform_device msm_cpudai_fm_tx;
extern struct platform_device msm_cpu_fe;
extern struct platform_device msm_stub_codec;
extern struct platform_device msm_voice;
extern struct platform_device msm_voip;
extern struct platform_device msm_lpa_pcm;
extern struct platform_device msm_pcm_hostless;
#endif

#ifdef CONFIG_SPI_QUP
extern struct platform_device msm_gsbi1_qup_spi_device;
extern struct platform_device msm_gsbi2_qup_spi_device;
extern struct platform_device msm_gsbi3_qup_spi_device;
extern struct platform_device msm_gsbi8_qup_spi_device;
extern struct platform_device msm_gsbi10_qup_spi_device;
#endif

extern struct platform_device msm_bus_apps_fabric;
extern struct platform_device msm_bus_sys_fabric;
extern struct platform_device msm_bus_mm_fabric;
extern struct platform_device msm_bus_sys_fpb;
extern struct platform_device msm_bus_cpss_fpb;
extern struct platform_device msm_bus_def_fab;

extern struct platform_device msm_device_smd;
extern struct platform_device msm_device_gpio;
extern struct platform_device msm_device_vidc;
extern struct platform_device msm_camera_sensor_webcam;

extern struct platform_device msm_device_tz_log;
#ifdef CONFIG_SENSORS_MSM_ADC
extern struct xoadc_platform_data pm8058_xoadc_pdata;
#endif

#ifdef CONFIG_HW_RANDOM_MSM
extern struct platform_device msm_device_rng;
#endif

void __init msm8x60_init_irq(void);
void __init msm8x60_check_2d_hardware(void);

#ifdef CONFIG_MSM_DSPS
extern struct platform_device msm_dsps_device;
#endif

#if defined(CONFIG_MSM_RPM_STATS_LOG)
extern struct platform_device msm_rpm_stat_device;
#endif

#ifdef CONFIG_MSM_CAMERA_V4L2

extern struct platform_device msm8x60_device_csic0;
extern struct platform_device msm8x60_device_csic1;
extern struct platform_device msm8x60_device_vfe;
extern struct platform_device msm8x60_device_vpe;
#endif
#endif
