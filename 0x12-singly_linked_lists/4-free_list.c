#include "lists.h"
/**
 * free_list - Frees dynamically allocated memory
 * @head: Head node
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	while (head->next != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
	free(head->str);
	free(head);
}
