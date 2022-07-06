#include "main.h"

/**
 * print_alphabet_x10 - prints 10 the alphabet 10 times,
 * in lowercase, followed by a new line.
 * Return: 0 if exited properly, otherwise non-zero number.
 */
void print_alphabet_x10(void)
{
	int j;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}