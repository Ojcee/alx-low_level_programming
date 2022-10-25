#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t
 * @head: First node of the list
 *
 */

void free_listint(listint_t *head)
{
	if (head)
	{
		if (head->next)
			free_listint(head->next);
		if (head)
			free(head);
	}
}
