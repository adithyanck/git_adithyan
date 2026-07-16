/*
 * File:   portcontrol.c
 * Author: adith
 *
 * Created on June 4, 2026, 10:35 AM
 */


#include<pic18.h>
void delay(int a);
void main(void)
{
    int i;
    int arr[8]={0x81,0x42,0x24,0x18,0x18,0x24,0x42,0x81};
    TRISB=0xFF;
    TRISC=0x00;
    ADCON1 = 0x0F;
    while(1)
    {
        if(RB0==0)
        {
            LATC=0xFF;
            delay(300);
            LATC=0x00;
            delay(300);
        }
        if(RB1==0)
        {
            LATC=0x55;
            delay(300);
            LATC=0xAA;
            delay(300);
        }
        if(RB2==0)
        {
            LATC=0x80;
            for(i=1;i<=7;i++)
            {
                LATC=LATC>>1;
                delay(300);
            }
            
        }
        if(RB3==0)
        {
            LATC=0x01;
            for(i=1;i<=7;i++)
            {
                
                LATC=LATC<<1;
                delay(300);
            }
        }
        if(RB4==0)
        {
            for(i=0;i<8;i++)
            {
                LATC=arr[i];
                delay(300);
            }
        }
    }              
     return;
}     
        

void delay (int a)
{
    int i,j;
    for(i=1;i<a;i++)
    {
        for(j=1;j<a;j++);
    }
}         