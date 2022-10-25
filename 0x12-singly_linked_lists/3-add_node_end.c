#include "lists.h"
/**
 * add_node_end - Adds node to end of list.
 * @head: Double pointer to head node.
 * @str: Data
 *
 * Return: Address of new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *next;

	ptr = malloc(sizeof(list_t));
	
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	
	if (*head == NULL)
	{
		*head = ptr;
		ptr->next = NULL;
		return (ptr);
	}
	next = *head;
	while ((next->next) != NULL)
	{
		next = next->next;
	}
	next->next = ptr;
	ptr->next = NULL;
	return (ptr);

}
