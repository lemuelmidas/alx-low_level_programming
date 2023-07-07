#include "main.h"

/**
 * _strncat - to concatenate two strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *end = dest, *begin = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > srclen)
		n = srclen;

	src = begin;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (end);
}
