#include "main.h"

/**
 * print_line - check the code
 * @v: an input integer
 * Return: always 0
 */
void print_line(int v)
{
	int k;

	if (v > 0)
	{
		for (k = 0; k < v; k++)
			_putchar('_');
	}
	_putchar('\n');
}
