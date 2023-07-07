#include "main.h"

/**
 * _puts - to print a string, followed by a new line, to stdout.
 * @str: input string
 * Return: Null
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
