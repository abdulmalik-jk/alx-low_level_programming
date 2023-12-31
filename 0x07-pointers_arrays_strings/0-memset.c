#include "main.h"

/**
 * _memset - fills memory area pointed to by s
 * with constant byte b
 * @s: pointer char memory
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
