#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string to print
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int x;

	while (str[i] != '\0')
	{
	i++;
	}
	if (i % 2 == 1)
	{
	x = i + 1;
	x = x / 2;
	}
	else
	{
	x = i / 2;
	}

	for (; x < i; x++)
	{
	_putchar(str[x]);
	}
	_putchar('\n');
}
