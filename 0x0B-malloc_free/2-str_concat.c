#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - A function that concatenates two strings
 * @s1: An input pointer of the first string
 * @s2: An input pointer of the second string
 * Return: Apointer to concatened strings or NULL if it str is NULL
 */
char *str_concat(char *s1, char *s2) 
{
    char *result;
    size_t len_s1, len_s2;
    
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    len_s1 = strlen(s1);
    len_s2 = strlen(s2);

    result = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));

    if (result != NULL) {
        strcpy(result, s1);
        strcat(result, s2);
    }

    return result;
}
