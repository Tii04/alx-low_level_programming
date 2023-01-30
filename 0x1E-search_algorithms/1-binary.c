#include "search_algos.h"

/**
 * ele_pr - prints elements that are searched.
 * @start: beginning of array
 * @end: end of array.
 * @array: the array.
 * Return: The elements.
 */

void ele_pr(int *array, int start, int end)
{
	int i;

	printf("Searching in array: ");

	for (i = start; i < end; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[end]);
}

/**
 * binary_search - searches a specific value.
 * @array: array with all the elements to be traversed.
 * @size: size of array.
 * @value: value to be searched within array.
 * Return: index of value, or -1.
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int middle;

	if (array == NULL)
		return (-1);

	while (left < right)
	{
		middle = (left + right) / 2;

		ele_pr(array, left, right);

		if (array[middle] == value)
			return (middle);

		else if	(value < array[middle])
			right = middle - 1;
		else
			left = middle + 1;
	}
	return (-1);
}
