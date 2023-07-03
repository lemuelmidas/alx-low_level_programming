#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - to print the sum of the two diagonals
 * of a square matrix of integers.
 * @a: a square matrix of integers
 * @size: an input integer with the size of matrix
 * Return: Null
 */
void print_diagsums(int *a, int size)
{
	int i, square = size * size, first_sum = 0, second_sum = 0;

	for (i = 0; i < square; i += size + 1)
		first_sum += a[i];

	for (i = size - 1; i < square - 1; i += size - 1)
		second_sum += a[i];

	printf("%d, %d\n", first_sum, second_sum);
}
