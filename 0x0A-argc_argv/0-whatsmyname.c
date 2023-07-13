#include <stdio.h>

/**
 *main - prints program name followed by new line
 *@argc: number of argumesnts
 *@argv: arguments array
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[0]);
	}
	return (0);
}
