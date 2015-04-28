/* =================================================================================
File name:       Mudbus.H (28x version)                    
                    
Originator:	R&D Group
		NIE 

Description: 
Header file containing constants, data type definitions, and 
function prototypes for the communication.

=====================================================================================
 History:
-------------------------------------------------------------------------------------
 03-16-2005		Release	Rev 1.0                                                   
------------------------------------------------------------------------------*/
#ifndef __Example_DPS2812M_SCI_H__

#define __Example_DPS2812M_SCI_H__

#define COMRXSUCCESS 2
#define COMTXSUCCESS 3
#define TX 				 1
#define RX 				 0
#define COMMERROR  0xff
#define MODULE     0xf0
#define PARANUMMIN 0
#define PARANUMMAX 40
#define RS232      1
#define RS485      0

typedef struct { 
	      int far	*TabValuePoint;
			 unsigned int    PortSel;               //端口选择；硬件上1-SCIA为232，0-SCIB为485 
		    unsigned int    CommFlag;              //接收发送选择
		    unsigned int    CommLen;               //桢通讯长度
		    unsigned int    Count;                 //通讯计数
            unsigned int    FrameError;            //错误标志         
	        unsigned char   CommData[40];          //接收发送缓冲区 unsigned char为8bit
	          void            (*Comm)();
	              } SCI_DRV;	            

typedef SCI_DRV *SCI_DRV_handle;
/*------------------------------------------------------------------------------
datatab in Mudbus.C
------------------------------------------------------------------------------*/
//extern int Out_Data[40];
int Out_Data[40];
 
//故障代码地址 
                    
/*-----------------------------------------------------------------------------
Default initalizer for the Mudbus object.
-----------------------------------------------------------------------------*/                     
#define SCI_DRV_DEFAULTS { &Out_Data[0], \
                          1,\
                          1,\
                          8,\
                          0,\
                          0, \
                          {0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,\
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,},\
              		  (void (*)(Uint32))Comm} 
              		  
/*------------------------------------------------------------------------------
Prototypes for the functions in Mudbus.C
------------------------------------------------------------------------------*/
void Comm(SCI_DRV_handle);
void InitSciRS485(void);
//void InitSciRS232(void);
void InitSciRS232(void)
{


// SCIB设置
/*	EALLOW;
	GpioMuxRegs.GPGMUX.all |= 0x0030;
	EDIS;
	ScibRegs.SCICCR.all = 0x07;

	ScibRegs.SCICTL1.all = 0x03;
	ScibRegs.SCICTL2.all = 0x00;

	ScibRegs.SCIHBAUD = 0x01;
	ScibRegs.SCILBAUD = 0xe7;

	
	ScibRegs.SCICTL1.all = 0x23;*/

// SCIA\设置
	EALLOW;
	//GpioMuxRegs.GPFMUX.all |= 0x0030;
	EDIS;

	SciaRegs.SCICCR.all = 0x07;
//SCICCR=0x07=0000 0111
//第7位 0：一个结束位
//第6位 0：奇极性
//第5位 0：奇偶校验禁止
//第4位 0：禁止回送测试模式功能
//第3位 0：空闲线模式协议
//第2~0位 字符长度 111:8位 

	SciaRegs.SCICTL1.all = 0x03;
	SciaRegs.SCICTL2.all = 0x00;
//SCICTL1=0x03=0000 0011
//第7位 0：reserved
//第6位 0：禁止接收错误中断
//第5位 0：SCI复位（低有效），初始化SCI状态及和操作标志位至复位状态
//第4位 0：reserved
//第3位 0：唤醒方式选择
//第2位 0：禁止睡眠模式
//第1位 1：启动发送器工作
//第0位 1：启动接收器工作
	SciaRegs.SCIHBAUD = 0x01;
	SciaRegs.SCILBAUD = 0xe7;
//*SCI波特率（Baud）
//*2400(bps) 0x7a00
//*4800 0x3d00
//*9600 0x01e7
//*19200 0x00f3
//*38400 0x0079
	SciaRegs.SCICTL1.all = 0x23;//第5位写入1 重启SCI
}
//extern volatile struct TABLE Table;    
                                      
#endif 

