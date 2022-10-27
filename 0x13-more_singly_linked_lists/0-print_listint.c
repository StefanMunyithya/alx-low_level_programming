#include "lists.h"

/**
 * print_listint - Prints all elements
 * @h: Pointer to head node
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num_elements;

	if (h == NULL)
	{
		num_elements = 0;
		return (num_elements);
	}
	num_elements = 0;
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		num_elements++;
		h = h->next;
	}
	printf("%d\n", h->n);
	num_elements++;
	return (num_elements);
}
