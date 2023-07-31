#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - to print the elements in a  list
 * @head: A pointer to listint_t structure
 * Return: The number of nodes. If failed, exit with 98
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *first = head, *second = head;

	if (head == NULL)
		exit(98);

	while (first && second && second->next && head)
	{
		first = first->next;
		second = second->next->next;
		if (first == second)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}
	head = NULL;
	return (nodes);
}
