#include "main.h"

/**
 * print_binary - to print a binary number without % or /
 * @n: The number to be printed
 * Return: Null
 */
void print_binary(unsigned long int n)
{
	unsigned int flag = 0, max_exp = 32768; /* 1000 0000 0000 0000 */

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (max_exp)
	{
		if (flag == 1 && (n & max_exp) == 0)
			_putchar('0');
		else if ((n & max_exp) != 0)
		{
			_putchar('1');
			flag = 1;
		}
		max_exp >>= 1;
	}
}
