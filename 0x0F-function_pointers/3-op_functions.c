#include "3-calc.h"

/**
 * op_add - add two ints
 * @a: first int
 * @b: second in
 *
 * Return: 0 on success, 1 otherwise
 */

int op_add(int a, int b)
{
	printf("%d\n", a + b);
	return (0);
}

/**
 * op_sub - subtract two ints
 * @a: first int
 * @b: second int
 *
 * Return: 0 on success, 1 otherwise
 */

int op_sub(int a, int b)
{
	printf("%d\n", a - b);
	return (0);
}

/**
 * op_mul - multiply two ints
 * @a: first int
 * @b: second int
 *
 * Return: 0 on success, 1 otherwis
 */

int op_mul(int a, int b)
{
	printf("%d\n", a * b);
	return (0);
}

/**
 * op_div - divide two ints
 * @a: first int
 * @b: second int
 *
 * Return: 0 on success, i otherwise
 */

int op_div(int a, int b)
{
	printf("%d\n", a / b);
	return (0);
}

/**
 * op_mod - find modulus of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: 0 on success, 1 otherwise
 */

int op_mod(int a, int b)
{
	printf("%d\n", a % b);
	return (0);
}
