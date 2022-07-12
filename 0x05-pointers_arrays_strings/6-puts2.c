#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string,
 * starting with the first character,
 * followed by a new line.
 * @str: char pointer variable.
 * Return: void.
 */
void puts2(char *str)
{
	int len, i;

	len = strlen(str);

	for (i = 0; i <= len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
