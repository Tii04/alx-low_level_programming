#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: memory allocated.
 * Return: void pointer.
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (i == NULL)
	{
		(exit(98));
	}
	return (i);
}
