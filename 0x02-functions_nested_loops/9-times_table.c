#include "main.h"
/**
 *times_table - prints the 9 times atbel, starting with 0
 *
 *Return: void
 */
void times_table(void)
{
	int i;
	int j;
	int p;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			p = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (p <= 9)
				{
					putchar(' ');
				}
			}
			if (p <= 9)
			{
				_putchar('0' + p);
			}
			else
			{
				_putchar('0' + (p / 10));
				_putchar('0' + (p % 10));
			}
		}
		_putchar('\n');
	}
}
