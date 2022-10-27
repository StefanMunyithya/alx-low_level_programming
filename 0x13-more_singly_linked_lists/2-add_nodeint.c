#include "lists.h"
/**
 * add_nodeint - Adds node to the beginning of list
 * @head: Double pointer to head node
 * @n: Integer
 * Return: Address of new node or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;
	*head = new;
	return (*head);

}
