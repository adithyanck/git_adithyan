/*
 * File:   ATM.c
 * Author: adith
 *
 * Created on June 11, 2026, 9:47 AM
 */


#include <pic18.h>
void delay(int a);
void command(int b);
void data(char c);
char keyboard();
void print(char *d);
void main(void)
{
    char a,i;
    int array[]={'1','2','3','4'};
    int array2[];
    TRISB=0xF0;
    ADCON1=0x0F;
    TRISC=0x00;
    TRISD=0x00;
    while(2)
    {
        a=keyboard();
        data(a);     
        
    }
    while(2)
    {
        c=0;
        for(i=0;i<4;i++)
        {
            array2[i]=keyboard();
            data(array[i]);
            
        }
        for(i=0;i<4;i++)
        {
            if(arry2[i]==array[i])
                c++;
        }
        if (c==4)
        {
            print("ACCESS GRANTED");
            
        }
        else
        {
            print("INVALID PIN");
        }
    }
    return;
}
void delay(int a)
{
    int i,j:
    for(i=1;i<a;i++)
    {
        for(j=0;j<a;j++);
    }
}
void command(int b)
{
    LATD=b;
    RC0=0;
    RC2=1;
    delay(300);
    RC2=0;
    
}
void data(char c)
{
    LATD=c;
    RC0=1;
    RC2=1;
    delay(300);
    RC2=0;
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
        
}void print(char *d)
{
    while(*d!=0)
    {
          data(*d);
          d++;
    }
