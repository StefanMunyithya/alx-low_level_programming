#include "lists.h"
/**
 * add_node - Adds node to the head of linked list
 * @head: Double pointer to head
 * @str: Node data
 *
 * Return: Pointer to new head node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));
	ptr->str = strdup(str);
	ptr->len = strlen(str);

	if (head == NULL)
		return (NULL);
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
