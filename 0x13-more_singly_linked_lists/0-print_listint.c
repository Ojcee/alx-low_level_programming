#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints element in a listint_t list.
 * @h: first node
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodeCount = 0;

	/*listint_t *ptr = h ? h->next : NULL;*/

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodeCount++;
	}

	return (nodeCount);
}
