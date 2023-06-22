#include "main.h"
/**
 * _isupper - Check if a letter is upper
 * @x: the number to be checked
 * Return: 1 for upper letter and 0 for anything else
*/

int _isupper(int x)
{
	if (x >= 'A' && x <= 'Z')
	{
	return (1);
	}
	return (0);
}
