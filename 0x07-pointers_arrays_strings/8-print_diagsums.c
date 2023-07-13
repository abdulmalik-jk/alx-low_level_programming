#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - prints sum of two diagonals of a
 *square matrix of integers
 *@a: matrix
 *@size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int i;

	int x = 0;

	int y = 0;

	for (i = 0; i < size; i++)
	{
		x += a[i];
		a += size;
	}
	a -= size;
	for (i = 0; i < size; i++)
	{
		y += a[i];
		a -= size;
	}
	printf("%d, %d\n", x, y);
}
