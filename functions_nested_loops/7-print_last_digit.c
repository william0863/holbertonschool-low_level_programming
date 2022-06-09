#include "main.h"
/**
 * print_last_digit -Write a function that prints the last digit of a number..
 * @n: first operand
 *
 * Return: Last digit
 */
int print_last_digit(int n)
{
if (n < 0)
n = n * -1;
_putchar((n % 10) + '0');
return (n % 10);
}
