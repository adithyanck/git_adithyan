/*
 * File:   lcd.c
 * Author: adith
 *
 * Created on June 8, 2026, 10:51 AM
 */


#include <xc.h>
void delay(int a);
void command(int b);
void data(char c);
void main(void) 
{
    int i,j;
    
    char arr[]="ADITHYAN";
    char arr2[]="chirakandathil";
    
    TRISC=0x00;
    TRISD=0x00;
    command(0x01);
    command(0x38);
    command(0x06);
    command(0x0F);
    command(0x80);
    for(i=0;arr[i]!='\0';i++)
        
    {
        data(arr[i]);
    }
    command(0xc0);
    for(j=0;arr2[i]!='\0';j++)
    {
        data(arr2[j]);
    }
   
    
    
    while(1)
    {
        
    }
    return;
}
void delay(int a)
{
    int i,j;
    for(i=1;i<a;i++)
    {
        for(j=1;j<a;j++);
    }
}
void command(int b)
{
    LATD = b ;
    RC6=0;
    RC7=1;
    delay(300);
    RC7=0;
}
void data(char c)
{
    LATD=c;
    RC6=1;
    RC7=1;
    delay(300);
    RC7=0;
}