#include "main.h"

/**
 * _strncpy - to copy strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
  int srclength = 0, i = 0;
  char *temp = dest, *start = src;

  while (*src)
    {
      srclength++;
      src++;
    }

  srclength++;

  if (n > srclength)
    n = srclength;

  src = start;

  for (; i < n; i++)
    *dest++ = *src++;

  return (temp);
}
