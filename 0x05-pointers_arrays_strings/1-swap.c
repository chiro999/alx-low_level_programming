#include <stdio.h>

/**
 * swap_int - Swaps the value of two integers
 * @a: First value in the swap
 * @b: Second value in the swap
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int c = *b;
	*b = *a;
	*a = c;
}
