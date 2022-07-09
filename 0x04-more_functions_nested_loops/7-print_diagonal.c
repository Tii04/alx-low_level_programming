#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: n is an integer that is the argument.
 * Return: void.
 */
void print_diagonal(int n)
{
	int i, r;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (r = 0; r <= i; r++)
			{
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
			}
		}
	}
}
