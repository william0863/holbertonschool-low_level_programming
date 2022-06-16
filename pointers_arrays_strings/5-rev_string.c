#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s : string
 */

void rev_string(char *s)
{
char tmp;
int i;
int len;
int x;

len = 0;
x = 0;

while (s[len] != '\0')
{
len++;
}

x = len - 1;

for (i = 0; i < len / 2; i++)
{
tmp = s[i];
s[i] = s[x];
s[x--] = tmp;
}
}
