#include "lists.h"

/**
 * find_listint_loop - to find the loop in a list
 * @head: A pointer to listint_t structure
 * Return: node's address where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first = head, *second = head;

	while (first && second && second->next)
	{
		first = first->next;
		second = second->next->next;
		if (first == second)
		{
			return (first);
		}
	}
	return (NULL);
}
