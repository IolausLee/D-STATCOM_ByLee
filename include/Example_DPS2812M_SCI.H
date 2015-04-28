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
			 unsigned int    PortSel;               //�˿�ѡ��Ӳ����1-SCIAΪ232��0-SCIBΪ485 
		    unsigned int    CommFlag;              //���շ���ѡ��
		    unsigned int    CommLen;               //��ͨѶ����
		    unsigned int    Count;                 //ͨѶ����
            unsigned int    FrameError;            //�����־         
	        unsigned char   CommData[40];          //���շ��ͻ����� unsigned charΪ8bit
	          void            (*Comm)();
	              } SCI_DRV;	            

typedef SCI_DRV *SCI_DRV_handle;
/*------------------------------------------------------------------------------
datatab in Mudbus.C
------------------------------------------------------------------------------*/
//extern int Out_Data[40];
int Out_Data[40];
 
//���ϴ����ַ 
                    
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


// SCIB����
/*	EALLOW;
	GpioMuxRegs.GPGMUX.all |= 0x0030;
	EDIS;
	ScibRegs.SCICCR.all = 0x07;

	ScibRegs.SCICTL1.all = 0x03;
	ScibRegs.SCICTL2.all = 0x00;

	ScibRegs.SCIHBAUD = 0x01;
	ScibRegs.SCILBAUD = 0xe7;

	
	ScibRegs.SCICTL1.all = 0x23;*/

// SCIA\����
	EALLOW;
	//GpioMuxRegs.GPFMUX.all |= 0x0030;
	EDIS;

	SciaRegs.SCICCR.all = 0x07;
//SCICCR=0x07=0000 0111
//��7λ 0��һ������λ
//��6λ 0���漫��
//��5λ 0����żУ���ֹ
//��4λ 0����ֹ���Ͳ���ģʽ����
//��3λ 0��������ģʽЭ��
//��2~0λ �ַ����� 111:8λ 

	SciaRegs.SCICTL1.all = 0x03;
	SciaRegs.SCICTL2.all = 0x00;
//SCICTL1=0x03=0000 0011
//��7λ 0��reserved
//��6λ 0����ֹ���մ����ж�
//��5λ 0��SCI��λ������Ч������ʼ��SCI״̬���Ͳ�����־λ����λ״̬
//��4λ 0��reserved
//��3λ 0�����ѷ�ʽѡ��
//��2λ 0����ֹ˯��ģʽ
//��1λ 1����������������
//��0λ 1����������������
	SciaRegs.SCIHBAUD = 0x01;
	SciaRegs.SCILBAUD = 0xe7;
//*SCI�����ʣ�Baud��
//*2400(bps) 0x7a00
//*4800 0x3d00
//*9600 0x01e7
//*19200 0x00f3
//*38400 0x0079
	SciaRegs.SCICTL1.all = 0x23;//��5λд��1 ����SCI
}
//extern volatile struct TABLE Table;    
                                      
#endif 
