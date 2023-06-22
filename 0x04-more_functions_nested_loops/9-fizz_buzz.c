#include<stdio.h>
/**
 *main - prints numbers form 1 to 100, repacing
 *multiples of 3 with 'Fizz', multiples of 5 with
 *'Buzz' and multiples of 3 and 5 with 'FizzBuzz'
 *
 *Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
			if (i != 100)
			{
				printf(" ");
			}
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}