/*******************************************************************************
* File Name: cyfittergnu.inc
* 
* PSoC Creator  4.2
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

.ifndef INCLUDED_CYFITTERGNU_INC
.set INCLUDED_CYFITTERGNU_INC, 1
.include "cydevicegnu.inc"
.include "cydevicegnu_trm.inc"

/* ss */
.set ss__0__INTTYPE, CYREG_PICU12_INTTYPE3
.set ss__0__MASK, 0x08
.set ss__0__PC, CYREG_PRT12_PC3
.set ss__0__PORT, 12
.set ss__0__SHIFT, 3
.set ss__AG, CYREG_PRT12_AG
.set ss__BIE, CYREG_PRT12_BIE
.set ss__BIT_MASK, CYREG_PRT12_BIT_MASK
.set ss__BYP, CYREG_PRT12_BYP
.set ss__DM0, CYREG_PRT12_DM0
.set ss__DM1, CYREG_PRT12_DM1
.set ss__DM2, CYREG_PRT12_DM2
.set ss__DR, CYREG_PRT12_DR
.set ss__INP_DIS, CYREG_PRT12_INP_DIS
.set ss__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set ss__MASK, 0x08
.set ss__PORT, 12
.set ss__PRT, CYREG_PRT12_PRT
.set ss__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set ss__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set ss__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set ss__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set ss__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set ss__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set ss__PS, CYREG_PRT12_PS
.set ss__SHIFT, 3
.set ss__SIO_CFG, CYREG_PRT12_SIO_CFG
.set ss__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set ss__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set ss__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set ss__SLW, CYREG_PRT12_SLW

/* Vin */
.set Vin__0__INTTYPE, CYREG_PICU0_INTTYPE0
.set Vin__0__MASK, 0x01
.set Vin__0__PC, CYREG_PRT0_PC0
.set Vin__0__PORT, 0
.set Vin__0__SHIFT, 0
.set Vin__AG, CYREG_PRT0_AG
.set Vin__AMUX, CYREG_PRT0_AMUX
.set Vin__BIE, CYREG_PRT0_BIE
.set Vin__BIT_MASK, CYREG_PRT0_BIT_MASK
.set Vin__BYP, CYREG_PRT0_BYP
.set Vin__CTL, CYREG_PRT0_CTL
.set Vin__DM0, CYREG_PRT0_DM0
.set Vin__DM1, CYREG_PRT0_DM1
.set Vin__DM2, CYREG_PRT0_DM2
.set Vin__DR, CYREG_PRT0_DR
.set Vin__INP_DIS, CYREG_PRT0_INP_DIS
.set Vin__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set Vin__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set Vin__LCD_EN, CYREG_PRT0_LCD_EN
.set Vin__MASK, 0x01
.set Vin__PORT, 0
.set Vin__PRT, CYREG_PRT0_PRT
.set Vin__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set Vin__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set Vin__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set Vin__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set Vin__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set Vin__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set Vin__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set Vin__PS, CYREG_PRT0_PS
.set Vin__SHIFT, 0
.set Vin__SLW, CYREG_PRT0_SLW

/* Rx_1 */
.set Rx_1__0__INTTYPE, CYREG_PICU12_INTTYPE6
.set Rx_1__0__MASK, 0x40
.set Rx_1__0__PC, CYREG_PRT12_PC6
.set Rx_1__0__PORT, 12
.set Rx_1__0__SHIFT, 6
.set Rx_1__AG, CYREG_PRT12_AG
.set Rx_1__BIE, CYREG_PRT12_BIE
.set Rx_1__BIT_MASK, CYREG_PRT12_BIT_MASK
.set Rx_1__BYP, CYREG_PRT12_BYP
.set Rx_1__DM0, CYREG_PRT12_DM0
.set Rx_1__DM1, CYREG_PRT12_DM1
.set Rx_1__DM2, CYREG_PRT12_DM2
.set Rx_1__DR, CYREG_PRT12_DR
.set Rx_1__INP_DIS, CYREG_PRT12_INP_DIS
.set Rx_1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set Rx_1__MASK, 0x40
.set Rx_1__PORT, 12
.set Rx_1__PRT, CYREG_PRT12_PRT
.set Rx_1__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set Rx_1__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set Rx_1__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set Rx_1__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set Rx_1__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set Rx_1__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set Rx_1__PS, CYREG_PRT12_PS
.set Rx_1__SHIFT, 6
.set Rx_1__SIO_CFG, CYREG_PRT12_SIO_CFG
.set Rx_1__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set Rx_1__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set Rx_1__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set Rx_1__SLW, CYREG_PRT12_SLW

/* Tx_1 */
.set Tx_1__0__INTTYPE, CYREG_PICU12_INTTYPE7
.set Tx_1__0__MASK, 0x80
.set Tx_1__0__PC, CYREG_PRT12_PC7
.set Tx_1__0__PORT, 12
.set Tx_1__0__SHIFT, 7
.set Tx_1__AG, CYREG_PRT12_AG
.set Tx_1__BIE, CYREG_PRT12_BIE
.set Tx_1__BIT_MASK, CYREG_PRT12_BIT_MASK
.set Tx_1__BYP, CYREG_PRT12_BYP
.set Tx_1__DM0, CYREG_PRT12_DM0
.set Tx_1__DM1, CYREG_PRT12_DM1
.set Tx_1__DM2, CYREG_PRT12_DM2
.set Tx_1__DR, CYREG_PRT12_DR
.set Tx_1__INP_DIS, CYREG_PRT12_INP_DIS
.set Tx_1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set Tx_1__MASK, 0x80
.set Tx_1__PORT, 12
.set Tx_1__PRT, CYREG_PRT12_PRT
.set Tx_1__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set Tx_1__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set Tx_1__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set Tx_1__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set Tx_1__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set Tx_1__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set Tx_1__PS, CYREG_PRT12_PS
.set Tx_1__SHIFT, 7
.set Tx_1__SIO_CFG, CYREG_PRT12_SIO_CFG
.set Tx_1__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set Tx_1__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set Tx_1__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set Tx_1__SLW, CYREG_PRT12_SLW

/* miso */
.set miso__0__INTTYPE, CYREG_PICU12_INTTYPE4
.set miso__0__MASK, 0x10
.set miso__0__PC, CYREG_PRT12_PC4
.set miso__0__PORT, 12
.set miso__0__SHIFT, 4
.set miso__AG, CYREG_PRT12_AG
.set miso__BIE, CYREG_PRT12_BIE
.set miso__BIT_MASK, CYREG_PRT12_BIT_MASK
.set miso__BYP, CYREG_PRT12_BYP
.set miso__DM0, CYREG_PRT12_DM0
.set miso__DM1, CYREG_PRT12_DM1
.set miso__DM2, CYREG_PRT12_DM2
.set miso__DR, CYREG_PRT12_DR
.set miso__INP_DIS, CYREG_PRT12_INP_DIS
.set miso__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set miso__MASK, 0x10
.set miso__PORT, 12
.set miso__PRT, CYREG_PRT12_PRT
.set miso__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set miso__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set miso__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set miso__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set miso__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set miso__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set miso__PS, CYREG_PRT12_PS
.set miso__SHIFT, 4
.set miso__SIO_CFG, CYREG_PRT12_SIO_CFG
.set miso__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set miso__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set miso__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set miso__SLW, CYREG_PRT12_SLW

