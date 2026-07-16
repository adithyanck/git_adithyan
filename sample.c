/*
 * File:   sample.c
 * Author: adith
 *
 * Created on June 3, 2026, 12:48 PM
 */


#include <xc.h>
void delay(int a );
void main(void) 
{
    TRISC=0x00;
   
    while(1)
    {
        LATC=0xF0;
        delay(300);
        LATC=0x0F;
        delay(300);
        
    }
    return;
}
void delay (int a)
{
    int j;
    for(j=0;j<7;j++);
}