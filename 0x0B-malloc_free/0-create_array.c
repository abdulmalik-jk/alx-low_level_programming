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
	if (size == 0)
	{
		return (NULL);
	}
	char *array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}
	free(array);
	return (array);
}
