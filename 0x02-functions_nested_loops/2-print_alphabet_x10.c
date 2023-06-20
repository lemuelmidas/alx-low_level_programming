#include "main.h"

/**
 * function that prints 10 times the alphabet, 
 *         in lowercase, followed by a new line.
 * Return: nothing
 */
void print_alphabet_10(void)
{
        char a;
        int b=0;

        while (b <= 9)
        {
        for (a = 'a'; a<= 'z'; a++)
	{
	_putchar(a);
	}
        _putchar('\n');
        b++;
	}
}
