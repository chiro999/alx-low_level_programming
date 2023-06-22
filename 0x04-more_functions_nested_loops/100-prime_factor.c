#include <stdio.h>
#include <math.h>
/**
 * main - Prints the largest prime factor of 612852475143
 * Return: Always 0
*/

int main(void)
{
	long x;
	long max_factor;
	long n = 612852475143;
	double sqr = sqrt(n);

	for (x = 1; x <= sqr; x++)
	{
	if (n % x == 0)
	{
	max_factor = n / x;
	}
	}
	printf("%ld\n", max_factor);
	return (0);
}
