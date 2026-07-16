/*
 * File:   keyboardnew.c
 * Author: adith
 *
 * Created on June 11, 2026, 9:11 AM
 */


#include <pic18.h>
void delay(int a);
void command(int b);
void data(char c);
char keyboard();

void main(void)
{
    char a;
    TRISB=0xF0;
    ADCON1=0x0F;
    TRISC=0x00;
    TRISD=0x00;
    command(0x01);
    command(0x38);
    command(0x06);
    command(0x0F);
    command(0x80);
    while(1)
    {
        a=keyboard();
        data(a);     
        
    }
    return;
}
void delay (int a)
{
    int i,j;
    for(i=1;i<a;i++)
    {
        for(j=0;j<a;j++);
        
    }
}
void command(int b )
{
   LATD= b;
   RC0=0;
   RC1=1;
   delay(300);
   RC1=0;
   
}
void data(char c)
{
    LATD= c ;
    RC0=1;
    RC1=1;
    delay(300);
    RC1=0;
}
char keyboard()
{
    while(1)
    {
        LATB=0xF0;
        if(RB7==0)
        {
            return '1';
        }
        if(RB6==0)
        {
            return'2';
        }
        if(RB5==0)
        {
            return '3';
        }
        if(RB4==0)
        {
            return '4';
        }
        LATB=0x0D;
        if(RB7==0)
        {
            return '5';
        }
        if(RB6==0)
        {
            return '6';
        }
        if(RB5==0)
        {
            return '7';
        }
        if(RB4==0)
        {
            return '8';
        }
        LATB=0x0B;
        if(RB7==0)
        {
            return '9';
        }
        if(RB6==0)
        {
            return '0';
        }
        if(RB5==0)
        {
            return '*';
        }
        if(RB4==0)
        {
            return '#';
        }
        LATB=0x07;
        if(RB7==0)
        {
            return 'A';
        }
        if(RB6==0)
        {
            return 'B';
        }
        if(RB5==0)
        {
            return 'C';
        }
        if(RB4==0)
        {
            return 'D';
        }
    }   
        
}
