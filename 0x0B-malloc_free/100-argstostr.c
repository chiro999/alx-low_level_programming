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
	int i, j, r = 0, ch = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			ch++;
	}
	

	str = malloc(sizeof(char) * ch + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
		str[r] = av[i][j];
		r++;
	}
	
	str[r++] = '\n';
	
	}
	r++;
	str[r] = '\0';
	return (str);
}

