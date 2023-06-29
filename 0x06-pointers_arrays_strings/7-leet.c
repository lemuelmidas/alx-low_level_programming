#include "main.h"

/**
 * leet - to encode a string into 1337.
 * @s: an input string to encode
 * Return: the encoded string
 */
char *leet(char *s)
{
  int m = 0, n;
  char str_subs[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'},
    str[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

  while (s[m])
    {
      for (n = 0; n < 10; n++)
	if (s[m] == str[n])
	  s[m] = str_subs[n];

      m++;
    }

  return (s);
}
