#include "main.h"

/**
 * _strncpy - to copy the strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *end = dest, *begin = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;

	src = begin;

	for (; i < n; i++)
		*dest++ = *src++;

	return (end);
}
