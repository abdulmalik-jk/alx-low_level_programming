#include "main.h"
#include<ctype.h>
/**
 *_isupper - checks if a character is uppercase
 *@c: character to be checked
 *
 * Return: 1 if uppercase, else 0
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
