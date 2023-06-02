/******************************************************************************
* Copyright (C) 2023, Advanced Micro Devices, Inc. All Rights Reserved.
* SPDX-License-Identifier: MIT
******************************************************************************/


/*****************************************************************************/
/**
* @file xaie_lite_regdef_aie2p.h
* @{
*
* This header file defines register offsets for lightweight version for AIE2P.
* APIs.
*
* <pre>
* MODIFICATION HISTORY:
*
* Ver   Who     Date     Changes
* ----- ------  -------- -----------------------------------------------------
* 1.0   Keyur  05/19/2023  Initial creation
* </pre>
*
******************************************************************************/
#ifndef XAIE_LITE_REGDEF_AIE2P_H
#define XAIE_LITE_REGDEF_AIE2P_H

/***************************** Include Files *********************************/
#include "xaie2pgbl_params.h"

/************************** Constant Definitions *****************************/
#define XAIE_EVENT_MASK					0x7F

#define XAIE_NOC_MOD_INTR_L2_ENABLE			XAIE2PGBL_NOC_MODULE_INTERRUPT_CONTROLLER_2ND_LEVEL_ENABLE
#define XAIE_NOC_MOD_INTR_L2_DISABLE			XAIE2PGBL_NOC_MODULE_INTERRUPT_CONTROLLER_2ND_LEVEL_DISABLE
#define XAIE_NOC_MOD_INTR_L2_MASK			XAIE2PGBL_NOC_MODULE_INTERRUPT_CONTROLLER_2ND_LEVEL_MASK
#define XAIE_NOC_MOD_INTR_L2_STATUS			XAIE2PGBL_NOC_MODULE_INTERRUPT_CONTROLLER_2ND_LEVEL_STATUS
#define XAIE_NOC_MOD_INTR_L2_IRQ			XAIE2PGBL_NOC_MODULE_INTERRUPT_CONTROLLER_2ND_LEVEL_INTERRUPT

#define XAIE_PL_MOD_INTR_L1_SW_REGOFF			0x30U
#define XAIE_PL_MOD_INTR_L1_STATUS			XAIE2PGBL_PL_MODULE_INTERRUPT_CONTROLLER_1ST_LEVEL_STATUS_A
#define XAIE_PL_MOD_INTR_L1_IRQ_EVENTA			XAIE2PGBL_PL_MODULE_INTERRUPT_CONTROLLER_1ST_LEVEL_IRQ_EVENT_A

#define XAIE_PL_MOD_EVENT_GROUP_ERROR0			64
#define XAIE_PL_MOD_EVENT_BROADCAST0			110

#define XAIE_PL_MOD_BASE_EVENT_STATUS			XAIE2PGBL_PL_MODULE_EVENT_STATUS0
#define XAIE_PL_MOD_GROUP_ERROR0_ENABLE			XAIE2PGBL_PL_MODULE_EVENT_GROUP_ERRORS_ENABLE
#define XAIE_PL_MOD_COL_RST_REGOFF			XAIE2PGBL_PL_MODULE_COLUMN_RESET_CONTROL
#define XAIE_PL_MOD_COL_RST_LSB				XAIE2PGBL_PL_MODULE_COLUMN_RESET_CONTROL_RESET_LSB
#define XAIE_PL_MOD_COL_RST_MASK			XAIE2PGBL_PL_MODULE_COLUMN_RESET_CONTROL_RESET_MASK

#define XAIE_PL_MOD_COL_CLKCNTR_REGOFF			XAIE2PGBL_PL_MODULE_COLUMN_CLOCK_CONTROL
#define XAIE_PL_MOD_COL_CLKCNTR_CLKBUF_ENABLE_LSB	XAIE2PGBL_PL_MODULE_COLUMN_CLOCK_CONTROL_CLOCK_BUFFER_ENABLE_LSB
#define XAIE_PL_MOD_COL_CLKCNTR_CLKBUF_ENABLE_MASK	XAIE2PGBL_PL_MODULE_COLUMN_CLOCK_CONTROL_CLOCK_BUFFER_ENABLE_MASK

