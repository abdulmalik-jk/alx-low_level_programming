#include "main.h"
/**
 *_strstr - locate substring needle in the haystack
 *@haystack: the string to search
 *@needle: the substring to locate
 *
 *Return: pointer to the begining of the substring
 *or null is substring is absent
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
			if (needle[j] == '\0')
			{
				return (&haystack[i]);
			}
	}
		return (0);
}
