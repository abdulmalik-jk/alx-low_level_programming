#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: string one
 * @src: string two
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;
	int i;

	for (i = 0; i < n; i++)
	{
		if (*src != '\0')
		{
			*p = *src;
			src++;
			p++;
		}
		else
		{
			*p = '\0';
			p++;
		}
	}
	return (dest);
}
