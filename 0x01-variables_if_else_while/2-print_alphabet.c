#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print alphabet in lowercase'
 * Return: always 0
*/
int main(void)
{
	int n = 'a';
 	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
