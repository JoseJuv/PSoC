/*******************************************************************************
* File Name: OneWireD.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_OneWireD_H) /* Pins OneWireD_H */
#define CY_PINS_OneWireD_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "OneWireD_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 OneWireD__PORT == 15 && ((OneWireD__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    OneWireD_Write(uint8 value);
void    OneWireD_SetDriveMode(uint8 mode);
uint8   OneWireD_ReadDataReg(void);
uint8   OneWireD_Read(void);
void    OneWireD_SetInterruptMode(uint16 position, uint16 mode);
uint8   OneWireD_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the OneWireD_SetDriveMode() function.
     *  @{
     */
        #define OneWireD_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define OneWireD_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define OneWireD_DM_RES_UP          PIN_DM_RES_UP
        #define OneWireD_DM_RES_DWN         PIN_DM_RES_DWN
        #define OneWireD_DM_OD_LO           PIN_DM_OD_LO
        #define OneWireD_DM_OD_HI           PIN_DM_OD_HI
        #define OneWireD_DM_STRONG          PIN_DM_STRONG
        #define OneWireD_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define OneWireD_MASK               OneWireD__MASK
#define OneWireD_SHIFT              OneWireD__SHIFT
#define OneWireD_WIDTH              1u

/* Interrupt constants */
#if defined(OneWireD__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in OneWireD_SetInterruptMode() function.
     *  @{
     */
        #define OneWireD_INTR_NONE      (uint16)(0x0000u)
        #define OneWireD_INTR_RISING    (uint16)(0x0001u)
        #define OneWireD_INTR_FALLING   (uint16)(0x0002u)
        #define OneWireD_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define OneWireD_INTR_MASK      (0x01u) 
#endif /* (OneWireD__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define OneWireD_PS                     (* (reg8 *) OneWireD__PS)
/* Data Register */
#define OneWireD_DR                     (* (reg8 *) OneWireD__DR)
/* Port Number */
#define OneWireD_PRT_NUM                (* (reg8 *) OneWireD__PRT) 
/* Connect to Analog Globals */                                                  
#define OneWireD_AG                     (* (reg8 *) OneWireD__AG)                       
/* Analog MUX bux enable */
#define OneWireD_AMUX                   (* (reg8 *) OneWireD__AMUX) 
/* Bidirectional Enable */                                                        
#define OneWireD_BIE                    (* (reg8 *) OneWireD__BIE)
/* Bit-mask for Aliased Register Access */
#define OneWireD_BIT_MASK               (* (reg8 *) OneWireD__BIT_MASK)
/* Bypass Enable */
#define OneWireD_BYP                    (* (reg8 *) OneWireD__BYP)
/* Port wide control signals */                                                   
#define OneWireD_CTL                    (* (reg8 *) OneWireD__CTL)
/* Drive Modes */
#define OneWireD_DM0                    (* (reg8 *) OneWireD__DM0) 
#define OneWireD_DM1                    (* (reg8 *) OneWireD__DM1)
#define OneWireD_DM2                    (* (reg8 *) OneWireD__DM2) 
/* Input Buffer Disable Override */
#define OneWireD_INP_DIS                (* (reg8 *) OneWireD__INP_DIS)
/* LCD Common or Segment Drive */
#define OneWireD_LCD_COM_SEG            (* (reg8 *) OneWireD__LCD_COM_SEG)
/* Enable Segment LCD */
#define OneWireD_LCD_EN                 (* (reg8 *) OneWireD__LCD_EN)
/* Slew Rate Control */
#define OneWireD_SLW                    (* (reg8 *) OneWireD__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define OneWireD_PRTDSI__CAPS_SEL       (* (reg8 *) OneWireD__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define OneWireD_PRTDSI__DBL_SYNC_IN    (* (reg8 *) OneWireD__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define OneWireD_PRTDSI__OE_SEL0        (* (reg8 *) OneWireD__PRTDSI__OE_SEL0) 
#define OneWireD_PRTDSI__OE_SEL1        (* (reg8 *) OneWireD__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define OneWireD_PRTDSI__OUT_SEL0       (* (reg8 *) OneWireD__PRTDSI__OUT_SEL0) 
#define OneWireD_PRTDSI__OUT_SEL1       (* (reg8 *) OneWireD__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define OneWireD_PRTDSI__SYNC_OUT       (* (reg8 *) OneWireD__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(OneWireD__SIO_CFG)
    #define OneWireD_SIO_HYST_EN        (* (reg8 *) OneWireD__SIO_HYST_EN)
    #define OneWireD_SIO_REG_HIFREQ     (* (reg8 *) OneWireD__SIO_REG_HIFREQ)
    #define OneWireD_SIO_CFG            (* (reg8 *) OneWireD__SIO_CFG)
    #define OneWireD_SIO_DIFF           (* (reg8 *) OneWireD__SIO_DIFF)
#endif /* (OneWireD__SIO_CFG) */

/* Interrupt Registers */
#if defined(OneWireD__INTSTAT)
    #define OneWireD_INTSTAT            (* (reg8 *) OneWireD__INTSTAT)
    #define OneWireD_SNAP               (* (reg8 *) OneWireD__SNAP)
    
	#define OneWireD_0_INTTYPE_REG 		(* (reg8 *) OneWireD__0__INTTYPE)
#endif /* (OneWireD__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_OneWireD_H */


/* [] END OF FILE */
