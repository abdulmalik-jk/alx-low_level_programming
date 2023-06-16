#include<stdio.h>

/**
 *main - print numbers of base 16
 *Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; 1 < 16; i++)
	{
		if (i < 10)
		{
			putchar('0' + i);
		}
		else
		{
			putchar('a' + i - 10);
		}
	}
	putchar('\n');
	return (0);
}
