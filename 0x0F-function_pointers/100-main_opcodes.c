#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: argument ccounter
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int byte_counter, i, last_byte;
	char *op_arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte_counter = atoi(argv[1]);

	if (byte_counter < 0)
	{
		printf("Error\n");
		exit(2);
	}

	op_arr = (char *)main;

	last_byte = byte_counter - 1;

	for (i = 0; i < byte_counter; i++)
	{
		if (i == last_byte)
		{
			printf("%02hhx\n", op_arr[i]);
			break;
		}
		printf("%02hhx ", op_arr[i]);
	}
	return (0);
}
