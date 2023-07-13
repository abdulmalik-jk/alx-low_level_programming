#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: string one
 * @src: string two
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (s);
}
