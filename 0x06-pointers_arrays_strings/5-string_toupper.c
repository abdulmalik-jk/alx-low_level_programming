#include "main.h"
/**
 * string_toupper - changes all lowercase letters of string
 * to uppercase
 * @str: given string
 * Return: new string
 */

char *string_toupper(char *str)
{
	char *p = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
	return (p);
}
