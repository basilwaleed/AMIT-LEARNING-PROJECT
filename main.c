/*
 * main.c
 *
 *  Created on: Oct 5, 2020
 *      Author: Basil
 */

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>


//int calc_dist(void);

//int calc_dist(void){
// int distance=0;
 // TMR1=0;
  // Send Trigger Pulse To The Sensor
 // PORTA |= (1<<0);
  //_delay_us(10);
 // PORTA |= (~(1<<0));
  // Wait For The Echo Pulse From The Sensor
 // while(!(PINA & (1<<1));
  // Turn ON Timer Module
 // TMR1ON=1;
  // Wait Until The Pulse Ends
 // while(PINA & (1<<1));
  // Turn OFF The Timer
 // TMR1ON=0;
  // Calculate The Distance Using The Equation
 // distance=TMR1/58.82;
  //return distance;
//}

int main(void)
{
		DDRD |= (1<<0); //PD0 as MotorA input1
		PORTD |= (1<<0); //Initialize MotorA Direction
		DDRD |= (1<<1); // PD1 as MotorA input2
		PORTD &= (~(1<<1)); //Initialize MotorA Direction
		DDRD |= (1<<2); //PD2 as EnA
		PORTD &= (~(1<<2)); //EnA = 0 so left motor off
		DDRB |= (1<<0); //PB0 as MotorB input
		PORTB |= (1<<0); //Initialize MotorB Direction
		DDRB |= (1<<1); //PB1 as MotorB input
		PORTB &= (~(1<<1)); //Initialize MotorB Direction
		DDRC &= (~(1<<0)); //PC0 left infrared sensor input
		DDRC &= (~(1<<1)); //PC1 right infrared sensor input
		DDRB |= (1<<2); //PB2 as EnB
		PORTB &= (~(1<<2)); //EnB = 0 so right motor off


		// Create Distance Variable
		 // int dist=0;

		  //--[ Configure The IO Pins ]--
		  // Set PORTB To Be Output Port (All The 8 Pins)
		 // DDRB |= (1<<1);
		  // Set PORTB To Be LOW For initial State
		 // PORTB &= (~(1<<0));
		  // Set PA0 To Be Output Pin ( Trigger )
		 // DDRA |= (1<<0);
		  // Set PA1 To Be Input Pin ( Echo )
		 // DDRA &= (~(1<<1));



		  while(1)
		  		  {
		  		  	if((PINC & (1<<0))){
		  		  		PORTD &=(~(1<<2)); //close the left motor
		  		  		}
		  		  		if((PINC & (1<<1))){
		  		  			PORTB &=(~(1<<2)); //close the right motor
		  		  		}
		  		  		if(!(PINC & (1<<0))){
		  		  			if(!(PINC & (1<<1))){
		  		  				PORTD |= (1<<2); //left motor on
		  		  				PORTB |= (1<<2); //right motor on
		  		  			}
		  		  		}

		  // Write The System's Main Routine !
		 // while(1)
		 // {
		   // dist = calc_dist()/5;
		   // if(dist==1)
		   // {PORTB = 0x01; _delay_ms(50);}
		   // if(dist==2)
		   // {PORTB = 0x03; _delay_ms(50);}
		   // if(dist==3)
		   // {PORTB = 0x07; _delay_ms(50);}
		   // if(dist==4)
		   // {PORTB = 0x0F; _delay_ms(50);}
		   // else
		   // {PORTB = 0x00; _delay_ms(50);}
		//  }




}
}