/* sclk */
.set sclk__0__INTTYPE, CYREG_PICU12_INTTYPE5
.set sclk__0__MASK, 0x20
.set sclk__0__PC, CYREG_PRT12_PC5
.set sclk__0__PORT, 12
.set sclk__0__SHIFT, 5
.set sclk__AG, CYREG_PRT12_AG
.set sclk__BIE, CYREG_PRT12_BIE
.set sclk__BIT_MASK, CYREG_PRT12_BIT_MASK
.set sclk__BYP, CYREG_PRT12_BYP
.set sclk__DM0, CYREG_PRT12_DM0
.set sclk__DM1, CYREG_PRT12_DM1
.set sclk__DM2, CYREG_PRT12_DM2
.set sclk__DR, CYREG_PRT12_DR
.set sclk__INP_DIS, CYREG_PRT12_INP_DIS
.set sclk__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set sclk__MASK, 0x20
.set sclk__PORT, 12
.set sclk__PRT, CYREG_PRT12_PRT
.set sclk__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set sclk__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set sclk__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set sclk__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set sclk__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set sclk__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set sclk__PS, CYREG_PRT12_PS
.set sclk__SHIFT, 5
.set sclk__SIO_CFG, CYREG_PRT12_SIO_CFG
.set sclk__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set sclk__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set sclk__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set sclk__SLW, CYREG_PRT12_SLW

/* I2C_1 */
.set I2C_1_I2C_FF__ADR, CYREG_I2C_ADR
.set I2C_1_I2C_FF__CFG, CYREG_I2C_CFG
.set I2C_1_I2C_FF__CLK_DIV1, CYREG_I2C_CLK_DIV1
.set I2C_1_I2C_FF__CLK_DIV2, CYREG_I2C_CLK_DIV2
.set I2C_1_I2C_FF__CSR, CYREG_I2C_CSR
.set I2C_1_I2C_FF__D, CYREG_I2C_D
.set I2C_1_I2C_FF__MCSR, CYREG_I2C_MCSR
.set I2C_1_I2C_FF__PM_ACT_CFG, CYREG_PM_ACT_CFG5
.set I2C_1_I2C_FF__PM_ACT_MSK, 0x04
.set I2C_1_I2C_FF__PM_STBY_CFG, CYREG_PM_STBY_CFG5
.set I2C_1_I2C_FF__PM_STBY_MSK, 0x04
.set I2C_1_I2C_FF__TMOUT_CFG0, CYREG_I2C_TMOUT_CFG0
.set I2C_1_I2C_FF__TMOUT_CFG1, CYREG_I2C_TMOUT_CFG1
.set I2C_1_I2C_FF__TMOUT_CSR, CYREG_I2C_TMOUT_CSR
.set I2C_1_I2C_FF__TMOUT_SR, CYREG_I2C_TMOUT_SR
.set I2C_1_I2C_FF__XCFG, CYREG_I2C_XCFG
.set I2C_1_I2C_IRQ__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set I2C_1_I2C_IRQ__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set I2C_1_I2C_IRQ__INTC_MASK, 0x8000
.set I2C_1_I2C_IRQ__INTC_NUMBER, 15
.set I2C_1_I2C_IRQ__INTC_PRIOR_NUM, 7
.set I2C_1_I2C_IRQ__INTC_PRIOR_REG, CYREG_NVIC_PRI_15
.set I2C_1_I2C_IRQ__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set I2C_1_I2C_IRQ__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* RST_1 */
.set RST_1__0__INTTYPE, CYREG_PICU0_INTTYPE1
.set RST_1__0__MASK, 0x02
.set RST_1__0__PC, CYREG_PRT0_PC1
.set RST_1__0__PORT, 0
.set RST_1__0__SHIFT, 1
.set RST_1__AG, CYREG_PRT0_AG
.set RST_1__AMUX, CYREG_PRT0_AMUX
.set RST_1__BIE, CYREG_PRT0_BIE
.set RST_1__BIT_MASK, CYREG_PRT0_BIT_MASK
.set RST_1__BYP, CYREG_PRT0_BYP
.set RST_1__CTL, CYREG_PRT0_CTL
.set RST_1__DM0, CYREG_PRT0_DM0
.set RST_1__DM1, CYREG_PRT0_DM1
.set RST_1__DM2, CYREG_PRT0_DM2
.set RST_1__DR, CYREG_PRT0_DR
.set RST_1__INP_DIS, CYREG_PRT0_INP_DIS
.set RST_1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU0_BASE
.set RST_1__LCD_COM_SEG, CYREG_PRT0_LCD_COM_SEG
.set RST_1__LCD_EN, CYREG_PRT0_LCD_EN
.set RST_1__MASK, 0x02
.set RST_1__PORT, 0
.set RST_1__PRT, CYREG_PRT0_PRT
.set RST_1__PRTDSI__CAPS_SEL, CYREG_PRT0_CAPS_SEL
.set RST_1__PRTDSI__DBL_SYNC_IN, CYREG_PRT0_DBL_SYNC_IN
.set RST_1__PRTDSI__OE_SEL0, CYREG_PRT0_OE_SEL0
.set RST_1__PRTDSI__OE_SEL1, CYREG_PRT0_OE_SEL1
.set RST_1__PRTDSI__OUT_SEL0, CYREG_PRT0_OUT_SEL0
.set RST_1__PRTDSI__OUT_SEL1, CYREG_PRT0_OUT_SEL1
.set RST_1__PRTDSI__SYNC_OUT, CYREG_PRT0_SYNC_OUT
.set RST_1__PS, CYREG_PRT0_PS
.set RST_1__SHIFT, 1
.set RST_1__SLW, CYREG_PRT0_SLW

/* SCL_1 */
.set SCL_1__0__INTTYPE, CYREG_PICU12_INTTYPE0
.set SCL_1__0__MASK, 0x01
.set SCL_1__0__PC, CYREG_PRT12_PC0
.set SCL_1__0__PORT, 12
.set SCL_1__0__SHIFT, 0
.set SCL_1__AG, CYREG_PRT12_AG
.set SCL_1__BIE, CYREG_PRT12_BIE
.set SCL_1__BIT_MASK, CYREG_PRT12_BIT_MASK
.set SCL_1__BYP, CYREG_PRT12_BYP
.set SCL_1__DM0, CYREG_PRT12_DM0
.set SCL_1__DM1, CYREG_PRT12_DM1
.set SCL_1__DM2, CYREG_PRT12_DM2
.set SCL_1__DR, CYREG_PRT12_DR
.set SCL_1__INP_DIS, CYREG_PRT12_INP_DIS
.set SCL_1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set SCL_1__MASK, 0x01
.set SCL_1__PORT, 12
.set SCL_1__PRT, CYREG_PRT12_PRT
.set SCL_1__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set SCL_1__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set SCL_1__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set SCL_1__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set SCL_1__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set SCL_1__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set SCL_1__PS, CYREG_PRT12_PS
.set SCL_1__SHIFT, 0
.set SCL_1__SIO_CFG, CYREG_PRT12_SIO_CFG
.set SCL_1__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set SCL_1__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set SCL_1__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set SCL_1__SLW, CYREG_PRT12_SLW

