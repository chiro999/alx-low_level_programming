#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of (size) and assign char c
 * @size: size of array
 * @c: char to assign
 * Return: pointer to array, NULL if fail
 *
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);
	s = malloc(sizeof(char) * size);
	
	if (s == NULL)
		return (NULL);
	
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	
	return (s);
}
