#include "main.h"

/**
 * _isupper - to check for uppercase character.
 * @c: input character
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int upper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			upper = 1;
			break;
		}
	}

	return (upper);
}
