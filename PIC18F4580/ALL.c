/*
 * File:   ALL.c
 * Author: adith
 *
 * Created on June 24, 2026, 10:43 AM
 */

#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>

void main(void) 
{
    DDRA=0X00;
    DDRB=0X00;
    DDRC=0XFF;
    DDRD=0XFF;
    while(1)
    {

    
        if(PINB&0X01)
        {
           
                PORTC=0XFF;
                _delay_ms(100);
                PORTC=0X00;
                _delay_ms(100);
            
        } 
        else if(PINB&0X02)
        {
              
                PORTC=0XAA;
                _delay_ms(100);
                PORTC=0X55;
                _delay_ms(100);
            
        }
        else if(PINB&0X04)
        {
                int i;
                DDRC=0XFF;
                while(1)
                {
                    PORTC=0X01;
                    _delay_ms(100);
                    for(i=0;i<7;i++)
                    {

                        PORTC=PORTC<<1;
                        _delay_ms(100);
                    }

                }
        }
        else(PINB&0X08)
        {
            int i;
            DDRC=0XFF;
            while(1)
            {
            PORTC=0X80;
            _delay_ms(100);
            for(i=0;i<7;i++)
            {
                PORTC=PORTC>>1;
                _delay_ms(100);
            }
        }
    }            

    
        
       
    return;
}
