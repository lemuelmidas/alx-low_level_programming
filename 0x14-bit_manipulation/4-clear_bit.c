#include "main.h"

/**
 * clear_bit - A function that sets a bit to 0 at given index
 * @n: The number to set bit in
 * @index: The index to set bit at
 * Return: 1 if successful,else, -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int high = 0x01;

	high = ~(high << index);
	if (high == 0x00)
		return (-1);
	*n &= high;
	return (1);
}
