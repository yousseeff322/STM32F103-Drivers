/*************************************************/
/* AUTHOR           : Youssef Hamed              */
/* Date             : 1 SEP 2024                 */
/* Version          : v01                        */
/*************************************************/
#ifndef TIM_PRIVATE_H_
#define TIM_PRIVATE_H_

/******************************************************************************
* Macros
*******************************************************************************/
#define TIM1_BASE_ADRESS 0X40012C00
#define TIM8_BASE_ADRESS 0X40013400

typedef struct
{
	volatile u32 CR1	;
	volatile u32 CR2    ;
	volatile u32 SMCR   ;
	volatile u32 DIER   ;
	volatile u32 SR     ;
	volatile u32 EGR    ;
	volatile u32 CCMR1  ;
	volatile u32 CCMR2  ;
	volatile u32 CCER   ;
	volatile u32 CNT    ;
	volatile u32 PSC    ;
	volatile u32 ARR    ;
	volatile u32 RCR    ;
	volatile u32 CCR1   ;
	volatile u32 CCR2   ;
	volatile u32 CCR3   ;
	volatile u32 CCR4   ;
	volatile u32 BDTR   ;
	volatile u32 DCR    ;
	volatile u32 DMAR   ;
}sTMR_1_8_t;




/* Array of pointer to struct */
sTMR_1_8_t * TIMx[2]=
{
	(( sTMR_1_8_t*)TIM1_BASE_ADRESS),
	(( sTMR_1_8_t*)TIM8_BASE_ADRESS),
};










#endif
