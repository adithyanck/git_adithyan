/*
 * File:   shift.c
 * Author: adith
 *
 * Created on June 3, 2026, 11:47 AM
 */


#include <xc.h>
void delay(int a);
void main(void) 
{
    int i;
   
    
    TRISC=0x00;
    LATC=0x80;
    
    for(i=0;i<7;i++)
    {   
        LATC=LATC>>1;
        delay(300);
        
    }
    
    return;
}
void delay(int a)
{
    int j ;
    for(j=0;j<a;j++);
}
