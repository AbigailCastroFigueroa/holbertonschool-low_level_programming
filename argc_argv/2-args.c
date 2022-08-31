#include <stdio.h>
/**
 * main - print all the arguments received.
 * @argc: count the amount of arguments given.
 * @argv: array of arguments.
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
