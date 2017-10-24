/* Lab 1 first file - ID number 815009698 */ 
#include <p18f452.h>
#include <delays.h>
#include <usart.h>
#include <xLCD.h>
/* Set configuration bits for use with ICD2 */
#pragma config OSC = HS
#pragma config WDT = OFF
#pragma config LVP = OFF

void main (void)
{ 
    /*Code from Question 14 in Prelab*/ 
    //int counter1 = 1;                     //Declare and initialize variables
    TRISB = 0x00;                           //Set PORTB as an output
    while (1)//(counter1 <= 15)
    {
        //PORTB = counter1;                 //Assign count to PORTB
        //counter1++;                       //Increment count
        PORTB = 0x00;                       //Turn off PORTB pins
        Delay1KTCYx( 500);                  //wait
        PORTB = 0xFF;                       //Turn on PORTB pins
        Delay1KTCYx(500);                   //wait
        
    }
    _asm
        sleep			//Put PIC to sleep so code stops 
    _endasm

}
