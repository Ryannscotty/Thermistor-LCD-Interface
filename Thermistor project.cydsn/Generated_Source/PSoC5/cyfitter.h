/*******************************************************************************
* File Name: cyfitter.h
* 
* PSoC Creator  4.4
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2020 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice.h"
#include "cydevice_trm.h"

/* A0_Pin */
#define A0_Pin__0__INTTYPE CYREG_PICU2_INTTYPE3
#define A0_Pin__0__MASK 0x08u
#define A0_Pin__0__PC CYREG_PRT2_PC3
#define A0_Pin__0__PORT 2u
#define A0_Pin__0__SHIFT 3u
#define A0_Pin__AG CYREG_PRT2_AG
#define A0_Pin__AMUX CYREG_PRT2_AMUX
#define A0_Pin__BIE CYREG_PRT2_BIE
#define A0_Pin__BIT_MASK CYREG_PRT2_BIT_MASK
#define A0_Pin__BYP CYREG_PRT2_BYP
#define A0_Pin__CTL CYREG_PRT2_CTL
#define A0_Pin__DM0 CYREG_PRT2_DM0
#define A0_Pin__DM1 CYREG_PRT2_DM1
#define A0_Pin__DM2 CYREG_PRT2_DM2
#define A0_Pin__DR CYREG_PRT2_DR
#define A0_Pin__INP_DIS CYREG_PRT2_INP_DIS
#define A0_Pin__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define A0_Pin__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define A0_Pin__LCD_EN CYREG_PRT2_LCD_EN
#define A0_Pin__MASK 0x08u
#define A0_Pin__PORT 2u
#define A0_Pin__PRT CYREG_PRT2_PRT
#define A0_Pin__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define A0_Pin__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define A0_Pin__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define A0_Pin__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define A0_Pin__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define A0_Pin__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define A0_Pin__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define A0_Pin__PS CYREG_PRT2_PS
#define A0_Pin__SHIFT 3u
#define A0_Pin__SLW CYREG_PRT2_SLW

/* A1_Pin */
#define A1_Pin__0__INTTYPE CYREG_PICU2_INTTYPE4
#define A1_Pin__0__MASK 0x10u
#define A1_Pin__0__PC CYREG_PRT2_PC4
#define A1_Pin__0__PORT 2u
#define A1_Pin__0__SHIFT 4u
#define A1_Pin__AG CYREG_PRT2_AG
#define A1_Pin__AMUX CYREG_PRT2_AMUX
#define A1_Pin__BIE CYREG_PRT2_BIE
#define A1_Pin__BIT_MASK CYREG_PRT2_BIT_MASK
#define A1_Pin__BYP CYREG_PRT2_BYP
#define A1_Pin__CTL CYREG_PRT2_CTL
#define A1_Pin__DM0 CYREG_PRT2_DM0
#define A1_Pin__DM1 CYREG_PRT2_DM1
#define A1_Pin__DM2 CYREG_PRT2_DM2
#define A1_Pin__DR CYREG_PRT2_DR
#define A1_Pin__INP_DIS CYREG_PRT2_INP_DIS
#define A1_Pin__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define A1_Pin__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define A1_Pin__LCD_EN CYREG_PRT2_LCD_EN
#define A1_Pin__MASK 0x10u
#define A1_Pin__PORT 2u
#define A1_Pin__PRT CYREG_PRT2_PRT
#define A1_Pin__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define A1_Pin__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define A1_Pin__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define A1_Pin__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define A1_Pin__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define A1_Pin__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define A1_Pin__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define A1_Pin__PS CYREG_PRT2_PS
#define A1_Pin__SHIFT 4u
#define A1_Pin__SLW CYREG_PRT2_SLW

