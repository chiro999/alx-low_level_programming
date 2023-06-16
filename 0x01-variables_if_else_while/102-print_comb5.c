#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: 'prints all possible combinations of two two-digit numbers'
 * Return: always 0
*/
int main(void)
{
	int x = 0;
	int y = 0;
	for (x = 0; x <= 98; x++)
	{
	for (y = x + 1; y <= 99; y++)
	{
	putchar((x/10) + '0');
	putchar((x%10) + '0');
	putchar(' ');
	putchar((y/10) + '0');
	putchar((y%10) + '0');
	if(x == 98 && y == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
