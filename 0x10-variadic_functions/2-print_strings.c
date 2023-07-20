#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings separated by a string then a new line
 * @separator: String to be printed between strings passed to the function
 * @n: The number of strings passed to the function
 * @...: Variable number of strings to be prined
 *
 * Description: If a string is NULL, (nil) is printed instead
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i = 0;
	char *str;

	va_start(strings, n);
	while (i < n)
	{
		str = va_arg(strings, char *);
		if (!str)
			printf("(nil)");
		else
			printf("%s", str);
		if (i < n - 1 && separator)
				printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(strings);
}
