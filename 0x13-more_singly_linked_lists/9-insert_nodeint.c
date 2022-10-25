#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a node at a given index in a listint_t
 * @head: First node
 * @idx: The index to add the given node
 * @n: The data in the new node
 *
 * Return: Pointer to the new node, otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *current, *prev;

	if (head != NULL)
	{
		current = malloc(sizeof(listint_t));
		if (current)
		{
			current->n = n;
			if (idx == 0)
			{
				current->next = *head;
				*head = current;
				return (current);
			}
			prev = *head;
			for (count = 1; count < idx && *head != NULL; count++)
				prev = prev != NULL ? prev->next : NULL;
			if (count == idx && prev != NULL)
			{
				current->next = prev->next;
				prev->next = current;
				return (current);
			}
			else
			{
				free(current);
			}
		}
	}
	return (NULL);
}
