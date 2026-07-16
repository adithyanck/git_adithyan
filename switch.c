/*
 * File:   switch.c
 * Author: adith
 *
 * Created on June 5, 2026, 9:12 AM
 */


#include <pic18.h>
void delay(int a);
void main(void)
{
    int i;
    int arr[8]={0x81,0x42,0x24,0x18,0x18,0x24,0x42,0x81};
    TRISA=0xFF;
    TRISC=0x00;
    ADCON1=0x0F;
    
    
    
    return;
}
void delay(int a)
{
    int i,j;
    for(i=0;i<=a;i++)
    {
        for(j=0;j<=a;j++);
            
    }
}