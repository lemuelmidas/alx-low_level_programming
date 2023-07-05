#include "main.h"

/**
 * _puts_recursion - to print a string, followed by a new line.
 * @s: input string to print
 * Return: Null
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
