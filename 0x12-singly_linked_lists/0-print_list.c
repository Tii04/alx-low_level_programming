#include "lists.h"

/**
 * print_list - pints all elements of list_t list.
 * @h: pointer to first node.
 * Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (str == NULL)
	{
		printf("[0] (nil)");
	}
	list_t *ptr = NULL;

	ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	printf("%lu", count);
	return (0);

}
