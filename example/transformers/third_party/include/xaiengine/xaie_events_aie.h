/******************************************************************************
* Copyright (C) 2019 - 2020 Xilinx, Inc.  All rights reserved.
* SPDX-License-Identifier: MIT
******************************************************************************/


/*****************************************************************************/
/**
* @file xaie_events_aie.h
* @{
*
* Header file containing all events macros for AIE.
*
* <pre>
* MODIFICATION HISTORY:
*
* Ver   Who      Date     Changes
* ----- ------   -------- -----------------------------------------------------
* 1.0   Dishita  11/21/2019  Initial creation
* 1.1   Nishad   06/02/2020  Move event files under events directory
* 1.2   Nishad   06/02/2020  Rename file attribute to xaie_events_aie.h
* 1.3   Nishad   06/03/2020  Rename XAIEGBL_<MODULE>_EVENT_* macros to
*			     XAIE_EVENTS_<MODULE>_*
* 1.4   Nishad   06/09/2020  Fix typo in *_MEMORY_* macro
* </pre>
*
******************************************************************************/
#ifndef XAIE_EVENTS_AIE_H
#define XAIE_EVENTS_AIE_H

/*
 * Macro of all the Events of AIE for all modules: Core, Memory of AIE tile
 * MEM tile and PL tile
 */

