#include <stdlib.h>
#include <time.h>

/**
 * main - runing if statements with
 * positive, zero, and negative.
 * Return: value 0.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("is positive\n");
	}
	if (n == 0)
	{
		printf("is zero\n");
	}
	if (n > 0)
	{
		printf("is negative"\n);
	}
	return (0);
}
