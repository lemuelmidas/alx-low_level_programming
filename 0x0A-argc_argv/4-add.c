#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - to add positive numbers
 * @argc: The number of arguments or arguments' counter
 * @argv: The values of the argument
 * Return: Null
 */
int main(int argc, char **argv)
{
	int num, output = 0, i;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(digit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		output += num;
	}
	printf("%d\n", output);
	return (0);
}
