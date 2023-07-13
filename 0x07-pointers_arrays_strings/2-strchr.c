#include "main.h"
/**
 *_strchr - locates a character in a string
 *@s: string to be checked
 *@c: character to be located
 *
 * Return: pointer to the first occurence after the character
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == '\0' && *s == c)
	{
		return (s);
	}
	return (s + 1);
}
