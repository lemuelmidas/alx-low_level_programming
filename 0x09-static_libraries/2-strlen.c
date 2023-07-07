#include "main.h"

/**
 * _strlen - to return the length of a string.
 * @s: An input string
 * Return: Null
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
