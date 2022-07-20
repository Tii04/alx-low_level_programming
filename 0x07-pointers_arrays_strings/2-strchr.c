#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in
 * a string.
 * @s: character pointer param.
 * @c: character param.
 * Return: character.
 */

char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;
		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
			return (NULL);
		}
	}
}
