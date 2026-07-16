/*
 * File:   usart.c
 * Author: adith
 *
 * Created on June 16, 2026, 10:03 AM
 */


#include <pic18.h>
void transmit(char a);
void print(char *d);
void main(void) 
{
    TRISA=0x80;
    TXSTA=0x24;
    RCSTA=0x90;
    BAUDCON=0x00;
    SPBRG=129;
    
    print("ADITHYAN");
    while(1);
    return;
}
void transmit(char a)
{
    TXREG=a;
    while(TXIF==0);
    TXIF=0;
}
void print(char *d)
{
    while(*d!=0)
    {
          transmit(*d);
          d++;
    }
}
