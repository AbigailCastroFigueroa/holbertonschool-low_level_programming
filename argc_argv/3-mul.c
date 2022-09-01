#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two number
 * @argc: count of the amount of arguments given
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *e = "Error";

	if (argc == 1)
	{
		printf("%s\n", e);
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%i\n", a * b);
		return (0);
}

