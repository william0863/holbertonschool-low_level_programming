#include "main.h"

/**
 * *_strcat - function that concatenates two strings.
 *@dest: dest
 *@src: src
 *
 *Return: c
 */

char *_strcat(char *dest, char *src)

{
char *c = dest;
while
(*dest) dest++;
while
(*src) *(dest++) = *(src++);
return (c);
}

