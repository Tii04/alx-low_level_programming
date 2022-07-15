#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings.
 * @dest: character destination.
 * @src: character source.
 * @n: number of bytes.
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	strcat(dest, src, n);

	return (dest);
}
