#include "main.h"
/**
 *_prime - check for prime number
 *@n: number to check
 *@a: suggest
 *
 *Return: 1 for prime number, 0 otherwise
 */

int _prime(int n, int a)
{
	if (n % a == 0)

	{
		if (n == a)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
		return (_prime(n, a + 1));
}

/**
 *_is_prime_number - returns 1 if the input integer
 *is a prime number, otherwise return 0
 *@n: input
 *Return: 1 if it's a prime number, otherwise, 0
 */

int _is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (_prime(n, 2));
}
