#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print alphabet except q and e'
 * Return: Always 0
*/
int main(void)
{
	int x = 'a';
	while (x <= 'z')
	{
		if (x == 'q' || x == 'e')
		{
			x++;
			continue;
		}
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
