#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: always 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
        write(1, c, sizeof(c)-1);
	return (0);
}
