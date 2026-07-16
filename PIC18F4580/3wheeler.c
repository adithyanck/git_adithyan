/*
 * File:   3wheeler.c
 * Author: adith
 *
 * Created on June 5, 2026, 11:01 AM
 */


#include <pic18.h>

 void main(void)
{
    TRISB=0xFF;
    TRISC=0x00;
    ADCON1=0x0F;
    while(1)
    {
            //FORWARD//
            if(RB0==0)
            {
                RC0=1;
                RC1=0;
                RC2=1;
                RC3=0;
                RC4=1;
                RC5=0;
            }
            //REVERSE//
            if(RB1==0)
            {
                RC0=0;
                RC1=1;
                RC2=0;
                RC3=1;
                RC4=0;
                RC5=1;
            }
            //RIGHT TURN//
            if(RB2==0)
            {
                RC0=1;
                RC1=0;
                RC2=1;
                RC3=0;
                RC4=0;
                RC5=0; 
            }
            //LEFT TURN//
            if(RB3==0)
            {
                RC0=1;
                RC1=0;
                RC2=0;
                RC3=0;
                RC4=1;
                RC5=0;
            }
            //STOP//
            if(RB4==0)
            {
                RC0=0;
                RC1=0;
                RC2=0;
                RC3=0;
                RC4=0                                                                                                                                                  ;
                RC5=0;
            }
    }
    return;
}
