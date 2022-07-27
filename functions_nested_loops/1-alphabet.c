#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - prints the alphabet in a line, no spaces between letters.
 */

void print_alphabet(void)
{
	int a = 0;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar(10);
}
