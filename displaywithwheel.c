/*
 * File:   displaywithwheel.c
 * Author: adith
 *
 * Created on June 9, 2026, 10:55 AM
 */


#include <pic18.h>
void command(int b);
void delay(int a);
void data(char c);
void print(char *d);
void main(void) 
 
{
    
    
    
    TRISB=0xFF;
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
        if(RB0==0)
        {
            command(0x01);
            LATC=0x15;
            print("FORWARD");
        }
        if(RB1==0)
        {
            command(0x01);
            LATC=0x2A;
            print("REVERSE");
        }
        if(RB2==0)
        {
            command(0x01);
            LATC=0x05;
            print("RIGHT TURN");
            
        }
        if(RB3==0)
        {
            command(0x01);
            LATC=0x11;
            print("LEFT TURN");
            
        }
        if(RB4==0)
        {
            command(0x01);
            LATC=0x00;
            print("STOP");
        }
    }
    return;
}
void command(int b)
{
    LATD = b ;
    RC6=0;
    RC7=1;
    delay(300);
    RC7=0;
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
    RC6=1;
    RC7=1;
    delay(300);
    RC7=0;
}
void print(char *d)
{
    while(*d!=0)
    {
          data(*d);
          d++;
    }
}