#include "lists.h"

/**
 * print_list - Prints data in linked list
 * @h: Pointer to head
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num_nodes;

	if (h == NULL)
	{
		printf("[0] (nil)\n");
		return (0);
	}
	num_nodes = 0;

	while (h->next != NULL)
	{
		num_nodes++;
		printf("[%u] %s\n", h->len, h->str);
		free(h->str);
		h = h->next;
	}
	num_nodes++;
	printf("[%u] %s\n", h->len, h->str);

	return (num_nodes);

}