/* SDA_1 */
.set SDA_1__0__INTTYPE, CYREG_PICU12_INTTYPE1
.set SDA_1__0__MASK, 0x02
.set SDA_1__0__PC, CYREG_PRT12_PC1
.set SDA_1__0__PORT, 12
.set SDA_1__0__SHIFT, 1
.set SDA_1__AG, CYREG_PRT12_AG
.set SDA_1__BIE, CYREG_PRT12_BIE
.set SDA_1__BIT_MASK, CYREG_PRT12_BIT_MASK
.set SDA_1__BYP, CYREG_PRT12_BYP
.set SDA_1__DM0, CYREG_PRT12_DM0
.set SDA_1__DM1, CYREG_PRT12_DM1
.set SDA_1__DM2, CYREG_PRT12_DM2
.set SDA_1__DR, CYREG_PRT12_DR
.set SDA_1__INP_DIS, CYREG_PRT12_INP_DIS
.set SDA_1__INTTYPE_BASE, CYDEV_PICU_INTTYPE_PICU12_BASE
.set SDA_1__MASK, 0x02
.set SDA_1__PORT, 12
.set SDA_1__PRT, CYREG_PRT12_PRT
.set SDA_1__PRTDSI__DBL_SYNC_IN, CYREG_PRT12_DBL_SYNC_IN
.set SDA_1__PRTDSI__OE_SEL0, CYREG_PRT12_OE_SEL0
.set SDA_1__PRTDSI__OE_SEL1, CYREG_PRT12_OE_SEL1
.set SDA_1__PRTDSI__OUT_SEL0, CYREG_PRT12_OUT_SEL0
.set SDA_1__PRTDSI__OUT_SEL1, CYREG_PRT12_OUT_SEL1
.set SDA_1__PRTDSI__SYNC_OUT, CYREG_PRT12_SYNC_OUT
.set SDA_1__PS, CYREG_PRT12_PS
.set SDA_1__SHIFT, 1
.set SDA_1__SIO_CFG, CYREG_PRT12_SIO_CFG
.set SDA_1__SIO_DIFF, CYREG_PRT12_SIO_DIFF
.set SDA_1__SIO_HYST_EN, CYREG_PRT12_SIO_HYST_EN
.set SDA_1__SIO_REG_HIFREQ, CYREG_PRT12_SIO_REG_HIFREQ
.set SDA_1__SLW, CYREG_PRT12_SLW

/* SPIM_1 */
.set SPIM_1_BSPIM_BitCounter__16BIT_CONTROL_AUX_CTL_REG, CYREG_B0_UDB10_11_ACTL
.set SPIM_1_BSPIM_BitCounter__16BIT_CONTROL_CONTROL_REG, CYREG_B0_UDB10_11_CTL
.set SPIM_1_BSPIM_BitCounter__16BIT_CONTROL_COUNT_REG, CYREG_B0_UDB10_11_CTL
.set SPIM_1_BSPIM_BitCounter__16BIT_COUNT_CONTROL_REG, CYREG_B0_UDB10_11_CTL
.set SPIM_1_BSPIM_BitCounter__16BIT_COUNT_COUNT_REG, CYREG_B0_UDB10_11_CTL
.set SPIM_1_BSPIM_BitCounter__16BIT_MASK_MASK_REG, CYREG_B0_UDB10_11_MSK
.set SPIM_1_BSPIM_BitCounter__16BIT_MASK_PERIOD_REG, CYREG_B0_UDB10_11_MSK
.set SPIM_1_BSPIM_BitCounter__16BIT_PERIOD_MASK_REG, CYREG_B0_UDB10_11_MSK
.set SPIM_1_BSPIM_BitCounter__16BIT_PERIOD_PERIOD_REG, CYREG_B0_UDB10_11_MSK
.set SPIM_1_BSPIM_BitCounter__CONTROL_AUX_CTL_REG, CYREG_B0_UDB10_ACTL
.set SPIM_1_BSPIM_BitCounter__CONTROL_REG, CYREG_B0_UDB10_CTL
.set SPIM_1_BSPIM_BitCounter__CONTROL_ST_REG, CYREG_B0_UDB10_ST_CTL
.set SPIM_1_BSPIM_BitCounter__COUNT_REG, CYREG_B0_UDB10_CTL
.set SPIM_1_BSPIM_BitCounter__COUNT_ST_REG, CYREG_B0_UDB10_ST_CTL
.set SPIM_1_BSPIM_BitCounter__MASK_CTL_AUX_CTL_REG, CYREG_B0_UDB10_MSK_ACTL
.set SPIM_1_BSPIM_BitCounter__PER_CTL_AUX_CTL_REG, CYREG_B0_UDB10_MSK_ACTL
.set SPIM_1_BSPIM_BitCounter__PERIOD_REG, CYREG_B0_UDB10_MSK
.set SPIM_1_BSPIM_BitCounter_ST__16BIT_STATUS_AUX_CTL_REG, CYREG_B0_UDB10_11_ACTL
.set SPIM_1_BSPIM_BitCounter_ST__16BIT_STATUS_REG, CYREG_B0_UDB10_11_ST
.set SPIM_1_BSPIM_BitCounter_ST__MASK_REG, CYREG_B0_UDB10_MSK
.set SPIM_1_BSPIM_BitCounter_ST__MASK_ST_AUX_CTL_REG, CYREG_B0_UDB10_MSK_ACTL
.set SPIM_1_BSPIM_BitCounter_ST__PER_ST_AUX_CTL_REG, CYREG_B0_UDB10_MSK_ACTL
.set SPIM_1_BSPIM_BitCounter_ST__STATUS_AUX_CTL_REG, CYREG_B0_UDB10_ACTL
.set SPIM_1_BSPIM_BitCounter_ST__STATUS_CNT_REG, CYREG_B0_UDB10_ST_CTL
.set SPIM_1_BSPIM_BitCounter_ST__STATUS_CONTROL_REG, CYREG_B0_UDB10_ST_CTL
.set SPIM_1_BSPIM_BitCounter_ST__STATUS_REG, CYREG_B0_UDB10_ST
.set SPIM_1_BSPIM_RxStsReg__16BIT_STATUS_AUX_CTL_REG, CYREG_B0_UDB08_09_ACTL
.set SPIM_1_BSPIM_RxStsReg__16BIT_STATUS_REG, CYREG_B0_UDB08_09_ST
.set SPIM_1_BSPIM_RxStsReg__4__MASK, 0x10
.set SPIM_1_BSPIM_RxStsReg__4__POS, 4
.set SPIM_1_BSPIM_RxStsReg__5__MASK, 0x20
.set SPIM_1_BSPIM_RxStsReg__5__POS, 5
.set SPIM_1_BSPIM_RxStsReg__6__MASK, 0x40
.set SPIM_1_BSPIM_RxStsReg__6__POS, 6
.set SPIM_1_BSPIM_RxStsReg__MASK, 0x70
.set SPIM_1_BSPIM_RxStsReg__MASK_REG, CYREG_B0_UDB08_MSK
.set SPIM_1_BSPIM_RxStsReg__STATUS_AUX_CTL_REG, CYREG_B0_UDB08_ACTL
.set SPIM_1_BSPIM_RxStsReg__STATUS_REG, CYREG_B0_UDB08_ST
.set SPIM_1_BSPIM_sR16_Dp_u0__16BIT_A0_REG, CYREG_B0_UDB08_09_A0
.set SPIM_1_BSPIM_sR16_Dp_u0__16BIT_A1_REG, CYREG_B0_UDB08_09_A1
.set SPIM_1_BSPIM_sR16_Dp_u0__16BIT_D0_REG, CYREG_B0_UDB08_09_D0
.set SPIM_1_BSPIM_sR16_Dp_u0__16BIT_D1_REG, CYREG_B0_UDB08_09_D1
.set SPIM_1_BSPIM_sR16_Dp_u0__16BIT_DP_AUX_CTL_REG, CYREG_B0_UDB08_09_ACTL
.set SPIM_1_BSPIM_sR16_Dp_u0__16BIT_F0_REG, CYREG_B0_UDB08_09_F0
.set SPIM_1_BSPIM_sR16_Dp_u0__16BIT_F1_REG, CYREG_B0_UDB08_09_F1
.set SPIM_1_BSPIM_sR16_Dp_u0__A0_A1_REG, CYREG_B0_UDB08_A0_A1
.set SPIM_1_BSPIM_sR16_Dp_u0__A0_REG, CYREG_B0_UDB08_A0
.set SPIM_1_BSPIM_sR16_Dp_u0__A1_REG, CYREG_B0_UDB08_A1
.set SPIM_1_BSPIM_sR16_Dp_u0__D0_D1_REG, CYREG_B0_UDB08_D0_D1
.set SPIM_1_BSPIM_sR16_Dp_u0__D0_REG, CYREG_B0_UDB08_D0
.set SPIM_1_BSPIM_sR16_Dp_u0__D1_REG, CYREG_B0_UDB08_D1
.set SPIM_1_BSPIM_sR16_Dp_u0__DP_AUX_CTL_REG, CYREG_B0_UDB08_ACTL
.set SPIM_1_BSPIM_sR16_Dp_u0__F0_F1_REG, CYREG_B0_UDB08_F0_F1
.set SPIM_1_BSPIM_sR16_Dp_u0__F0_REG, CYREG_B0_UDB08_F0
.set SPIM_1_BSPIM_sR16_Dp_u0__F1_REG, CYREG_B0_UDB08_F1
.set SPIM_1_BSPIM_sR16_Dp_u1__16BIT_A0_REG, CYREG_B0_UDB09_10_A0
.set SPIM_1_BSPIM_sR16_Dp_u1__16BIT_A1_REG, CYREG_B0_UDB09_10_A1
.set SPIM_1_BSPIM_sR16_Dp_u1__16BIT_D0_REG, CYREG_B0_UDB09_10_D0
.set SPIM_1_BSPIM_sR16_Dp_u1__16BIT_D1_REG, CYREG_B0_UDB09_10_D1
.set SPIM_1_BSPIM_sR16_Dp_u1__16BIT_DP_AUX_CTL_REG, CYREG_B0_UDB09_10_ACTL
.set SPIM_1_BSPIM_sR16_Dp_u1__16BIT_F0_REG, CYREG_B0_UDB09_10_F0
.set SPIM_1_BSPIM_sR16_Dp_u1__16BIT_F1_REG, CYREG_B0_UDB09_10_F1
.set SPIM_1_BSPIM_sR16_Dp_u1__A0_A1_REG, CYREG_B0_UDB09_A0_A1
.set SPIM_1_BSPIM_sR16_Dp_u1__A0_REG, CYREG_B0_UDB09_A0
.set SPIM_1_BSPIM_sR16_Dp_u1__A1_REG, CYREG_B0_UDB09_A1
.set SPIM_1_BSPIM_sR16_Dp_u1__D0_D1_REG, CYREG_B0_UDB09_D0_D1
.set SPIM_1_BSPIM_sR16_Dp_u1__D0_REG, CYREG_B0_UDB09_D0
.set SPIM_1_BSPIM_sR16_Dp_u1__D1_REG, CYREG_B0_UDB09_D1
.set SPIM_1_BSPIM_sR16_Dp_u1__DP_AUX_CTL_REG, CYREG_B0_UDB09_ACTL
.set SPIM_1_BSPIM_sR16_Dp_u1__F0_F1_REG, CYREG_B0_UDB09_F0_F1
.set SPIM_1_BSPIM_sR16_Dp_u1__F0_REG, CYREG_B0_UDB09_F0
.set SPIM_1_BSPIM_sR16_Dp_u1__F1_REG, CYREG_B0_UDB09_F1
.set SPIM_1_BSPIM_TxStsReg__0__MASK, 0x01
.set SPIM_1_BSPIM_TxStsReg__0__POS, 0
.set SPIM_1_BSPIM_TxStsReg__1__MASK, 0x02
.set SPIM_1_BSPIM_TxStsReg__1__POS, 1
.set SPIM_1_BSPIM_TxStsReg__16BIT_STATUS_AUX_CTL_REG, CYREG_B0_UDB09_10_ACTL
.set SPIM_1_BSPIM_TxStsReg__16BIT_STATUS_REG, CYREG_B0_UDB09_10_ST
.set SPIM_1_BSPIM_TxStsReg__2__MASK, 0x04
.set SPIM_1_BSPIM_TxStsReg__2__POS, 2
.set SPIM_1_BSPIM_TxStsReg__3__MASK, 0x08
.set SPIM_1_BSPIM_TxStsReg__3__POS, 3
.set SPIM_1_BSPIM_TxStsReg__4__MASK, 0x10
.set SPIM_1_BSPIM_TxStsReg__4__POS, 4
.set SPIM_1_BSPIM_TxStsReg__MASK, 0x1F
.set SPIM_1_BSPIM_TxStsReg__MASK_REG, CYREG_B0_UDB09_MSK
.set SPIM_1_BSPIM_TxStsReg__STATUS_AUX_CTL_REG, CYREG_B0_UDB09_ACTL
.set SPIM_1_BSPIM_TxStsReg__STATUS_REG, CYREG_B0_UDB09_ST

