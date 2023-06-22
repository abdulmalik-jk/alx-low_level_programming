#include "main.h"
/**
 *print_line - prints a line using dashes
 *@n: number of dashes to print the line
 *
 *Return: 0
 */

void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