#define XAIE_PL_MOD_TILE_CNTR_REGOFF			XAIE2PGBL_PL_MODULE_TILE_CONTROL
#define XAIE_PL_MOD_TILE_CNTR_ISOLATE_EAST_LSB		XAIE2PGBL_PL_MODULE_TILE_CONTROL_ISOLATE_FROM_EAST_LSB
#define XAIE_PL_MOD_TILE_CNTR_ISOLATE_EAST_MASK		XAIE2PGBL_PL_MODULE_TILE_CONTROL_ISOLATE_FROM_EAST_MASK
#define XAIE_PL_MOD_TILE_CNTR_ISOLATE_NORTH_LSB		XAIE2PGBL_PL_MODULE_TILE_CONTROL_ISOLATE_FROM_NORTH_LSB
#define XAIE_PL_MOD_TILE_CNTR_ISOLATE_NORTH_MASK	XAIE2PGBL_PL_MODULE_TILE_CONTROL_ISOLATE_FROM_NORTH_MASK
#define XAIE_PL_MOD_TILE_CNTR_ISOLATE_WEST_LSB		XAIE2PGBL_PL_MODULE_TILE_CONTROL_ISOLATE_FROM_WEST_LSB
#define XAIE_PL_MOD_TILE_CNTR_ISOLATE_WEST_MASK		XAIE2PGBL_PL_MODULE_TILE_CONTROL_ISOLATE_FROM_WEST_MASK
#define XAIE_PL_MOD_TILE_CNTR_ISOLATE_SOUTH_LSB		XAIE2PGBL_PL_MODULE_TILE_CONTROL_ISOLATE_FROM_SOUTH_LSB
#define XAIE_PL_MOD_TILE_CNTR_ISOLATE_SOUTH_MASK	XAIE2PGBL_PL_MODULE_TILE_CONTROL_ISOLATE_FROM_SOUTH_MASK

#define XAIE_NOC_AXIMM_CONF_REGOFF			XAIE2PGBL_NOC_MODULE_ME_AXIMM_CONFIG
#define XAIE_NOC_AXIMM_CONF_SLVERR_BLOCK_LSB		XAIE2PGBL_NOC_MODULE_ME_AXIMM_CONFIG_SLVERR_BLOCK_LSB
#define XAIE_NOC_AXIMM_CONF_SLVERR_BLOCK_MASK		XAIE2PGBL_NOC_MODULE_ME_AXIMM_CONFIG_SLVERR_BLOCK_MASK
#define XAIE_NOC_AXIMM_CONF_DECERR_BLOCK_LSB		XAIE2PGBL_NOC_MODULE_ME_AXIMM_CONFIG_DECERR_BLOCK_LSB
#define XAIE_NOC_AXIMM_CONF_DECERR_BLOCK_MASK		XAIE2PGBL_NOC_MODULE_ME_AXIMM_CONFIG_DECERR_BLOCK_MASK

#define XAIE_CORE_MOD_EVENT_GROUP_ERROR0		48
#define XAIE_CORE_MOD_EVENT_BROADCAST0			107

#define XAIE_CORE_MOD_BASE_EVENT_STATUS			XAIE2PGBL_CORE_MODULE_EVENT_STATUS0
#define XAIE_CORE_MOD_BASE_EVENT_BROADCAST		XAIE2PGBL_CORE_MODULE_EVENT_BROADCAST0
#define XAIE_CORE_MOD_GROUP_ERROR0_ENABLE		XAIE2PGBL_CORE_MODULE_EVENT_GROUP_ERRORS0_ENABLE

