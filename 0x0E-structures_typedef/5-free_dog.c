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
		free(d->owner);
		free(d->name);
		free(d);
	}
}
