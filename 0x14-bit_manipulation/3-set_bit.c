#include "main.h"

/**
 * set_bit - set value of bit to 1 at given index
 * @n: pointer to int
 * @index: index
 *
 * Return: 1 on success, -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int check = 1;

	if (index > 64)
	{
		return (-1);
	}
	check = check << index;
	*n = *n | check;

	return (-1);
}
