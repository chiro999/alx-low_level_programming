#include "main.h"

/**
 * get_endianness - check endianness
 * Return: 0 if big endian, or 1 if little endian
 */
int get_endianness(void)
{
	unsigned int n = 1;
	unsigned char *endian_or_not = (unsigned char *) & n;

	if (*endian_or_not == 1)
		return (1);
	else
		return (0);
}
