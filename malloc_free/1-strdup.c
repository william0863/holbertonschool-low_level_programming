#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *_strdup - Returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @s: string
 * @i: int
 * Return: duplicated string or NULL if str=NULL or insufficient memory
 */


char *_strdup(char *str)

{
	int x = 0, i = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	while (x < i)
	{
		s[x] = str[x];
		x++;
	}

	s[x] = '\0';
	return (s);
}
