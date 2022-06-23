/**
 * main - program that prints all arguments it receives.
 * @args: manipulate and output command arguments.
 * @argv: The vector of arguments.
 * Return: 0.
 */

#include<stdio.h>

int main(int args, char *argv[])
{
int i = 0;
	for (i = 0; i < args; i++)
		printf("%s\n", argv[i]);
return (0);
}

