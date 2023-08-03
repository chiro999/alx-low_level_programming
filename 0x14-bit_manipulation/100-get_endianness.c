#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	char *endian_or_not;

	
	*endian_or_not = (char *) & 1;

	return ((int)*endian_or_not);
}
