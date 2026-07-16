
/*
 * File:   timer08bit.c
 * Author: adith
 *
 * Created on June 18, 2026, 9:37 AM
 */


#include <pic18.h>
void timer();

void main(void) 
{
    
    TRISB=0X00;
    T0CON=0XC7;
    while(1)
    {
        LATB=0xFF;
        timer();
        LATB0x00;
        timer();
    }
    
    return;
}
void timer()
{
    while(TMR0IF==0);
    TMR0IF=0;
    TMR0=60;
}
