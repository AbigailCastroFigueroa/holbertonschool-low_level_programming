#include <stdio.h>
#include <stdlib.h>
/**
 * main - add positive numbers.
 * @argc: count the amount of arguments given.
 * @argv: array of arguments.
 *
 * Return: 1 if it's an error, 0 otherwise.
 */
int main(int argc, char *argv[])
{
	int i, a, b, add, sum = 0;
	char *e = "Error";

	if (argc == 1)
	printf("%d\n", argc - 1);

	for (i = 1; i < argc; i++)
	{
		for (a = 0; argv[i][a] != 0; a++)
		{
			if (argv[i][a] > '9' || argv[i][a] < '0')
			{
			printf("%s\n", e);
			return (1);
			}
		}
	}

	for (b = 1; b < argc; b++)
	{
		add = atoi(argv[b]);
		sum += add;
	}
	printf("%d\n", sum);
	return (0);
}




