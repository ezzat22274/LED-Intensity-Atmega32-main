/*
 * main.c
 *
 *  Created on: Oct 3, 2023
 *      Author: Lenovo
 */


#include <util/delay.h>.
#include <avr/interrupt.h>


#define F_CPU 8000000UL
#include "../MCAL/DIO-DRIVER/DIO_MCAL_Interface.h"
#include "../MCAL/GIE-DRIVER/GIE_MCAL_Interface.h"
#include "../MCAL/EXTI-DRIVER/EXTI_MCAL_Interface.h"
#include "../MCAL/ADC-DRIVER/ADC_MCAL_Interface.h"
#include "../MCAL/TMR-DRIVER/TMR_MCAL_Interface.h"

#include "../HAL/LCD-DRIVER/LCD_HAL_Interface.h"
#include "../HAL/SEGMENT_DRIVER/SEG_HAL_Interface.h"
#include "../HAL/KPD_DRIVER/KPD_HAL_Interface.h"
#include "../HAL/LM_SENSOR-DIRVER/LM_HAL_Interface.h"
#include "../HAL/STEPPER_MOTOR-DRIVER/STEP_HAL_Interface.h"

#include "../LIB/BIT_MATH.h"
#include "../LIB/STD_TYPES.h"


void TMR0_S(void);
int main() {

	DIO_SetPinDirection(DIO_PORTB,DIO_PIN3,DIO_OUTPUT);
	TMR0_PhasePWM(Inverted,100);


	while(1)
	{

	}
}
