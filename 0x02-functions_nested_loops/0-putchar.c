#include <unistd.h>

/**
 * _putchar function to write the character c to the standard output
 * @c: the character to print
 * 
 * Return: 1, if successful
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{

        return (write(1, &c, 1));
  
}
