#include "lists.h"

/**
 * sum_listint - Sum of data values in list
 * @head: Pointer to head node
 *
 * Return: Sum
 * 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current;

	if (head == NULL)
		return (0);
	sum = 0;
	current = head;

	while (current->next != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	sum += current->n;
	return (sum);
}
