#include "lists.h"

/**
 * free_listint2 - Frees heap memory
 * @head: Double pointer to head node
 *
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		exit(0);
	if (*head == NULL)
		exit(0);
	ptr = *head;
	while (ptr->next != NULL)
	{
		free(ptr);
		ptr = ptr->next;
	}
	free(ptr);
	head = NULL;

}
