#include "main.h"

/**
 * binary_to_uint - converts base 2 to base 10.
 * @b: binary numbers.
 * Return: decimal value.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0, decval = 1, i;
	unsigned int slen = strlen(b);

	for (i = (slen - 1); i >= 0; i--)
	{
		if (b[i] == '1')
		{
			total += decval;
		}
		decval *= 2;
	}
	return (total);
}
