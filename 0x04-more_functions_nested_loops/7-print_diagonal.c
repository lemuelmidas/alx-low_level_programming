#include "main.h"

/**
 * print_diagonal - check the code.
 * @p: An input integer
 * Return: Always 0
 */
void print_diagonal(int p)
{
	int a = 0, b = 0;

	if (a > 0)
	{
		for (a = 0; a < p; a++)
		{
			for (b = 0; b < a; b++)
				_putchar(' ');
		_putchar(105);
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
