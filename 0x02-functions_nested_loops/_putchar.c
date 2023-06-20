#include <unistd.h>

/**
 * _putchar - writes the character tex to stdout
 * @text: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char text)
{
	return (write(1, &text, 1));
}
