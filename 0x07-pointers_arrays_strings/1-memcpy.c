#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: character param.
 * @src: character param.
 * @n: unsigned int.
 * Return: pointer.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		src[i] = dest;
	}
	return (dest);
}