#define XAIE_CORE_MOD_TILE_CNTR_REGOFF			XAIE2PGBL_CORE_MODULE_TILE_CONTROL
#define XAIE_CORE_MOD_TILE_CNTR_ISOLATE_EAST_LSB	XAIE2PGBL_CORE_MODULE_TILE_CONTROL_ISOLATE_FROM_EAST_LSB
#define XAIE_CORE_MOD_TILE_CNTR_ISOLATE_EAST_MASK	XAIE2PGBL_CORE_MODULE_TILE_CONTROL_ISOLATE_FROM_EAST_MASK
#define XAIE_CORE_MOD_TILE_CNTR_ISOLATE_NORTH_LSB	XAIE2PGBL_CORE_MODULE_TILE_CONTROL_ISOLATE_FROM_NORTH_LSB
#define XAIE_CORE_MOD_TILE_CNTR_ISOLATE_NORTH_MASK	XAIE2PGBL_CORE_MODULE_TILE_CONTROL_ISOLATE_FROM_NORTH_MASK
#define XAIE_CORE_MOD_TILE_CNTR_ISOLATE_WEST_LSB	XAIE2PGBL_CORE_MODULE_TILE_CONTROL_ISOLATE_FROM_WEST_LSB
#define XAIE_CORE_MOD_TILE_CNTR_ISOLATE_WEST_MASK	XAIE2PGBL_CORE_MODULE_TILE_CONTROL_ISOLATE_FROM_WEST_MASK
#define XAIE_CORE_MOD_TILE_CNTR_ISOLATE_SOUTH_LSB	XAIE2PGBL_CORE_MODULE_TILE_CONTROL_ISOLATE_FROM_SOUTH_LSB
#define XAIE_CORE_MOD_TILE_CNTR_ISOLATE_SOUTH_MASK	XAIE2PGBL_CORE_MODULE_TILE_CONTROL_ISOLATE_FROM_SOUTH_MASK

#define XAIE_CORE_MOD_MEM_CNTR_REGOFF			XAIE2PGBL_CORE_MODULE_MEMORY_CONTROL
#define XAIE_CORE_MOD_MEM_CNTR_ZEROISATION_LSB		XAIE2PGBL_CORE_MODULE_MEMORY_CONTROL_MEMORY_ZEROISATION_LSB
#define XAIE_CORE_MOD_MEM_CNTR_ZEROISATION_MASK		XAIE2PGBL_CORE_MODULE_MEMORY_CONTROL_MEMORY_ZEROISATION_MASK

#define XAIE_MEM_MOD_EVENT_GROUP_ERROR0			87
#define XAIE_MEM_MOD_EVENT_BROADCAST0			107

#define XAIE_MEM_MOD_BASE_EVENT_STATUS			XAIE2PGBL_MEMORY_MODULE_EVENT_STATUS0
#define XAIE_MEM_MOD_BASE_EVENT_BROADCAST		XAIE2PGBL_MEMORY_MODULE_EVENT_BROADCAST0
#define XAIE_MEM_MOD_GROUP_ERROR0_ENABLE		XAIE2PGBL_MEMORY_MODULE_EVENT_GROUP_ERROR_ENABLE

#define XAIE_MEM_MOD_MEM_CNTR_REGOFF			XAIE2PGBL_MEMORY_MODULE_MEMORY_CONTROL
#define XAIE_MEM_MOD_MEM_CNTR_ZEROISATION_LSB		XAIE2PGBL_MEMORY_MODULE_MEMORY_CONTROL_MEMORY_ZEROISATION_LSB
#define XAIE_MEM_MOD_MEM_CNTR_ZEROISATION_MASK		XAIE2PGBL_MEMORY_MODULE_MEMORY_CONTROL_MEMORY_ZEROISATION_MASK

#define XAIE_MEM_TILE_EVENT_GROUP_ERROR0		129
#define XAIE_MEM_TILE_EVENT_BROADCAST0			142

#define XAIE_MEM_TILE_BASE_EVENT_STATUS			XAIE2PGBL_MEM_TILE_MODULE_EVENT_STATUS0
#define XAIE_MEM_TILE_BASE_EVENT_BROADCAST		XAIE2PGBL_MEM_TILE_MODULE_EVENT_BROADCAST0
#define XAIE_MEM_TILE_GROUP_ERROR0_ENABLE		XAIE2PGBL_MEM_TILE_MODULE_EVENT_GROUP_ERROR_ENABLE

