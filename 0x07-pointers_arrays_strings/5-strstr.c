#include "main.h"
#include <stdio.h>

/**
 * _strstr - to locate a substring.
 * @haystack: input string to search in
 * @needle: input string to locate into string haystack
 * Return:  a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *begin = needle, *end = haystack;

	while (*haystack)
	{
		end = haystack;
		needle = begin;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = end + 1;
	}
	return (NULL);
}
