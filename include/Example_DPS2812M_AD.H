/* =================================================================================
File name:       	Example_DPS2812M_AD.H                    
                    
Originator:				SEED R&D Group
		
Description: 
Header file containing constants, data type definitions, and 
function prototypes for the External Analog to Digital Example. 

=====================================================================================
 History:
-------------------------------------------------------------------------------------
 10-20-2005		Release	Rev 1.0         Jijunhui                                          
------------------------------------------------------------------------------*/
#include "math.h"
#ifndef __Example_DPS2812M_AD_H__

#define __Example_DPS2812M_AD_H__ 

#define BYTE		 8
#define WORD		 16
															
//***************************************************************/ 
//* Configurable Handware Parameter for AD         	          */ 
//***************************************************************/
unsigned int * AD_CONVST   = (unsigned int *) 0x2e00;
unsigned int * AD_CHIPSEL0 = (unsigned int *) 0x2a00;
unsigned int * AD_CHIPSEL1 = (unsigned int *) 0x2b00;
unsigned int * ADREG=(unsigned int*)0x3000;
int InitPoint;

//**************************************************************/
//* AD Data struct*/
//**************************************************************/
struct FLAG_BITS {       
   unsigned int  ADCCS0:1;      //AD7656片选1
   unsigned int  ADCCS1:1;      //AD7656片选2
   unsigned int  ADCCSProFlag:1;//两片同时使能处理标志，本例程不提供 
   unsigned int  ADCSampleFlag:1;
   unsigned int  rsvd:12;       //保留
};


union FLAG_REG {
	unsigned int 	  all;
	struct FLAG_BITS  bit;
};
 
typedef struct { 
		unsigned int ADChannelSel;				  //AD通道选择
		union FLAG_REG ADCFlag;                   //AD模式选择（保留）
		//unsigned int LoopVar;          
		unsigned int ADSampleResult0[128];			  //AD通道0数据
		unsigned int ADSampleResult1[128];			  //AD通道1数据
		unsigned int ADSampleResult2[128];			  //AD通道2数据
		unsigned int ADSampleResult3[128];			  //AD通道3数据
		unsigned int ADSampleResult4[128];			  //AD通道4数据
		unsigned int ADSampleResult5[128];			  //AD通道5数据
		int *ptrADCData;                      
        void (*ADCPro)();						//DAC处理主程序        
  	}ADC_DRV; 
  	
#define ADC_DRV_DEFAULTS {1,1,\
	    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,\
	    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,\
	    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,\
     0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,\
	    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,\
	    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,\
	    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,\
	    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,\
	    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,\
	    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,\
	    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,\
	    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,\
	    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,\
	    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,\
	    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,\
	    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,\
	    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,\
	    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,\
	    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,\
	    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,\
	    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,\
	    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,\
	    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,\
	    0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,\
	    &InitPoint,\
	    (void (*)(Uint32))ADCSmplePro,\
		}  
	    
typedef ADC_DRV *ADC_DRV_handle;

void ADCSmplePro(ADC_DRV *);

#endif
        
