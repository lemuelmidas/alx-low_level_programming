#include "main.h"
int is_divisible(int dividend, int divisor);

/**
 * is_prime_number - to check if a number is prime.
 * prime numbers when divided by 2 will give a remainder of 1
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
 * @dividend: the dividend
 * @divisor: the divisor
 * Return: 1 if num is divisible or 0 if numis not divisible
 */
int is_divisible(int dividend, int divisor)
{
	if (dividend % divisor == 0)
		return (0);

	if (divisor == dividend / 2)
		return (1);

	return (is_divisible(dividend, divisor + 1));
}
