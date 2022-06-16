#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * including (\0)
 * @dest: pointer to the buffer in which we copy the string
 * @src: string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int len;
int i;

len = 0;

while (src[len] != '\0')
{
len++;
}

for (i = 0; i < len; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';

return (dest);
}
