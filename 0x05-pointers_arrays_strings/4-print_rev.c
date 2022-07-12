#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string, in reverse
 * followed by a new line.
 * @s: char pointer variable
 * Return: void.
 */

void print_rev(char *s)
{
	int i, c;

	c = strlen(s);

	for (i = c - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