/* UART_1 */
.set UART_1_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG, CYREG_B1_UDB08_09_ACTL
.set UART_1_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG, CYREG_B1_UDB08_09_CTL
.set UART_1_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG, CYREG_B1_UDB08_09_CTL
.set UART_1_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG, CYREG_B1_UDB08_09_CTL
.set UART_1_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG, CYREG_B1_UDB08_09_CTL
.set UART_1_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG, CYREG_B1_UDB08_09_MSK
.set UART_1_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG, CYREG_B1_UDB08_09_MSK
.set UART_1_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG, CYREG_B1_UDB08_09_MSK
.set UART_1_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG, CYREG_B1_UDB08_09_MSK
.set UART_1_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG, CYREG_B1_UDB08_ACTL
.set UART_1_BUART_sRX_RxBitCounter__CONTROL_REG, CYREG_B1_UDB08_CTL
.set UART_1_BUART_sRX_RxBitCounter__CONTROL_ST_REG, CYREG_B1_UDB08_ST_CTL
.set UART_1_BUART_sRX_RxBitCounter__COUNT_REG, CYREG_B1_UDB08_CTL
.set UART_1_BUART_sRX_RxBitCounter__COUNT_ST_REG, CYREG_B1_UDB08_ST_CTL
.set UART_1_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG, CYREG_B1_UDB08_MSK_ACTL
.set UART_1_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG, CYREG_B1_UDB08_MSK_ACTL
.set UART_1_BUART_sRX_RxBitCounter__PERIOD_REG, CYREG_B1_UDB08_MSK
.set UART_1_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG, CYREG_B1_UDB08_09_ACTL
.set UART_1_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG, CYREG_B1_UDB08_09_ST
.set UART_1_BUART_sRX_RxBitCounter_ST__MASK_REG, CYREG_B1_UDB08_MSK
.set UART_1_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG, CYREG_B1_UDB08_MSK_ACTL
.set UART_1_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG, CYREG_B1_UDB08_MSK_ACTL
.set UART_1_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG, CYREG_B1_UDB08_ACTL
.set UART_1_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG, CYREG_B1_UDB08_ST_CTL
.set UART_1_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG, CYREG_B1_UDB08_ST_CTL
.set UART_1_BUART_sRX_RxBitCounter_ST__STATUS_REG, CYREG_B1_UDB08_ST
.set UART_1_BUART_sRX_RxShifter_u0__A0_A1_REG, CYREG_B1_UDB11_A0_A1
.set UART_1_BUART_sRX_RxShifter_u0__A0_REG, CYREG_B1_UDB11_A0
.set UART_1_BUART_sRX_RxShifter_u0__A1_REG, CYREG_B1_UDB11_A1
.set UART_1_BUART_sRX_RxShifter_u0__D0_D1_REG, CYREG_B1_UDB11_D0_D1
.set UART_1_BUART_sRX_RxShifter_u0__D0_REG, CYREG_B1_UDB11_D0
.set UART_1_BUART_sRX_RxShifter_u0__D1_REG, CYREG_B1_UDB11_D1
.set UART_1_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG, CYREG_B1_UDB11_ACTL
.set UART_1_BUART_sRX_RxShifter_u0__F0_F1_REG, CYREG_B1_UDB11_F0_F1
.set UART_1_BUART_sRX_RxShifter_u0__F0_REG, CYREG_B1_UDB11_F0
.set UART_1_BUART_sRX_RxShifter_u0__F1_REG, CYREG_B1_UDB11_F1
.set UART_1_BUART_sRX_RxSts__16BIT_STATUS_AUX_CTL_REG, CYREG_B0_UDB11_12_ACTL
.set UART_1_BUART_sRX_RxSts__16BIT_STATUS_REG, CYREG_B0_UDB11_12_ST
.set UART_1_BUART_sRX_RxSts__3__MASK, 0x08
.set UART_1_BUART_sRX_RxSts__3__POS, 3
.set UART_1_BUART_sRX_RxSts__4__MASK, 0x10
.set UART_1_BUART_sRX_RxSts__4__POS, 4
.set UART_1_BUART_sRX_RxSts__5__MASK, 0x20
.set UART_1_BUART_sRX_RxSts__5__POS, 5
.set UART_1_BUART_sRX_RxSts__MASK, 0x38
.set UART_1_BUART_sRX_RxSts__MASK_REG, CYREG_B0_UDB11_MSK
.set UART_1_BUART_sRX_RxSts__STATUS_AUX_CTL_REG, CYREG_B0_UDB11_ACTL
.set UART_1_BUART_sRX_RxSts__STATUS_REG, CYREG_B0_UDB11_ST
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG, CYREG_B1_UDB09_10_A0
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG, CYREG_B1_UDB09_10_A1
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG, CYREG_B1_UDB09_10_D0
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG, CYREG_B1_UDB09_10_D1
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG, CYREG_B1_UDB09_10_ACTL
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG, CYREG_B1_UDB09_10_F0
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG, CYREG_B1_UDB09_10_F1
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG, CYREG_B1_UDB09_A0_A1
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG, CYREG_B1_UDB09_A0
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG, CYREG_B1_UDB09_A1
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG, CYREG_B1_UDB09_D0_D1
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG, CYREG_B1_UDB09_D0
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG, CYREG_B1_UDB09_D1
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG, CYREG_B1_UDB09_ACTL
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG, CYREG_B1_UDB09_F0_F1
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG, CYREG_B1_UDB09_F0
.set UART_1_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG, CYREG_B1_UDB09_F1
.set UART_1_BUART_sTX_TxShifter_u0__16BIT_A0_REG, CYREG_B1_UDB10_11_A0
.set UART_1_BUART_sTX_TxShifter_u0__16BIT_A1_REG, CYREG_B1_UDB10_11_A1
.set UART_1_BUART_sTX_TxShifter_u0__16BIT_D0_REG, CYREG_B1_UDB10_11_D0
.set UART_1_BUART_sTX_TxShifter_u0__16BIT_D1_REG, CYREG_B1_UDB10_11_D1
.set UART_1_BUART_sTX_TxShifter_u0__16BIT_DP_AUX_CTL_REG, CYREG_B1_UDB10_11_ACTL
.set UART_1_BUART_sTX_TxShifter_u0__16BIT_F0_REG, CYREG_B1_UDB10_11_F0
.set UART_1_BUART_sTX_TxShifter_u0__16BIT_F1_REG, CYREG_B1_UDB10_11_F1
.set UART_1_BUART_sTX_TxShifter_u0__A0_A1_REG, CYREG_B1_UDB10_A0_A1
.set UART_1_BUART_sTX_TxShifter_u0__A0_REG, CYREG_B1_UDB10_A0
.set UART_1_BUART_sTX_TxShifter_u0__A1_REG, CYREG_B1_UDB10_A1
.set UART_1_BUART_sTX_TxShifter_u0__D0_D1_REG, CYREG_B1_UDB10_D0_D1
.set UART_1_BUART_sTX_TxShifter_u0__D0_REG, CYREG_B1_UDB10_D0
.set UART_1_BUART_sTX_TxShifter_u0__D1_REG, CYREG_B1_UDB10_D1
.set UART_1_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG, CYREG_B1_UDB10_ACTL
.set UART_1_BUART_sTX_TxShifter_u0__F0_F1_REG, CYREG_B1_UDB10_F0_F1
.set UART_1_BUART_sTX_TxShifter_u0__F0_REG, CYREG_B1_UDB10_F0
.set UART_1_BUART_sTX_TxShifter_u0__F1_REG, CYREG_B1_UDB10_F1
.set UART_1_BUART_sTX_TxSts__0__MASK, 0x01
.set UART_1_BUART_sTX_TxSts__0__POS, 0
.set UART_1_BUART_sTX_TxSts__1__MASK, 0x02
.set UART_1_BUART_sTX_TxSts__1__POS, 1
.set UART_1_BUART_sTX_TxSts__16BIT_STATUS_AUX_CTL_REG, CYREG_B1_UDB09_10_ACTL
.set UART_1_BUART_sTX_TxSts__16BIT_STATUS_REG, CYREG_B1_UDB09_10_ST
.set UART_1_BUART_sTX_TxSts__2__MASK, 0x04
.set UART_1_BUART_sTX_TxSts__2__POS, 2
.set UART_1_BUART_sTX_TxSts__3__MASK, 0x08
.set UART_1_BUART_sTX_TxSts__3__POS, 3
.set UART_1_BUART_sTX_TxSts__MASK, 0x0F
.set UART_1_BUART_sTX_TxSts__MASK_REG, CYREG_B1_UDB09_MSK
.set UART_1_BUART_sTX_TxSts__STATUS_AUX_CTL_REG, CYREG_B1_UDB09_ACTL
.set UART_1_BUART_sTX_TxSts__STATUS_REG, CYREG_B1_UDB09_ST
.set UART_1_IntClock__CFG0, CYREG_CLKDIST_DCFG3_CFG0
.set UART_1_IntClock__CFG1, CYREG_CLKDIST_DCFG3_CFG1
.set UART_1_IntClock__CFG2, CYREG_CLKDIST_DCFG3_CFG2
.set UART_1_IntClock__CFG2_SRC_SEL_MASK, 0x07
.set UART_1_IntClock__INDEX, 0x03
.set UART_1_IntClock__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set UART_1_IntClock__PM_ACT_MSK, 0x08
.set UART_1_IntClock__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set UART_1_IntClock__PM_STBY_MSK, 0x08