/* Declaration of events for core module of aie tile */
#define XAIE_EVENTS_CORE_NONE					0U
#define XAIE_EVENTS_CORE_TRUE					1U
#define XAIE_EVENTS_CORE_GROUP_0				2U
#define XAIE_EVENTS_CORE_TIMER_SYNC				3U
#define XAIE_EVENTS_CORE_TIMER_VALUE_REACHED			4U
#define XAIE_EVENTS_CORE_PERF_CNT_0				5U
#define XAIE_EVENTS_CORE_PERF_CNT_1				6U
#define XAIE_EVENTS_CORE_PERF_CNT_2				7U
#define XAIE_EVENTS_CORE_PERF_CNT_3				8U
#define XAIE_EVENTS_CORE_COMBO_EVENT_0				9U
#define XAIE_EVENTS_CORE_COMBO_EVENT_1				10U
#define XAIE_EVENTS_CORE_COMBO_EVENT_2				11U
#define XAIE_EVENTS_CORE_COMBO_EVENT_3				12U
#define XAIE_EVENTS_CORE_GROUP_PC_EVENT				15U
#define XAIE_EVENTS_CORE_PC_0					16U
#define XAIE_EVENTS_CORE_PC_1					17U
#define XAIE_EVENTS_CORE_PC_2					18U
#define XAIE_EVENTS_CORE_PC_3					19U
#define XAIE_EVENTS_CORE_PC_RANGE_0_1				20U
#define XAIE_EVENTS_CORE_PC_RANGE_2_3				21U
#define XAIE_EVENTS_CORE_GROUP_STALL				22U
#define XAIE_EVENTS_CORE_MEMORY_STALL				23U
#define XAIE_EVENTS_CORE_STREAM_STALL				24U
#define XAIE_EVENTS_CORE_CASCADE_STALL				25U
#define XAIE_EVENTS_CORE_LOCK_STALL				26U
#define XAIE_EVENTS_CORE_DEBUG_HALTED				27U
#define XAIE_EVENTS_CORE_ACTIVE					28U
#define XAIE_EVENTS_CORE_DISABLED				29U
#define XAIE_EVENTS_CORE_ECC_ERROR_STALL			30U
#define XAIE_EVENTS_CORE_ECC_SCRUBBING_STALL			31U
#define XAIE_EVENTS_CORE_GROUP_PROGRAM_FLOW			32U
#define XAIE_EVENTS_CORE_INSTR_EVENT_0				33U
#define XAIE_EVENTS_CORE_INSTR_EVENT_1				34U
#define XAIE_EVENTS_CORE_INSTR_CALL				35U
#define XAIE_EVENTS_CORE_INSTR_RETURN				36U
#define XAIE_EVENTS_CORE_INSTR_VECTOR				37U
#define XAIE_EVENTS_CORE_INSTR_LOAD				38U
#define XAIE_EVENTS_CORE_INSTR_STORE				39U
#define XAIE_EVENTS_CORE_INSTR_STREAM_GET			40U
#define XAIE_EVENTS_CORE_INSTR_STREAM_PUT			41U
#define XAIE_EVENTS_CORE_INSTR_CASCADE_GET			42U
#define XAIE_EVENTS_CORE_INSTR_CASCADE_PUT			43U
#define XAIE_EVENTS_CORE_INSTR_LOCK_ACQUIRE_REQ			44U
#define XAIE_EVENTS_CORE_INSTR_LOCK_RELEASE_REQ			45U
#define XAIE_EVENTS_CORE_GROUP_ERRORS_0				46U
#define XAIE_EVENTS_CORE_GROUP_ERRORS_1				47U
#define XAIE_EVENTS_CORE_SRS_SATURATE				48U
#define XAIE_EVENTS_CORE_UPS_SATURATE				49U
#define XAIE_EVENTS_CORE_FP_OVERFLOW				50U
#define XAIE_EVENTS_CORE_FP_UNDERFLOW				51U
#define XAIE_EVENTS_CORE_FP_INVALID				52U
#define XAIE_EVENTS_CORE_FP_DIV_BY_ZERO				53U
#define XAIE_EVENTS_CORE_TLAST_IN_WSS_WORDS_0_2			54U
#define XAIE_EVENTS_CORE_PM_REG_ACCESS_FAILURE			55U
#define XAIE_EVENTS_CORE_STREAM_PKT_PARITY_ERROR		56U
#define XAIE_EVENTS_CORE_CONTROL_PKT_ERROR			57U
#define XAIE_EVENTS_CORE_AXI_MM_SLAVE_ERROR			58U
#define XAIE_EVENTS_CORE_INSTR_DECOMPRSN_ERROR			59U
#define XAIE_EVENTS_CORE_DM_ADDRESS_OUT_OF_RANGE		60U
#define XAIE_EVENTS_CORE_PM_ECC_ERROR_SCRUB_CORRECTED		61U
#define XAIE_EVENTS_CORE_PM_ECC_ERROR_SCRUB_2BIT		62U
#define XAIE_EVENTS_CORE_PM_ECC_ERROR_1BIT			63U
#define XAIE_EVENTS_CORE_PM_ECC_ERROR_2BIT			64U
#define XAIE_EVENTS_CORE_PM_ADDRESS_OUT_OF_RANGE		65U
#define XAIE_EVENTS_CORE_DM_ACCESS_TO_UNAVAILABLE		66U
#define XAIE_EVENTS_CORE_LOCK_ACCESS_TO_UNAVAILABLE		67U
#define XAIE_EVENTS_CORE_INSTR_EVENT_2				68U
#define XAIE_EVENTS_CORE_INSTR_EVENT_3				69U
#define XAIE_EVENTS_CORE_GROUP_STREAM_SWITCH			73U
#define XAIE_EVENTS_CORE_PORT_IDLE_0				74U
#define XAIE_EVENTS_CORE_PORT_RUNNING_0				75U
#define XAIE_EVENTS_CORE_PORT_STALLED_0				76U
#define XAIE_EVENTS_CORE_PORT_TLAST_0				77U
#define XAIE_EVENTS_CORE_PORT_IDLE_1				78U
#define XAIE_EVENTS_CORE_PORT_RUNNING_1				79U
#define XAIE_EVENTS_CORE_PORT_STALLED_1				80U
#define XAIE_EVENTS_CORE_PORT_TLAST_1				81U
#define XAIE_EVENTS_CORE_PORT_IDLE_2				82U
#define XAIE_EVENTS_CORE_PORT_RUNNING_2				83U
#define XAIE_EVENTS_CORE_PORT_STALLED_2				84U
#define XAIE_EVENTS_CORE_PORT_TLAST_2				85U
#define XAIE_EVENTS_CORE_PORT_IDLE_3				86U
#define XAIE_EVENTS_CORE_PORT_RUNNING_3				87U
#define XAIE_EVENTS_CORE_PORT_STALLED_3				88U
#define XAIE_EVENTS_CORE_PORT_TLAST_3				89U
#define XAIE_EVENTS_CORE_PORT_IDLE_4				90U
#define XAIE_EVENTS_CORE_PORT_RUNNING_4				91U
#define XAIE_EVENTS_CORE_PORT_STALLED_4				92U
#define XAIE_EVENTS_CORE_PORT_TLAST_4				93U
#define XAIE_EVENTS_CORE_PORT_IDLE_5				94U
#define XAIE_EVENTS_CORE_PORT_RUNNING_5				95U
#define XAIE_EVENTS_CORE_PORT_STALLED_5				96U
#define XAIE_EVENTS_CORE_PORT_TLAST_5				97U
#define XAIE_EVENTS_CORE_PORT_IDLE_6				98U
#define XAIE_EVENTS_CORE_PORT_RUNNING_6				99U
#define XAIE_EVENTS_CORE_PORT_STALLED_6				100U
#define XAIE_EVENTS_CORE_PORT_TLAST_6				101U
#define XAIE_EVENTS_CORE_PORT_IDLE_7				102U
#define XAIE_EVENTS_CORE_PORT_RUNNING_7				103U
#define XAIE_EVENTS_CORE_PORT_STALLED_7				104U
#define XAIE_EVENTS_CORE_PORT_TLAST_7				105U
#define XAIE_EVENTS_CORE_GROUP_BROADCAST			106U
#define XAIE_EVENTS_CORE_BROADCAST_0				107U
#define XAIE_EVENTS_CORE_BROADCAST_1				108U
#define XAIE_EVENTS_CORE_BROADCAST_2				109U
#define XAIE_EVENTS_CORE_BROADCAST_3				110U
#define XAIE_EVENTS_CORE_BROADCAST_4				111U
#define XAIE_EVENTS_CORE_BROADCAST_5				112U
#define XAIE_EVENTS_CORE_BROADCAST_6				113U
#define XAIE_EVENTS_CORE_BROADCAST_7				114U
#define XAIE_EVENTS_CORE_BROADCAST_8				115U
#define XAIE_EVENTS_CORE_BROADCAST_9				116U
#define XAIE_EVENTS_CORE_BROADCAST_10				117U
#define XAIE_EVENTS_CORE_BROADCAST_11				118U
#define XAIE_EVENTS_CORE_BROADCAST_12				119U
#define XAIE_EVENTS_CORE_BROADCAST_13				120U
#define XAIE_EVENTS_CORE_BROADCAST_14				121U
#define XAIE_EVENTS_CORE_BROADCAST_15				122U
#define XAIE_EVENTS_CORE_GROUP_USER_EVENT			123U
#define XAIE_EVENTS_CORE_USER_EVENT_0				124U
#define XAIE_EVENTS_CORE_USER_EVENT_1				125U
#define XAIE_EVENTS_CORE_USER_EVENT_2				126U
#define XAIE_EVENTS_CORE_USER_EVENT_3				127U

