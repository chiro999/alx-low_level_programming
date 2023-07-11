#include "main.h"
#include <stdlib.h>
/**
 * argstostr - parameter to string converter
 * @ac: argument counter
 * @av: argument vector
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, j, y = 0, ch = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			ch++;
	}
	
	s = malloc(sizeof(char) * ch + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
		s[y] = av[i][j];
		y++;
	}
	
	s[y++] = '\n';
	
	}
	y++;
	s[y] = '\0';
	return (s);
}
