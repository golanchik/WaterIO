/*******************************************************************************
* File Name: main.h
*
* Description:
*  Contains the function prototypes and constants available to the example
*  project.
*
********************************************************************************
* Copyright 2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#ifndef MAIN_H

    #define MAIN_H
    
    #include <project.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include "stdbool.h"
    #include "app_Ble.h"
    #include "app_LED.h"
    #include "flash.h"
    /***************************************
    *   Conditional compilation parameters
    ***************************************/      
    ////
    //#define USE_UART
    #define USE_UART_FOR_LOG
    ////
    //#define     FLOW_CONTROL
    //#define     PRINT_MESSAGE_LOG
    #define     LOW_POWER_MODE
    //#define     EXT_WDT 
    // #define     FINAL_VERSION
    
    //#define TEST_VERSION (1)// for sampling priod of 1 min,
    //#define AHT10_TEST_ONLY (1)
    
    #define INT_WDT_ENABLE
    ////
    #define IMO_FREQUENCY_3MHZ			(3u)
    #define IMO_FREQUENCY_12MHZ			(12u)
    //#define USE_XSHUT
    //#define USE_PROXIMITY
    ////

    #ifndef   MIN
        #define MIN(a, b)         (((a) < (b)) ? (a) : (b))
    #endif

    #ifndef   MAX
      #define MAX(a, b)         (((a) > (b)) ? (a) : (b))
    #endif
    
    ////
    /***************************************
    *           API Constants
    ***************************************/
    /* WDT related constants */
    #define WDT_COUNTER                 (CY_SYS_WDT_COUNTER0)
    #define WDT_COUNTER_MASK            (CY_SYS_WDT_COUNTER0_MASK)
    #define WDT_INTERRUPT_SOURCE        (CY_SYS_WDT_COUNTER0_INT)
    #define WDT_COUNTER_ENABLE          (1u)
    #define WDT_COUNT_PERIOD            (32767ul)
    ////
    
    
    #define DEFAULT_SAMPLING_PERIOD (60)
    
    /***************************************
    *       Function Prototypes
    ***************************************/
    void AppCallBack(uint32 , void *);  
    ////
    CY_ISR_PROTO(TestBoxInt); // AviA changed
    CY_ISR_PROTO(MagneticSwitchInt); // AviA added
    CY_ISR_PROTO(ShockInt1); // AviA added
    CY_ISR(UartRxInt); // AviA added
    //CY_ISR_PROTO(DeviceInt3);
    extern uint32 RTC_Value;
    void WDT_Start(void);
    
    

    CY_ISR_PROTO(RTC_Interrupt);
    ////
    
#endif

/* [] END OF FILE */
