#include "lists.h"
/**
 * add_node - Adds node to the head of linked list
 * @head: Double pointer to head
 * @str:
 *
 * Return: Pointer to new head node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t node;
	list_t *ptr;

	node.str = strdup(str);
	ptr = &node;
	node.next = (*head);

	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
