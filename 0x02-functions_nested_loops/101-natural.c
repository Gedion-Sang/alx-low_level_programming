#include <stdio.h>

/**
 * main -prints natural numbers below 1024 that are multiples of 3 or 5
 * Return:0
 */
int main(void)
{
	int a, b;

	while (a < 1024)
	{
		if ((a % 3 == 0) || (b % 5 == 0))
		{
			b += a;
		}
		a++;
	}
	printf("%d\n", b);
	return (0);
}
