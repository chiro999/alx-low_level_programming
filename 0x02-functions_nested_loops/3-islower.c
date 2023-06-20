#include "main.h"
/**
 * _islower - Checks for lowercase character
 * @x: The character to be checked
 * Return: 1 for lowercase character or 0 for anything else
*/

int _islower(int x)
{
	if (x >= 'a' && x <= 'z')
	{
		return (1);
	}
		return (0);
}