/* A2_Pin */
#define A2_Pin__0__INTTYPE CYREG_PICU2_INTTYPE5
#define A2_Pin__0__MASK 0x20u
#define A2_Pin__0__PC CYREG_PRT2_PC5
#define A2_Pin__0__PORT 2u
#define A2_Pin__0__SHIFT 5u
#define A2_Pin__AG CYREG_PRT2_AG
#define A2_Pin__AMUX CYREG_PRT2_AMUX
#define A2_Pin__BIE CYREG_PRT2_BIE
#define A2_Pin__BIT_MASK CYREG_PRT2_BIT_MASK
#define A2_Pin__BYP CYREG_PRT2_BYP
#define A2_Pin__CTL CYREG_PRT2_CTL
#define A2_Pin__DM0 CYREG_PRT2_DM0
#define A2_Pin__DM1 CYREG_PRT2_DM1
#define A2_Pin__DM2 CYREG_PRT2_DM2
#define A2_Pin__DR CYREG_PRT2_DR
#define A2_Pin__INP_DIS CYREG_PRT2_INP_DIS
#define A2_Pin__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU2_BASE
#define A2_Pin__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define A2_Pin__LCD_EN CYREG_PRT2_LCD_EN
#define A2_Pin__MASK 0x20u
#define A2_Pin__PORT 2u
#define A2_Pin__PRT CYREG_PRT2_PRT
#define A2_Pin__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define A2_Pin__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define A2_Pin__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define A2_Pin__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define A2_Pin__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define A2_Pin__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define A2_Pin__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define A2_Pin__PS CYREG_PRT2_PS
#define A2_Pin__SHIFT 5u
#define A2_Pin__SLW CYREG_PRT2_SLW

/* RS_Pin_4 */
#define RS_Pin_4__0__INTTYPE CYREG_PICU0_INTTYPE2
#define RS_Pin_4__0__MASK 0x04u
#define RS_Pin_4__0__PC CYREG_PRT0_PC2
#define RS_Pin_4__0__PORT 0u
#define RS_Pin_4__0__SHIFT 2u
#define RS_Pin_4__AG CYREG_PRT0_AG
#define RS_Pin_4__AMUX CYREG_PRT0_AMUX
#define RS_Pin_4__BIE CYREG_PRT0_BIE
#define RS_Pin_4__BIT_MASK CYREG_PRT0_BIT_MASK
#define RS_Pin_4__BYP CYREG_PRT0_BYP
#define RS_Pin_4__CTL CYREG_PRT0_CTL
#define RS_Pin_4__DM0 CYREG_PRT0_DM0
#define RS_Pin_4__DM1 CYREG_PRT0_DM1
#define RS_Pin_4__DM2 CYREG_PRT0_DM2
#define RS_Pin_4__DR CYREG_PRT0_DR
#define RS_Pin_4__INP_DIS CYREG_PRT0_INP_DIS
#define RS_Pin_4__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define RS_Pin_4__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define RS_Pin_4__LCD_EN CYREG_PRT0_LCD_EN
#define RS_Pin_4__MASK 0x04u
#define RS_Pin_4__PORT 0u
#define RS_Pin_4__PRT CYREG_PRT0_PRT
#define RS_Pin_4__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define RS_Pin_4__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define RS_Pin_4__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define RS_Pin_4__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define RS_Pin_4__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define RS_Pin_4__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define RS_Pin_4__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define RS_Pin_4__PS CYREG_PRT0_PS
#define RS_Pin_4__SHIFT 2u
#define RS_Pin_4__SLW CYREG_PRT0_SLW

/* D4_Pin_11 */
#define D4_Pin_11__0__INTTYPE CYREG_PICU0_INTTYPE3
#define D4_Pin_11__0__MASK 0x08u
#define D4_Pin_11__0__PC CYREG_PRT0_PC3
#define D4_Pin_11__0__PORT 0u
#define D4_Pin_11__0__SHIFT 3u
#define D4_Pin_11__AG CYREG_PRT0_AG
#define D4_Pin_11__AMUX CYREG_PRT0_AMUX
#define D4_Pin_11__BIE CYREG_PRT0_BIE
#define D4_Pin_11__BIT_MASK CYREG_PRT0_BIT_MASK
#define D4_Pin_11__BYP CYREG_PRT0_BYP
#define D4_Pin_11__CTL CYREG_PRT0_CTL
#define D4_Pin_11__DM0 CYREG_PRT0_DM0
#define D4_Pin_11__DM1 CYREG_PRT0_DM1
#define D4_Pin_11__DM2 CYREG_PRT0_DM2
#define D4_Pin_11__DR CYREG_PRT0_DR
#define D4_Pin_11__INP_DIS CYREG_PRT0_INP_DIS
#define D4_Pin_11__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define D4_Pin_11__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define D4_Pin_11__LCD_EN CYREG_PRT0_LCD_EN
#define D4_Pin_11__MASK 0x08u
#define D4_Pin_11__PORT 0u
#define D4_Pin_11__PRT CYREG_PRT0_PRT
#define D4_Pin_11__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define D4_Pin_11__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define D4_Pin_11__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define D4_Pin_11__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define D4_Pin_11__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define D4_Pin_11__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define D4_Pin_11__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define D4_Pin_11__PS CYREG_PRT0_PS
#define D4_Pin_11__SHIFT 3u
#define D4_Pin_11__SLW CYREG_PRT0_SLW

