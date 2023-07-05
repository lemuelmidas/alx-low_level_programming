#include "main.h"
int is_divisible(int dsor, int dend);

/**
 * is_prime_number - to check if a number is prime.
 * @n: an input integer
 * Return: 1 when n is prime or  0 if not
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (is_divisible(n, div));
}

/**
 * is_divisible - to check if num is divisible
 * @dsor: the divisor
 * @dend: the dividend
 * Return: 1 if num is divisible or 0 if numis not divisible
 */
int is_divisible(int dsor, int dend)
{
	if (dsor % dend == 0)
		return (0);

	if (dend == dsor / 2)
		return (1);

	return (is_divisible(dsor, dend + 1));
}
