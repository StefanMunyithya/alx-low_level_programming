#include "lists.h"

/**
 * add_dnodeint - Adds node to the head of dlist
 * @head: Double pointer to head node
 * @n: Data
 *
 * Return: Address of new element
 * NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->prev = NULL;
		new->n = n;
		new->next = NULL;
		*head = new;
		return (*head);
	}
	(*head)->prev = new;
	new->next = *head;
	new->n = n;
	new->prev = NULL;
	*head = new;
	return (*head);

}