/* Declaration of events for Mem module of aie tile */
#define XAIE_EVENTS_MEM_NONE					0U
#define XAIE_EVENTS_MEM_TRUE					1U
#define XAIE_EVENTS_MEM_GROUP_0					2U
#define XAIE_EVENTS_MEM_TIMER_SYNC				3U
#define XAIE_EVENTS_MEM_TIMER_VALUE_REACHED			4U
#define XAIE_EVENTS_MEM_PERF_CNT_0				5U
#define XAIE_EVENTS_MEM_PERF_CNT_1				6U
#define XAIE_EVENTS_MEM_COMBO_EVENT_0				7U
#define XAIE_EVENTS_MEM_COMBO_EVENT_1				8U
#define XAIE_EVENTS_MEM_COMBO_EVENT_2				9U
#define XAIE_EVENTS_MEM_COMBO_EVENT_3				10U
#define XAIE_EVENTS_MEM_GROUP_WATCHPOINT			15U
#define XAIE_EVENTS_MEM_WATCHPOINT_0				16U
#define XAIE_EVENTS_MEM_WATCHPOINT_1				17U
#define XAIE_EVENTS_MEM_GROUP_DMA_ACTIVITY			20U
#define XAIE_EVENTS_MEM_DMA_S2MM_0_START_BD			21U
#define XAIE_EVENTS_MEM_DMA_S2MM_1_START_BD			22U
#define XAIE_EVENTS_MEM_DMA_MM2S_0_START_BD			23U
#define XAIE_EVENTS_MEM_DMA_MM2S_1_START_BD			24U
#define XAIE_EVENTS_MEM_DMA_S2MM_0_FINISHED_BD			25U
#define XAIE_EVENTS_MEM_DMA_S2MM_1_FINISHED_BD			26U
#define XAIE_EVENTS_MEM_DMA_MM2S_0_FINISHED_BD			27U
#define XAIE_EVENTS_MEM_DMA_MM2S_1_FINISHED_BD			28U
#define XAIE_EVENTS_MEM_DMA_S2MM_0_GO_TO_IDLE			29U
#define XAIE_EVENTS_MEM_DMA_S2MM_1_GO_TO_IDLE			30U
#define XAIE_EVENTS_MEM_DMA_MM2S_0_GO_TO_IDLE			31U
#define XAIE_EVENTS_MEM_DMA_MM2S_1_GO_TO_IDLE			32U
#define XAIE_EVENTS_MEM_DMA_S2MM_0_STALLED_LOCK_ACQUIRE		33U
#define XAIE_EVENTS_MEM_DMA_S2MM_1_STALLED_LOCK_ACQUIRE		34U
#define XAIE_EVENTS_MEM_DMA_MM2S_0_STALLED_LOCK_ACQUIRE		35U
#define XAIE_EVENTS_MEM_DMA_MM2S_1_STALLED_LOCK_ACQUIRE		36U
#define XAIE_EVENTS_MEM_DMA_S2MM_0_MEMORY_CONFLICT		37U
#define XAIE_EVENTS_MEM_DMA_S2MM_1_MEMORY_CONFLICT		38U
#define XAIE_EVENTS_MEM_DMA_MM2S_0_MEMORY_CONFLICT		39U
#define XAIE_EVENTS_MEM_DMA_MM2S_1_MEMORY_CONFLICT		40U
#define XAIE_EVENTS_MEM_GROUP_LOCK				43U
#define XAIE_EVENTS_MEM_LOCK_0_ACQ				44U
#define XAIE_EVENTS_MEM_LOCK_0_REL				45U
#define XAIE_EVENTS_MEM_LOCK_1_ACQ				46U
#define XAIE_EVENTS_MEM_LOCK_1_REL				47U
#define XAIE_EVENTS_MEM_LOCK_2_ACQ				48U
#define XAIE_EVENTS_MEM_LOCK_2_REL				49U
#define XAIE_EVENTS_MEM_LOCK_3_ACQ				50U
#define XAIE_EVENTS_MEM_LOCK_3_REL				51U
#define XAIE_EVENTS_MEM_LOCK_4_ACQ				52U
#define XAIE_EVENTS_MEM_LOCK_4_REL				53U
#define XAIE_EVENTS_MEM_LOCK_5_ACQ				54U
#define XAIE_EVENTS_MEM_LOCK_5_REL				55U
#define XAIE_EVENTS_MEM_LOCK_6_ACQ				56U
#define XAIE_EVENTS_MEM_LOCK_6_REL				57U
#define XAIE_EVENTS_MEM_LOCK_7_ACQ				58U
#define XAIE_EVENTS_MEM_LOCK_7_REL				59U
#define XAIE_EVENTS_MEM_LOCK_8_ACQ				60U
#define XAIE_EVENTS_MEM_LOCK_8_REL				61U
#define XAIE_EVENTS_MEM_LOCK_9_ACQ				62U
#define XAIE_EVENTS_MEM_LOCK_9_REL				63U
#define XAIE_EVENTS_MEM_LOCK_10_ACQ				64U
#define XAIE_EVENTS_MEM_LOCK_10_REL				65U
#define XAIE_EVENTS_MEM_LOCK_11_ACQ				66U
#define XAIE_EVENTS_MEM_LOCK_11_REL				67U
#define XAIE_EVENTS_MEM_LOCK_12_ACQ				68U
#define XAIE_EVENTS_MEM_LOCK_12_REL				69U
#define XAIE_EVENTS_MEM_LOCK_13_ACQ				70U
#define XAIE_EVENTS_MEM_LOCK_13_REL				71U
#define XAIE_EVENTS_MEM_LOCK_14_ACQ				72U
#define XAIE_EVENTS_MEM_LOCK_14_REL				73U
#define XAIE_EVENTS_MEM_LOCK_15_ACQ				74U
#define XAIE_EVENTS_MEM_LOCK_15_REL				75U
#define XAIE_EVENTS_MEM_GROUP_MEMORY_CONFLICT			76U
#define XAIE_EVENTS_MEM_CONFLICT_DM_BANK_0			77U
#define XAIE_EVENTS_MEM_CONFLICT_DM_BANK_1			78U
#define XAIE_EVENTS_MEM_CONFLICT_DM_BANK_2			79U
#define XAIE_EVENTS_MEM_CONFLICT_DM_BANK_3			80U
#define XAIE_EVENTS_MEM_CONFLICT_DM_BANK_4			81U
#define XAIE_EVENTS_MEM_CONFLICT_DM_BANK_5			82U
#define XAIE_EVENTS_MEM_CONFLICT_DM_BANK_6			83U
#define XAIE_EVENTS_MEM_CONFLICT_DM_BANK_7			84U
#define XAIE_EVENTS_MEM_GROUP_ERRORS				86U
#define XAIE_EVENTS_MEM_DM_ECC_ERROR_SCRUB_CORRECTED		87U
#define XAIE_EVENTS_MEM_DM_ECC_ERROR_SCRUB_2BIT			88U
#define XAIE_EVENTS_MEM_DM_ECC_ERROR_1BIT			89U
#define XAIE_EVENTS_MEM_DM_ECC_ERROR_2BIT			90U
#define XAIE_EVENTS_MEM_DM_PARITY_ERROR_BANK_2			91U
#define XAIE_EVENTS_MEM_DM_PARITY_ERROR_BANK_3			92U
#define XAIE_EVENTS_MEM_DM_PARITY_ERROR_BANK_4			93U
#define XAIE_EVENTS_MEM_DM_PARITY_ERROR_BANK_5			94U
#define XAIE_EVENTS_MEM_DM_PARITY_ERROR_BANK_6			95U
#define XAIE_EVENTS_MEM_DM_PARITY_ERROR_BANK_7			96U
#define XAIE_EVENTS_MEM_DMA_S2MM_0_ERROR			97U
#define XAIE_EVENTS_MEM_DMA_S2MM_1_ERROR			98U
#define XAIE_EVENTS_MEM_DMA_MM2S_0_ERROR			99U
#define XAIE_EVENTS_MEM_DMA_MM2S_1_ERROR			100U
#define XAIE_EVENTS_MEM_GROUP_BROADCAST				106U
#define XAIE_EVENTS_MEM_BROADCAST_0				107U
#define XAIE_EVENTS_MEM_BROADCAST_1				108U
#define XAIE_EVENTS_MEM_BROADCAST_2				109U
#define XAIE_EVENTS_MEM_BROADCAST_3				110U
#define XAIE_EVENTS_MEM_BROADCAST_4				111U
#define XAIE_EVENTS_MEM_BROADCAST_5				112U
#define XAIE_EVENTS_MEM_BROADCAST_6				113U
#define XAIE_EVENTS_MEM_BROADCAST_7				114U
#define XAIE_EVENTS_MEM_BROADCAST_8				115U
#define XAIE_EVENTS_MEM_BROADCAST_9				116U
#define XAIE_EVENTS_MEM_BROADCAST_10				117U
#define XAIE_EVENTS_MEM_BROADCAST_11				118U
#define XAIE_EVENTS_MEM_BROADCAST_12				119U
#define XAIE_EVENTS_MEM_BROADCAST_13				120U
#define XAIE_EVENTS_MEM_BROADCAST_14				121U
#define XAIE_EVENTS_MEM_BROADCAST_15				122U
#define XAIE_EVENTS_MEM_GROUP_USER_EVENT			123U
#define XAIE_EVENTS_MEM_USER_EVENT_0				124U
#define XAIE_EVENTS_MEM_USER_EVENT_1				125U
#define XAIE_EVENTS_MEM_USER_EVENT_2				126U
#define XAIE_EVENTS_MEM_USER_EVENT_3				127U

