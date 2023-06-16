#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program to assign a value to the variable n
 * Return: 0
 */

int main(void)
{
	int n;

	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
