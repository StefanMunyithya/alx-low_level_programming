#include "lists.h"

/**
 * dlistint_len - Returns number of nodes in doubly linked list
 * @h: Header node
 *
 * Return: Number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;
	if (h == NULL)
	{
		return (0);
	}
	while (h->next != NULL)
	{
		count++;
		h = h->next;
	}
	count++;
	return (count);
}
