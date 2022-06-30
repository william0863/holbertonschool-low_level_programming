#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name_as_is - function that prints a name.
 * @name: name
 *@f: ptr
 * Return: nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
