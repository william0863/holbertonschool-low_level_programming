/**
 * main - program that prints its name.
 * @argc: The number of arguments.
 * @argv: The vector of arguments.
 * Return: 0
 */
#include <stdio.h>
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
