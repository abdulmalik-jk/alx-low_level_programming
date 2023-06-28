#include "main.h"
/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;
	for (j = (i + 1) / 2; j < 1; j++)
		_putchar(str[j]);
	_putchar('\n');
}
