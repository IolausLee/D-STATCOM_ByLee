#ifndef ALGORITHM_BYLEE_H_
#define ALGORITHM_BYLEE_H_

//#pragma CODE_SECTION(pi_calc,"ramfuncs");
//#pragma CODE_SECTION(clarke_calc,"ramfuncs");
//#pragma CODE_SECTION(anticlarke_calc,"ramfuncs"); 
//#pragma CODE_SECTION(park_calc,"ramfuncs"); 
//#pragma CODE_SECTION(antipark_calc,"ramfuncs");
//#pragma CODE_SECTION(line_to_phase,"ramfuncs");
//#pragma CODE_SECTION(pll_calc,"ramfuncs");


typedef struct PI_CTRL_TYPEDEF
{  
	float32  Kp;			// Parameter: Proportional gain  ����ϵ��
	float32  Ki;			// Parameter: Integral gain  ����ǿ��
	//float32  Ref;   		// Input: Reference input ����ֵ
	//float32  Fdb;   		// Input: Feedback input ����ֵ
	float32  Errp;			// Variable: Error   ���
	float32  Up;			// Variable: Proportional output  ������� 
	float32  Ui;			// Variable: Integral output  �������
	float32  OutPreSat;		// Variable: Pre-saturated output Ԥ���
	float32  OutMax;		// Parameter: Maximum output ������ֵ
	float32  OutMin;		// Parameter: Minimum output �����Сֵ
	float32  Out;   		// Output: PID output PID���
} PI_Ctrl;	 
	 




typedef struct CLARKE_TYPEDEF 
{
	//float32 As;  // Input: phase-a stator variable  
	//float32 Bs;  // Input: phase-b stator variable  
	float32 Alpha;  // Output: stationary d-axis stator variable 
	float32 Beta;  // Output: stationary q-axis stator variable 
} CLARKE;

//void clarke_calc(CLARKE *c,float As,float Bs,float Cs)
void clarke_calc(CLARKE *c,float As,float Bs)
{ 
	c->Alpha = As;//����ƽ���¿���
	c->Beta = (As + 2*Bs)*0.57735026918963;  //1/sqrt(3) = 0.57735026918963 

	//c->Alpha=0.66666*As-0.33333*(Bs+Cs);
	//c->Beta=0.57735*(Bs-Cs);

	//return 0; 
} 


typedef struct ANTICLARKE_TYPEDEF
{
	//float32  Alpha;  //input 
	//float32  Beta;	//input
	float32  As;  //output
	float32  Bs;  //output
	float32  Cs;  //output
} ANTICLARKE;	 

void anticlarke_calc(ANTICLARKE *ac,float Alpha,float Beta)
{
	ac->As = Alpha;
	ac->Bs = 0.866 * Beta - 0.5 * Alpha;  //sqrt(3)/2=0.8660234038
	ac->Cs = -0.866 * Beta - 0.5 * Alpha;

} 


typedef struct PARK_TYPEDEF
{
	//float32 Alpha;  // Input: stationary d-axis stator variable 
	//float32 Beta;  // Input: stationary q-axis stator variable 
	//float32 cosa;  // Input: 
	//float32 sina;  //input;
	float32 Ds;  // Output: rotating d-axis stator variable 
	float32 Qs;  // Output: rotating q-axis stator variable 
} PARK;

void park_calc(PARK *p,float Alpha,float Beta,float sina,float cosa)
{  
	p->Ds = Alpha * cosa + Beta * sina;
	p->Qs = Beta * cosa - Alpha * sina;

	//return 0;
} 

typedef struct ANTIPARK_TYPEDEF
{
	float32  Alpha;  	// 
	float32  Beta;	//  
	//float32  cosa;	// Input: 
	//float32  sina;    //Input
	//float32  Ds;		// Input: rotating d-axis stator variable 
	//float32  Qs;		// Input: rotating q-axis stator variable  
} ANTIPARK;	
				
void antipark_calc(ANTIPARK *ap,float Ds,float Qs,float sina,float cosa)
{  
    ap->Alpha = Ds * cosa - Qs * sina;
    ap->Beta = Qs * cosa + Ds * sina;  

} 

typedef struct LINE2PHASE
{
	/* data */
	//float32 Uab;
	//float32 Ubc;

	float32 a;
	float32 b;
	float32 c;

} line2phase;

void line_to_phase(line2phase *l,float ab,float bc)
{
	l->a = 0.666 * ab + 0.333 * bc;
	l->b = 0.333 * bc - 0.333 * ab;
	l->c = -l->a - l->b;

}


typedef struct INVERTER_PLL
{
/*	float32 w;
	float32 delta_t;
	float32 phi;*/

	 float32 sina;
	 float32 sinb;
	 float32 sinc;

//	_iq sina;
//	_iq sinb;
//	_iq sinc;
	
} inverter_pll;

void inverter_pll_calc(void);


typedef struct PLL_TYPEDEF
{
	/* data */
	//float Alpha;
	//float Beta;

	float sin;
	float cos;
} PLL;

int pll_calc(PLL *p,float Alpha,float Beta)
{
	float s;
	s=sqrt(Alpha * Alpha + Beta * Beta);

	p->sin=Beta/s;
	p->cos=Alpha/s;

	return 0;
}



#endif /*ALGORITHM_BYLEE_H_*/
