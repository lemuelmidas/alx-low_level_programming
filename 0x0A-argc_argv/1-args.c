#include "stdio.h"
#include "main.h"

/**
 * main - to print the number of arguments passed to it
 * @argc: number of arguments
 * @argv: array of arguments/ argument values
 * Return: Null
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
