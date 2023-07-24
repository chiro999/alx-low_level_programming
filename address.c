#include "main.h"

/**
 * _x - function to print numbers in hexadecimal(letters in upper case)
 * @big_x: list of integers
 * @Return: hexadecimal length
 */

int hex(unsigned long int num)
{
	/* Step 1: Divide the number by 16 and increment bin_length, do this until then number cannot be divided by 16.

           Step 2: Allocate memory of size(bin_length * sizeof(int))

           Step 3: Store binary in reverse using a loop

           Step 4: Reverse said loop , free memory and return binary length
	 */
	int i = 0;
	int hex_length = 0;
	int *rev_hex;
	int index;
	unsigned int replica = num;

	/*loop to obtain hex length */
	while (num / 16 != 0)
	{
		num /= 16;
		hex_length++;
	}
	hex_length++;

	/*array to store hex (hex is stored in reverse here) */
	
	rev_hex = malloc(hex_length * sizeof(int));
	
	/*loop to store obtain hex from decimal number (stored in reverse)*/
	while (i < hex_length)
	{	
		rev_hex[i] = replica % 16;
		replica /= 16;
		i++;
	}
	
	/*reverse the array to get the true hex*/
	index = hex_length - 1;

        while (!(index < 0))
	{
		if (rev_hex[i] >= 10)
			rev_hex[i] = rev_hex[i] + 39;
		_putchar(rev_hex[index] + '0');
		index--;
	}
	free(rev_hex);
	return (hex_length);
}

int _address(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int b;
	int i;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = hex(a);
	return (b + 2);
}
