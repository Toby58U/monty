#include "monty.h"

/**
 * add_node_to_list - Adds a new node to a circular linked list.
 * @list: Double pointer to the beginning of the circular linked list.
 * @value: Value to add to the new node.
 *
 * Description: The function adds the node to the beginning if in stack mode
 * and the end if in queue mode.
 *
 * Return: Pointer to the new node, or NULL on failure.
 */
stack_t *add_node_to_list(stack_t **list, const int value)
{
	stack_t *new_node;

	if (list == NULL)
		return (NULL);

	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;

	if (*list == NULL)
	{
		new_node->prev = new_node;
		new_node->next = new_node;
	}
	else
	{
		(*list)->prev->next = new_node;
		new_node->prev = (*list)->prev;
		(*list)->prev = new_node;
		new_node->next = *list;
	}

	if (var.queue == STACK || var.stack_len == 0)
		*list = new_node;
	return (new_node);
}
