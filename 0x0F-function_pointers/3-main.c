#include "3-calc.h"

/**
 * main - program that performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int first_operand, second_operand, result;
	char operator;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	first_operand = atoi(argv[1]);
	operation = get_op_func(argv[2]);
	second_operand = atoi(argv[3]);

	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}

	operator = *argv[2];

	if (second_operand == 0 && (operator == '/' || operator == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	result = operation(first_operand, second_operand);

	printf("%d\n", result);

	return (0);
}
