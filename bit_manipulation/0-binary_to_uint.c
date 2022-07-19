#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: binary
 * Return: the unsigned int
 */
unsigned int binary_to_uint(const char *b)
{

	int len = 0, i;
	unsigned int sum = 0;

	if (b == NULL)
		return (sum);

	/* trouver la longueur de la string */
	while (b[len] != '\0')
		len++;
	len -= 1;

	/* répéter la string et si atteint 1 multiplier puissance 2 */
	i = 0;
	while (b[i])
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (sum);

		if (b[i] == '1')
			sum += (1 * (1 << len));
		i++;
		len--;
	}

	return (sum);
}
