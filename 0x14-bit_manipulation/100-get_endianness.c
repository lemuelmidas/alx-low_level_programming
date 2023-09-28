#include "main.h"

/**
 * get_endianness - To check endianness
 *
 * Return: 0 if big endian, 1 if small endian
 **/
int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *)&a;

	return ((*c) ? 1 : 0);
}
