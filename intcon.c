/*
 * File:   intcon.c
 * Author: adith
 *
 * Created on June 23, 2026, 9:21 AM
 */


#include <pic18.h>
void delay (int a);


void main(void)
{
    TRISB=0XFF;
    ADCON1=0X0F;
    TRISC=0X00;
    TRISD=0X00;
    INTCON=0XD0;
    while(1)
    {
        LATC=0xFF;
        delay(300);
        LATC=0x00;
        delay(300);
    }
    
    return;
}
void delay (int a)
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for (j=0;j<5;j++);
            
        
    }
    
}
void __interrupt()isr()
{
    while(INT0IF==0);
    {
        int i;
       
        LATD=0x01;
        delay(300);
        for(i=0;i<7;i++)
        {
        LATD=LATD<<1;
        delay(300);
        }
        
    }
                     
}