/* D5_Pin_12 */
#define D5_Pin_12__0__INTTYPE CYREG_PICU0_INTTYPE4
#define D5_Pin_12__0__MASK 0x10u
#define D5_Pin_12__0__PC CYREG_PRT0_PC4
#define D5_Pin_12__0__PORT 0u
#define D5_Pin_12__0__SHIFT 4u
#define D5_Pin_12__AG CYREG_PRT0_AG
#define D5_Pin_12__AMUX CYREG_PRT0_AMUX
#define D5_Pin_12__BIE CYREG_PRT0_BIE
#define D5_Pin_12__BIT_MASK CYREG_PRT0_BIT_MASK
#define D5_Pin_12__BYP CYREG_PRT0_BYP
#define D5_Pin_12__CTL CYREG_PRT0_CTL
#define D5_Pin_12__DM0 CYREG_PRT0_DM0
#define D5_Pin_12__DM1 CYREG_PRT0_DM1
#define D5_Pin_12__DM2 CYREG_PRT0_DM2
#define D5_Pin_12__DR CYREG_PRT0_DR
#define D5_Pin_12__INP_DIS CYREG_PRT0_INP_DIS
#define D5_Pin_12__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define D5_Pin_12__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define D5_Pin_12__LCD_EN CYREG_PRT0_LCD_EN
#define D5_Pin_12__MASK 0x10u
#define D5_Pin_12__PORT 0u
#define D5_Pin_12__PRT CYREG_PRT0_PRT
#define D5_Pin_12__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define D5_Pin_12__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define D5_Pin_12__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define D5_Pin_12__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define D5_Pin_12__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define D5_Pin_12__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define D5_Pin_12__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define D5_Pin_12__PS CYREG_PRT0_PS
#define D5_Pin_12__SHIFT 4u
#define D5_Pin_12__SLW CYREG_PRT0_SLW

/* D6_Pin_13 */
#define D6_Pin_13__0__INTTYPE CYREG_PICU0_INTTYPE5
#define D6_Pin_13__0__MASK 0x20u
#define D6_Pin_13__0__PC CYREG_PRT0_PC5
#define D6_Pin_13__0__PORT 0u
#define D6_Pin_13__0__SHIFT 5u
#define D6_Pin_13__AG CYREG_PRT0_AG
#define D6_Pin_13__AMUX CYREG_PRT0_AMUX
#define D6_Pin_13__BIE CYREG_PRT0_BIE
#define D6_Pin_13__BIT_MASK CYREG_PRT0_BIT_MASK
#define D6_Pin_13__BYP CYREG_PRT0_BYP
#define D6_Pin_13__CTL CYREG_PRT0_CTL
#define D6_Pin_13__DM0 CYREG_PRT0_DM0
#define D6_Pin_13__DM1 CYREG_PRT0_DM1
#define D6_Pin_13__DM2 CYREG_PRT0_DM2
#define D6_Pin_13__DR CYREG_PRT0_DR
#define D6_Pin_13__INP_DIS CYREG_PRT0_INP_DIS
#define D6_Pin_13__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define D6_Pin_13__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define D6_Pin_13__LCD_EN CYREG_PRT0_LCD_EN
#define D6_Pin_13__MASK 0x20u
#define D6_Pin_13__PORT 0u
#define D6_Pin_13__PRT CYREG_PRT0_PRT
#define D6_Pin_13__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define D6_Pin_13__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define D6_Pin_13__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define D6_Pin_13__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define D6_Pin_13__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define D6_Pin_13__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define D6_Pin_13__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define D6_Pin_13__PS CYREG_PRT0_PS
#define D6_Pin_13__SHIFT 5u
#define D6_Pin_13__SLW CYREG_PRT0_SLW

