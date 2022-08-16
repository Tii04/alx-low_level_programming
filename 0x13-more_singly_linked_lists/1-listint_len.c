#include "lists.h"

/**
 * listint_len - counts nodes.
 * @h: pointer pointing to first node.
 * Return: number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr;

	ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
