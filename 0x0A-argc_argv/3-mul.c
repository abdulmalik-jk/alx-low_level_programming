#include <stdio.h>
#include <stdlib.h>

/**
 *main - multiplies two numbers
 *@argc: argument count
 *@argv: arguments array
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 3)
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	}
	return (0);
}
