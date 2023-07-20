#include "3-calc.h"
#include <string.h>

/**
 * main - main
 * @argv: arguments array
 * @argc: agument count
 *
 * Return: 0 on success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i, j;

	/* to check argument count */
	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		return (98);
	}
	/* to check operator validity */
	if ((*argv[2] != '+' && *argv[2] != '-'
				&& *argv[2] != '*' && *argv[2] != '/'
				&& *argv[2] != '%') || (strlen(argv[2]) > 1))
	{
		printf("Error\n");
		return (99);
	}
	/* to check invalid division by 0 */
	if ((*argv[2] == '/' || *argv[2] == '%')
			&& *argv[3] == '0')
	{
		printf("Error\n");
		return (100);
	}
	/* store argument in int variable */
	i = atoi(argv[1]);
	j = atoi(argv[3]);

	/* call function to check operator an add */
	(*get_op_func(argv[2]))(i, j);

	return (0);
}
