#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int a = 0;
	int b = 0;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;

	concat = malloc(sizeof(char) * (a + b + 1));

	if (concat == NULL)
		return (NULL);
	
	a = b = 0;

	while (s1[a] != '\0')
	{
		concat[a] = s1[a];
		a++;
	}

	while (s2[b] != '\0')
	{
		concat[a] = s2[b];
		a++;
		b++;
	}
	concat[a] = '\0';
	return (concat);
}
