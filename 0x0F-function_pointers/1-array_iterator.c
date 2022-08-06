#include "function_pointers.h"

/**
 * array_iterator - writes a function that
 * executes another function.
 * @array: This is array.
 * @size: Size of array.
 * @action: function pointer.
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
