#include "main.h"

/**
 * get_bit - returns bit at given index.
 * @n: decimal parameter.
 * @index: index.
 * Return: value or -1.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);

	if (index > 32)
		return (-1);
	return (bit & 1);
}
