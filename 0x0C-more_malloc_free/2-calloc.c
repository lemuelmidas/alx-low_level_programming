#include "main.h"
#include <stdlib.h>

/**
 * _calloc - to allocate memory for an array using malloc
 * @nmemb: number of memory spaces
 * @size: size of nmemb
 * Return: returns pointer to allocated space, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *memory;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);

	for (; i < nmemb * size; i++)
		*(memory + i) = 0;

	return (memory);
}
