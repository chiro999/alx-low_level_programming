#include "main.h"
/**
 * _isdigit - Check if a character is a digit
 * @x: The number to be checked
 * Return: 1 for a character which is a digit else 0
*/

int _isdigit(int x)
{
	if(x >= '0' && x <= '9')
	{
	return (1);
	}
	return (0);
}
