#include "main.h"

/**
 * get_bit - return value of a bit at given index
 * @n: digit
 * @index: index
 *
 * Return: value of bit at index or  -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int check = 1, value;

	if (n == 0)
		return (0);
	if (index > 64)
		return (-1);
	check = check << index;
	if (n & check)
		value = 1;
	else
		value = 0;
	return (value);
}
