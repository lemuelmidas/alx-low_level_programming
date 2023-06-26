#include "main.h"

/**
 * rev_string - reverses a string
 * followed by a new line.
 * @s: an input string
 * Return: always 0
 */
void rev_string(char *s)
{
	int length = 0, a = 0;
	char temp;

	while (s[length] != '\0')
		length++;

	while (a < length--)
	{
		temp = s[a];
		s[a++] = s[length];
		s[length] = temp;
	}
}
