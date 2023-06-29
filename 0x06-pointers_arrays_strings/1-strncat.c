#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	for (i = 0; i < n && *src != '\0'; i++)
	{
		*p = *src;
		src++;
		p++;
	}
	*p = '\0';
	return (dest);
}
