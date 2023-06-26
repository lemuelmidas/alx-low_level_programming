#include <unistd.h>

/**
 * _putchar - always 0
 * @c: input character to print
 *
 * Return: if successful, , If not, -1.
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
