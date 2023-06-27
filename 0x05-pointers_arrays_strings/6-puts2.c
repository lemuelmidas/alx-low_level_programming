#include "main.h"

/**
 * puts2 - check the code
 * @str: An input string
 * Return: always 0
 */
void puts2(char *str)
{
        int length = 0, a = 0;

	while (str[length] != '\0')
		length++;

	length -= 1;

	for (a = 0; a <= length; a += 2)
		_putchar(str[a]);

	_putchar('\n');
}
