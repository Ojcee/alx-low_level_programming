#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a node at the end of a listint_t list
 * @head: The first node
 * @n: Integer data in new node
 *
 * Return: The address to the new node or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tail;

	tail = head ? *head : NULL;
	while (tail && tail->next != NULL)
		tail = tail->next;
	new_node = malloc(sizeof(listint_t));
	if (new_node)
	{
		new_node->n = n;
		new_node->next = NULL;
		if (tail)
			tail->next = new_node;
		if (*head == NULL)
			*head = new_node;
	}
	return (new_node);
}
