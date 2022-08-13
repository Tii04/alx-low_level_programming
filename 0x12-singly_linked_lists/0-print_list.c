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
		if (h->str == NULL)
		{
			printf("[%d] %s", 0, "(nil)");
		}
		else
			printf("[%d] %s", h->len, h->str);

		h = h->next;
		count++;
	}
	return (count);

}
