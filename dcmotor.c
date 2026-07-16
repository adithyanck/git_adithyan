/*
 * File:   dcmotor.c
 * Author: adith
 *
 * Created on June 5, 2026, 10:12 AM
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
            RC0=1;
            RC1=0;
        }
        
        if(RB1==0)
        {
            RC0=0;
            RC1=1;
            
        }
        
        if(RB2==0)
        {
            RC0=0;
            RC1=0;
        }
    
        
    }
    return;
}