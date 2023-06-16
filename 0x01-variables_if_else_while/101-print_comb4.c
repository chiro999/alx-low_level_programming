#include <stdio.h>
/**
 * main - Entry point
 * Description: print all different combinations of 3 digts
 * Return: Always 0
*/
int main(void)
{
	int x = 0;
	int y = 0;
	int z = 0;
	for (x = '0'; x < '8'; x++)
	{
	for (y = x + 1; y <= '8'; y++)
	{
	for (z = y + 1; z <= '9'; z++)
	{
	if (y !=x && z != y)
	{
	putchar(x);
	putchar(y);
	putchar(z);
	if(x ==  '7' && y == '8' && z == '9')
	continue;
	putchar(',');
	putchar(' ');
        }
	}
	}
	}
	putchar('\n');
	return (0);
}
