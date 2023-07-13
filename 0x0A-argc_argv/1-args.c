#include <stdio.h>

/**
 *main - prints no. of arguments passed into it
 *@argc: argument count
 *@argv:arguments array
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	printf("%d\n", argc - 1);
	if (i > argc)
	{
		printf("%s", argv[i]);
	}
	return (0);
}
