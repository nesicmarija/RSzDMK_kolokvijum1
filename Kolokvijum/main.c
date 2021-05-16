/**
* @file main.c
* @brief Aplikacija
* @author Marija Nesic
* @date 16-05-2021
* @version 1.0
*/

#include <util/delay.h>
#include <stdint.h>
#include <avr/pgmspace.h>
#include "usart.h"
#include "pin.h"
#include "util.h"


int main()
{
	uint16_t duzina;
	usartInit(9600);
	uint16_t niz[64];

	pinInit(PORTD, 13,  OUTPUT);
	while(1)
	{
	  usartPutString("Unesite duzinu niza: /r/n");


	  while(!usartAvailable())
		  ;
	  _delay_ms(100);


	  duzina=usartParseInt();
	  niz[duzina]=0;

	  usartPutString("unesite clanove niza, ");
	  usartPutString(" /r/n ");

	  pinSetValue(PORTD, 13, HIGH);
	      for(int8_t i=0; i<duzina; i++)
	      {
	    	  niz[i]=usartParseInt();

	      }



	  pinSetValue(PORTD, 13, LOW);

	  Sort(niz, duzina, UP);


	  for(int8_t i=0; i<duzina; i++)
	  {
		  usartPutString(niz[i]);
		  usartPutString("\r\n");
	  }

	  if(Check(niz) == 1)
	  {
		  usartPutString("Niz je geometrijski");
	  }

	  else
	  {
		  usartPutString("Niz nije geometrijski");
	  }


	}
	return 0;
}
