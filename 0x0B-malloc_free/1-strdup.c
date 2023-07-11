#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a
 * parameter.
 * @str: An input pointer of the string to copy.
 * Return: Apointer to new string or NULL if it str is NULL
 */
char *_strdup(char *str)
{
    char *new_str;
    int length = 0;
    
    if (str == NULL)
      return NULL;

    length = strlen(str) + 1;
    new_str = (char *)malloc(length * sizeof(char));

    if (new_str != NULL)
        strcpy(new_str, str);

    return new_str;
}
