/*
 * File:   receiver.c
 * Author: adith
 *
 * Created on June 17, 2026, 9:12 AM
 */


#include <pic18.h>
void delay(int d);
char receiver();
void command(int b);
void data(char c);
void transmit(char e);
void main(void)
{
    char a;
    TRISC=0x80;
    TRISD=0x00;
    TXSTA=0x24;
    RCSTA=0x90;
    BAUDCON=0x00;
    SPBRG=129;
    command(0x01);
    command(0x38);
    command(0x06);
    command(0x0F);
    command(0x80); 
    
    while(1)
    {
        a=receiver();
        data(a);
        transmit(a);
        
    }
    
 
    
    
}
char receiver()
{
    
    while(RCIF==0);
    
    return RCREG;
}
void command(int b)
{
    LATD = b ;
    RC0=0;
    RC1=1;
    delay(300);
    RC1=0;
}
void data(char c)
{
    LATD=c;
    RC0=1;
    RC1=1;
    delay(300);
    RC1=0;
}
void delay(int d)
{
    int i,j;
    for(i=1;i<d;i++)
    {
        for(j=1;j<d;j++);
    }
}
void transmit(char e)
{
    TXREG=e;
    while(TXIF==0);
    TXIF=0;
}
