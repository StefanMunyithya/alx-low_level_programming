#include "lists.h"
/**
 * add_nodeint_end - Adds elements at the end of
 * linked list
 * @head: Double pointer to head node
 * @n: Integer value
 *
 * Return: Address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
	new->next = NULL;
	return (*head);

}
