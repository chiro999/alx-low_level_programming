#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - prints parameters of any type
 * @format: types of parameters to be operated on by the function
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	va_list parameters;
	char *string;
	unsigned int i = 0;

	va_start(parameters, format);
	while (format && format[i] != '\0')
	{
		switch (format[i++])
		{
			case 'i':
				printf("%d", va_arg(parameters, int));
				break;
			case 'c':
				printf("%c", va_arg(parameters, int));
				break;
			case 'f':
				printf("%f", va_arg(parameters, double));
				break;
			case 's':
				string = va_arg(parameters, char *);
				printf("%s", !string  ? "(nil)" : string);
				break;
			default:
				continue;
		}
		if (format[i] != '\0')
			printf(", ");
		

	}
	printf("\n");
	va_end(parameters);
}
