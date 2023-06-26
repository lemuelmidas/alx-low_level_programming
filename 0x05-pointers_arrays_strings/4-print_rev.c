#include "main.h"

/**
 * print_rev - to print input string in reverse
 * followed by a new line.
 * @s: an input string
 * Return: always 0
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	while (length)
		_putchar(s[--length]);

	_putchar('\n');
}
