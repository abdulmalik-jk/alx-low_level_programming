#include "main.h"

/**
 * clear_bit - sets value of a bit to 0 at given index
 * @n: pointer to int
 * @index: index of bit
 *
 * Return: 1 on success, -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int check = 1;

	if (index > 64)
		return (-1);
	check = ~(check << index);
	*n = *n & check;
	return (1);
}