/* D7_Pin_14 */
#define D7_Pin_14__0__INTTYPE CYREG_PICU0_INTTYPE6
#define D7_Pin_14__0__MASK 0x40u
#define D7_Pin_14__0__PC CYREG_PRT0_PC6
#define D7_Pin_14__0__PORT 0u
#define D7_Pin_14__0__SHIFT 6u
#define D7_Pin_14__AG CYREG_PRT0_AG
#define D7_Pin_14__AMUX CYREG_PRT0_AMUX
#define D7_Pin_14__BIE CYREG_PRT0_BIE
#define D7_Pin_14__BIT_MASK CYREG_PRT0_BIT_MASK
#define D7_Pin_14__BYP CYREG_PRT0_BYP
#define D7_Pin_14__CTL CYREG_PRT0_CTL
#define D7_Pin_14__DM0 CYREG_PRT0_DM0
#define D7_Pin_14__DM1 CYREG_PRT0_DM1
#define D7_Pin_14__DM2 CYREG_PRT0_DM2
#define D7_Pin_14__DR CYREG_PRT0_DR
#define D7_Pin_14__INP_DIS CYREG_PRT0_INP_DIS
#define D7_Pin_14__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define D7_Pin_14__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define D7_Pin_14__LCD_EN CYREG_PRT0_LCD_EN
#define D7_Pin_14__MASK 0x40u
#define D7_Pin_14__PORT 0u
#define D7_Pin_14__PRT CYREG_PRT0_PRT
#define D7_Pin_14__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define D7_Pin_14__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define D7_Pin_14__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define D7_Pin_14__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define D7_Pin_14__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define D7_Pin_14__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define D7_Pin_14__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define D7_Pin_14__PS CYREG_PRT0_PS
#define D7_Pin_14__SHIFT 6u
#define D7_Pin_14__SLW CYREG_PRT0_SLW

/* R_W_Pin_5 */
#define R_W_Pin_5__0__INTTYPE CYREG_PICU0_INTTYPE1
#define R_W_Pin_5__0__MASK 0x02u
#define R_W_Pin_5__0__PC CYREG_PRT0_PC1
#define R_W_Pin_5__0__PORT 0u
#define R_W_Pin_5__0__SHIFT 1u
#define R_W_Pin_5__AG CYREG_PRT0_AG
#define R_W_Pin_5__AMUX CYREG_PRT0_AMUX
#define R_W_Pin_5__BIE CYREG_PRT0_BIE
#define R_W_Pin_5__BIT_MASK CYREG_PRT0_BIT_MASK
#define R_W_Pin_5__BYP CYREG_PRT0_BYP
#define R_W_Pin_5__CTL CYREG_PRT0_CTL
#define R_W_Pin_5__DM0 CYREG_PRT0_DM0
#define R_W_Pin_5__DM1 CYREG_PRT0_DM1
#define R_W_Pin_5__DM2 CYREG_PRT0_DM2
#define R_W_Pin_5__DR CYREG_PRT0_DR
#define R_W_Pin_5__INP_DIS CYREG_PRT0_INP_DIS
#define R_W_Pin_5__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define R_W_Pin_5__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define R_W_Pin_5__LCD_EN CYREG_PRT0_LCD_EN
#define R_W_Pin_5__MASK 0x02u
#define R_W_Pin_5__PORT 0u
#define R_W_Pin_5__PRT CYREG_PRT0_PRT
#define R_W_Pin_5__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define R_W_Pin_5__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define R_W_Pin_5__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define R_W_Pin_5__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define R_W_Pin_5__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define R_W_Pin_5__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define R_W_Pin_5__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define R_W_Pin_5__PS CYREG_PRT0_PS
#define R_W_Pin_5__SHIFT 1u
#define R_W_Pin_5__SLW CYREG_PRT0_SLW

