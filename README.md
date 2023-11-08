 # LED-Intensity Using Atmega32

This code demonstrates how to control the intensity of an LED using Phase-Correct PWM mode with OC0 inverted on an Atmega32 microcontroller.
## Table of Contents
- [Introduction](#introduction)
- [Components Used](#components-used)
- [Circuit SetUp](#circuit-setup)
- [Drivers Used](#drivers-used)

## Introduction

The code utilizes Timer0 in Phase-Correct PWM mode with OC0 inverted to control the brightness of an LED. PWM (Pulse Width Modulation) is used to achieve different levels of LED intensity by adjusting the duty cycle.

## Components Used

- ATmega32 Microcontroller
- LEDs (1)
- Resistors

## Circuit Setup
- Connect the LED to a PWM-capable pin (e.g., OC0 pin) on the Atmega32.
- Configure the LED's anode (longer lead) to the PWM pin and the cathode (shorter lead) to ground through a current-limiting resistor.
- Set up the necessary components based on your circuit design.

## Drivers Used

- **TIMER0 Driver (MCAL)**: This driver handles the initialization and interaction with the Analog-to-Digital Converter (ADC) on the ATmega32 microcontroller.

- **DIO Driver (MCAL)**: The Digital Input/Output (DIO) driver manages the configuration and manipulation of digital pins on the ATmega32 microcontroller.

