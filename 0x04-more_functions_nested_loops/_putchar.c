#include <unistd.h>

/**
 * _putchar - writes the character i to standard output
 * @i: The character to print
 * Return: 1, if successful
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char i)
{
return (write(1, &i, 1));
}
