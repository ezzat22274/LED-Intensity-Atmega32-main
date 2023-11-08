/*
 * TMR_MCAL_Private.h
 *
 *  Created on: Oct 10, 2023
 *      Author: Lenovo
 */

#ifndef MCAL_TMR_DRIVER_TMR_MCAL_PRIVATE_H_
#define MCAL_TMR_DRIVER_TMR_MCAL_PRIVATE_H_

#define TCCR0_REG	*((volatile u8*)(0x53))
#define TCNT0_REG	*((volatile u8*)(0x52))
#define OCR0_REG	*((volatile u8*)(0x5C))
#define TIMSK_REG	*((volatile u8*)(0x59))
#define TIFR_REG	*((volatile u8*)(0x58)


#define FOCO 	7
#define WGM00	6
#define COM01	5
#define COM00	4
#define WGM01	3
#define CS02	2
#define CS01  	1
#define CS00	0

#define TOIE0	0
#define OCIE0	1

#define TOVO	0
#define OCF0	0

#define TOP		256 //Top is the reslotion of timer here its 8bit so 2 to the power 8 = 256



#endif /* MCAL_TMR_DRIVER_TMR_MCAL_PRIVATE_H_ */
