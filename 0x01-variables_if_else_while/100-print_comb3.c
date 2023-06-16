#include <stdio.h>
/**
 * main - Entry point
 * Description: print all different cominations of two digits
 * Return: always 0
*/
int main(void)
{
	int x, y;
	while (x <= '9')
	{
		while (y <= '9')
		{
			if(!(x > y || x == y))
			{
				putchar(x);
				putchar(y);
				if (x == '8' && y == '9')
				{
					putchar('\n');
				
			 	}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		y = '0';
		x++;
	}
return (0);
}
