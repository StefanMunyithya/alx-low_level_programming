#include "lists.h"

/**
 * free_dlistint - Frees allocated memory of the nodes
 * @head: Header node
 *
 * Return - Void
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		free(head);
		head = head->next;
	}
	free(head);
	return;
}