#define XAIE_MEM_TILE_MOD_TILE_CNTR_REGOFF		XAIE2PGBL_MEM_TILE_MODULE_TILE_CONTROL
#define XAIE_MEM_TILE_MOD_TILE_CNTR_ISOLATE_EAST_LSB	XAIE2PGBL_MEM_TILE_MODULE_TILE_CONTROL_ISOLATE_FROM_EAST_LSB
#define XAIE_MEM_TILE_MOD_TILE_CNTR_ISOLATE_EAST_MASK	XAIE2PGBL_MEM_TILE_MODULE_TILE_CONTROL_ISOLATE_FROM_EAST_MASK
#define XAIE_MEM_TILE_MOD_TILE_CNTR_ISOLATE_NORTH_LSB	XAIE2PGBL_MEM_TILE_MODULE_TILE_CONTROL_ISOLATE_FROM_NORTH_LSB
#define XAIE_MEM_TILE_MOD_TILE_CNTR_ISOLATE_NORTH_MASK	XAIE2PGBL_MEM_TILE_MODULE_TILE_CONTROL_ISOLATE_FROM_NORTH_MASK
#define XAIE_MEM_TILE_MOD_TILE_CNTR_ISOLATE_WEST_LSB	XAIE2PGBL_MEM_TILE_MODULE_TILE_CONTROL_ISOLATE_FROM_WEST_LSB
#define XAIE_MEM_TILE_MOD_TILE_CNTR_ISOLATE_WEST_MASK	XAIE2PGBL_MEM_TILE_MODULE_TILE_CONTROL_ISOLATE_FROM_WEST_MASK
#define XAIE_MEM_TILE_MOD_TILE_CNTR_ISOLATE_SOUTH_LSB	XAIE2PGBL_MEM_TILE_MODULE_TILE_CONTROL_ISOLATE_FROM_SOUTH_LSB
#define XAIE_MEM_TILE_MOD_TILE_CNTR_ISOLATE_SOUTH_MASK	XAIE2PGBL_MEM_TILE_MODULE_TILE_CONTROL_ISOLATE_FROM_SOUTH_MASK

#define XAIE_MEM_TILE_MOD_MEM_CNTR_REGOFF		XAIE2PGBL_MEM_TILE_MODULE_MEMORY_CONTROL
#define XAIE_MEM_TILE_MEM_CNTR_ZEROISATION_LSB		XAIE2PGBL_MEM_TILE_MODULE_MEMORY_CONTROL_MEMORY_ZEROISATION_LSB
#define XAIE_MEM_TILE_MEM_CNTR_ZEROISATION_MASK		XAIE2PGBL_MEM_TILE_MODULE_MEMORY_CONTROL_MEMORY_ZEROISATION_MASK

/* Tile control isolation bits are the same across tiles */
#define XAIE_TILE_CNTR_ISOLATE_EAST_MASK		XAIE_CORE_MOD_TILE_CNTR_ISOLATE_EAST_MASK
#define XAIE_TILE_CNTR_ISOLATE_WEST_MASK		XAIE_CORE_MOD_TILE_CNTR_ISOLATE_WEST_MASK

/* DMA Status Registers */
#define XAIE_TILE_DMA_S2MM_CHANNEL_STATUS_REGOFF        XAIE2PGBL_MEMORY_MODULE_DMA_S2MM_STATUS_0
#define XAIE_TILE_DMA_S2MM_CHANNEL_VALID_BITS_MASK      XAIE2PGBL_MEMORY_MODULE_DMA_S2MM_STATUS_0_MASK
#define XAIE_TILE_DMA_S2MM_CHANNEL_STATUS_MASK          XAIE2PGBL_MEMORY_MODULE_DMA_S2MM_STATUS_0_STATUS_MASK
#define XAIE_TILE_DMA_S2MM_CHANNEL_RUNNING_MASK         XAIE2PGBL_MEMORY_MODULE_DMA_S2MM_STATUS_0_CHANNEL_RUNNING_MASK
#define XAIE_TILE_DMA_S2MM_CHANNEL_STATUS_IDX           0x4

