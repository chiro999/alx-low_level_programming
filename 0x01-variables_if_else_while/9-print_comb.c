#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print 0-9 separated by commas'
 * Return: always 0
*/
int main(void)
{
	int i = '0';
	while (i <= '9')
	{
		putchar(i);
		if(i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
