#include "lists.h"

/**
 * free_listint2 - to free a list and set head to NULL
 * @head: A pointer to listint_t structure
 * Return: Null
 */
void free_listint2(listint_t **head)
{
	listint_t *memory;

	if (head == NULL)
		return;

	memory = *head;
	while (*head)
	{
		memory = *head;
		(*head) = (*head)->next;
		free(memory);
	}
	*head = NULL;
}
