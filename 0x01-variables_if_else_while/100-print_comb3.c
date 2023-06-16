#include <stdio.h>
/**
 * main - Entry point
 * Description: print all different cominations of two digits
 * Return: always 0
*/
int main(void)
{
	int x = 0;
	int y = 0;
	for (x = '0'; x < '9'; x++)
	{
	for (y = x + 1; y <= '9'; y++)
	{
	if (y !=x)
	{
	putchar(x);
	putchar(y);
	if (x == '8' && y == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
