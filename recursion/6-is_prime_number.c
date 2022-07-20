#include "main.h"

/**
 * is_prime_number - Returns 1 if the integer is a prime number or return 0.
 *@n: integer
 *@i: number to check if n is prime
 *@kirikou: true if not prime false if prime
 * Return: 1 if number is prime, 0 if not
 */
int is_prime_number(int n)
int i;
int kirikou = 0;
{
	if (n == 0 || n == 1)
	kirikou = 1;

  for (i = 2; i <= n / 2; ++i)
  {
    if (n % i == 0)
	{
		kirikou = 1;
break;
}
}
if (kirikou == 0)
return (1);
else
return (0);
}
