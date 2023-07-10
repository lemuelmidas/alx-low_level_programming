#include "main.h"
#include <stdlib.h>

/**
 * create_array - to create an array of chars,
 * and initialize it with a specific char.
 * @size: The size of the array
 * @c: A character to initialize the array
 * Return: if successful,a pointer to the array else, NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *m;
	unsigned int i = 0;

	m = malloc(size * sizeof(char));

	if (m == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (i < size)
	{
		m[i] = c;
		i++;
	}
	return (m);
}
