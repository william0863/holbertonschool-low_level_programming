#include "main.h"
/**
 * jack_bauer - Write a function that prints every minute of the day  from 00:00 to 23:59.
 * @n: first operand
 *
 * Return: Always 0.
 */

void jack_bauer(void)

{
int hours = 0;
int min = 0;

while (hours < 24)
{
while (min < 60)
{
_putchar('0' + (hours / 10));
_putchar('0' + (hours % 10));
_putchar(':');
_putchar('0' + (min / 10));
_putchar('0' + (min % 10));
_putchar('\n');
min++;
}
min = 0;
hours++;
}
}
