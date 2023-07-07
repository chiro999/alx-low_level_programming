#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: argument counter
 * @argv: array of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv);

	return (0);
}
