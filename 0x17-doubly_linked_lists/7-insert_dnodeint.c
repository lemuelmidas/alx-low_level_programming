#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a new node in a dlistint_t
 *                            list at a given position.
 * @h: A pointer to the head of the dlistint_t list.
 * @idx: The position to insert the new node.
 * @n: The integer for the new node to contain.
 *
 * Return: NULL, if the function fails, else the new node's address.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *mem = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		mem = mem->next;
		if (mem == NULL)
			return (NULL);
	}

	if (mem->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = mem;
	new->next = mem->next;
	mem->next->prev = new;
	mem->next = new;

	return (new);
}
