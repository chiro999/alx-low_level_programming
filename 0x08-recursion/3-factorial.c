#include "main.h"
/**
 *factorial - returns te factorial of given number
 *@n: integer to get the factorial of
 *Return: value of factorial
 *
 */
int factorial(int n)
{
	if (n <= 1)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
