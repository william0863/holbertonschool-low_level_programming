#include "main.h"
/**
 * _abs - Write a function that computes the absolute value of an integer.
 * @n: first operand
 *
 * Return: Always 0 (Success)
 */
int _abs(int n)

{
if (n > 0)
{
return (n);
}
else if (n < 0)
{
return (-n);
}

return (0);
}
