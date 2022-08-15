#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: pointer pointing to first node.
 * Return: memory cleared.
 */

void free_list(list_t *head)
{
	list_t *curr_node;

	while ((curr_node = head) != NULL)
	{
		head = head->next;
		free(curr_node->str);
		free(curr_node);
	}
}
