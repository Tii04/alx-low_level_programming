#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string.
 * @dest: character destination.
 * @src: character source.
 * @n: int numbe of bytes.
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
