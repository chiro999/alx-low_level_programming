#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i = 63;
       	int ones = 0;
	
	while (i >= 0)
	{
	
		/* check to see whether 1 or 0 is at the index then print 1  or 0 */
		if (((n >> i) & 1) = '1')
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
