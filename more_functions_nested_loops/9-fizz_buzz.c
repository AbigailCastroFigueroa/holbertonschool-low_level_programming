#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int i = '1';

	for (i = 1; i <= 100; i++)
	{
		if (!(i % 15))
			printf("FizzBuzz ");

		else if (!(i % 3))
			printf("Fizz ");

		else if (!(i % 5) && i != 100)
			printf("Buzz ");

		else if (i == 100 && !(i % 5))
			printf("Buzz");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
