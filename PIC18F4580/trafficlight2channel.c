/*
 * File:   trafficlight2channel.c
 * Author: adith
 *
 * Created on June 19, 2026, 10:28 AM
 */


#include <pic18.h>
void timer();
void delay(int n);
void main(void) 
{
   int i;
   TRISC=0X00;
   T1CON=0XB1;
   
   
    while(1)
    {
        LATC=0x21;
        delay(2);
        LATC=0x00;
        
        LATC=0X00A;
        delay(1);
        LATC=0X00;
        
        LATC=0X0c;
        delay(5);
        LATC=0X00;
       
        LATC=0X11;
        delay(1);
        LATC=0X00;
        
    }
   
   
    return;
   }

void timer()
{
    while(TMR1IF==0);
    TMR1IF=0;
    TMR1=0;
}
void delay(int n)
{
    int i,j;
    for(j=0;j<n;j++)
    {
    for(i=0;i<28;i++)
    {
        timer();
    }
    }
}
