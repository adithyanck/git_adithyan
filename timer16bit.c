/*
 * File:   timer16bit.c
 * Author: adith
 *
 * Created on June 18, 2026, 10:16 AM
 */


#include <pic18.h>
void timer();
void main(void) 
{
    
    
    TRISC=0X00;
    T0CON=0X87;
    while(1)
    {
        LATC=0xFF;
        timer();
        LATC=0x00;
        timer();
    }
    
    return;
}
void timer()
{
    while(TMR0IF==0);
    TMR0IF=0;
    TMR0=46000;
}

  