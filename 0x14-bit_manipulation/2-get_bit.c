#include "main.h"

/**
 * get_bit - To get the value of a bit to 1 at a given index
 * @n: Number base
 * @index: Index to set
 *
 * Return: 1 if correct, or -1 if an error occurred
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 32)
		return (-1);

	return ((n >> index) & 1);
}
