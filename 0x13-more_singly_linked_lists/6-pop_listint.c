#include "lists.h"

/**
 * pop_listint - to delete the head node of a list
 * and return the head node's data i.
 * @head: A pointer to listint_t structure.
 * Return: The head node's data from deleted element
 */
int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	new_node = (*head)->next;
	free(*head);
	*head = new_node;
	return (n);
}
