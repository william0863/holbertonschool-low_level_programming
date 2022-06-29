#include "main.h"

/**
 * string_nconcat - A function that concatenates two strings.
 * @s1: First string
 * @s2: Second string
 * @n: length
 * Return: The 2 strings concatened.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
char *concat;
unsigned int len = n, i;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (i = 0; s1[i]; i++)
len++;

for (i = 0; s2[i]; i++)
len++;

concat = malloc(sizeof(char) * (len));

if (concat == NULL)
return (NULL);

len = 0;

for (i = 0; s1[i]; i++)
concat[len++] = s1[i];

for (i = 0; s2[i] && i < n; i++)
concat[len++] = s2[i];

concat[len] = '\0';

return (concat);
}
