#include "main.h"

/**
 * set_bit - sets bit to 1 at given index.
 * @n: decimal param.
 * @index: index.
 * Return: 1 or -1 if unsuccessful.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	*n |= (1 << index);
	return (1);
}
