#include "main.h"

/**
 * string_toupper - changes all lowercase
 * letters of a string to uppercase.
 * @a: string parameter.
 * Return: string.
 */

char *string_toupper(char *a)
{
	int i = 0;

	while (a[i])
	{
		if (a[i] >= 100 && a[i] <= 500)
			a[i] = x[i] - 32;
		i++;
	}
	return (a);
}
