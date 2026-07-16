/*
 * File:   3wheelerbyte.c
 * Author: adith
 *
 * Created on June 8, 2026, 9:55 AM
 */


#include <pic18.h>

void main(void) 
{
    TRISB=0xFF;
    TRISC=0x00;
    ADCON1=0x0F;
    while(1)
    {
        if(RB0==0)
        {
            LATC=0x15;
        }
        if(RB1==0)
        {
            LATC=0x2A;
        }
        if(RB2==0)
        {
            LATC=0x05;
            
        }
        if(RB3==0)
        {
            LATC=0x11;
            
        }
        if(RB4==0)
        {
            LATC=0x00;
        }
    }
    return;
}
