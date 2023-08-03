#include "main.h"

/**
 * set_bit - to set a bit at given index to 1
 * @n: The number to set bit in
 * @index: The index to set bit at
 * Return: 1 if it works, or -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);
	*n |= max;
	return (1);
}
