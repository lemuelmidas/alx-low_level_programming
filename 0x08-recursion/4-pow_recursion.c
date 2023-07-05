#include "main.h"

/**
 * _pow_recursion - to return the value of x raised to the power y.
 * @x: the base number
 * @y: the exponent number
 * Return: The result of x raised y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	return (x *= _pow_recursion(x, y - 1));
}
