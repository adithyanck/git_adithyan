/*
 * File:   tttesssssstttttttttttiiiiiiiiiinnnnggggggggggggg.c
 * Author: adith
 *
 * Created on June 20, 2026, 10:40 PM
 */


#include <pic18.h>
void timer();
void main(void)
{
    TRISA=0XFF;
    TRISC=0X00;
    T1CON=0XB1;
    ADCON1=0X0F;
    if(RA0==0)
    {
        
        LATC=0XFF;
        timer();
        LATC=0X00;
        timer();
    }
    return;
}
void timer()
{
    while(TMR1IF==0);
    TMR1IF=0;
    TMR1=105;
    
}