/* LCD_Char_1 */
#define LCD_Char_1_LCDPort__0__INTTYPE CYREG_PICU3_INTTYPE0
#define LCD_Char_1_LCDPort__0__MASK 0x01u
#define LCD_Char_1_LCDPort__0__PC CYREG_PRT3_PC0
#define LCD_Char_1_LCDPort__0__PORT 3u
#define LCD_Char_1_LCDPort__0__SHIFT 0u
#define LCD_Char_1_LCDPort__1__INTTYPE CYREG_PICU3_INTTYPE1
#define LCD_Char_1_LCDPort__1__MASK 0x02u
#define LCD_Char_1_LCDPort__1__PC CYREG_PRT3_PC1
#define LCD_Char_1_LCDPort__1__PORT 3u
#define LCD_Char_1_LCDPort__1__SHIFT 1u
#define LCD_Char_1_LCDPort__2__INTTYPE CYREG_PICU3_INTTYPE2
#define LCD_Char_1_LCDPort__2__MASK 0x04u
#define LCD_Char_1_LCDPort__2__PC CYREG_PRT3_PC2
#define LCD_Char_1_LCDPort__2__PORT 3u
#define LCD_Char_1_LCDPort__2__SHIFT 2u
#define LCD_Char_1_LCDPort__3__INTTYPE CYREG_PICU3_INTTYPE3
#define LCD_Char_1_LCDPort__3__MASK 0x08u
#define LCD_Char_1_LCDPort__3__PC CYREG_PRT3_PC3
#define LCD_Char_1_LCDPort__3__PORT 3u
#define LCD_Char_1_LCDPort__3__SHIFT 3u
#define LCD_Char_1_LCDPort__4__INTTYPE CYREG_PICU3_INTTYPE4
#define LCD_Char_1_LCDPort__4__MASK 0x10u
#define LCD_Char_1_LCDPort__4__PC CYREG_PRT3_PC4
#define LCD_Char_1_LCDPort__4__PORT 3u
#define LCD_Char_1_LCDPort__4__SHIFT 4u
#define LCD_Char_1_LCDPort__5__INTTYPE CYREG_PICU3_INTTYPE5
#define LCD_Char_1_LCDPort__5__MASK 0x20u
#define LCD_Char_1_LCDPort__5__PC CYREG_PRT3_PC5
#define LCD_Char_1_LCDPort__5__PORT 3u
#define LCD_Char_1_LCDPort__5__SHIFT 5u
#define LCD_Char_1_LCDPort__6__INTTYPE CYREG_PICU3_INTTYPE6
#define LCD_Char_1_LCDPort__6__MASK 0x40u
#define LCD_Char_1_LCDPort__6__PC CYREG_PRT3_PC6
#define LCD_Char_1_LCDPort__6__PORT 3u
#define LCD_Char_1_LCDPort__6__SHIFT 6u
#define LCD_Char_1_LCDPort__AG CYREG_PRT3_AG
#define LCD_Char_1_LCDPort__AMUX CYREG_PRT3_AMUX
#define LCD_Char_1_LCDPort__BIE CYREG_PRT3_BIE
#define LCD_Char_1_LCDPort__BIT_MASK CYREG_PRT3_BIT_MASK
#define LCD_Char_1_LCDPort__BYP CYREG_PRT3_BYP
#define LCD_Char_1_LCDPort__CTL CYREG_PRT3_CTL
#define LCD_Char_1_LCDPort__DM0 CYREG_PRT3_DM0
#define LCD_Char_1_LCDPort__DM1 CYREG_PRT3_DM1
#define LCD_Char_1_LCDPort__DM2 CYREG_PRT3_DM2
#define LCD_Char_1_LCDPort__DR CYREG_PRT3_DR
#define LCD_Char_1_LCDPort__INP_DIS CYREG_PRT3_INP_DIS
#define LCD_Char_1_LCDPort__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define LCD_Char_1_LCDPort__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define LCD_Char_1_LCDPort__LCD_EN CYREG_PRT3_LCD_EN
#define LCD_Char_1_LCDPort__MASK 0x7Fu
#define LCD_Char_1_LCDPort__PORT 3u
#define LCD_Char_1_LCDPort__PRT CYREG_PRT3_PRT
#define LCD_Char_1_LCDPort__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define LCD_Char_1_LCDPort__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define LCD_Char_1_LCDPort__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define LCD_Char_1_LCDPort__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define LCD_Char_1_LCDPort__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define LCD_Char_1_LCDPort__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define LCD_Char_1_LCDPort__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define LCD_Char_1_LCDPort__PS CYREG_PRT3_PS
#define LCD_Char_1_LCDPort__SHIFT 0u
#define LCD_Char_1_LCDPort__SLW CYREG_PRT3_SLW

