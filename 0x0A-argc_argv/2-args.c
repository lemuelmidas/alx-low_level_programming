#include "main.h"
#include <stdio.h>

/**
 * main - to print all arguements it receives
 * @argc: The number of arguements or arguments counter
 * @argv: The argument values
 * Return: Null
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
