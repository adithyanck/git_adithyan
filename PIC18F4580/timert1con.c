/*
 * File:   timert1con.c
 * Author: adith
 *
 * Created on June 18, 2026, 11:02 AM
 */




#include<pic18.h>

void timer();
void main()
{
    TRISC = 0x00;
    T1CON = 0xB1;
    
    while(1)
    {
        LATC = 0xFF;
        timer();
        LATC = 0x00;
        timer();
        
    }
    return;
}

void timer()
{
    //for(int i=0;i<10;i++)
    //{
    while(TMR1IF == 0);
    TMR1IF = 0;
    TMR1 = 105;
    //}
}
 
