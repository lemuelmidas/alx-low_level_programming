#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - to concatenate two strings
 * @s1: An input pointer of the first string
 * @s2: An input pointer of the second string
 * @n: an input integer of number of string to concatenate
 * Return: a pointer to concatened strings or NULL if it str is NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i = 0, length_s1 = 0, length_s2 = 0;

	if (s1 == NULL)
		s1 = "";

	while (s1[length_s1])
		length_s1++;

	if (s2 == NULL)
		s2 = "";

	while (s2[length_s2])
		length_s2++;

	if (n >= length_s2)
		n = length_s2;

	new_str = malloc(length_s1 + n + 1);
	if (new_str == NULL)
		return (NULL);

	for (; i < (length_s1 + n); i++)
	{
		if (i < length_s1)
			new_str[i] = *s1, s1++;
		else
			new_str[i] = *s2, s2++;
	}
	new_str[i] = '\0';
	return (new_str);
}
