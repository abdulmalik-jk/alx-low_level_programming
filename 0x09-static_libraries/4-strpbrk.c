#include "main.h"

/**
 *_strpbrk - check string for any set of bytes
 *@s: string
 *@accept: bytes
 *
 *Return: pointer to byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
