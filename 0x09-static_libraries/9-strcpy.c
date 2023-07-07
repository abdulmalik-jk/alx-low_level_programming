#include "main.h"
/**
 * _strcpy - copies string pointed by src
 * @dest: string to be processed
 * @src: string to be processed
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != 0)
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
