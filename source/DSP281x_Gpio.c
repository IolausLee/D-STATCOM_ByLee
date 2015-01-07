// TI File $Revision: /main/2 $
// Checkin $Date: April 29, 2005   11:10:14 $
//###########################################################################
//
// FILE:	DSP281x_Gpio.c
//
// TITLE:	DSP281x General Purpose I/O Initialization & Support Functions.
//
//###########################################################################
// $TI Release: DSP281x C/C++ Header Files V1.20 $
// $Release Date: July 27, 2009 $
//###########################################################################

#include "DSP281x_Device.h"     // DSP281x Headerfile Include File
#include "DSP281x_Examples.h"   // DSP281x Examples Include File

//---------------------------------------------------------------------------
// InitGpio: 
//---------------------------------------------------------------------------
// This function initializes the Gpio to a known state.
//
void InitGpio(void)
{

// Set GPIO A port pins,AL(Bits 7:0)(input)-AH(Bits 15:8) (output) 8bits
// Input Qualifier =0, none
     EALLOW;
     GpioMuxRegs.GPAMUX.all=0x0000;     
     GpioMuxRegs.GPADIR.all=0xFF00;    	// upper byte as output/low byte as input
     GpioMuxRegs.GPAQUAL.all=0x0000;	// Input qualifier disabled

// Set GPIO B port pins, configured as EVB signals
// Input Qualifier =0, none
// Set bits to 1 to configure peripherals signals on the pins
     GpioMuxRegs.GPBMUX.all=0xFFFF;   
     GpioMuxRegs.GPBQUAL.all=0x0000;	// Input qualifier disabled
     EDIS;

}	


void Init_Gpio(void)
{
	EALLOW;
	
	GpioMuxRegs.GPAMUX.bit.T1PWM_GPIOA6=1;
	GpioMuxRegs.GPAMUX.bit.T2PWM_GPIOA7=1;
	GpioMuxRegs.GPAMUX.bit.PWM1_GPIOA0=1;
	GpioMuxRegs.GPAMUX.bit.PWM2_GPIOA1=1;
	GpioMuxRegs.GPAMUX.bit.PWM3_GPIOA2=1;
	GpioMuxRegs.GPAMUX.bit.PWM4_GPIOA3=1;
	GpioMuxRegs.GPAMUX.bit.PWM5_GPIOA4=1;
	GpioMuxRegs.GPAMUX.bit.PWM6_GPIOA5=1;

	GpioMuxRegs.GPBMUX.bit.T3PWM_GPIOB6=1;
	GpioMuxRegs.GPBMUX.bit.T4PWM_GPIOB7=1;
	GpioMuxRegs.GPBMUX.bit.PWM7_GPIOB0=1;
	GpioMuxRegs.GPBMUX.bit.PWM8_GPIOB1=1;
	GpioMuxRegs.GPBMUX.bit.PWM9_GPIOB2=1;
	GpioMuxRegs.GPBMUX.bit.PWM10_GPIOB3=1;
	GpioMuxRegs.GPBMUX.bit.PWM11_GPIOB4=1;
	GpioMuxRegs.GPBMUX.bit.PWM12_GPIOB5=1;
	
	GpioMuxRegs.GPBMUX.bit.CAP4Q1_GPIOB8=0;
	GpioMuxRegs.GPBMUX.bit.CAP5Q2_GPIOB9=0;
	GpioMuxRegs.GPBDIR.bit.GPIOB8=1;
	GpioMuxRegs.GPBDIR.bit.GPIOB9=1;

	GpioMuxRegs.GPFMUX.bit.SCIRXDA_GPIOF5=0;//ÉèÎªGPIO
	GpioMuxRegs.GPFDIR.bit.GPIOF5=1;
	GpioMuxRegs.GPFMUX.bit.SCITXDA_GPIOF4=0;        
    GpioMuxRegs.GPFDIR.bit.GPIOF4=1;

	EDIS;
}

	
//===========================================================================
// No more.
//===========================================================================
