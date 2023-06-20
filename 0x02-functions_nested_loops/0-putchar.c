#include <unistd.h>

/**
 * _putchar - it sends the character c to stdout
 * @i: The character to print
 *
 * Return: Always
 */
int _putchar(char i)
{
	write(1, &i, 1);
	return (0);
}
