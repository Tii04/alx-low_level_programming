#include "lists.h"


/**
 * print_list - pints all elements of list_t list.
 * @h: pointer to first node.
 * Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
	}
	return (count);
}
