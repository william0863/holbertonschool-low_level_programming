#include "main.h"

/**
 * malloc_checked - Function that allocates memory using malloc.
 * @b: memory space
 * Return: A pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
unsigned int *i;

i = malloc(b);

if (i == NULL)
exit(98);

return (i);
}
