/*
 * File:   alternate.c
 * Author: adith
 *
 * Created on June 3, 2026, 10:00 AM
 */


#include <xc.h>
void alternate(int a);
void main(void) 

{
    TRISA=0x00;
    TRISB=0x00;
    TRISC=0x00;
    TRISD=0x00;
    while(1)
    {
        LATC=0x55;
        alternate(300);
        LATC=0xAA;
        alternate(300);
    }
    return;
}
void alternate(int a)
{
    int i,j;
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++);
    }
}
