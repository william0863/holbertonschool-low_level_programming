#include "main.h"
#include <stdio.h>

/**
 *_strlen - function that returns the length of a string.
 * @s : string
 * Return : length
 */

int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
