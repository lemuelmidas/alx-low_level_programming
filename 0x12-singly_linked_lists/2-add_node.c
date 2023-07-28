#include "lists.h"
#include <string.h>

/**
 * add_node - to add a node to the head of linked list
 * @head: pointer to a list_t pointer that points to the head struct
 * @str: pointer to string that adds as node
 * Return: pointer to new head of list, NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *memory;
	int length = 0;

	memory = malloc(sizeof(list_t));
	if (memory == NULL)
		return (NULL);

	while (str[length])
		length++;

	memory->len = length;
	memory->str = strdup(str);
	memory->next = *head;
	*head = memory;
	return (memory);
}
