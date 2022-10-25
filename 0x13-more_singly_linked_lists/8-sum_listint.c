#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - sums all the data of a listint_t list
 * @head: First node
 *
 * Return: The sum of the data of a the list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
