#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function that allocates memory for an array, using malloc.
 * @nmemb: First parameter
 * @size: Second parameter
 * Return: Allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size);

{
		void *ptr;
	unsigned int i;

	if (nmemb <= 0 && size <= 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*((char *)ptr + i) = 0;

	return (ptr);
}
