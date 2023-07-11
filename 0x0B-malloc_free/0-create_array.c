#include "main.h"
#include <stdlib.h>

/**
 *create_array - creates an array of chars and initializes
 *it with a specific char
 *@size: size of array
 *@c: character to initialize array with
 *
 *Return: a pointer to the array or null if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *p;

	if (size == 0)
	{
		return (0);
	}
	else
	{
	       p = malloc(size * sizeof(char));
	}
	if (p == NULL)
	{
		return (0);
	}
	else
	{
	for (unsigned int i = 0; i < size; i++)
	{
		p[i] = c;
	}
	}
	free(p);
	return (p);
}
