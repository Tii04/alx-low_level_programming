#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings.
 * @s1: String 1.
 * @s2: String 2.
 * Return: string.
 */

int _strcmp(char *s1, char *s2)
{
	int result;

	result = strcmp(s1, s2);

	_putchar(result);
	return (0);

}