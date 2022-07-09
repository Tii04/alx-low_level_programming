#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: Parameter size of type int as argument.
 * Return: void.
 */
void print_square(int size)
{
	int i, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (y = 0; y < i; y++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
		_putchar('\n');
	} 
}
