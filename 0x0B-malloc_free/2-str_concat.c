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
	int x = 0;
	int y = 0;
	
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
	

	while (s1[x] != '\0')
	{
		concat[x] = s1[x];
		x++;
	}

	while (s2[y] != '\0')
	{
		concat[x] = s2[y];
		x++;
		y++;
	}
	concat[x] = '\0';
	return (concat);
}
