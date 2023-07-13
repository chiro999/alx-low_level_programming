#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of nmemb of size bytes each
 * @nmemb: array of elements
 * @size: size in bytes of elements in nmemb
 *
 * Return: always 0 for success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, space = 0;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	space = nmemb * size;
	arr = malloc(space);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < space; i++)
	{
		arr[i] = 0;
	}

	return (arr);
}
