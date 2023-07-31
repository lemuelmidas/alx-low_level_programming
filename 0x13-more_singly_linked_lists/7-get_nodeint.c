#include "lists.h"

/**
 * get_nodeint_at_index - to get a node of list at specific index
 * @head: A pointer to listint_t structure
 * @index: node's index
 * Return: A pointer to node at specified index, or NULL if not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (n == index)
			return (head);
		head = head->next;
		n++;
	}
	return (NULL);
}
