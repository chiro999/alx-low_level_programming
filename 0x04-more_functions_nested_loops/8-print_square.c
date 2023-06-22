#include "main.h"
/**
 *print_square - Prints n squares n number of times
 *@size: dimension of the square
 *Return: empty
*/

void print_square(int size)
{
	int x, y;

	for (x = 0; x < size; x++)
	{
	for (y = 0; y < size; y++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
}
