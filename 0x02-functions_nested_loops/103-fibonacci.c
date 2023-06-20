#include <stdio.h>
/**
 * main - Prints the sum of even fibonacci numbers less than 4 million
 * Return: Always 0
*/
int main(void)
{
	int x = 0;
	long y = 1, z = 2, total = z;

	while (z + y < 4000000)
	{
	z += y ;
	if (z % 2 == 0)
	total += z;
	y = z - y;
	++x;
	}
        printf("%ld\n", total);
	return (0);	
}
