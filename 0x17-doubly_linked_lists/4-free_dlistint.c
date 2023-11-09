#include "lists.h"

/**
 * free_dlistint - a function that frees a linked dlistint_t list.
 * @head: The head of the dlistint_t list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *mem;

	while (head)
	{
		mem = head->next;
		free(head);
		head = mem;
	}
}
