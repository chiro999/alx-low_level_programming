#include <stdio.h>
/**
 * main = Entry point
 * Description: 'Print number of 0-9 base 10 using putchar'
 * Return: Always 0
*/
int main(void)
{
	int n;
	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return(0);
}
		
