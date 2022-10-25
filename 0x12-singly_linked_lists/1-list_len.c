#include "lists.h"

/**
 * list_len - Returns number of elements in a linked list
 * @h: Pointer to head node
 *
 * Return: Number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t size;

	size = 0;
	if (h == NULL)
		return (size);
	++size;
	while (h->next != NULL)
	{
		++size;
		h = h->next;
	}

	return (size);

}
