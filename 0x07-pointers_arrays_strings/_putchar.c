#include <unistd.h>

/**
 * _putchar - writes the character c to standard output
 * @c: The character to print
 *
 * Return: successful, 1. Failed, -1 and errno is set appropriately.
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
