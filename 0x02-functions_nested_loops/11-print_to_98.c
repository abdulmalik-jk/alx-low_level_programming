#include<stdio.h>
#include "main.h"
/**
 *print_to_98 - prints all numbers fro n to 98
 *@n: starting number
 *
 *Return: nothing
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d", n);
		if (n > 98)
		{
			--n;
		}
		else if (n < 98)
		{
			++n;
		}
		printf(", ");
	}
	printf("%d", 98);
	printf("\n");
}
