#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: the comparaison between s1 & s2.
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
