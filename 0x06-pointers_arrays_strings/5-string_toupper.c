#include "main.h"

/**
 * string_toupper - changes lower case string to upper case strin
 * @str: an input string
 * Return: char pointer to converted string
 */
char *string_toupper(char *str)
{
  char *ptr = str;

  while (*str)
    {
      if (*str >= 'a' && *str <= 'z')
	*str -= 32;
      str++;
    }
  return (ptr);
}
