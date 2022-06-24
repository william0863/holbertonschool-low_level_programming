#include "main.h"
/**
 * _isalpha - Write a function that checks for alphabetic character.
 * @c: first operand
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
