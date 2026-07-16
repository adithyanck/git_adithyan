/*
 * File:   leftshift.c
 * Author: adith
 *
 * Created on June 3, 2026, 12:38 PM
 */


#include <xc.h>
void delay(int a);
void main(void) 
{
    int i;
    TRISC=0x00;
    LATC=0x01;
    for(i=0;i<7;i++)
    {
        LATC=LATC<<1;
        delay(300);
    }
    return;
}
void delay(int a )
{
    int j;
    for(j=0;j<a;j++);
}