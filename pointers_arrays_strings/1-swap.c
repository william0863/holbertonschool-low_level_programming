#include "main.h"

/**
* swap_int - Write a function that swaps the values of two integers.
*@a: pointer
*@b: pointer
* Return: Always 0.
*/

void swap_int(int *a, int *b)
{
int i;
i = *a;
*a = *b;
*b = i;
}
