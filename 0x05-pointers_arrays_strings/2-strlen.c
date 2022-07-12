#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: char pointer variable
 * Return: int.
 */
int _strlen(char *s)
{
	int length;

	while (*s != '\0')
	{
		length += 1;
		*s = *s + 1;
	}
	return (length);
}
