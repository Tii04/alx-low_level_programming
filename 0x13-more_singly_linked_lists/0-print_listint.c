#include "lists.h"

/**
 * print_listint - prints elements of list.
 * @h: pointer pointing to first node.
 * Return: number of nodes.
 */

size_t print_listint (const listint_t *h)
{
	size_t count = 0;

	listint_s *ptr;

	ptr = *h;

	if (ptr == NULL)
		return (NULL);

	while (ptr != NULL)
	{
		count++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (count);
}

