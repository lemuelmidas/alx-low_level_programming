#include <unistd.h>

/**
 * main- read the code
 *
 * Return: always 0
 */

int _putchar(char c)
{
        char c[] = "_putchar\n";
	write(1, c, sizeof(c)-1);
	return (0);
}
