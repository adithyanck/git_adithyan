/*
 * File:   crossshift.c
 * Author: adith
 *
 * Created on June 4, 2026, 9:10 AM
 */


#include <xc.h>
void delay(int a);
void main(void) 
{
    int i;
    TRISC=0x00;
    int arr[8]={0x81,0x42,0x24,0x18,0x18,0x24,0x42,0x81};
    for(i=1;i<8;i++)
    {
        LATC=arr[i];
        delay(300);
    }
    return;
}
void delay(int a )
{
    int j,i;
    for(j=0;j<8;j++)
    {
        for(i=0;i<8;i++);
    }
}
