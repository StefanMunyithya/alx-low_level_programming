#include "lists.h"

/**
 * sum_dlistint - Returns sum of data in list
 * @head: Head node
 *
 * Return: Sum of all data
 * 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	while (head->next != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;
	return (sum);

}
