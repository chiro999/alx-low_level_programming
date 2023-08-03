#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i = 63;
       	int count = 0;
	unsigned long int shifted;
	
	while (i >= 0)
	{
		shifted = n >> i;
	
		/* if the shifted AND 1 which means we print 1 */
		if (shifted & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');

		i--;
	}
	if (count == NULL)
		_putchar('0');
}

