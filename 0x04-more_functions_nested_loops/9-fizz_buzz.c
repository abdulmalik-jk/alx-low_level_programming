#include<stdio.h>
/**
 *main - prints numbers form 1 to 100, replacing
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
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if (i % 5 == 0)

		{
			printf("Buzz ");
			continue;
		}
		printf("%d ", i);
	}
	printf("\n");
}
