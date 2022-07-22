#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int x = 0;
	int y = 0;

	for (x = 48; x <= 57; x++)
		for (y = 49; y <= 57; y++)
		{
		if (x < y && x != y)
			{
			putchar(x);
			putchar(y);
			putchar(44);
			putchar(32);
			}
		}
	putchar(10);
	return (0);
}

