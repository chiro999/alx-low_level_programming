#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums up all parameters
 * @n: number of parameters passed to the function
 * @...: variable number of parameters to be operated on
 *
 * Return: sum of all parameters or 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list operands;
	unsigned int sum = 0, i = 0;

	va_start(operands, n);

	while (i < n)
	{	
		sum += va_arg(operands, int);
		i++;
	}
	va_end(operands);

	return (sum);
}