/* Clock_1 */
.set Clock_1__CFG0, CYREG_CLKDIST_DCFG4_CFG0
.set Clock_1__CFG1, CYREG_CLKDIST_DCFG4_CFG1
.set Clock_1__CFG2, CYREG_CLKDIST_DCFG4_CFG2
.set Clock_1__CFG2_SRC_SEL_MASK, 0x07
.set Clock_1__INDEX, 0x04
.set Clock_1__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set Clock_1__PM_ACT_MSK, 0x10
.set Clock_1__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set Clock_1__PM_STBY_MSK, 0x10

/* Clock_2 */
.set Clock_2__CFG0, CYREG_CLKDIST_DCFG2_CFG0
.set Clock_2__CFG1, CYREG_CLKDIST_DCFG2_CFG1
.set Clock_2__CFG2, CYREG_CLKDIST_DCFG2_CFG2
.set Clock_2__CFG2_SRC_SEL_MASK, 0x07
.set Clock_2__INDEX, 0x02
.set Clock_2__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set Clock_2__PM_ACT_MSK, 0x04
.set Clock_2__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set Clock_2__PM_STBY_MSK, 0x04

/* Timer_1 */
.set Timer_1_TimerHW__CAP0, CYREG_TMR0_CAP0
.set Timer_1_TimerHW__CAP1, CYREG_TMR0_CAP1
.set Timer_1_TimerHW__CFG0, CYREG_TMR0_CFG0
.set Timer_1_TimerHW__CFG1, CYREG_TMR0_CFG1
.set Timer_1_TimerHW__CFG2, CYREG_TMR0_CFG2
.set Timer_1_TimerHW__CNT_CMP0, CYREG_TMR0_CNT_CMP0
.set Timer_1_TimerHW__CNT_CMP1, CYREG_TMR0_CNT_CMP1
.set Timer_1_TimerHW__PER0, CYREG_TMR0_PER0
.set Timer_1_TimerHW__PER1, CYREG_TMR0_PER1
.set Timer_1_TimerHW__PM_ACT_CFG, CYREG_PM_ACT_CFG3
.set Timer_1_TimerHW__PM_ACT_MSK, 0x01
.set Timer_1_TimerHW__PM_STBY_CFG, CYREG_PM_STBY_CFG3
.set Timer_1_TimerHW__PM_STBY_MSK, 0x01
.set Timer_1_TimerHW__RT0, CYREG_TMR0_RT0
.set Timer_1_TimerHW__RT1, CYREG_TMR0_RT1
.set Timer_1_TimerHW__SR0, CYREG_TMR0_SR0

