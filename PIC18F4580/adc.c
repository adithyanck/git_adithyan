/*
 * File:   adc.c
 * Author: adith
 *
 * Created on June 15, 2026, 10:02 AM
 */


#include <pic18.h>
void command (int);
void  data(char);
void delay(int c);

void main(void)
{
    int a,b[4],i;
    TRISA=0xFF;
    TRISC=0x00;
    TRISD=0x00;
    ADCON0=0x03;
    ADCON1=0x00;
    ADCON2=0x01; 
    command(0x01);
    command(0x38);
    command(0x06);
    command(0x0F);
    command(0x80);
    while(1)
    {
        GODONE=1;
        while(GODONE==1);
        
            int a = ADRESL|(ADRESH<<8);
            for(i=3;i>=0;i--)
            {
               b[i]=(a%10)+48;
               a=a/10;
            }
            for(i=0;i<4;i++)
            {
                data(b[i]);
                
            }
            delay(300);
            command(0x01);
    }
    return;
}
void command(int a)
{
    LATD=a;
    RC0=0;
    RC1=1;
    delay(300);
    RC1=0;
}
void data(char b)
{
    LATD=b;
    RC0=1;
    RC1=1;
    delay(300);
    RC1=0;
}
void delay(int c)
{
    int i,j;
    for(i=1;i<c;i++)
    {
        for(j=1;j<c;j++);
    }
}
