#include "lists.h"

/**
 * pop_listint - Deletes head node and returns nodes data
 * @head: Double pointer to head node
 *
 * Return: Head node's data
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *ptr;

	if (*head == NULL)
		return (0);
	data = (*head)->n;
	if ((*head)->next == NULL)
	{
		*head = NULL;
		return (data);
	}
	ptr = (*head)->next;
	*head = ptr;
	return (data);
}
