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
 * main - output minimum number of coins to make change
 *
 * @argc: argument counter
 * @argv: array of arguments
 *
 * Return: 1 if error, 0 if success
 */
int main(int argc, char **argv)
{
	int input, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	input = _atoi(argv[1]);
	while ((input - 25) >= 0)
	{
		coins++;
		input -= 25;
	}
	while ((input - 10) >= 0)
	{
		coins++;
		input -= 10;
	}
	if ((input - 5) >= 0)
	{
		coins++;
		input -= 5;
	}
	while ((input - 2) >= 0)
	{
		coins++;
		input -= 2;
	}
	if (input == 1)
		coins++;
	printf("%d\n", coins);
	return (0);
}
