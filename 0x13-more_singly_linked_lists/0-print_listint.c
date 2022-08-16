#include "lists.h"

/**
 * print_listint - prints elements of list.
 * @h: pointer pointing to first node.
 * Return: number of nodes.
 */

size_t print_listint (const listint_t *h)
{
	size_t count = 0;

	const listint_t *ptr;

	ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}

