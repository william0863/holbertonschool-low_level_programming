#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * is_num - check if each argv is a digit.
 * @argvv: arguments
 * Return: 0 if there is only digits in the string, 1 if not.
 */

bool is_num(char *argvv)
{
	int j = 0;

	for (j = 0; argvv[j]; j++)
	{
		if (!(argvv[j] >= '0' && argvv[j] <= '9'))
			return (0);
	}
	return (1);
}

/**
 * main - Adds positive numbers.
 * @argc: counter
 * @argv: arguments
 * Return: 0 on success or prints Error and returns 1 if there is no digit.
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		if (is_num(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
