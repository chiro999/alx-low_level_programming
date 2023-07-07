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

/*
 * main - multiplies two numbers
 * @argc: argument counter
 * @argv: array of arguments
 *
 * Return 0 for success and 1 for error
 */

int main(int argc, char *argv[])
{
	int product, x, y;

	if (!(argc == 3))
	{
		printf("Error\n");
		return(1);
	}
	else
	{
		x = _atoi(argv[1]);
		y = _atoi(argv[2]);
		product = x * y;
		printf("%d\n", product);
		return (0);
	}
}
