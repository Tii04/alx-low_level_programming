#include "main.h"

/**
 * _strchr - locates a character in
 * a string.
 * @s: character pointer param.
 * @c: character param.
 * Return: character.
 */

char *_strchr(char *s, char c)
{
	int i, b;

	while (s[i])
	{
		a++;
		for (b = 0; b < i; b++)
		{
			if (s[b] == c)
			{
				s += b;
				return (s);
			}
			else
				return ('\0');
		}
	}
}
