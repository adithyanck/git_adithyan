/*
 * File:   timer2.c
 * Author: adith
 *
 * Created on June 19, 2026, 9:26 AM
 */


#include <pic18.h>
void timer();
void main(void) 
{
    TRISC=0X00;
    T2CON=0X7F;
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
    while(TMR2IF==0);
    TMR2IF=0;
    PR2=255;
}