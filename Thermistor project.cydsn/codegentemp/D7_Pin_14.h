/*******************************************************************************
* File Name: D7_Pin_14.h  
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

#if !defined(CY_PINS_D7_Pin_14_H) /* Pins D7_Pin_14_H */
#define CY_PINS_D7_Pin_14_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "D7_Pin_14_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 D7_Pin_14__PORT == 15 && ((D7_Pin_14__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    D7_Pin_14_Write(uint8 value);
void    D7_Pin_14_SetDriveMode(uint8 mode);
uint8   D7_Pin_14_ReadDataReg(void);
uint8   D7_Pin_14_Read(void);
void    D7_Pin_14_SetInterruptMode(uint16 position, uint16 mode);
uint8   D7_Pin_14_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the D7_Pin_14_SetDriveMode() function.
     *  @{
     */
        #define D7_Pin_14_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define D7_Pin_14_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define D7_Pin_14_DM_RES_UP          PIN_DM_RES_UP
        #define D7_Pin_14_DM_RES_DWN         PIN_DM_RES_DWN
        #define D7_Pin_14_DM_OD_LO           PIN_DM_OD_LO
        #define D7_Pin_14_DM_OD_HI           PIN_DM_OD_HI
        #define D7_Pin_14_DM_STRONG          PIN_DM_STRONG
        #define D7_Pin_14_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define D7_Pin_14_MASK               D7_Pin_14__MASK
#define D7_Pin_14_SHIFT              D7_Pin_14__SHIFT
#define D7_Pin_14_WIDTH              1u

/* Interrupt constants */
#if defined(D7_Pin_14__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in D7_Pin_14_SetInterruptMode() function.
     *  @{
     */
        #define D7_Pin_14_INTR_NONE      (uint16)(0x0000u)
        #define D7_Pin_14_INTR_RISING    (uint16)(0x0001u)
        #define D7_Pin_14_INTR_FALLING   (uint16)(0x0002u)
        #define D7_Pin_14_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define D7_Pin_14_INTR_MASK      (0x01u) 
#endif /* (D7_Pin_14__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define D7_Pin_14_PS                     (* (reg8 *) D7_Pin_14__PS)
/* Data Register */
#define D7_Pin_14_DR                     (* (reg8 *) D7_Pin_14__DR)
/* Port Number */
#define D7_Pin_14_PRT_NUM                (* (reg8 *) D7_Pin_14__PRT) 
/* Connect to Analog Globals */                                                  
#define D7_Pin_14_AG                     (* (reg8 *) D7_Pin_14__AG)                       
/* Analog MUX bux enable */
#define D7_Pin_14_AMUX                   (* (reg8 *) D7_Pin_14__AMUX) 
/* Bidirectional Enable */                                                        
#define D7_Pin_14_BIE                    (* (reg8 *) D7_Pin_14__BIE)
/* Bit-mask for Aliased Register Access */
#define D7_Pin_14_BIT_MASK               (* (reg8 *) D7_Pin_14__BIT_MASK)
/* Bypass Enable */
#define D7_Pin_14_BYP                    (* (reg8 *) D7_Pin_14__BYP)
/* Port wide control signals */                                                   
#define D7_Pin_14_CTL                    (* (reg8 *) D7_Pin_14__CTL)
/* Drive Modes */
#define D7_Pin_14_DM0                    (* (reg8 *) D7_Pin_14__DM0) 
#define D7_Pin_14_DM1                    (* (reg8 *) D7_Pin_14__DM1)
#define D7_Pin_14_DM2                    (* (reg8 *) D7_Pin_14__DM2) 
/* Input Buffer Disable Override */
#define D7_Pin_14_INP_DIS                (* (reg8 *) D7_Pin_14__INP_DIS)
/* LCD Common or Segment Drive */
#define D7_Pin_14_LCD_COM_SEG            (* (reg8 *) D7_Pin_14__LCD_COM_SEG)
/* Enable Segment LCD */
#define D7_Pin_14_LCD_EN                 (* (reg8 *) D7_Pin_14__LCD_EN)
/* Slew Rate Control */
#define D7_Pin_14_SLW                    (* (reg8 *) D7_Pin_14__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define D7_Pin_14_PRTDSI__CAPS_SEL       (* (reg8 *) D7_Pin_14__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define D7_Pin_14_PRTDSI__DBL_SYNC_IN    (* (reg8 *) D7_Pin_14__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define D7_Pin_14_PRTDSI__OE_SEL0        (* (reg8 *) D7_Pin_14__PRTDSI__OE_SEL0) 
#define D7_Pin_14_PRTDSI__OE_SEL1        (* (reg8 *) D7_Pin_14__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define D7_Pin_14_PRTDSI__OUT_SEL0       (* (reg8 *) D7_Pin_14__PRTDSI__OUT_SEL0) 
#define D7_Pin_14_PRTDSI__OUT_SEL1       (* (reg8 *) D7_Pin_14__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define D7_Pin_14_PRTDSI__SYNC_OUT       (* (reg8 *) D7_Pin_14__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(D7_Pin_14__SIO_CFG)
    #define D7_Pin_14_SIO_HYST_EN        (* (reg8 *) D7_Pin_14__SIO_HYST_EN)
    #define D7_Pin_14_SIO_REG_HIFREQ     (* (reg8 *) D7_Pin_14__SIO_REG_HIFREQ)
    #define D7_Pin_14_SIO_CFG            (* (reg8 *) D7_Pin_14__SIO_CFG)
    #define D7_Pin_14_SIO_DIFF           (* (reg8 *) D7_Pin_14__SIO_DIFF)
#endif /* (D7_Pin_14__SIO_CFG) */

/* Interrupt Registers */
#if defined(D7_Pin_14__INTSTAT)
    #define D7_Pin_14_INTSTAT            (* (reg8 *) D7_Pin_14__INTSTAT)
    #define D7_Pin_14_SNAP               (* (reg8 *) D7_Pin_14__SNAP)
    
	#define D7_Pin_14_0_INTTYPE_REG 		(* (reg8 *) D7_Pin_14__0__INTTYPE)
#endif /* (D7_Pin_14__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_D7_Pin_14_H */


/* [] END OF FILE */
