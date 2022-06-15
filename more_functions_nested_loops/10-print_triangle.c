#include "main.h"

/**
 * print_triangle - Print a diagonal n times with _putchar.
 * @size : number of characters of the triangle.
 */

void print_triangle(int size)
{
int i;
int j;
int k;

if (size <= 0)
_putchar('\n');


for (i = 1; i <= size; i++)
{
for (j = 1; j <= (size - i); j++)
{
_putchar(' ');
}
for (k = 1; k <= i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