/* Declaration of events for PL/ Noc module */
#define XAIE_EVENTS_PL_NONE					0U
#define XAIE_EVENTS_PL_TRUE					1U
#define XAIE_EVENTS_PL_GROUP_0					2U
#define XAIE_EVENTS_PL_TIMER_SYNC				3U
#define XAIE_EVENTS_PL_TIMER_VALUE_REACHED			4U
#define XAIE_EVENTS_PL_PERF_CNT_0				5U
#define XAIE_EVENTS_PL_PERF_CNT_1				6U
#define XAIE_EVENTS_PL_COMBO_EVENT_0				7U
#define XAIE_EVENTS_PL_COMBO_EVENT_1				8U
#define XAIE_EVENTS_PL_COMBO_EVENT_2				9U
#define XAIE_EVENTS_PL_COMBO_EVENT_3				10U
#define XAIE_EVENTS_PL_GROUP_DMA_ACTIVITY			11U
#define XAIE_EVENTS_PL_DMA_S2MM_0_START_BD			12U
#define XAIE_EVENTS_PL_DMA_S2MM_1_START_BD			13U
#define XAIE_EVENTS_PL_DMA_MM2S_0_START_BD			14U
#define XAIE_EVENTS_PL_DMA_MM2S_1_START_BD			15U
#define XAIE_EVENTS_PL_DMA_S2MM_0_FINISHED_BD			16U
#define XAIE_EVENTS_PL_DMA_S2MM_1_FINISHED_BD			17U
#define XAIE_EVENTS_PL_DMA_MM2S_0_FINISHED_BD			18U
#define XAIE_EVENTS_PL_DMA_MM2S_1_FINISHED_BD			19U
#define XAIE_EVENTS_PL_DMA_S2MM_0_GO_TO_IDLE			20U
#define XAIE_EVENTS_PL_DMA_S2MM_1_GO_TO_IDLE			21U
#define XAIE_EVENTS_PL_DMA_MM2S_0_GO_TO_IDLE			22U
#define XAIE_EVENTS_PL_DMA_MM2S_1_GO_TO_IDLE			23U
#define XAIE_EVENTS_PL_DMA_S2MM_0_STALLED_LOCK_ACQUIRE		24U
#define XAIE_EVENTS_PL_DMA_S2MM_1_STALLED_LOCK_ACQUIRE		25U
#define XAIE_EVENTS_PL_DMA_MM2S_0_STALLED_LOCK_ACQUIRE		26U
#define XAIE_EVENTS_PL_DMA_MM2S_1_STALLED_LOCK_ACQUIRE		27U
#define XAIE_EVENTS_PL_GROUP_LOCK				28U
#define XAIE_EVENTS_PL_LOCK_0_ACQUIRED				29U
#define XAIE_EVENTS_PL_LOCK_0_RELEASED				30U
#define XAIE_EVENTS_PL_LOCK_1_ACQUIRED				31U
#define XAIE_EVENTS_PL_LOCK_1_RELEASED				32U
#define XAIE_EVENTS_PL_LOCK_2_ACQUIRED				33U
#define XAIE_EVENTS_PL_LOCK_2_RELEASED				34U
#define XAIE_EVENTS_PL_LOCK_3_ACQUIRED				35U
#define XAIE_EVENTS_PL_LOCK_3_RELEASED				36U
#define XAIE_EVENTS_PL_LOCK_4_ACQUIRED				37U
#define XAIE_EVENTS_PL_LOCK_4_RELEASED				38U
#define XAIE_EVENTS_PL_LOCK_5_ACQUIRED				39U
#define XAIE_EVENTS_PL_LOCK_5_RELEASED				40U
#define XAIE_EVENTS_PL_LOCK_6_ACQUIRED				41U
#define XAIE_EVENTS_PL_LOCK_6_RELEASED				42U
#define XAIE_EVENTS_PL_LOCK_7_ACQUIRED				43U
#define XAIE_EVENTS_PL_LOCK_7_RELEASED				44U
#define XAIE_EVENTS_PL_LOCK_8_ACQUIRED				45U
#define XAIE_EVENTS_PL_LOCK_8_RELEASED				46U
#define XAIE_EVENTS_PL_LOCK_9_ACQUIRED				47U
#define XAIE_EVENTS_PL_LOCK_9_RELEASED				48U
#define XAIE_EVENTS_PL_LOCK_10_ACQUIRED				49U
#define XAIE_EVENTS_PL_LOCK_10_RELEASED				50U
#define XAIE_EVENTS_PL_LOCK_11_ACQUIRED				51U
#define XAIE_EVENTS_PL_LOCK_11_RELEASED				52U
#define XAIE_EVENTS_PL_LOCK_12_ACQUIRED				53U
#define XAIE_EVENTS_PL_LOCK_12_RELEASED				54U
#define XAIE_EVENTS_PL_LOCK_13_ACQUIRED				55U
#define XAIE_EVENTS_PL_LOCK_13_RELEASED				56U
#define XAIE_EVENTS_PL_LOCK_14_ACQUIRED				57U
#define XAIE_EVENTS_PL_LOCK_14_RELEASED				58U
#define XAIE_EVENTS_PL_LOCK_15_ACQUIRED				59U
#define XAIE_EVENTS_PL_LOCK_15_RELEASED				60U
#define XAIE_EVENTS_PL_GROUP_ERRORS				61U
#define XAIE_EVENTS_PL_AXI_MM_SLAVE_TILE_ERROR			62U
#define XAIE_EVENTS_PL_CONTROL_PKT_ERROR			63U
#define XAIE_EVENTS_PL_AXI_MM_DECODE_NSU_ERROR			64U
#define XAIE_EVENTS_PL_AXI_MM_SLAVE_NSU_ERROR			65U
#define XAIE_EVENTS_PL_AXI_MM_UNSUPPORTED_TRAFFIC		66U
#define XAIE_EVENTS_PL_AXI_MM_UNSECURE_ACCESS_IN_SECURE_MODE	67U
#define XAIE_EVENTS_PL_AXI_MM_BYTE_STROBE_ERROR			68U
#define XAIE_EVENTS_PL_DMA_S2MM_0_ERROR				69U
#define XAIE_EVENTS_PL_DMA_S2MM_1_ERROR				70U
#define XAIE_EVENTS_PL_DMA_MM2S_0_ERROR				71U
#define XAIE_EVENTS_PL_DMA_MM2S_1_ERROR				72U
#define XAIE_EVENTS_PL_GROUP_STREAM_SWITCH			73U
#define XAIE_EVENTS_PL_PORT_IDLE_0				74U
#define XAIE_EVENTS_PL_PORT_RUNNING_0				75U
#define XAIE_EVENTS_PL_PORT_STALLED_0				76U
#define XAIE_EVENTS_PL_PORT_TLAST_0				77U
#define XAIE_EVENTS_PL_PORT_IDLE_1				78U
#define XAIE_EVENTS_PL_PORT_RUNNING_1				79U
#define XAIE_EVENTS_PL_PORT_STALLED_1				80U
#define XAIE_EVENTS_PL_PORT_TLAST_1				81U
#define XAIE_EVENTS_PL_PORT_IDLE_2				82U
#define XAIE_EVENTS_PL_PORT_RUNNING_2				83U
#define XAIE_EVENTS_PL_PORT_STALLED_2				84U
#define XAIE_EVENTS_PL_PORT_TLAST_2				85U
#define XAIE_EVENTS_PL_PORT_IDLE_3				86U
#define XAIE_EVENTS_PL_PORT_RUNNING_3				87U
#define XAIE_EVENTS_PL_PORT_STALLED_3				88U
#define XAIE_EVENTS_PL_PORT_TLAST_3				89U
#define XAIE_EVENTS_PL_PORT_IDLE_4				90U
#define XAIE_EVENTS_PL_PORT_RUNNING_4				91U
#define XAIE_EVENTS_PL_PORT_STALLED_4				92U
#define XAIE_EVENTS_PL_PORT_TLAST_4				93U
#define XAIE_EVENTS_PL_PORT_IDLE_5				94U
#define XAIE_EVENTS_PL_PORT_RUNNING_5				95U
#define XAIE_EVENTS_PL_PORT_STALLED_5				96U
#define XAIE_EVENTS_PL_PORT_TLAST_5				97U
#define XAIE_EVENTS_PL_PORT_IDLE_6				98U
#define XAIE_EVENTS_PL_PORT_RUNNING_6				99U
#define XAIE_EVENTS_PL_PORT_STALLED_6				100U
#define XAIE_EVENTS_PL_PORT_TLAST_6				101U
#define XAIE_EVENTS_PL_PORT_IDLE_7				102U
#define XAIE_EVENTS_PL_PORT_RUNNING_7				103U
#define XAIE_EVENTS_PL_PORT_STALLED_7				104U
#define XAIE_EVENTS_PL_PORT_TLAST_7				105U
#define XAIE_EVENTS_PL_GROUP_BROADCAST_A			106U
#define XAIE_EVENTS_PL_BROADCAST_A_0				107U
#define XAIE_EVENTS_PL_BROADCAST_A_1				108U
#define XAIE_EVENTS_PL_BROADCAST_A_2				109U
#define XAIE_EVENTS_PL_BROADCAST_A_3				110U
#define XAIE_EVENTS_PL_BROADCAST_A_4				111U
#define XAIE_EVENTS_PL_BROADCAST_A_5				112U
#define XAIE_EVENTS_PL_BROADCAST_A_6				113U
#define XAIE_EVENTS_PL_BROADCAST_A_7				114U
#define XAIE_EVENTS_PL_BROADCAST_A_8				115U
#define XAIE_EVENTS_PL_BROADCAST_A_9				116U
#define XAIE_EVENTS_PL_BROADCAST_A_10				117U
#define XAIE_EVENTS_PL_BROADCAST_A_11				118U
#define XAIE_EVENTS_PL_BROADCAST_A_12				119U
#define XAIE_EVENTS_PL_BROADCAST_A_13				120U
#define XAIE_EVENTS_PL_BROADCAST_A_14				121U
#define XAIE_EVENTS_PL_BROADCAST_A_15				122U
#define XAIE_EVENTS_PL_GROUP_USER_EVENT				123U
#define XAIE_EVENTS_PL_USER_EVENT_0				124U
#define XAIE_EVENTS_PL_USER_EVENT_1				125U
#define XAIE_EVENTS_PL_USER_EVENT_2				126U
#define XAIE_EVENTS_PL_USER_EVENT_3				127U

#endif /* XAIE_EVENTS_AIE_H */
/** @} */
