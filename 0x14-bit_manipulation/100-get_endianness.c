#include "main.h"

/**
 * get_endianness - A function that checks endianness
 * Return: 0 if big endian,or 1 for little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	return (0);
}
