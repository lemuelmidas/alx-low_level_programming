#include "main.h"
#include <unistd.h>

/**
 * _putchar - to write the character c to standard output
 * @c: The character to print
 *
 * Return: if succesful, 1. If not, -1, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
