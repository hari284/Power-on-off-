#include<avr/io.h>
#define F_CPU16000000UL
#include<util/delay.h>
void main()
{
 DDRA=0b11111110;
 DDRB=0b11111111;
 int count=2;
 while(1)////for pull down method
 {
  
   if(PINA==0x01)
   {   _delay_ms(1);
   		if(count%2==0)
		{
		  if(PINA==0x00)
		  {
		   PORTB=0x01;
		   count++;
		   
		  }
		}
	   else
	   {
	   	    if(PINA==0x00)
		    {
			PORTB=0x00;
			count--;
			}
	   }
   
	
   }
   
  
 }
}
