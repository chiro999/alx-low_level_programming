#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
 	int index = 0;

	if (b == NULL)
		return 0;
	
	if (b[index] < '0' || b[index] > '1')
		return 0;
	/* while loop to check if the number b is a binary number */
	while (b[index] == '0' || b[index] == '1')
 	 { 

			 
    		dec <<= 1; /* this is the same as the dec * 2 */
    		dec = dec + b[index]-'0'; /* this is the same as (2 * dec) + (b[index] - '0') */
   	 	index++;
 	 }
  return dec;
}
