/*
 * File:   lcdpointer.c
 * Author: adith
 *
 * Created on June 9, 2026, 10:26 AM
 */


#include <pic18.h>
void command(int b);
void delay(int a);
void data(char c);
void print(char *d);
void main()
{
    TRISC=0x00;
    TRISD=0x00;
    command(0x01);
    command(0x38);
    command(0x06);
    command(0x0F);
    command(0x80);
    print("ADITHYAN");
    return;
}
void delay(int a)
{
    int i,j;
    for(i=1;i<a;i++)
    {
        for(j=1;j<a;j++);
    }
}
void command(int b)
{
    LATD = b ;
    RC6=0;
    RC7=1;
    delay(300);
    RC7=0;
}
void data(char c)
{
    LATD=c;
    RC6=1;
    RC7=1;
    delay(300);
    RC7=0;
}void print(char *d)
{
    while(*d!=0)
    {
          data(*d);
          d++;
    }
}
