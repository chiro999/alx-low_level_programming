#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print alphabets lowercase and uppercase'
 * Return: always 0
*/
int main(void)
{
	int x = 'a';
	int y = 'A';
	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (y <= 'Z')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
