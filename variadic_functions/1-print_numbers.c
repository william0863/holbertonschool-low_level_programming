#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Function that prints numbers, followed by a new line.
 *@n: number of integers passed to the function
 * Return: The sum of all its parameters or 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
int i, sum;
va_start (ap, count);

sum = 0;

if (separator == NULL)
	return (0);

_putchar('\n');
}
