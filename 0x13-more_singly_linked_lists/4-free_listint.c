#include "lists.h"
/**
 * free_listint - Frees dybamically allocated memory
 * @head: Pointer to head node
 *
 * Return: Void
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		exit(0);
	while (head->next != NULL)
	{
		free(head);
		head = head->next;
	}
	free(head);
}
