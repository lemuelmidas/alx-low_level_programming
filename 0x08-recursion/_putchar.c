#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: if successful, 1. If not, -1.
 * and errno is set appropriately.
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
