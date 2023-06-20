#include <unistd.h>

/**
 * _putchar - it sends the character c to stdout
 * @i: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char i)
{
	return (write(1, &i, 1));
}
