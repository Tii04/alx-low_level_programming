#include "main.h"

/**
 * print_alphabet - Writes a function that prints the alphabet,
 * in lowercase, followed by a new line.
 * Return: 0 if exited properly, otherwise non-zero returned.
 */
void print_alphabet(void)
{
	int j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}

	_putchar('\n');
}
