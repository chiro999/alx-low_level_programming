#include "main.h"
/**
 * printf_exclusive_string - print exclusuives string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int HEX(unsigned int num)
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

	/*loop to store obtain binary from decimal number (stored in reverse)*/
	while (i < hex_length)
	{
		rev_hex[i] = replica % 16;
		replica /= 16;
		i++;
	}

	/*reverse the array to get the true hexadecimal*/
	index = hex_length - 1;

        while (!(index < 0))
	{
		if (rev_hex[i] >= 10)
			rev_hex[i] = rev_hex[i] + 7;
		_putchar(rev_hex[index] + '0');
		index--;
	}
	free(rev_hex);
	return (hex_length);
}

int _spec(va_list ex)
{
	char *s;
	int i, len = 0;
	int cast;

	s = va_arg(ex, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			cast = s[i];
			if (cast < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + HEX(cast);
		}
		else
		{
			_putchar(s[i]);
			len++;
		}
	}
	return (len);
}
