#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet, in lowercase.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int kirikou;
int i;
for (kirikou = 0 ; kirikou < 10; kirikou++)
{
for (i = 97 ; i <= 122 ; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
