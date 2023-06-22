#include "main.h"

/**
 * _isupper - check the code.
 * @c: An input character
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int count_upper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			count_upper = 1;
			break;
		}
	}

	return (count_upper);
}
