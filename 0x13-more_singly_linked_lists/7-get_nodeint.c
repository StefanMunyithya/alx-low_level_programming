#include "lists.h"

/**
 * get_nodeint_at_index - Returns pointer to struct at the given index
 * @head: Head node
 * @index: Index of node startinf from 0
 *
 * Return: Pointer to struct
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int length;
	listint_t *current;

	if (head == NULL)
	{
		return (NULL);
	}
	length = 0;
	current = head;
	while (current->next != NULL)
	{
		length++;
		if (index == (length - 1))
			return (current);
		current = current->next;
	}
	length++;
	if (index > (length - 1))
		return (NULL);
	else
		return (current);

}
