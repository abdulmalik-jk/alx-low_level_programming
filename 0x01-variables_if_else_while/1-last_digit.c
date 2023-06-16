#include<stdlib.h>
#include<stdio.h>
#include<time.h>

/**
 *main - print and check the last digit stored in n
 *
 *Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*your code goes here*/
	int lD = n % 10;

	if (lD > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lD);
	}
	if (lD == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lD);
	}
	if (lD > 6 && lD != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lD);
	}
	return (0);
}
