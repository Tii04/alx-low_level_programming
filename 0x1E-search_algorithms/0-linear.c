#include "search_algos.h"

/**
 * linear_search - finds the element to be found.
 * @array:- array to be traversed.
 * @size: size of array.
 * @value: value being searched for.
 * Return: value on success or -1 on failure.
 */

int linear_search(int *array, size_t size, int value)
{

	unsigned int i;
	int flag = 0;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d] \n", i, array[i]);

		if (array[i] == value)
		{
			flag = 1;
			return (i);
		}
	}

	if (flag != 1)
	{
		return (-1);
	}
	printf("\n");
	return (i);
}
