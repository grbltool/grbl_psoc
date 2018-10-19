/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#ifndef CYAPICALLBACKS_H
#define CYAPICALLBACKS_H
    

    /*Define your macro callbacks here */
    /*For more information, refer to the Writing Code topic in the PSoC Creator Help.*/
  
    #include "..\..\..\GIT\grbl_1_1_g_psoc\grbl\config.h"

    #ifdef PSOC_USB
      #define USBUART_EP_3_ISR_ENTRY_CALLBACK
      #ifdef USBUART_EP_3_ISR_ENTRY_CALLBACK
        #include "..\..\..\GIT\grbl_1_1_g_psoc\grbl\serial.h"
        #define USBUART_EP_3_ISR_EntryCallback isr_rx_handler
      #endif
    #endif

    
#endif /* CYAPICALLBACKS_H */   
/* [] */
