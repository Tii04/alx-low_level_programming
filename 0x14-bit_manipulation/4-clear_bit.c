#include "main.h"

/**
 * clear_bit - sets bit at given index to 0.
 * @n: decimal param.
 * @index: index.
 * Return: 1, or -1 if error.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
