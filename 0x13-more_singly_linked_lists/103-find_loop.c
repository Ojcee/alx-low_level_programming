#include "lists.h"

/**
 *  * find_listint_loop - Finds the loop in a linked list
 *   * @head: The node at the beginning of the list
 *    *
 *     * Return: The address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *current = head, *node = head;

	if (head)
	{
		while (current && current->next)
		{
			current = current->next->next;
			node = node->next;
			if (node == current)
			{
				node = head;
				while (node != current)
				{
					node = node->next;
					current = current->next;
				}
				return (node);
			}
		}
	}
	return (NULL);
}
