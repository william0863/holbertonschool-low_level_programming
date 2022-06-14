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

if (n <= 0)
_putchar('\n');
for (i = 1; i <= rows; i++)
{
for (j = 1; j < i; j++)
_putchar(' ');
_putchar(92);
_putchar('\n');
}
}
