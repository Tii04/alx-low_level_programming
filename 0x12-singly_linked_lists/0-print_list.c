#include "lists.h"


/**
 * print_list - pints all elements of list_t list.
 * @h: pointer to first node.
 * Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
	while (h != NULL)
	{
		size_t count = 0;

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
