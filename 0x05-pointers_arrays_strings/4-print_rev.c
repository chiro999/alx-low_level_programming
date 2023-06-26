#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i, r, str_len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	str_len = i;
	r = str_len + 1;

	for (; r >= 0; r--)
	{
		_putchar(s[r]);
	}

	_putchar('\n');
}
