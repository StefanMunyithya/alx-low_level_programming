#include "lists.h"

/**
 * get_dnodeint_at_index - Returns pointer to nth node
 * @head: Head node
 * @index: Index of node
 *
 * Return: Pointer to nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int current_index;
	size_t len;

	if (head == NULL)
		return (NULL);
	len = dlistint_len(head);
	current_index = 0;

	if (index >= len)
		return (NULL);
	while (head->next != NULL)
	{
		if (current_index == index)
			return (head);
		current_index++;
		head = head->next;
	}
	if (current_index == index)
		return (head);
}
