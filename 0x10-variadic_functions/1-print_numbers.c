#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * prints_numbers - prints numbers with a separator followed by a new line
 * @separator: The string to be printed between numbers
 * @n: number of integers passed to the functon
 * @...: variable amount of integers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i = 0;

	va_start(numbers, n);

	while (i < n)
	{
		printf("%d", va_arg(numbers, int));
		
	     if ((i < n - 1) && separator)
		printf("%s", separator);

	     i++;
	}
	printf("\n");
	va_end(numbers);
}
