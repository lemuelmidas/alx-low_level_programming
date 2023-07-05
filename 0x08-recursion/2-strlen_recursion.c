#include "main.h"

/**
 * _strlen_recursion - to return the length of a string.
 * @s: An input string to printing
 * Return: The string's length
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
