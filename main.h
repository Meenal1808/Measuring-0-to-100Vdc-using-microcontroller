#ifndef MAIN_H
#define MAIN_H

#include <xc.h>
#include <stdio.h>
#include "adc.h"
#include "clcd.h"

//Configuration bits for PIC16F877A
#pragma config FOSC = HS	//Oscillator Selection bits (HS oscillator)
#pragma config WDTE = OFF	//Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = OFF	//Power-up Timer Enable bit (PWRT disabled)
#pragma config BOREN = ON	//Brown-out Reset  Enable bit(BOR enabled)
#pragma config LVP = OFF	//Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit (RB3 is digital I/O, HV on MCLR must be used for programming)
#pragma config CPD = OFF	//Data EEPROM Memory Code Protection bit (Data EEPROM code protection off)
#pragma config WRT = OFF	//Flash Program Memory Write Enable bits (Write protection off)
#pragma config CP = OFF		//Flash Program memory Code protection bit (Code protection off)

#define _XTAL_FREQ 20000000	//Define the operating frequency of uc
#endif /*MAIN_H*/