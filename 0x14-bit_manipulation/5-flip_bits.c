#include "main.h"
#include <stdio.h>

/**
 * flip_bits - To return the number of bits you would
 * need to flip to get from one number to another
 * @n: Number
 * @m: Number
 *
 * Return: Numbers of bits that n have to change for be equal to m
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count;

	for (count = a = 0; a < 64; a++, count++)
		if (((n >> a) & 1) == ((m >> a) & 1))
			count--;

	return (count);
}
