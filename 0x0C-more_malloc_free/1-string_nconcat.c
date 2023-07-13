#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *@n: number of bytes
 *
 *Return: pointer on success, 0 if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int j, i = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	p = malloc((i * sizeof(char)) + n + 1);
	if (p == NULL)
	{
		return (0);
	}
	for (j = 0; j < i; j++)
	{
		if (!(j >= i))
		{
			p[j] = s1[j];
		}
		else
		{
			p[j] = s2[j - i];
		}
	}
	p[j] = '\0';
	return (p);
}
