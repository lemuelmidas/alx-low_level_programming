#include "main.h"
#include <stdio.h>

/**
 * print_array - to prints n elements of an array of integers,
 * followed by a new line.
 * @a: an input array
 * @n: an input integer
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int w;

	for (w = 0; w < n; w++)
	{
		printf("%d", a[w]);
		if (w < n - 1)
			printf(", ");
	}
	putchar('\n');
}
