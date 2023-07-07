#include "main.h"
#include <stdio.h>

/**
 * main- Prints all the argv content
 * @argc: argument counter
 * @argv: array of arguments
 *
 * Return: Always zero
 */

int main(int argc, char *argv[])
{
	int i;
	
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
