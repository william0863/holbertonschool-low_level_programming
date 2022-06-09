#include "main.h"
/**
 * _islower - Write a function that checks for lowercase character.
 * @c: fist operand
 * Returns 1 if c is lowercase. Returns 0 otherwise.
 * Return: Always 0 (Success)
 */
int _islower(int c)
{

if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
