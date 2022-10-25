#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Gets the nth node of a listint_t list
 * @head: First node
 * @index: nth node to return
 *
 * Return: The nth node, or NULL if node doesnt exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	for (count = 0; current && count <= index; count++)
	{
		if (count == index)
			return (current);
		current = current->next;
	}
	return (NULL);
}
