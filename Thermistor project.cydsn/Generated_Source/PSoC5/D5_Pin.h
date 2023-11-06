/*******************************************************************************
* File Name: D5_Pin.h  
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

#if !defined(CY_PINS_D5_Pin_H) /* Pins D5_Pin_H */
#define CY_PINS_D5_Pin_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "D5_Pin_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 D5_Pin__PORT == 15 && ((D5_Pin__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    D5_Pin_Write(uint8 value);
void    D5_Pin_SetDriveMode(uint8 mode);
uint8   D5_Pin_ReadDataReg(void);
uint8   D5_Pin_Read(void);
void    D5_Pin_SetInterruptMode(uint16 position, uint16 mode);
uint8   D5_Pin_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the D5_Pin_SetDriveMode() function.
     *  @{
     */
        #define D5_Pin_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define D5_Pin_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define D5_Pin_DM_RES_UP          PIN_DM_RES_UP
        #define D5_Pin_DM_RES_DWN         PIN_DM_RES_DWN
        #define D5_Pin_DM_OD_LO           PIN_DM_OD_LO
        #define D5_Pin_DM_OD_HI           PIN_DM_OD_HI
        #define D5_Pin_DM_STRONG          PIN_DM_STRONG
        #define D5_Pin_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define D5_Pin_MASK               D5_Pin__MASK
#define D5_Pin_SHIFT              D5_Pin__SHIFT
#define D5_Pin_WIDTH              1u

/* Interrupt constants */
#if defined(D5_Pin__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in D5_Pin_SetInterruptMode() function.
     *  @{
     */
        #define D5_Pin_INTR_NONE      (uint16)(0x0000u)
        #define D5_Pin_INTR_RISING    (uint16)(0x0001u)
        #define D5_Pin_INTR_FALLING   (uint16)(0x0002u)
        #define D5_Pin_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define D5_Pin_INTR_MASK      (0x01u) 
#endif /* (D5_Pin__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define D5_Pin_PS                     (* (reg8 *) D5_Pin__PS)
/* Data Register */
#define D5_Pin_DR                     (* (reg8 *) D5_Pin__DR)
/* Port Number */
#define D5_Pin_PRT_NUM                (* (reg8 *) D5_Pin__PRT) 
/* Connect to Analog Globals */                                                  
#define D5_Pin_AG                     (* (reg8 *) D5_Pin__AG)                       
/* Analog MUX bux enable */
#define D5_Pin_AMUX                   (* (reg8 *) D5_Pin__AMUX) 
/* Bidirectional Enable */                                                        
#define D5_Pin_BIE                    (* (reg8 *) D5_Pin__BIE)
/* Bit-mask for Aliased Register Access */
#define D5_Pin_BIT_MASK               (* (reg8 *) D5_Pin__BIT_MASK)
/* Bypass Enable */
#define D5_Pin_BYP                    (* (reg8 *) D5_Pin__BYP)
/* Port wide control signals */                                                   
#define D5_Pin_CTL                    (* (reg8 *) D5_Pin__CTL)
/* Drive Modes */
#define D5_Pin_DM0                    (* (reg8 *) D5_Pin__DM0) 
#define D5_Pin_DM1                    (* (reg8 *) D5_Pin__DM1)
#define D5_Pin_DM2                    (* (reg8 *) D5_Pin__DM2) 
/* Input Buffer Disable Override */
#define D5_Pin_INP_DIS                (* (reg8 *) D5_Pin__INP_DIS)
/* LCD Common or Segment Drive */
#define D5_Pin_LCD_COM_SEG            (* (reg8 *) D5_Pin__LCD_COM_SEG)
/* Enable Segment LCD */
#define D5_Pin_LCD_EN                 (* (reg8 *) D5_Pin__LCD_EN)
/* Slew Rate Control */
#define D5_Pin_SLW                    (* (reg8 *) D5_Pin__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define D5_Pin_PRTDSI__CAPS_SEL       (* (reg8 *) D5_Pin__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define D5_Pin_PRTDSI__DBL_SYNC_IN    (* (reg8 *) D5_Pin__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define D5_Pin_PRTDSI__OE_SEL0        (* (reg8 *) D5_Pin__PRTDSI__OE_SEL0) 
#define D5_Pin_PRTDSI__OE_SEL1        (* (reg8 *) D5_Pin__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define D5_Pin_PRTDSI__OUT_SEL0       (* (reg8 *) D5_Pin__PRTDSI__OUT_SEL0) 
#define D5_Pin_PRTDSI__OUT_SEL1       (* (reg8 *) D5_Pin__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define D5_Pin_PRTDSI__SYNC_OUT       (* (reg8 *) D5_Pin__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(D5_Pin__SIO_CFG)
    #define D5_Pin_SIO_HYST_EN        (* (reg8 *) D5_Pin__SIO_HYST_EN)
    #define D5_Pin_SIO_REG_HIFREQ     (* (reg8 *) D5_Pin__SIO_REG_HIFREQ)
    #define D5_Pin_SIO_CFG            (* (reg8 *) D5_Pin__SIO_CFG)
    #define D5_Pin_SIO_DIFF           (* (reg8 *) D5_Pin__SIO_DIFF)
#endif /* (D5_Pin__SIO_CFG) */

/* Interrupt Registers */
#if defined(D5_Pin__INTSTAT)
    #define D5_Pin_INTSTAT            (* (reg8 *) D5_Pin__INTSTAT)
    #define D5_Pin_SNAP               (* (reg8 *) D5_Pin__SNAP)
    
	#define D5_Pin_0_INTTYPE_REG 		(* (reg8 *) D5_Pin__0__INTTYPE)
#endif /* (D5_Pin__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_D5_Pin_H */


/* [] END OF FILE */
