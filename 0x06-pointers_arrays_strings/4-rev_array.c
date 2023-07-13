#include "main.h"
/**
 * reverse_array - reverses the contents of sn array
 * of integers
 * @a: array of integers
 * @n: size of array
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}
}
