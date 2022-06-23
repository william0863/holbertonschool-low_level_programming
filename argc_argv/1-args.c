/**
 * main - program that prints the number of arguments passed into it.
 * @argc: The number of arguments.
 * @argv: The vector of arguments.
 * Return: 0.
 */

#include <stdio.h>

int main(int argc, char *argv[] __attribute__((unused)))
{
if (argc > 0)
printf("%d\n", argc - 1);
	return (0);
}
