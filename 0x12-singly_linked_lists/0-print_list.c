#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - Prints the data in a node
 * @h: node
 *
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{

	size_t totalNodes = 0;
	list_t *ptr = h ? h->next : NULL;


	if (h)
	{
		printf("[%d] %s\n", h->str ? h->len : 0, h->str ? h->str : "(nil)");
		totalNodes++;
	}

	if (ptr)
	{
		while (ptr != NULL)
		{
		printf("[%d] %s\n", ptr->str ? ptr->len : 0,
				ptr->str != NULL ? ptr->str : "(nil)");
		ptr = ptr->next;
		totalNodes++;
		}
	}

	return (totalNodes);
}
