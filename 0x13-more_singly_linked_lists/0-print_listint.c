#include "lists.h"

/**
 * print_listint - prints elements of list.
 * @h: pointer pointing to first node.
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)

{
	const listint_t *ptr;

	unsigned int counter = 0;

	ptr = h;

	while (ptr)
	{
		printf("%d\n", ptr->n);
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}
