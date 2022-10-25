#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - prints number of elements in a listint_t list
 * @h: first note
 *
 * Return: Return number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t elementCount = 0;

	while (h != NULL)
	{
		h = h->next;
		elementCount++;
	}

	return (elementCount);
}
