#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: integer n is an agrument.
 * Return: void.
 */
void print_line(int n)
{
	int i, r;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
			_putchar(95);
		_putchar('\n');
	}
}
