/*
 * Name - Meenal Narendra Borikar
 * Description- To Measure 0 to 100Vdc using Microcontroller
 * Date- 25/7/2024
 */
#include "main.h"
void main(void)
{
	unsigned short adc_value;
	float voltage, input_voltage;
	char buffer[16];

	TRISD = 0x00; 	//Set PORTD as output
	TRISE = 0x00;	//Set PORTE as output
	init_clcd();	//Initialize LCD
	init_adc();	//Initialize ADC

	clcd_print("Voltage: ", LINE1(0));	//Display "Voltage:" on LCD
	
	while(1)
	{
		adc_value = read_adc(CHANNEL0); //Read ADC value from channel 0
		voltage = adc_value * 5.0/1023.0; //calculate voltage
		input_voltage = voltage * 20.0; //calculate input voltage
		
		sprintf(buffer, "%.2f V",input_voltage); //convert to string
		clcd_print(buffer, LINE2(0)); //Display voltage on LCD
		
		__delay_ms(1000); //Delay for 1 second
	}
}