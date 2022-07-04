#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Function that returns the sum of all its parameters.
 *@n: sum
 * Return: The sum of all its parameters or 0.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i, sum;

va_start(args, n);

sum = 0;

if (n == 0)
	return (0);

for (i = 0; i < n; i++)
	sum += va_arg(args, int);

va_end(args);
return (sum);
}

