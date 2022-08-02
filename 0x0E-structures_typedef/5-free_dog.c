#include "dog.h"

/**
 * free_dog - a function; frees dogs.
 * @d: struct type variable.
 *
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	else
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
