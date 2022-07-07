#include "main.h"

/**
 * _isupper - Checks for uppercase character.
 * Return: 1 if c is uppercase, 0 otherwise.
 * @c: Character c is the int argument.
 */
int _isupper(int c)
{
	if ((c >= 'A' && c <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}
