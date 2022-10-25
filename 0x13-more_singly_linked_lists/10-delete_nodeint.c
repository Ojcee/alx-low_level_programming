#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at an nth index
 * @head: First node
 * @index: Index to delete node
 *
 * Return: 1 if success and -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	unsigned int i;
	listint_t *prev;

	if (head && *head)
	{
		prev = NULL;
		for (i = 0; i <= index; i++)
		{
			if (i > 0 && !prev)
				break;
			if (i == index)
			{
				if (prev && prev->next)
				{
					current = prev->next;
					prev->next = prev->next->next;
					free(current);
					return (1);
				}
				if (!prev)
				{
					current = *head;
					*head = current->next;
					free(current);
					return (1);
				}
			}
			prev = i == 0 ? *head : prev->next;
		}
	}
	return (-1);
}
