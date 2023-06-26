#include "main.h"

/**
 * _strlen -  check the code
 * @s: An input string
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
