#include "main.h"

/**
 * swap_int - swaps value of two ints
 * @a: first pointer
 * @b: second pointer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