#define XAIE_TILE_DMA_MM2S_CHANNEL_STATUS_REGOFF        XAIE2PGBL_MEMORY_MODULE_DMA_MM2S_STATUS_0
#define XAIE_TILE_DMA_MM2S_CHANNEL_VALID_BITS_MASK      XAIE2PGBL_MEMORY_MODULE_DMA_MM2S_STATUS_0_MASK
#define XAIE_TILE_DMA_MM2S_CHANNEL_STATUS_MASK          XAIE2PGBL_MEMORY_MODULE_DMA_MM2S_STATUS_0_STATUS_MASK
#define XAIE_TILE_DMA_MM2S_CHANNEL_RUNNING_MASK         XAIE2PGBL_MEMORY_MODULE_DMA_MM2S_STATUS_0_CHANNEL_RUNNING_MASK
#define XAIE_TILE_DMA_MM2S_CHANNEL_STATUS_IDX           0x4

#define XAIE_MEM_TILE_DMA_S2MM_CHANNEL_STATUS_REGOFF    XAIE2PGBL_MEM_TILE_MODULE_DMA_S2MM_STATUS_0
#define XAIE_MEM_TILE_DMA_S2MM_CHANNEL_VALID_BITS_MASK  XAIE2PGBL_MEM_TILE_MODULE_DMA_S2MM_STATUS_0_MASK
#define XAIE_MEM_TILE_DMA_S2MM_CHANNEL_STATUS_MASK      XAIE2PGBL_MEM_TILE_MODULE_DMA_S2MM_STATUS_0_STATUS_MASK
#define XAIE_MEM_TILE_DMA_S2MM_CHANNEL_RUNNING_MASK     XAIE2PGBL_MEM_TILE_MODULE_DMA_S2MM_STATUS_0_CHANNEL_RUNNING_MASK
#define XAIE_MEM_TILE_DMA_S2MM_CHANNEL_STATUS_IDX       0x4

#define XAIE_MEM_TILE_DMA_MM2S_CHANNEL_STATUS_REGOFF    XAIE2PGBL_MEM_TILE_MODULE_DMA_MM2S_STATUS_0
#define XAIE_MEM_TILE_DMA_MM2S_CHANNEL_VALID_BITS_MASK  XAIE2PGBL_MEM_TILE_MODULE_DMA_MM2S_STATUS_0_MASK
#define XAIE_MEM_TILE_DMA_MM2S_CHANNEL_STATUS_MASK      XAIE2PGBL_MEM_TILE_MODULE_DMA_MM2S_STATUS_0_STATUS_MASK
#define XAIE_MEM_TILE_DMA_MM2S_CHANNEL_RUNNING_MASK     XAIE2PGBL_MEM_TILE_MODULE_DMA_MM2S_STATUS_0_CHANNEL_RUNNING_MASK
#define XAIE_MEM_TILE_DMA_MM2S_CHANNEL_STATUS_IDX       0x4

#define XAIE_SHIM_DMA_S2MM_CHANNEL_STATUS_REGOFF        XAIE2PGBL_NOC_MODULE_DMA_S2MM_STATUS_0
#define XAIE_SHIM_DMA_S2MM_CHANNEL_VALID_BITS_MASK      XAIE2PGBL_NOC_MODULE_DMA_S2MM_STATUS_0_MASK
#define XAIE_SHIM_DMA_S2MM_CHANNEL_STATUS_MASK          XAIE2PGBL_NOC_MODULE_DMA_S2MM_STATUS_0_STATUS_MASK
#define XAIE_SHIM_DMA_S2MM_CHANNEL_RUNNING_MASK         XAIE2PGBL_NOC_MODULE_DMA_S2MM_STATUS_0_CHANNEL_RUNNING_MASK
#define XAIE_SHIM_DMA_S2MM_CHANNEL_STATUS_IDX           0x4

#define XAIE_SHIM_DMA_MM2S_CHANNEL_STATUS_REGOFF        XAIE2PGBL_NOC_MODULE_DMA_MM2S_STATUS_0
#define XAIE_SHIM_DMA_MM2S_CHANNEL_VALID_BITS_MASK      XAIE2PGBL_NOC_MODULE_DMA_MM2S_STATUS_0_MASK
#define XAIE_SHIM_DMA_MM2S_CHANNEL_STATUS_MASK          XAIE2PGBL_NOC_MODULE_DMA_MM2S_STATUS_0_STATUS_MASK
#define XAIE_SHIM_DMA_MM2S_CHANNEL_RUNNING_MASK         XAIE2PGBL_NOC_MODULE_DMA_MM2S_STATUS_0_CHANNEL_RUNNING_MASK
#define XAIE_SHIM_DMA_MM2S_CHANNEL_STATUS_IDX           0x4

