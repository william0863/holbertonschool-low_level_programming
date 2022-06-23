#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - Creates an array of chars and initializes it with a char.
 * @size: size of array
 * @c: char
 * Return: NULL if size is 0 or if fail
 */

char *create_array(unsigned int size, char c)
{
char *arr;
	int i = 0;

	if (size <= 0) /* validate size input */
		return (NULL);
	arr = malloc(sizeof(char) * size); /* allocate memory */

	if (arr == NULL) /* validate memory */
		return (NULL);

	while (i < (int)size) /* set array values to char c */
	{
		*(arr + i) = c;
		i++;
	}
	*(arr + i) = '\0';

	return (arr);
}
