#include "main.h"

/**
 * print_last_digit - Check code
 * @i: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number i
 */
int print_last_digit(int i)
{
	int n;

	if (i < 0)
		n = -1 * (i % 10);
	else
		n = i % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}
