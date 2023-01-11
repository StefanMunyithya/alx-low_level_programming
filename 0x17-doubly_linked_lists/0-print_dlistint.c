#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints data stored in doubly linked list
 * @h: Pointer to head node
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	count = 0;
	if (h == NULL)
	{
		return (count);
	}

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		++count;
		h = h->next;
	}
	printf("%d\n", h->n);
	++count;
	return (count);
}
