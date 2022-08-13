#include "lists.h"

/**
 * add_node_end - adds new node at end
 * @head: double pointer to head.
 * @str: list_t member.
 * Return: new node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;

	size_t i;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	new_node->len = i;
	new_node->next = NULL;
	current = *head;

	if (current == NULL)
		*head = new_node;

	else
	{
		while (current = NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}

	return (*head);
}
