#include "main.h"

/**
 * _atoi - convert a string representation of an integer to an integer
 *
 * @s: string possibly containing an integer
 *
 * Return: first integer in string
 */
int _atoi(char *s)
{	int c = 0;
	int sign = 1;
	unsigned int sum = 0;
	int final = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == 45)
			sign *= -1;
		else if (s[c] >= 48 && s[c] <= 57)
			break;
	}
	while (s[c] >= 48 && s[c] <= 57)
	{
		sum *= 10;
		sum += s[c] - '0';
		c++;
	}

	if (sign == -1)
		final = -sum;
	else
		final = sum;

	return (final);
}
