#include "main.h"

/**
 * _print_rev_recursion - to printsa string in reverse,
 * followed by a new line.
 * @s: An input string to printing
 * Return: Null
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
