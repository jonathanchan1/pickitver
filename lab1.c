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
    //int counter1 = 1;
    TRISB = 0x00;
    while (1)//(counter1 <= 15)
    {
        //PORTB = counter1;
        //counter1++;
        PORTB = 0x00;
        Delay1KTCYx( 500); 
        PORTB = 0xFF;
        Delay1KTCYx(500); 
        
        //changes
    }
}
