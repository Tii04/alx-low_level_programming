#inlude "main.h"

/**
 * print_triangle - print a triangle.
 * @size: integer argument.
 * Return: void.
 */
void print_triangle(int size)
{
	int i = 0, x;

	while (i <= size && size > 0)
	{
		x = 0;
		while (x < size - i)
		{
			_putchar(' ');
			x++;
		}
		x = 0;
		while (x < i)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
	}
	if (i == 1)
		_putchar('\n');
}
