/*
 * File:   KEYBOARD.c
 * Author: adith
 *
 * Created on June 10, 2026, 10:15 AM
 */


#include <pic18.h>
void command(int b);
void delay(int a);
void data(char c);
void main(void) 
{
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
        LATB=0xF0;
        if(RB7==0)
        {
            data('1');
        }
        if(RB6==0)
        {
            data('2');
        }
        if(RB5==0)
        {
            data('3');
        }
        if(RB4==0)
        {
            data('4');
        }
        LATB=0x0D;
        if(RB7==0)
        {
            data('5');
        }
        if(RB6==0)
        {
            data('6');
        }
        if(RB5==0)
        {
            data('7');
        }
        if(RB4==0)
        {
            data('8');
        }
        LATB=0x0B;
        if(RB7==0)
        {
            data('9');
        }
        if(RB6==0)
        {
            data('0');
        }
        if(RB5==0)
        {
            data('*');
        }
        if(RB4==0)
        {
            data('#');
        }
        LATB=0x07;
        if(RB7==0)
        {
            data('A');
        }
        if(RB6==0)
        {
            data('B');
        }
        if(RB5==0)
        {
            data('C');
        }
        if(RB4==0)
        {
            data('D');
        }
    }   
        
    return;
}
void command(int b)
{
    LATD = b ;
    RC0=0;
    RC1=1;
    delay(300);
    RC1=0;
}
void delay(int a)
{
    int i,j;
    for(i=1;i<a;i++)
    {
        for(j=1;j<a;j++);
    }
}
void data(char c)
{
    LATD=c;
    RC0=1;
    RC1=1;
    delay(300);
    RC1=0;
}
