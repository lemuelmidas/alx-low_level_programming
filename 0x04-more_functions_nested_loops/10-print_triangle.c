#include "main.h"

/**
 * print_triangle - check the code
 * @size: an integer
 * Return: Always 0
 */
void print_triangle(int size)
{
	int a, b, c = size - 1;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				if (b < c)
					_putchar(' ');
				else
					_putchar('#');
			}
			c--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
