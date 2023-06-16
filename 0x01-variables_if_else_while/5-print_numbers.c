#include <stdio.h>
/**
 * main -  Entry point
 * Description: 'print 0-9 (base 10)'
 * Return: Always 0;
*/
int main(void)
{
	int n; 
	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
