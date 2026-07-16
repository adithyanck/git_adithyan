/*
 * File:   uart array.c
 * Author: adith
 *
 * Created on June 16, 2026, 10:53 AM
 */


#include <pic18.h>
void transmit(char a);
void main(void)
{
    TRISA=0x80;
    TXSTA=0x24;
    RCSTA=0x90;
    BAUDCON=0x00;
    SPBRG=129;
    char array[]="ADITHYAN";
    int=0;
    while(array[i]!='\0')
    {
        transmit(array[i]);
        i++;
    }
    while(1);
    return;
    return;
}
void transmit(char a)
{
    TXREG=a;
    while(TXIF==0);
    TXIF=0;
}