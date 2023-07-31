#include "lists.h"

/**
 * free_listint - to free a linked list
 * @head: A pointer to listint_t structure
 * Return: Null
 */
void free_listint(listint_t *head)
{
	listint_t *memory;

	while (head)
	{
		memory = head;
		head = head->next;
		free(memory);
	}
	free(head);
}
