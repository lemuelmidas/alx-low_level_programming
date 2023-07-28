#include "lists.h"

/**
 * free_list - to free all elements in a linked list
 * @head: pointer to head element of list
 * Return: Null
 */
void free_list(list_t *head)
{
	list_t *memory;

	memory = head;
	while (head)
	{
		memory = head;
		head = head->next;
		free(memory->str);
		free(memory);
	}
	free(head);
}
