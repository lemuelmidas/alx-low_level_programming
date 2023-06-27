#include "main.h"

/**
 * puts_half - to print half of a string, followed by a new line.
 * @str: An input string
 * Return: Nothing
 */
void puts_half(char *str)
{
	int length = 0, a, k;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 0)
		k = length / 2;

	else
		k = (length + 1) / 2;

	for (a = k; a < length; a++)
		_putchar(str[a]);

	_putchar('\n');
}
