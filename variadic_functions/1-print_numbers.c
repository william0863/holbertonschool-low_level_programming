#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Function that prints numbers, followed by a new line.
 *@separator: the separator between args
 *@n: number of integers passed to the function
 * Return: The wanted numbers.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
i = 0;

va_start(args, n);

while (i < n)
{
printf("%d", va_arg(args, unsigned int));

if (i != n - 1 && separator != NULL)
{
	printf("%s", separator);
}
i++;
}

va_end(args);
printf("\n");
}
