#include "main.h"

/**
 * print_numbers - A function that checks for a digit (0 through 9).
 * @c : operand
 * 
 */
void print_numbers(void)

{
char c;
for (c = '0'; c <= '9'; c++)
{
_putchar(c);
}
_putchar('\n');
}
