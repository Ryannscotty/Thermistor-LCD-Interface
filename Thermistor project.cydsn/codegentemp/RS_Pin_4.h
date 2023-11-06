/*******************************************************************************
* File Name: RS_Pin_4.h  
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

#if !defined(CY_PINS_RS_Pin_4_H) /* Pins RS_Pin_4_H */
#define CY_PINS_RS_Pin_4_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "RS_Pin_4_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 RS_Pin_4__PORT == 15 && ((RS_Pin_4__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    RS_Pin_4_Write(uint8 value);
void    RS_Pin_4_SetDriveMode(uint8 mode);
uint8   RS_Pin_4_ReadDataReg(void);
uint8   RS_Pin_4_Read(void);
void    RS_Pin_4_SetInterruptMode(uint16 position, uint16 mode);
uint8   RS_Pin_4_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the RS_Pin_4_SetDriveMode() function.
     *  @{
     */
        #define RS_Pin_4_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define RS_Pin_4_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define RS_Pin_4_DM_RES_UP          PIN_DM_RES_UP
        #define RS_Pin_4_DM_RES_DWN         PIN_DM_RES_DWN
        #define RS_Pin_4_DM_OD_LO           PIN_DM_OD_LO
        #define RS_Pin_4_DM_OD_HI           PIN_DM_OD_HI
        #define RS_Pin_4_DM_STRONG          PIN_DM_STRONG
        #define RS_Pin_4_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define RS_Pin_4_MASK               RS_Pin_4__MASK
#define RS_Pin_4_SHIFT              RS_Pin_4__SHIFT
#define RS_Pin_4_WIDTH              1u

/* Interrupt constants */
#if defined(RS_Pin_4__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in RS_Pin_4_SetInterruptMode() function.
     *  @{
     */
        #define RS_Pin_4_INTR_NONE      (uint16)(0x0000u)
        #define RS_Pin_4_INTR_RISING    (uint16)(0x0001u)
        #define RS_Pin_4_INTR_FALLING   (uint16)(0x0002u)
        #define RS_Pin_4_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define RS_Pin_4_INTR_MASK      (0x01u) 
#endif /* (RS_Pin_4__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define RS_Pin_4_PS                     (* (reg8 *) RS_Pin_4__PS)
/* Data Register */
#define RS_Pin_4_DR                     (* (reg8 *) RS_Pin_4__DR)
/* Port Number */
#define RS_Pin_4_PRT_NUM                (* (reg8 *) RS_Pin_4__PRT) 
/* Connect to Analog Globals */                                                  
#define RS_Pin_4_AG                     (* (reg8 *) RS_Pin_4__AG)                       
/* Analog MUX bux enable */
#define RS_Pin_4_AMUX                   (* (reg8 *) RS_Pin_4__AMUX) 
/* Bidirectional Enable */                                                        
#define RS_Pin_4_BIE                    (* (reg8 *) RS_Pin_4__BIE)
/* Bit-mask for Aliased Register Access */
#define RS_Pin_4_BIT_MASK               (* (reg8 *) RS_Pin_4__BIT_MASK)
/* Bypass Enable */
#define RS_Pin_4_BYP                    (* (reg8 *) RS_Pin_4__BYP)
/* Port wide control signals */                                                   
#define RS_Pin_4_CTL                    (* (reg8 *) RS_Pin_4__CTL)
/* Drive Modes */
#define RS_Pin_4_DM0                    (* (reg8 *) RS_Pin_4__DM0) 
#define RS_Pin_4_DM1                    (* (reg8 *) RS_Pin_4__DM1)
#define RS_Pin_4_DM2                    (* (reg8 *) RS_Pin_4__DM2) 
/* Input Buffer Disable Override */
#define RS_Pin_4_INP_DIS                (* (reg8 *) RS_Pin_4__INP_DIS)
/* LCD Common or Segment Drive */
#define RS_Pin_4_LCD_COM_SEG            (* (reg8 *) RS_Pin_4__LCD_COM_SEG)
/* Enable Segment LCD */
#define RS_Pin_4_LCD_EN                 (* (reg8 *) RS_Pin_4__LCD_EN)
/* Slew Rate Control */
#define RS_Pin_4_SLW                    (* (reg8 *) RS_Pin_4__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define RS_Pin_4_PRTDSI__CAPS_SEL       (* (reg8 *) RS_Pin_4__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define RS_Pin_4_PRTDSI__DBL_SYNC_IN    (* (reg8 *) RS_Pin_4__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define RS_Pin_4_PRTDSI__OE_SEL0        (* (reg8 *) RS_Pin_4__PRTDSI__OE_SEL0) 
#define RS_Pin_4_PRTDSI__OE_SEL1        (* (reg8 *) RS_Pin_4__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define RS_Pin_4_PRTDSI__OUT_SEL0       (* (reg8 *) RS_Pin_4__PRTDSI__OUT_SEL0) 
#define RS_Pin_4_PRTDSI__OUT_SEL1       (* (reg8 *) RS_Pin_4__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define RS_Pin_4_PRTDSI__SYNC_OUT       (* (reg8 *) RS_Pin_4__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(RS_Pin_4__SIO_CFG)
    #define RS_Pin_4_SIO_HYST_EN        (* (reg8 *) RS_Pin_4__SIO_HYST_EN)
    #define RS_Pin_4_SIO_REG_HIFREQ     (* (reg8 *) RS_Pin_4__SIO_REG_HIFREQ)
    #define RS_Pin_4_SIO_CFG            (* (reg8 *) RS_Pin_4__SIO_CFG)
    #define RS_Pin_4_SIO_DIFF           (* (reg8 *) RS_Pin_4__SIO_DIFF)
#endif /* (RS_Pin_4__SIO_CFG) */

/* Interrupt Registers */
#if defined(RS_Pin_4__INTSTAT)
    #define RS_Pin_4_INTSTAT            (* (reg8 *) RS_Pin_4__INTSTAT)
    #define RS_Pin_4_SNAP               (* (reg8 *) RS_Pin_4__SNAP)
    
	#define RS_Pin_4_0_INTTYPE_REG 		(* (reg8 *) RS_Pin_4__0__INTTYPE)
#endif /* (RS_Pin_4__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_RS_Pin_4_H */


/* [] END OF FILE */
