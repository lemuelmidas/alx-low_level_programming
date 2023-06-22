#include "main.h"

/**
 * _isdigit - check the code
 * @c: An input integer
 * Return: output 1 if c is a digit else output 0
 */
int _isdigit(int c)
{
	char d = '0';
	int digit = 0;

	for (; d <= '9'; d++)
	{
		if (d == c)
		{
			digit = 1;
			break;
		}
	}

	return (digit);
}