/* Module reset control registers */
#define XAIE_AIE_TILE_MODULE_RESET_REGOFF		XAIE2PGBL_CORE_MODULE_MODULE_RESET_CONTROL
#define XAIE_AIE_TILE_CORE_MODULE_RESET_LSB		XAIE2PGBL_CORE_MODULE_MODULE_RESET_CONTROL_CORE_MODULE_RESET_LSB
#define XAIE_AIE_TILE_CORE_MODULE_RESET_MASK		XAIE2PGBL_CORE_MODULE_MODULE_RESET_CONTROL_CORE_MODULE_RESET_MASK
#define XAIE_AIE_TILE_MEM_MODULE_RESET_LSB		XAIE2PGBL_CORE_MODULE_MODULE_RESET_CONTROL_MEMORY_MODULE_RESET_LSB
#define XAIE_AIE_TILE_MEM_MODULE_RESET_MASK		XAIE2PGBL_CORE_MODULE_MODULE_RESET_CONTROL_MEMORY_MODULE_RESET_MASK

#define XAIE_MEM_TILE_MODULE_RESET_REGOFF		XAIE2PGBL_MEM_TILE_MODULE_MODULE_RESET_CONTROL
#define XAIE_MEM_TILE_MEM_MODULE_RESET_LSB		XAIE2PGBL_MEM_TILE_MODULE_MODULE_RESET_CONTROL_MEMORY_RESET_LSB
#define XAIE_MEM_TILE_MEM_MODULE_RESET_MASK		XAIE2PGBL_MEM_TILE_MODULE_MODULE_RESET_CONTROL_MEMORY_RESET_MASK

#define XAIE_SHIM_TILE_NOC_MODULE_RESET_REGOFF		XAIE2PGBL_PL_MODULE_MODULE_RESET_CONTROL_1
#define XAIE_SHIM_TILE_NOC_MODULE_RESET_LSB		XAIE2PGBL_PL_MODULE_MODULE_RESET_CONTROL_1_NOC_MODULE_RESET_LSB
#define XAIE_SHIM_TILE_NOC_MODULE_RESET_MASK		XAIE2PGBL_PL_MODULE_MODULE_RESET_CONTROL_1_NOC_MODULE_RESET_MASK
#define XAIE_PL_MODULE_SPARE_REG			XAIE2PGBL_PL_MODULE_SPARE_REG

/* AIE Core Vector Registers */
#define XAIE_AIE_TILE_CORE_AMLL0_PART1_REGOFF		XAIE2PGBL_CORE_MODULE_CORE_AMLL0_PART1
#define XAIE_AIE_TILE_CORE_AMLL0_PART1_SIZE		0x480

#define XAIE_AIE_TILE_CORE_WL0_PART1_REGOFF		XAIE2PGBL_CORE_MODULE_CORE_WL0_PART1
#define XAIE_AIE_TILE_CORE_WL0_PART1_SIZE		0x300

#define XAIE_AIE_TILE_CORE_R0_REGOFF			XAIE2PGBL_CORE_MODULE_CORE_R0
#define XAIE_AIE_TILE_CORE_R0_COUNT			32
#define XAIE_AIE_TILE_CORE_R0_STEP_SIZE			0x10

#define XAIE_AIE_TILE_CORE_R0_SIZE			0x200

#define XAIE_MEM_TILE_LOCK_VALUE_REGOFF			XAIE2PGBL_MEM_TILE_MODULE_LOCK0_VALUE
#define XAIE_MEM_TILE_LOCK_VALUE_MASK			XAIE2PGBL_MEM_TILE_MODULE_LOCK0_VALUE_LOCK_VALUE_MASK
#define XAIE_MEM_TILE_LOCK_VALUE_IDX			0x10

