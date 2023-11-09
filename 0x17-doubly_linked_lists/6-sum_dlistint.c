#include "lists.h"

/**
 * sum_dlistint - a function that sums all the data of a dlistint_t list.
 * @head: The head of the dlistint_t list.
 *
 * Return: The total of the data
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
