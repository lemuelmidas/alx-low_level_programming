#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - to return a pointer to a
 * 2 dimensional array of integers
 * @width: An input integer at number of columns
 * @height: An input integer at number of rows
 * Return: the pointer to a 2D array, NULL on failure
 */

int **alloc_grid(int width, int height) 
{
    int **array, i = 0, j = 0;

    if (width <= 0 || height <= 0)
        return NULL;

    array = (int **)malloc(height * sizeof(int *));
    if (array == NULL)
        return NULL;

    for (i = 0; i < height; i++) {
        array[i] = (int *)malloc(width * sizeof(int));
        if (array[i] == NULL) {

            for (j = 0; j < i; j++)
                free(array[j]);
            free(array);
            return NULL;
        }

        for (j = 0; j < width; j++)
            array[i][j] = 0;
    }

    return array;
}
