/**
 * Generated Driver File
 * 
 * @file pins.c
 * 
 * @ingroup  pinsdriver
 * 
 * @brief This is generated driver implementation for pins. 
 *        This file provides implementations for pin APIs for all pins selected in the GUI.
 *
 * @version Driver Version 3.0.0
*/

/*
� [2025] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#include "../pins.h"


void PIN_MANAGER_Initialize(void)
{
   /**
    LATx registers
    */
    LATA = 0x0;
    LATC = 0x3;

    /**
    TRISx registers
    */
    TRISA = 0x3F;
    TRISC = 0x3F;

    /**
    ANSELx registers
    */
    ANSELA = 0x33;
    ANSELC = 0x3C;

    /**
    WPUx registers
    */
    WPUA = 0x0;
    WPUC = 0x0;
  
    /**
    ODx registers
    */
   
    ODCONA = 0x0;
    ODCONC = 0x0;
    /**
    SLRCONx registers
    */
    SLRCONA = 0x37;
    SLRCONC = 0x3F;
    /**
    INLVLx registers
    */
    INLVLA = 0x3F;
    INLVLC = 0x3F;

    /**
    PPS registers
    */
    INTPPS = 0x2; //RA2->INTERRUPT MANAGER:INT;
    SSP1CLKPPS = 0x10;  //RC0->MSSP1:SCL1;
    RC0PPS = 0x07;  //RC0->MSSP1:SCL1;
    SSP1DATPPS = 0x11;  //RC1->MSSP1:SDA1;
    RC1PPS = 0x08;  //RC1->MSSP1:SDA1;

    /**
    APFCON registers
    */

   /**
    IOCx registers 
    */
    IOCAP = 0x0;
    IOCAN = 0x0;
    IOCAF = 0x0;
    IOCCP = 0x0;
    IOCCN = 0x0;
    IOCCF = 0x0;


}
  
void PIN_MANAGER_IOC(void)
{
}
/**
 End of File
*/