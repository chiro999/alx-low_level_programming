#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int i, str_len, index_len;

	str_len = 0;
	index_len = 0;

	while (s[str_len] != '\0')
	{
		str_len++;
	}

	index_len = str_len - 1;

	for (i = 0; i < str_len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[index_len];

		s[index_len--] = tmp;
	}
}
