#include "main.h"

/**
 * string - prints string
 * @str: list of characters
 * @Return: characters
 */

int _string(va_list str)
{
	int i = 0;
	char *string;

	string = va_arg(str, char *);

	if (!string)
		string = "(null)";

	
	while(string[i] != '\0')
	{
		_putchar(string[i]);
		i++;
	}
	
	return (i);
}
