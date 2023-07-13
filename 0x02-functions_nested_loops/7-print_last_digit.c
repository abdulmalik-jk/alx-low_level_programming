#include "main.h"
/**
 *print_last_digit - prints last digit of a number
 *@n: number to be processed
 *Return: the last digit of the numberr
 */
int print_last_digit(int n)
{
	int lD;

	lD = n % 10;
	if (lD < 0)
	{
		lD = lD * -1;
	}
	_putchar(lD + '0');
	return (lD);
}

