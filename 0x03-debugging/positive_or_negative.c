#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * positive_or_negative - check the code
 * @n: an integer
 * Return: output 0
 */
void positive_or_negative(int n)
{
srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
	printf("%d is positive\n", n);
else if (n == 0)
	printf("%d is zero\n", n);
else
	printf("%d is negative\n", n);

return (0);
}
