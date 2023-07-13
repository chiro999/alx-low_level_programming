#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: n bytes of s2 for concatenation
 *
 * Return: Always 0 for success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int space = 0, k = 0, i = 0, j = 0;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++){}
	for (j = 0; s2[j] != '\0'; j++){}
        
	if (!(n >= j))
		space = i + n;
	else 
		space = i + j;

	s3 = malloc(sizeof(char) * space + 1);
	if (s3 == NULL)
		return (NULL);

	j = 0;

	while (k < space)
	{
		if (k <= i)
			s3[k] = s1[k];

		if (k >= i)
		{
			s3[k] = s2[j];
			j++;
		}
		k++;
	}
	s3[k] = '\0';
	return (s3);	
}
