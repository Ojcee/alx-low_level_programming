#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2_head - frees a listint_t list
 * @head: First node
 */
void free_listint2_head(listint_t *head)
{
	if (head)
	{
		if (head->next)
			free_listint2_head(head->next);
		if (head)
			free(head);
	}
}


/**
 * free_listint2 - frees a listint_t list and sets head to NULL
 * @head: First node
 *
 */

void free_listint2(listint_t **head)
{
	if (head)
	{
		if ((*head)->next)
			free_listint2_head((*head)->next);
		free(*head);
		*head = NULL;
	}
}
