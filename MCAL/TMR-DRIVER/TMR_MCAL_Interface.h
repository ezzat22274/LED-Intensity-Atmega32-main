/*
 * TMR_MCAL_Interface.h
 *
 *  Created on: Oct 10, 2023
 *      Author: Lenovo
 */

#ifndef MCAL_TMR_DRIVER_TMR_MCAL_INTERFACE_H_
#define MCAL_TMR_DRIVER_TMR_MCAL_INTERFACE_H_

typedef enum {
	Normal= 0,
	Toggle_OC0_On_Comp_Match,
	Clear_OC0_on_Comp_Match,
	Set_OC0_on_Comp_Match
}OC0_CTC_MODE;

typedef enum{
	OC0_Disconnected = 0,
	Non_Inverted = 2,
	Inverted
}OC0_Fast_Mode;

/* TIMER0 */
void TMR0_OVF_Init(void);
void TMR0_SetPreload(u8 preloadValue);
void TMR0_OV_SetCallBack(void (*pf)(void));

void TMR0_CTC_Init(OC0_CTC_MODE OC0_State, u16 OCR0_Value);
void TMR0_CTC_SetCallBack(void (*pf)(void));

void TMR0_FastPWM(OC0_Fast_Mode OC0_State,u8 DutyCylce);

void TMR0_PhasePWM(OC0_Fast_Mode OC0_State,u8 DutyCylce);





/* preScaler value*/
#define NO_CLOCK_SOURCE               0b000
#define NO_PRESCALING                 0b001
#define PRESCALER_8                   0b010
#define PRESCALER_64                  0b011
#define PRESCALER_256                 0b100
#define PRESCALER_1024                0b101
#define EXTRNAL_CLK_FALLING_EDGE      0b110
#define EXTRNAL_CLK_RISING_EDGE       0b111

#endif /* MCAL_TMR_DRIVER_TMR_MCAL_INTERFACE_H_ */
