#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - to free a list
 * @h: A pointer listint_t structure
 * Return: The size of the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count_size = 0;
	listint_t *memory;

	memory = *h;
	while (memory)
	{
		memory = *h;
		memory = memory->next;
		free_list(memory);
		count_size++;
	}
	*h = NULL;

	return (count_size);
}

/**
 * free_list - to free a listint_t recursively
 * @head: A pointer to the listint_t structure
 * Return: Null
 */
void free_list(listint_t *head)
{
	listint_t *memory;

	if (head)
	{
		memory = head;
		memory = memory->next;
		free(memory);
		free_list(memory);
	}
	free(head);
}
