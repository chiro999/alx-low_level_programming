#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory of size b
 * @b: the size of memory to allocate
 *
 * Return: Nothing.
 */

void *malloc_checked(unsigned int b)
{
	void *mem_space;

	mem_space = malloc(b);

	if (mem_space == NULL)
		exit(98);

	return (mem_space);
}
