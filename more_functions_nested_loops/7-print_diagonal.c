#include "main.h"

/**
 * print_diagonal - Print a diagonal n times with _putchar.
 * @n : number of characters to draw.
 *
 *
 */

void print_diagonal(int n)
{
int i;
int j;
int rows;

rows = n;

for (i = 0; i <= rows; ++i)
{
for (j = 0; j <= i; ++j)
_putchar(' ');
{
_putchar ('\\');
}
_putchar('\n');
}
_putchar('\n');
}
