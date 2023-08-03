#include "main.h"

/**
 * get_endianness - check endianness
 * Return: 0 if big endian, or 1 if little endian
 */
int get_endianness(void)
{
	unsigned int n;
	char *endian_or_not;

	n = 1;
	endian_or_not = (char *) & n;

	if ((*endian_or_not) = 1)
		return (1);
	else
		return (0);
}
