/*
 * File:   blink.c
 * Author: adith
 *
 * Created on June 3, 2026, 9:30 AM
 */


#include <pic18.h>
void delay(int a);

void main(void) 
{
    
    TRISA=0xFF;
    TRISB=0xFF;
    TRISC=0x00;
    TRISD=0x00;
    while(1)
    {LATC=0xFF;
    delay(300);
    LATC=0x00;
    delay(300);
    }
    return;
}
void delay (int a)
{
    int i,j;
    for(i=0;i<a;i++)
    {
        for (j=0;j<a;j++);
            
        
    }
    
}
