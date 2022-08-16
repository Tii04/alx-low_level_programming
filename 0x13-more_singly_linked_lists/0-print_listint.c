#include "lists.h"

/**
 * print_listint - prints elements of list.
 * @h: pointer pointing to first node. 
 * Return: number of nodes.
 */

size_t print_listint (const listint_t *h)
{
	size_t count = 0;

	if (h->n == NULL)
		return (NULL);

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}