/* isr_Timer_1 */
.set isr_Timer_1__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set isr_Timer_1__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set isr_Timer_1__INTC_MASK, 0x01
.set isr_Timer_1__INTC_NUMBER, 0
.set isr_Timer_1__INTC_PRIOR_NUM, 1
.set isr_Timer_1__INTC_PRIOR_REG, CYREG_NVIC_PRI_0
.set isr_Timer_1__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set isr_Timer_1__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0

/* ADC_DelSig_1 */
.set ADC_DelSig_1_DEC__COHER, CYREG_DEC_COHER
.set ADC_DelSig_1_DEC__CR, CYREG_DEC_CR
.set ADC_DelSig_1_DEC__DR1, CYREG_DEC_DR1
.set ADC_DelSig_1_DEC__DR2, CYREG_DEC_DR2
.set ADC_DelSig_1_DEC__DR2H, CYREG_DEC_DR2H
.set ADC_DelSig_1_DEC__GCOR, CYREG_DEC_GCOR
.set ADC_DelSig_1_DEC__GCORH, CYREG_DEC_GCORH
.set ADC_DelSig_1_DEC__GVAL, CYREG_DEC_GVAL
.set ADC_DelSig_1_DEC__OCOR, CYREG_DEC_OCOR
.set ADC_DelSig_1_DEC__OCORH, CYREG_DEC_OCORH
.set ADC_DelSig_1_DEC__OCORM, CYREG_DEC_OCORM
.set ADC_DelSig_1_DEC__OUTSAMP, CYREG_DEC_OUTSAMP
.set ADC_DelSig_1_DEC__OUTSAMPH, CYREG_DEC_OUTSAMPH
.set ADC_DelSig_1_DEC__OUTSAMPM, CYREG_DEC_OUTSAMPM
.set ADC_DelSig_1_DEC__OUTSAMPS, CYREG_DEC_OUTSAMPS
.set ADC_DelSig_1_DEC__PM_ACT_CFG, CYREG_PM_ACT_CFG10
.set ADC_DelSig_1_DEC__PM_ACT_MSK, 0x01
.set ADC_DelSig_1_DEC__PM_STBY_CFG, CYREG_PM_STBY_CFG10
.set ADC_DelSig_1_DEC__PM_STBY_MSK, 0x01
.set ADC_DelSig_1_DEC__SHIFT1, CYREG_DEC_SHIFT1
.set ADC_DelSig_1_DEC__SHIFT2, CYREG_DEC_SHIFT2
.set ADC_DelSig_1_DEC__SR, CYREG_DEC_SR
.set ADC_DelSig_1_DEC__TRIM__M1, CYREG_FLSHID_CUST_TABLES_DEC_M1
.set ADC_DelSig_1_DEC__TRIM__M2, CYREG_FLSHID_CUST_TABLES_DEC_M2
.set ADC_DelSig_1_DEC__TRIM__M3, CYREG_FLSHID_CUST_TABLES_DEC_M3
.set ADC_DelSig_1_DEC__TRIM__M4, CYREG_FLSHID_CUST_TABLES_DEC_M4
.set ADC_DelSig_1_DEC__TRIM__M5, CYREG_FLSHID_CUST_TABLES_DEC_M5
.set ADC_DelSig_1_DEC__TRIM__M6, CYREG_FLSHID_CUST_TABLES_DEC_M6
.set ADC_DelSig_1_DEC__TRIM__M7, CYREG_FLSHID_CUST_TABLES_DEC_M7
.set ADC_DelSig_1_DEC__TRIM__M8, CYREG_FLSHID_CUST_TABLES_DEC_M8
.set ADC_DelSig_1_DSM__BUF0, CYREG_DSM0_BUF0
.set ADC_DelSig_1_DSM__BUF1, CYREG_DSM0_BUF1
.set ADC_DelSig_1_DSM__BUF2, CYREG_DSM0_BUF2
.set ADC_DelSig_1_DSM__BUF3, CYREG_DSM0_BUF3
.set ADC_DelSig_1_DSM__CLK, CYREG_DSM0_CLK
.set ADC_DelSig_1_DSM__CR0, CYREG_DSM0_CR0
.set ADC_DelSig_1_DSM__CR1, CYREG_DSM0_CR1
.set ADC_DelSig_1_DSM__CR10, CYREG_DSM0_CR10
.set ADC_DelSig_1_DSM__CR11, CYREG_DSM0_CR11
.set ADC_DelSig_1_DSM__CR12, CYREG_DSM0_CR12
.set ADC_DelSig_1_DSM__CR13, CYREG_DSM0_CR13
.set ADC_DelSig_1_DSM__CR14, CYREG_DSM0_CR14
.set ADC_DelSig_1_DSM__CR15, CYREG_DSM0_CR15
.set ADC_DelSig_1_DSM__CR16, CYREG_DSM0_CR16
.set ADC_DelSig_1_DSM__CR17, CYREG_DSM0_CR17
.set ADC_DelSig_1_DSM__CR2, CYREG_DSM0_CR2
.set ADC_DelSig_1_DSM__CR3, CYREG_DSM0_CR3
.set ADC_DelSig_1_DSM__CR4, CYREG_DSM0_CR4
.set ADC_DelSig_1_DSM__CR5, CYREG_DSM0_CR5
.set ADC_DelSig_1_DSM__CR6, CYREG_DSM0_CR6
.set ADC_DelSig_1_DSM__CR7, CYREG_DSM0_CR7
.set ADC_DelSig_1_DSM__CR8, CYREG_DSM0_CR8
.set ADC_DelSig_1_DSM__CR9, CYREG_DSM0_CR9
.set ADC_DelSig_1_DSM__DEM0, CYREG_DSM0_DEM0
.set ADC_DelSig_1_DSM__DEM1, CYREG_DSM0_DEM1
.set ADC_DelSig_1_DSM__MISC, CYREG_DSM0_MISC
.set ADC_DelSig_1_DSM__OUT0, CYREG_DSM0_OUT0
.set ADC_DelSig_1_DSM__OUT1, CYREG_DSM0_OUT1
.set ADC_DelSig_1_DSM__REF0, CYREG_DSM0_REF0
.set ADC_DelSig_1_DSM__REF1, CYREG_DSM0_REF1
.set ADC_DelSig_1_DSM__REF2, CYREG_DSM0_REF2
.set ADC_DelSig_1_DSM__REF3, CYREG_DSM0_REF3
.set ADC_DelSig_1_DSM__RSVD1, CYREG_DSM0_RSVD1
.set ADC_DelSig_1_DSM__SW0, CYREG_DSM0_SW0
.set ADC_DelSig_1_DSM__SW2, CYREG_DSM0_SW2
.set ADC_DelSig_1_DSM__SW3, CYREG_DSM0_SW3
.set ADC_DelSig_1_DSM__SW4, CYREG_DSM0_SW4
.set ADC_DelSig_1_DSM__SW6, CYREG_DSM0_SW6
.set ADC_DelSig_1_DSM__TR0, CYREG_NPUMP_DSM_TR0
.set ADC_DelSig_1_DSM__TST0, CYREG_DSM0_TST0
.set ADC_DelSig_1_DSM__TST1, CYREG_DSM0_TST1
.set ADC_DelSig_1_Ext_CP_Clk__CFG0, CYREG_CLKDIST_DCFG1_CFG0
.set ADC_DelSig_1_Ext_CP_Clk__CFG1, CYREG_CLKDIST_DCFG1_CFG1
.set ADC_DelSig_1_Ext_CP_Clk__CFG2, CYREG_CLKDIST_DCFG1_CFG2
.set ADC_DelSig_1_Ext_CP_Clk__CFG2_SRC_SEL_MASK, 0x07
.set ADC_DelSig_1_Ext_CP_Clk__INDEX, 0x01
.set ADC_DelSig_1_Ext_CP_Clk__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set ADC_DelSig_1_Ext_CP_Clk__PM_ACT_MSK, 0x02
.set ADC_DelSig_1_Ext_CP_Clk__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set ADC_DelSig_1_Ext_CP_Clk__PM_STBY_MSK, 0x02
.set ADC_DelSig_1_IRQ__INTC_CLR_EN_REG, CYREG_NVIC_CLRENA0
.set ADC_DelSig_1_IRQ__INTC_CLR_PD_REG, CYREG_NVIC_CLRPEND0
.set ADC_DelSig_1_IRQ__INTC_MASK, 0x20000000
.set ADC_DelSig_1_IRQ__INTC_NUMBER, 29
.set ADC_DelSig_1_IRQ__INTC_PRIOR_NUM, 0
.set ADC_DelSig_1_IRQ__INTC_PRIOR_REG, CYREG_NVIC_PRI_29
.set ADC_DelSig_1_IRQ__INTC_SET_EN_REG, CYREG_NVIC_SETENA0
.set ADC_DelSig_1_IRQ__INTC_SET_PD_REG, CYREG_NVIC_SETPEND0
.set ADC_DelSig_1_theACLK__CFG0, CYREG_CLKDIST_ACFG0_CFG0
.set ADC_DelSig_1_theACLK__CFG1, CYREG_CLKDIST_ACFG0_CFG1
.set ADC_DelSig_1_theACLK__CFG2, CYREG_CLKDIST_ACFG0_CFG2
.set ADC_DelSig_1_theACLK__CFG2_SRC_SEL_MASK, 0x07
.set ADC_DelSig_1_theACLK__CFG3, CYREG_CLKDIST_ACFG0_CFG3
.set ADC_DelSig_1_theACLK__CFG3_PHASE_DLY_MASK, 0x0F
.set ADC_DelSig_1_theACLK__INDEX, 0x00
.set ADC_DelSig_1_theACLK__PM_ACT_CFG, CYREG_PM_ACT_CFG1
.set ADC_DelSig_1_theACLK__PM_ACT_MSK, 0x01
.set ADC_DelSig_1_theACLK__PM_STBY_CFG, CYREG_PM_STBY_CFG1
.set ADC_DelSig_1_theACLK__PM_STBY_MSK, 0x01

