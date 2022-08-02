#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - prints a struct
 * dog.
 * @d: struct dog variable.
 * Return: d.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	else if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}

	else if (d->age < 0)
	{
		printf("Age: (nil)\n");
	}

	else if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}

	else
	{
		printf("%s\n", d->name);
		printf("%f\n", d->age);
		printf("%s\n", d->owner);
	}
