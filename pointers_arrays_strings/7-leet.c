#include "main.h"

/**
 * leet - function that ncodes a string to 1337.
 * @str: string
 * Return: to string.
 */
char *leet(char *str)
{
int i = 0, b;
char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

while (str[i])
{
for (b = 0; b <= 7; b++)
{
if (str[i] == leet[b] ||
str[i] - 32 == leet[b])
str[i] = b + '0';
}
i++;
}
return (str);
}
