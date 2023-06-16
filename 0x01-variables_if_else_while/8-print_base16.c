#include  <stdio.h>
/**
 * main - Entry point
 * Description : 'print numbers of base 16'
 * Return: Always 0
*/
int main(void)
{
	int x;
	int y;
	for (x = 48; x <=57; x++)
	{
		putchar(x);
	}
	for (y = 97; y <= 102; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
