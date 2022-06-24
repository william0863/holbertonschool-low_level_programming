#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *str_concat - function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: The 2 strings or NULL on failure.
 */

char *str_concat(char *s1, char *s2)

{
	int i = 0, a = 0, b = 0, c = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[a])
		a++;

	c = i + a;
	s = malloc((sizeof(char) * c) + 1);

	if (s == NULL)
		return (NULL);

	a = 0;

	while (b < c)
	{
		if (b <= i)
			s[b] = s1[b];

		if (b >= i)
		{
			s[b] = s2[a];
			a++;
		}

		b++;
	}

	s[b] = '\0';
	return (s);
}