/* Miscellaneous */
.set BCLK__BUS_CLK__HZ, 24000000
.set BCLK__BUS_CLK__KHZ, 24000
.set BCLK__BUS_CLK__MHZ, 24
.set CyClock_1__CFG0, CYREG_CLKDIST_DCFG0_CFG0
.set CyClock_1__CFG1, CYREG_CLKDIST_DCFG0_CFG1
.set CyClock_1__CFG2, CYREG_CLKDIST_DCFG0_CFG2
.set CyClock_1__CFG2_SRC_SEL_MASK, 0x07
.set CyClock_1__INDEX, 0x00
.set CyClock_1__PM_ACT_CFG, CYREG_PM_ACT_CFG2
.set CyClock_1__PM_ACT_MSK, 0x01
.set CyClock_1__PM_STBY_CFG, CYREG_PM_STBY_CFG2
.set CyClock_1__PM_STBY_MSK, 0x01
.set CYDEV_CHIP_DIE_LEOPARD, 1
.set CYDEV_CHIP_DIE_PSOC4A, 18
.set CYDEV_CHIP_DIE_PSOC5LP, 2
.set CYDEV_CHIP_DIE_PSOC5TM, 3
.set CYDEV_CHIP_DIE_TMA4, 4
.set CYDEV_CHIP_DIE_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_FM0P, 5
.set CYDEV_CHIP_FAMILY_FM3, 6
.set CYDEV_CHIP_FAMILY_FM4, 7
.set CYDEV_CHIP_FAMILY_PSOC3, 1
.set CYDEV_CHIP_FAMILY_PSOC4, 2
.set CYDEV_CHIP_FAMILY_PSOC5, 3
.set CYDEV_CHIP_FAMILY_PSOC6, 4
.set CYDEV_CHIP_FAMILY_UNKNOWN, 0
.set CYDEV_CHIP_FAMILY_USED, CYDEV_CHIP_FAMILY_PSOC5
.set CYDEV_CHIP_JTAG_ID, 0x2E161069
.set CYDEV_CHIP_MEMBER_3A, 1
.set CYDEV_CHIP_MEMBER_4A, 18
.set CYDEV_CHIP_MEMBER_4D, 13
.set CYDEV_CHIP_MEMBER_4E, 6
.set CYDEV_CHIP_MEMBER_4F, 19
.set CYDEV_CHIP_MEMBER_4G, 4
.set CYDEV_CHIP_MEMBER_4H, 17
.set CYDEV_CHIP_MEMBER_4I, 23
.set CYDEV_CHIP_MEMBER_4J, 14
.set CYDEV_CHIP_MEMBER_4K, 15
.set CYDEV_CHIP_MEMBER_4L, 22
.set CYDEV_CHIP_MEMBER_4M, 21
.set CYDEV_CHIP_MEMBER_4N, 10
.set CYDEV_CHIP_MEMBER_4O, 7
.set CYDEV_CHIP_MEMBER_4P, 20
.set CYDEV_CHIP_MEMBER_4Q, 12
.set CYDEV_CHIP_MEMBER_4R, 8
.set CYDEV_CHIP_MEMBER_4S, 11
.set CYDEV_CHIP_MEMBER_4T, 9
.set CYDEV_CHIP_MEMBER_4U, 5
.set CYDEV_CHIP_MEMBER_4V, 16
.set CYDEV_CHIP_MEMBER_5A, 3
.set CYDEV_CHIP_MEMBER_5B, 2
.set CYDEV_CHIP_MEMBER_6A, 24
.set CYDEV_CHIP_MEMBER_FM3, 28
.set CYDEV_CHIP_MEMBER_FM4, 29
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1, 25
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2, 26
.set CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3, 27
.set CYDEV_CHIP_MEMBER_UNKNOWN, 0
.set CYDEV_CHIP_MEMBER_USED, CYDEV_CHIP_MEMBER_5B
.set CYDEV_CHIP_DIE_EXPECT, CYDEV_CHIP_MEMBER_USED
.set CYDEV_CHIP_DIE_ACTUAL, CYDEV_CHIP_DIE_EXPECT
.set CYDEV_CHIP_REV_LEOPARD_ES1, 0
.set CYDEV_CHIP_REV_LEOPARD_ES2, 1
.set CYDEV_CHIP_REV_LEOPARD_ES3, 3
.set CYDEV_CHIP_REV_LEOPARD_PRODUCTION, 3
.set CYDEV_CHIP_REV_PSOC4A_ES0, 17
.set CYDEV_CHIP_REV_PSOC4A_PRODUCTION, 17
.set CYDEV_CHIP_REV_PSOC5LP_ES0, 0
.set CYDEV_CHIP_REV_PSOC5LP_PRODUCTION, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES0, 0
.set CYDEV_CHIP_REV_PSOC5TM_ES1, 1
.set CYDEV_CHIP_REV_PSOC5TM_PRODUCTION, 1
.set CYDEV_CHIP_REV_TMA4_ES, 17
.set CYDEV_CHIP_REV_TMA4_ES2, 33
.set CYDEV_CHIP_REV_TMA4_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_3A_ES1, 0
.set CYDEV_CHIP_REVISION_3A_ES2, 1
.set CYDEV_CHIP_REVISION_3A_ES3, 3
.set CYDEV_CHIP_REVISION_3A_PRODUCTION, 3
.set CYDEV_CHIP_REVISION_4A_ES0, 17
.set CYDEV_CHIP_REVISION_4A_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4D_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD, 0
.set CYDEV_CHIP_REVISION_4E_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA, 0
.set CYDEV_CHIP_REVISION_4F_PRODUCTION_256K, 0
.set CYDEV_CHIP_REVISION_4G_ES, 17
.set CYDEV_CHIP_REVISION_4G_ES2, 33
.set CYDEV_CHIP_REVISION_4G_PRODUCTION, 17
.set CYDEV_CHIP_REVISION_4H_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4I_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4J_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4K_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4L_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4M_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4N_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4O_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4P_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4Q_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4R_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4S_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4T_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4U_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_4V_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_5A_ES0, 0
.set CYDEV_CHIP_REVISION_5A_ES1, 1
.set CYDEV_CHIP_REVISION_5A_PRODUCTION, 1
.set CYDEV_CHIP_REVISION_5B_ES0, 0
.set CYDEV_CHIP_REVISION_5B_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_6A_ES, 17
.set CYDEV_CHIP_REVISION_6A_NO_UDB, 33
.set CYDEV_CHIP_REVISION_6A_PRODUCTION, 33
.set CYDEV_CHIP_REVISION_FM3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_FM4_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION, 0
.set CYDEV_CHIP_REVISION_USED, CYDEV_CHIP_REVISION_5B_PRODUCTION
.set CYDEV_CHIP_REV_EXPECT, CYDEV_CHIP_REVISION_USED
.set CYDEV_CONFIG_FASTBOOT_ENABLED, 1
.set CYDEV_CONFIG_UNUSED_IO_AllowButWarn, 0
.set CYDEV_CONFIG_UNUSED_IO, CYDEV_CONFIG_UNUSED_IO_AllowButWarn
.set CYDEV_CONFIG_UNUSED_IO_AllowWithInfo, 1
.set CYDEV_CONFIG_UNUSED_IO_Disallowed, 2
.set CYDEV_CONFIGURATION_COMPRESSED, 1
.set CYDEV_CONFIGURATION_DMA, 0
.set CYDEV_CONFIGURATION_ECC, 1
.set CYDEV_CONFIGURATION_IMOENABLED, CYDEV_CONFIG_FASTBOOT_ENABLED
.set CYDEV_CONFIGURATION_MODE_COMPRESSED, 0
.set CYDEV_CONFIGURATION_MODE, CYDEV_CONFIGURATION_MODE_COMPRESSED
.set CYDEV_CONFIGURATION_MODE_DMA, 2
.set CYDEV_CONFIGURATION_MODE_UNCOMPRESSED, 1
.set CYDEV_DEBUG_ENABLE_MASK, 0x20
.set CYDEV_DEBUG_ENABLE_REGISTER, CYREG_MLOGIC_DEBUG
.set CYDEV_DEBUGGING_DPS_Disable, 3
.set CYDEV_DEBUGGING_DPS_JTAG_4, 1
.set CYDEV_DEBUGGING_DPS_JTAG_5, 0
.set CYDEV_DEBUGGING_DPS_SWD, 2
.set CYDEV_DEBUGGING_DPS_SWD_SWV, 6
.set CYDEV_DEBUGGING_DPS, CYDEV_DEBUGGING_DPS_SWD_SWV
.set CYDEV_DEBUGGING_ENABLE, 1
.set CYDEV_DEBUGGING_XRES, 0
.set CYDEV_DMA_CHANNELS_AVAILABLE, 24
.set CYDEV_ECC_ENABLE, 0
.set CYDEV_HEAP_SIZE, 0x0800
.set CYDEV_INSTRUCT_CACHE_ENABLED, 0
.set CYDEV_INTR_RISING, 0x00008000
.set CYDEV_IS_EXPORTING_CODE, 0
.set CYDEV_IS_IMPORTING_CODE, 0
.set CYDEV_PROJ_TYPE, 0
.set CYDEV_PROJ_TYPE_BOOTLOADER, 1
.set CYDEV_PROJ_TYPE_LAUNCHER, 5
.set CYDEV_PROJ_TYPE_LOADABLE, 2
.set CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER, 4
.set CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER, 3
.set CYDEV_PROJ_TYPE_STANDARD, 0
.set CYDEV_PROTECTION_ENABLE, 0
.set CYDEV_STACK_SIZE, 0x0800
.set CYDEV_USE_BUNDLED_CMSIS, 1
.set CYDEV_VARIABLE_VDDA, 0
.set CYDEV_VDDA_MV, 5000
.set CYDEV_VDDD_MV, 5000
.set CYDEV_VDDIO0_MV, 5000
.set CYDEV_VDDIO1_MV, 5000
.set CYDEV_VDDIO2_MV, 5000
.set CYDEV_VDDIO3_MV, 5000
.set CYDEV_VIO0_MV, 5000
.set CYDEV_VIO1_MV, 5000
.set CYDEV_VIO2_MV, 5000
.set CYDEV_VIO3_MV, 5000
.set CYIPBLOCK_ARM_CM3_VERSION, 0
.set CYIPBLOCK_P3_ANAIF_VERSION, 0
.set CYIPBLOCK_P3_CAN_VERSION, 0
.set CYIPBLOCK_P3_CAPSENSE_VERSION, 0
.set CYIPBLOCK_P3_COMP_VERSION, 0
.set CYIPBLOCK_P3_DECIMATOR_VERSION, 0
.set CYIPBLOCK_P3_DFB_VERSION, 0
.set CYIPBLOCK_P3_DMA_VERSION, 0
.set CYIPBLOCK_P3_DRQ_VERSION, 0
.set CYIPBLOCK_P3_DSM_VERSION, 0
.set CYIPBLOCK_P3_EMIF_VERSION, 0
.set CYIPBLOCK_P3_I2C_VERSION, 0
.set CYIPBLOCK_P3_LCD_VERSION, 0
.set CYIPBLOCK_P3_LPF_VERSION, 0
.set CYIPBLOCK_P3_OPAMP_VERSION, 0
.set CYIPBLOCK_P3_PM_VERSION, 0
.set CYIPBLOCK_P3_SCCT_VERSION, 0
.set CYIPBLOCK_P3_TIMER_VERSION, 0
.set CYIPBLOCK_P3_USB_VERSION, 0
.set CYIPBLOCK_P3_VIDAC_VERSION, 0
.set CYIPBLOCK_P3_VREF_VERSION, 0
.set CYIPBLOCK_S8_GPIO_VERSION, 0
.set CYIPBLOCK_S8_IRQ_VERSION, 0
.set CYIPBLOCK_S8_SAR_VERSION, 0
.set CYIPBLOCK_S8_SIO_VERSION, 0
.set CYIPBLOCK_S8_UDB_VERSION, 0
.set DMA_CHANNELS_USED__MASK0, 0x00000000
.set CYDEV_BOOTLOADER_ENABLE, 0
.endif
