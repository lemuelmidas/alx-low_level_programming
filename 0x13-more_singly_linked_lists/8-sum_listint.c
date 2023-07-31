#include "lists.h"

/**
 * sum_listint - to sum values from listint_t
 * @head: A pointer to listint_t structure
 * Return: The sum of all the data n from list
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
