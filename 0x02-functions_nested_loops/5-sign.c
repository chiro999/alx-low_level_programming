#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @x: The number to be checked
 * Return: 1 for positive num, -1 for negative num else zero
*/

int print_sign(int x)
{
	if (x > 0)
	{
	 _putchar('+');
	 return (1);
	}
	else if (x < 0)
	{
	 _putchar('-');
	 return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}
