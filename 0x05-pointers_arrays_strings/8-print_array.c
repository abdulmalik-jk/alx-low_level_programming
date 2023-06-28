#include "main.h"
#include<stdio.h>
/**
 * print_array - prints elements of an array of integers
 * @a: array pointer
 * @n: number of array elements
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i < (n - 1))
		{
			printf("%d, ", *(a + i));
		}
			else if (i == n - 1)
			{
				printf("%d", *(a + (n - 1)));
			}
	}
		printf("\n");
}
