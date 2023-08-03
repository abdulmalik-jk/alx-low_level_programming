#include "main.h"

/**
 * flip_bits - returns number of bits to be flipped
 * @n: first number to be flipped
 * @m: number
 *
 * Return:number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned int m)
{
	unsigned long int diff = n ^ m, p = n | m;
	unsigned long int check = 1, no = 0;

	while (p)
	{
		if (diff & check)
		{
			no++;
		}
		check = check << 1;
		p = p >> 1;
	}
	return (no);
}