/* ADC_DelSig_1 */
#define ADC_DelSig_1_DEC__COHER CYREG_DEC_COHER
#define ADC_DelSig_1_DEC__CR CYREG_DEC_CR
#define ADC_DelSig_1_DEC__DR1 CYREG_DEC_DR1
#define ADC_DelSig_1_DEC__DR2 CYREG_DEC_DR2
#define ADC_DelSig_1_DEC__DR2H CYREG_DEC_DR2H
#define ADC_DelSig_1_DEC__GCOR CYREG_DEC_GCOR
#define ADC_DelSig_1_DEC__GCORH CYREG_DEC_GCORH
#define ADC_DelSig_1_DEC__GVAL CYREG_DEC_GVAL
#define ADC_DelSig_1_DEC__OCOR CYREG_DEC_OCOR
#define ADC_DelSig_1_DEC__OCORH CYREG_DEC_OCORH
#define ADC_DelSig_1_DEC__OCORM CYREG_DEC_OCORM
#define ADC_DelSig_1_DEC__OUTSAMP CYREG_DEC_OUTSAMP
#define ADC_DelSig_1_DEC__OUTSAMPH CYREG_DEC_OUTSAMPH
#define ADC_DelSig_1_DEC__OUTSAMPM CYREG_DEC_OUTSAMPM
#define ADC_DelSig_1_DEC__OUTSAMPS CYREG_DEC_OUTSAMPS
#define ADC_DelSig_1_DEC__PM_ACT_CFG CYREG_PM_ACT_CFG10
#define ADC_DelSig_1_DEC__PM_ACT_MSK 0x01u
#define ADC_DelSig_1_DEC__PM_STBY_CFG CYREG_PM_STBY_CFG10
#define ADC_DelSig_1_DEC__PM_STBY_MSK 0x01u
#define ADC_DelSig_1_DEC__SHIFT1 CYREG_DEC_SHIFT1
#define ADC_DelSig_1_DEC__SHIFT2 CYREG_DEC_SHIFT2
#define ADC_DelSig_1_DEC__SR CYREG_DEC_SR
#define ADC_DelSig_1_DEC__TRIM__M1 CYREG_FLSHID_CUST_TABLES_DEC_M1
#define ADC_DelSig_1_DEC__TRIM__M2 CYREG_FLSHID_CUST_TABLES_DEC_M2
#define ADC_DelSig_1_DEC__TRIM__M3 CYREG_FLSHID_CUST_TABLES_DEC_M3
#define ADC_DelSig_1_DEC__TRIM__M4 CYREG_FLSHID_CUST_TABLES_DEC_M4
#define ADC_DelSig_1_DEC__TRIM__M5 CYREG_FLSHID_CUST_TABLES_DEC_M5
#define ADC_DelSig_1_DEC__TRIM__M6 CYREG_FLSHID_CUST_TABLES_DEC_M6
#define ADC_DelSig_1_DEC__TRIM__M7 CYREG_FLSHID_CUST_TABLES_DEC_M7
#define ADC_DelSig_1_DEC__TRIM__M8 CYREG_FLSHID_CUST_TABLES_DEC_M8
#define ADC_DelSig_1_DSM__BUF0 CYREG_DSM0_BUF0
#define ADC_DelSig_1_DSM__BUF1 CYREG_DSM0_BUF1
#define ADC_DelSig_1_DSM__BUF2 CYREG_DSM0_BUF2
#define ADC_DelSig_1_DSM__BUF3 CYREG_DSM0_BUF3
#define ADC_DelSig_1_DSM__CLK CYREG_DSM0_CLK
#define ADC_DelSig_1_DSM__CR0 CYREG_DSM0_CR0
#define ADC_DelSig_1_DSM__CR1 CYREG_DSM0_CR1
#define ADC_DelSig_1_DSM__CR10 CYREG_DSM0_CR10
#define ADC_DelSig_1_DSM__CR11 CYREG_DSM0_CR11
#define ADC_DelSig_1_DSM__CR12 CYREG_DSM0_CR12
#define ADC_DelSig_1_DSM__CR13 CYREG_DSM0_CR13
#define ADC_DelSig_1_DSM__CR14 CYREG_DSM0_CR14
#define ADC_DelSig_1_DSM__CR15 CYREG_DSM0_CR15
#define ADC_DelSig_1_DSM__CR16 CYREG_DSM0_CR16
#define ADC_DelSig_1_DSM__CR17 CYREG_DSM0_CR17
#define ADC_DelSig_1_DSM__CR2 CYREG_DSM0_CR2
#define ADC_DelSig_1_DSM__CR3 CYREG_DSM0_CR3
#define ADC_DelSig_1_DSM__CR4 CYREG_DSM0_CR4
#define ADC_DelSig_1_DSM__CR5 CYREG_DSM0_CR5
#define ADC_DelSig_1_DSM__CR6 CYREG_DSM0_CR6
#define ADC_DelSig_1_DSM__CR7 CYREG_DSM0_CR7
#define ADC_DelSig_1_DSM__CR8 CYREG_DSM0_CR8
#define ADC_DelSig_1_DSM__CR9 CYREG_DSM0_CR9
#define ADC_DelSig_1_DSM__DEM0 CYREG_DSM0_DEM0
#define ADC_DelSig_1_DSM__DEM1 CYREG_DSM0_DEM1
#define ADC_DelSig_1_DSM__MISC CYREG_DSM0_MISC
#define ADC_DelSig_1_DSM__OUT0 CYREG_DSM0_OUT0
#define ADC_DelSig_1_DSM__OUT1 CYREG_DSM0_OUT1
#define ADC_DelSig_1_DSM__REF0 CYREG_DSM0_REF0
#define ADC_DelSig_1_DSM__REF1 CYREG_DSM0_REF1
#define ADC_DelSig_1_DSM__REF2 CYREG_DSM0_REF2
#define ADC_DelSig_1_DSM__REF3 CYREG_DSM0_REF3
#define ADC_DelSig_1_DSM__RSVD1 CYREG_DSM0_RSVD1
#define ADC_DelSig_1_DSM__SW0 CYREG_DSM0_SW0
#define ADC_DelSig_1_DSM__SW2 CYREG_DSM0_SW2
#define ADC_DelSig_1_DSM__SW3 CYREG_DSM0_SW3
#define ADC_DelSig_1_DSM__SW4 CYREG_DSM0_SW4
#define ADC_DelSig_1_DSM__SW6 CYREG_DSM0_SW6
#define ADC_DelSig_1_DSM__TR0 CYREG_NPUMP_DSM_TR0
#define ADC_DelSig_1_DSM__TST0 CYREG_DSM0_TST0
#define ADC_DelSig_1_DSM__TST1 CYREG_DSM0_TST1
#define ADC_DelSig_1_Ext_CP_Clk__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define ADC_DelSig_1_Ext_CP_Clk__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define ADC_DelSig_1_Ext_CP_Clk__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define ADC_DelSig_1_Ext_CP_Clk__CFG2_SRC_SEL_MASK 0x07u
#define ADC_DelSig_1_Ext_CP_Clk__INDEX 0x00u
#define ADC_DelSig_1_Ext_CP_Clk__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define ADC_DelSig_1_Ext_CP_Clk__PM_ACT_MSK 0x01u
#define ADC_DelSig_1_Ext_CP_Clk__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define ADC_DelSig_1_Ext_CP_Clk__PM_STBY_MSK 0x01u
#define ADC_DelSig_1_IRQ__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define ADC_DelSig_1_IRQ__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define ADC_DelSig_1_IRQ__INTC_MASK 0x20000000u
#define ADC_DelSig_1_IRQ__INTC_NUMBER 29u
#define ADC_DelSig_1_IRQ__INTC_PRIOR_NUM 7u
#define ADC_DelSig_1_IRQ__INTC_PRIOR_REG CYREG_NVIC_PRI_29
#define ADC_DelSig_1_IRQ__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define ADC_DelSig_1_IRQ__INTC_SET_PD_REG CYREG_NVIC_SETPEND0
#define ADC_DelSig_1_theACLK__CFG0 CYREG_CLKDIST_ACFG0_CFG0
#define ADC_DelSig_1_theACLK__CFG1 CYREG_CLKDIST_ACFG0_CFG1
#define ADC_DelSig_1_theACLK__CFG2 CYREG_CLKDIST_ACFG0_CFG2
#define ADC_DelSig_1_theACLK__CFG2_SRC_SEL_MASK 0x07u
#define ADC_DelSig_1_theACLK__CFG3 CYREG_CLKDIST_ACFG0_CFG3
#define ADC_DelSig_1_theACLK__CFG3_PHASE_DLY_MASK 0x0Fu
#define ADC_DelSig_1_theACLK__INDEX 0x00u
#define ADC_DelSig_1_theACLK__PM_ACT_CFG CYREG_PM_ACT_CFG1
#define ADC_DelSig_1_theACLK__PM_ACT_MSK 0x01u
#define ADC_DelSig_1_theACLK__PM_STBY_CFG CYREG_PM_STBY_CFG1
#define ADC_DelSig_1_theACLK__PM_STBY_MSK 0x01u

