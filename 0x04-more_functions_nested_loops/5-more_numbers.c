#include "main.h"
/**
 * more_numbers - Print the numbers from 0 to 14 10x
 * Return: 10x of the numbers from 0 to 14
*/

void more_numbers(void)
{
	int x, y;
	for (x = 0; x < 10; x++)
	{
	for (y = 0; y <= 14; y++)
	{
	if (y > 9)
	{
	_putchar((y / 10) + '0');
	}
	_putchar((y % 10) + '0');
	}
	_putchar('\n');
	}
}
