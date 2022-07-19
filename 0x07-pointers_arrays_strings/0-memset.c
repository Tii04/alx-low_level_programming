#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with
 * a constant byte.
 * @s: character parameter.
 * @b: character parameter.
 * @n: unsigned parameter.
 * Return: pointer.
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, sizeof(unsigned int) * 10);

	return (s);
}
