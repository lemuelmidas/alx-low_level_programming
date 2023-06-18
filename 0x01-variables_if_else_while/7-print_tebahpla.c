#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char all;

	for (all = 'z'; all >= 'a'; all--)
		putchar(all);
	putchar("\n");

	return (0);
}
