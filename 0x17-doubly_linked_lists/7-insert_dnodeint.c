#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts node at given index
 * @h: Double pointer to header node
 * @idx: Index
 * @n: Data
 *
 * Return: Pointer to added node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *prev;
	dlistint_t *ptr;
	unsigned int current_index;

	if (h == NULL)
		return (NULL);
	ptr = *h;
	if (ptr == NULL)
	{
		if (idx == 0)
		{
			new = add_dnodeint(&ptr, n);
			return (new);
		}
		else
			return (NULL);
	}
	current_index = 0;
	while (ptr->next != NULL)
	{
		if (current_index == idx)
		{
			if (idx == 0)
			{
				new = add_dnodeint(&ptr, n);
				return (new);
			}

			prev = ptr->prev;
			new = add_dnodeint(&ptr, n);
			new->prev = prev;
			prev->next = new;
			return (new);
		}
		ptr = ptr->next;
		current_index++;
	}
	if (current_index == idx)
	{
		prev = ptr->prev;
		new = add_dnodeint(&ptr, n);
		new->prev = prev;
		prev->next = new;
		return (new);
	}
	if ((current_index + 1) == idx)
	{
		new = add_dnodeint_end(h, n);
		return (new);

	}
	return (NULL);
}
