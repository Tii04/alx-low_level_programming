#include "main.h"

/**
 * _strlen_recursion - returns
 * length of string.
 * @s: character param.
 * Return: s.
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (_strlen_recursion(s + 1));
	}
	else
		return (0);
}
