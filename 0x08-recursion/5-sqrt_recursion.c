#include "main.h"

/**
 *_sqrt - find square root
 *@n: number
 *@a: suggestion
 *Return: a or -1
 */

int _sqrt(int n, int a)
{
	if (a * a > n)
	{
		return (-1);
	}
	if (a * a == n)
	{
		return (a);
	}
	return (_sqrt(n, a + 1));
}
/**
 *_sqrt_recursion - returns the natursl square root of a number
 *@n: the number
 *
 *Return: square root of the number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(n, 0));
}
