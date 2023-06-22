#include "main.h"
/**
 * print_line - Draws a straight line according to value n given
 * @n: Number of lines to draw
 * Return: Nothing!
*/

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	_putchar('_');
	}
	_putchar('\n');
	}
}
