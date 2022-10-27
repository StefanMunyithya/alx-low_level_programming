#include "lists.h"

/**
 * listint_len - Prints number of elements in the list
 * @h: Pointer to head node
 *
 * Return: Number of elements in linked list
 */
size_t listint_len(const listint_t *h)
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
		num_elements++;
		h = h->next;
	}
	num_elements++;
	return (num_elements);

}