/* Enable_Pin_6 */
#define Enable_Pin_6__0__INTTYPE CYREG_PICU0_INTTYPE0
#define Enable_Pin_6__0__MASK 0x01u
#define Enable_Pin_6__0__PC CYREG_PRT0_PC0
#define Enable_Pin_6__0__PORT 0u
#define Enable_Pin_6__0__SHIFT 0u
#define Enable_Pin_6__AG CYREG_PRT0_AG
#define Enable_Pin_6__AMUX CYREG_PRT0_AMUX
#define Enable_Pin_6__BIE CYREG_PRT0_BIE
#define Enable_Pin_6__BIT_MASK CYREG_PRT0_BIT_MASK
#define Enable_Pin_6__BYP CYREG_PRT0_BYP
#define Enable_Pin_6__CTL CYREG_PRT0_CTL
#define Enable_Pin_6__DM0 CYREG_PRT0_DM0
#define Enable_Pin_6__DM1 CYREG_PRT0_DM1
#define Enable_Pin_6__DM2 CYREG_PRT0_DM2
#define Enable_Pin_6__DR CYREG_PRT0_DR
#define Enable_Pin_6__INP_DIS CYREG_PRT0_INP_DIS
#define Enable_Pin_6__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define Enable_Pin_6__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define Enable_Pin_6__LCD_EN CYREG_PRT0_LCD_EN
#define Enable_Pin_6__MASK 0x01u
#define Enable_Pin_6__PORT 0u
#define Enable_Pin_6__PRT CYREG_PRT0_PRT
#define Enable_Pin_6__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define Enable_Pin_6__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define Enable_Pin_6__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define Enable_Pin_6__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define Enable_Pin_6__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define Enable_Pin_6__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define Enable_Pin_6__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define Enable_Pin_6__PS CYREG_PRT0_PS
#define Enable_Pin_6__SHIFT 0u
#define Enable_Pin_6__SLW CYREG_PRT0_SLW

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CY_PROJECT_NAME "Thermistor project"
#define CY_VERSION "PSoC Creator  4.4"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 26u
#define CYDEV_CHIP_DIE_PSOC5LP 2u
#define CYDEV_CHIP_DIE_PSOC5TM 3u
#define CYDEV_CHIP_DIE_TMA4 4u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 5u
#define CYDEV_CHIP_FAMILY_FM3 6u
#define CYDEV_CHIP_FAMILY_FM4 7u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_PSOC6 4u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E161069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 26u
#define CYDEV_CHIP_MEMBER_4AA 25u
#define CYDEV_CHIP_MEMBER_4AB 30u
#define CYDEV_CHIP_MEMBER_4AC 14u
#define CYDEV_CHIP_MEMBER_4AD 15u
#define CYDEV_CHIP_MEMBER_4AE 16u
#define CYDEV_CHIP_MEMBER_4D 20u
#define CYDEV_CHIP_MEMBER_4E 6u
#define CYDEV_CHIP_MEMBER_4F 27u
#define CYDEV_CHIP_MEMBER_4G 4u
#define CYDEV_CHIP_MEMBER_4H 24u
#define CYDEV_CHIP_MEMBER_4I 32u
#define CYDEV_CHIP_MEMBER_4J 21u
#define CYDEV_CHIP_MEMBER_4K 22u
#define CYDEV_CHIP_MEMBER_4L 31u
#define CYDEV_CHIP_MEMBER_4M 29u
#define CYDEV_CHIP_MEMBER_4N 11u
#define CYDEV_CHIP_MEMBER_4O 8u
#define CYDEV_CHIP_MEMBER_4P 28u
#define CYDEV_CHIP_MEMBER_4Q 17u
#define CYDEV_CHIP_MEMBER_4R 9u
#define CYDEV_CHIP_MEMBER_4S 12u
#define CYDEV_CHIP_MEMBER_4T 10u
#define CYDEV_CHIP_MEMBER_4U 5u
#define CYDEV_CHIP_MEMBER_4V 23u
#define CYDEV_CHIP_MEMBER_4W 13u
#define CYDEV_CHIP_MEMBER_4X 7u
#define CYDEV_CHIP_MEMBER_4Y 18u
#define CYDEV_CHIP_MEMBER_4Z 19u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_MEMBER_5B 2u
#define CYDEV_CHIP_MEMBER_6A 33u
#define CYDEV_CHIP_MEMBER_FM3 37u
#define CYDEV_CHIP_MEMBER_FM4 38u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 34u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 35u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 36u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4AA_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AB_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AC_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AD_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4AE_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4R_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4S_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4T_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4V_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4W_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4X_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Y_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Z_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_6A_ES 17u
#define CYDEV_CHIP_REVISION_6A_NO_UDB 33u
#define CYDEV_CHIP_REVISION_6A_PRODUCTION 33u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x1200
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00000000u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5.0
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5.0
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5.0
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5.0
#define CYDEV_VIO3_MV 5000
#define CYIPBLOCK_ARM_CM3_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAN_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SAR_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define DMA_CHANNELS_USED__MASK0 0x00000000u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
