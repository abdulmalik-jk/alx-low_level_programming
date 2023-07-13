#include "main.h"
#include <stdlib.h>

/**
 *_calloc - allocates memory for an array using malloc
 *@nmemb: number of elements in the array
 *@size: number of elemnts in each element of the array
 *
 *Return: pointer to allocated memory, NULL if malloc fails,
 *NULL if nmemb or size is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (0);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (0);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		*(p + i) = 0;
	}
	return (p);
}
