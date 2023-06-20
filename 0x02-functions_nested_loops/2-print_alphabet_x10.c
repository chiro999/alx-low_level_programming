#include "main.h"
/**
 * print_alphabet_x10 - Make alphabet x10 times
 * Return: void
*/

void print_alphabet_x10(void)
{
	char x;
	int i = 0;

	while (i < 10)
	{
		for (x = 97; x <= 122; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
		i++;
	}
}
