#include "main.h"

/**
 * bit_to_zero - To set the value of a bit to 0 at a given index
 * @n: bit value to clear
 * @index: Position to clear
 *
 * Return: 1 if correct, or -1 if an error happened
 **/
int bit_to_zero(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	*n = ~(1 << index) & *n;
	return (1);
}
