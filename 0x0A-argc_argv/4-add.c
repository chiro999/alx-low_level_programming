#include "main.h"
#include <stdio.h>

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

/**
 * _isdigit - Check if a character is a digit
 * @x: The number to be checked
 * Return: 1 for a character which is a digit else 0
*/

int _isdigit(int x)
{
	if (x >= '0' && x <= '9')
	{
	return (1);
	}
	return (0);
}

/**
 * main - adds positive numbers
 * @argc: argument counter
 * @argv: array of arguments
 *
 * Return 0 for success and 1 for error
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!_isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += _atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
