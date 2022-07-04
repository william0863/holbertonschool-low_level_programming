#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Function that prints strings, followed by a new line.
 *@separator: string to be printed between the strings
 *@n: number of strings passed to the function
 * Return: The wanted strings.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *s;
i = 0;

va_start(args, n);

while (i < n)
{
	s = va_arg(args, char *);
		if (s == 0)
			printf("(nil)");

		else
			printf("%s", s);

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);

	i++;
}

va_end(args);
printf("\n");
}
