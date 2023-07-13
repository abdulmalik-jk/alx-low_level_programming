#include "main.h"
#include<ctype.h>
/**
 *_isalpha - check  for alphabetic character
 *@c: the character to be checked
 *
 *Return: 1 if alphabetic, ele, 0
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (c);
}