#define XAIE_AIE_TILE_CORE_STATUS_REGOFF		XAIE2PGBL_CORE_MODULE_CORE_STATUS
#define XAIE_AIE_TILE_CORE_STATUS_MASK			XAIE2PGBL_CORE_MODULE_CORE_STATUS_MASK

#define XAIE_AIE_TILE_CORE_PC_REGOFF			XAIE2PGBL_CORE_MODULE_CORE_PC
#define XAIE_AIE_TILE_CORE_PC_MASK				XAIE2PGBL_CORE_MODULE_CORE_PC_MASK

#define XAIE_AIE_TILE_CORE_SP_REGOFF			XAIE2PGBL_CORE_MODULE_CORE_SP
#define XAIE_AIE_TILE_CORE_SP_MASK				XAIE2PGBL_CORE_MODULE_CORE_SP_MASK

#define XAIE_AIE_TILE_CORE_LC_REGOFF			XAIE2PGBL_CORE_MODULE_CORE_LC
#define XAIE_AIE_TILE_CORE_LC_MASK				XAIE2PGBL_CORE_MODULE_CORE_LC_MASK

#define XAIE_AIE_TILE_CORE_LR_REGOFF			XAIE2PGBL_CORE_MODULE_CORE_LR
#define XAIE_AIE_TILE_CORE_LR_MASK				XAIE2PGBL_CORE_MODULE_CORE_LR_MASK

#define XAIE_AIE_TILE_LOCK_VALUE_REGOFF			XAIE2PGBL_MEMORY_MODULE_LOCK0_VALUE
#define XAIE_AIE_TILE_LOCK_VALUE_MASK			XAIE2PGBL_MEMORY_MODULE_LOCK0_VALUE_LOCK_VALUE_MASK
#define XAIE_AIE_TILE_LOCK_VALUE_IDX			0x10

#define XAIE_SHIM_TILE_LOCK_VALUE_REGOFF		XAIE2PGBL_NOC_MODULE_LOCK0_VALUE
#define XAIE_SHIM_TILE_LOCK_VALUE_MASK			XAIE2PGBL_NOC_MODULE_LOCK0_VALUE_LOCK_VALUE_MASK
#define XAIE_SHIM_TILE_LOCK_VALUE_IDX           	0x10

#define XAIE_SHIM_TILE_EVENT_STATUS_REGOFF       	XAIE2PGBL_PL_MODULE_EVENT_STATUS0
#define XAIE_SHIM_TILE_EVENT_STATUS_MASK         	XAIE2PGBL_PL_MODULE_EVENT_STATUS0_MASK
#define XAIE_SHIM_TILE_EVENT_STATUS_IDX          	0x04

#define XAIE_MEM_TILE_EVENT_STATUS_REGOFF        	XAIE2PGBL_MEM_TILE_MODULE_EVENT_STATUS0
#define XAIE_MEM_TILE_EVENT_STATUS_MASK          	XAIE2PGBL_MEM_TILE_MODULE_EVENT_STATUS0_MASK
#define XAIE_MEM_TILE_EVENT_STATUS_IDX           	0x04

#define XAIE_AIE_TILE_CORE_MOD_EVENT_STATUS_REGOFF      XAIE2PGBL_CORE_MODULE_EVENT_STATUS0
#define XAIE_AIE_TILE_CORE_MOD_EVENT_STATUS_MASK	XAIE2PGBL_CORE_MODULE_EVENT_STATUS0_MASK
#define XAIE_AIE_TILE_CORE_MOD_EVENT_STATUS_IDX		0x04

#define XAIE_AIE_TILE_MEM_MOD_EVENT_STATUS_REGOFF       XAIE2PGBL_MEMORY_MODULE_EVENT_STATUS0
#define XAIE_AIE_TILE_MEM_MOD_EVENT_STATUS_MASK		XAIE2PGBL_MEMORY_MODULE_EVENT_STATUS0_MASK
#define XAIE_AIE_TILE_MEM_MOD_EVENT_STATUS_IDX		0x04


#endif		/* end of protection macro */

/** @} */
