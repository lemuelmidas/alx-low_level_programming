#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - to multiply two numbers
 * @argc: The number of arguments/ arguments' counter
 * @argv: The values of the argument
 * Return: Null
 */
int main(int argc, char **argv)
{
	int m, n, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		m = atoi(argv[1]);
		n = atoi(argv[2]);
		result = m * n;
		printf("%d\n", result);
		return (0);
	}
}
