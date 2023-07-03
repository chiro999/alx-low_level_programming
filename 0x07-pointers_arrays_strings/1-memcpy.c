#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: destination
 * @src: memory area to copy from
 * @n: number of bytes to copy as specified by user 
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
