/*******************************************************************************
* File Name: MIC_GND.h  
* Version 2.10
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_MIC_GND_H) /* Pins MIC_GND_H */
#define CY_PINS_MIC_GND_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "MIC_GND_aliases.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component cy_pins_v2_10 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 MIC_GND__PORT == 15 && ((MIC_GND__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

void    MIC_GND_Write(uint8 value) ;
void    MIC_GND_SetDriveMode(uint8 mode) ;
uint8   MIC_GND_ReadDataReg(void) ;
uint8   MIC_GND_Read(void) ;
uint8   MIC_GND_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define MIC_GND_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define MIC_GND_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define MIC_GND_DM_RES_UP          PIN_DM_RES_UP
#define MIC_GND_DM_RES_DWN         PIN_DM_RES_DWN
#define MIC_GND_DM_OD_LO           PIN_DM_OD_LO
#define MIC_GND_DM_OD_HI           PIN_DM_OD_HI
#define MIC_GND_DM_STRONG          PIN_DM_STRONG
#define MIC_GND_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define MIC_GND_MASK               MIC_GND__MASK
#define MIC_GND_SHIFT              MIC_GND__SHIFT
#define MIC_GND_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define MIC_GND_PS                     (* (reg8 *) MIC_GND__PS)
/* Data Register */
#define MIC_GND_DR                     (* (reg8 *) MIC_GND__DR)
/* Port Number */
#define MIC_GND_PRT_NUM                (* (reg8 *) MIC_GND__PRT) 
/* Connect to Analog Globals */                                                  
#define MIC_GND_AG                     (* (reg8 *) MIC_GND__AG)                       
/* Analog MUX bux enable */
#define MIC_GND_AMUX                   (* (reg8 *) MIC_GND__AMUX) 
/* Bidirectional Enable */                                                        
#define MIC_GND_BIE                    (* (reg8 *) MIC_GND__BIE)
/* Bit-mask for Aliased Register Access */
#define MIC_GND_BIT_MASK               (* (reg8 *) MIC_GND__BIT_MASK)
/* Bypass Enable */
#define MIC_GND_BYP                    (* (reg8 *) MIC_GND__BYP)
/* Port wide control signals */                                                   
#define MIC_GND_CTL                    (* (reg8 *) MIC_GND__CTL)
/* Drive Modes */
#define MIC_GND_DM0                    (* (reg8 *) MIC_GND__DM0) 
#define MIC_GND_DM1                    (* (reg8 *) MIC_GND__DM1)
#define MIC_GND_DM2                    (* (reg8 *) MIC_GND__DM2) 
/* Input Buffer Disable Override */
#define MIC_GND_INP_DIS                (* (reg8 *) MIC_GND__INP_DIS)
/* LCD Common or Segment Drive */
#define MIC_GND_LCD_COM_SEG            (* (reg8 *) MIC_GND__LCD_COM_SEG)
/* Enable Segment LCD */
#define MIC_GND_LCD_EN                 (* (reg8 *) MIC_GND__LCD_EN)
/* Slew Rate Control */
#define MIC_GND_SLW                    (* (reg8 *) MIC_GND__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define MIC_GND_PRTDSI__CAPS_SEL       (* (reg8 *) MIC_GND__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define MIC_GND_PRTDSI__DBL_SYNC_IN    (* (reg8 *) MIC_GND__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define MIC_GND_PRTDSI__OE_SEL0        (* (reg8 *) MIC_GND__PRTDSI__OE_SEL0) 
#define MIC_GND_PRTDSI__OE_SEL1        (* (reg8 *) MIC_GND__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define MIC_GND_PRTDSI__OUT_SEL0       (* (reg8 *) MIC_GND__PRTDSI__OUT_SEL0) 
#define MIC_GND_PRTDSI__OUT_SEL1       (* (reg8 *) MIC_GND__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define MIC_GND_PRTDSI__SYNC_OUT       (* (reg8 *) MIC_GND__PRTDSI__SYNC_OUT) 


#if defined(MIC_GND__INTSTAT)  /* Interrupt Registers */

    #define MIC_GND_INTSTAT                (* (reg8 *) MIC_GND__INTSTAT)
    #define MIC_GND_SNAP                   (* (reg8 *) MIC_GND__SNAP)

#endif /* Interrupt Registers */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_MIC_GND_H */


/* [] END OF FILE */
