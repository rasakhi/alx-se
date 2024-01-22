#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - checks the last digit of a number
 *
 * Return: 0.
 */
int main(void)
{
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	ld = n % 10;
	if (ld < 0)
	{
		ld *= -1;
	}
	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (ld > 0 && ld < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, ld);
	}
	return (0);
}
