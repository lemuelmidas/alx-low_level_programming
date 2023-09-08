#include "main.h"

/**
 * set_bit - A function that sets a bit at given index to 1
 * @n: The number to set bit in
 * @index: The index to set bit at
 * Return: 1 if successful, esle, -1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int high = 0x01;

	high <<= index;
	if (high == 0)
		return (-1);
	*n |= high;
	return (1);
}
