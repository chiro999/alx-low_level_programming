#include "main.h"

int _sqrt(int n, int i);
/**
 *_sqrt_recursion - square root
 *@n: integer
 *Return: value squeare
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 *_sqrt - find square
 *@n: number to calculate the square root
 *@i: iterate number
 *Return: value square root
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (_sqrt(n, i + 1));
}
