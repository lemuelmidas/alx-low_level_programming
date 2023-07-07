#include "main.h"

/**
 * _strspn - to get the length of a prefix substring.
 * @s: input string
 * @accept: input character with to locate into string s
 * Return: returns pointer to c position
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0, flag;
	char *begin = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = begin;
		if (flag == 0)
			break;
	}
	return (count);
}
