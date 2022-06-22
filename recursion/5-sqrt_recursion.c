#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 *@n: given number
 * Return: The natural square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (racine(n, 1));
}

/**
 * racine - find the racine
 * @n: number
 * @i: i
 * Return: natural square root or -1
 */

int racine(int n, int i)
{
	if (n == (i * i))
		return (i);
	else if (n > (i * i))
		return (racine(n, i + 1));
	else
		return (-1);
}
