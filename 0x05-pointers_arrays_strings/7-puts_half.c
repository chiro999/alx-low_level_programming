#include "main.h"
/**
 * puts_half - prints half of a string 
 * followed by a new line
 * @str: string to be printed
*/

void puts_half(char *str)
{
	int i = 0;
	int x;

	while (str[i] != '\0')
	{
	x++;
	}
	if (i % 2 == 1){
	x = i + 1 ;
	x = x / 2;
	}
	else
	{
	x = i/2;
	}

	for (; x < i; x++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
