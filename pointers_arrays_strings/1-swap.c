#include "main.h"

/**
* reset_to_98 - function that takes a pointer to an int
* as parameter and updates the value it points to 98.
* @n: pointer
* Return: Always 0.
*/

void swap_int(int *a, int *b)
{
  int i;
  i = *a;
  *a = *b;
  *b = i;
}
