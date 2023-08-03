#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i = 63;
       	int ones = 0;
	unsigned long int shifted;
	
	while (i >= 0)
	{
		shifted = n >> i;
	
		/* check to see whether 1 or 0 is at the index then print 1  or 0 */
		if (shifted & 1 = '1')
		{
			_putchar('1');
			ones++;
		}
		else if (ones)
			_putchar('0');

		i--;
	}
	if (!ones)
		_putchar('0');
}

