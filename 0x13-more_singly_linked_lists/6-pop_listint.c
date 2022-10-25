#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list
 * @head: The head node
 *
 * Return: Head node data n, 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *prev;
	int data = 0;

	if (head && *head)
	{
		prev = *head;
		data = prev->n;
		*head = (*head)->next;
		free(prev);
	}
	return (data);
}
