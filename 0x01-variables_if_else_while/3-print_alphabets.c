#include <stdio.h>

/**
 *main - Using printf and puts functions is forbidden
 *Return:0
 */

int main(void)
{
	int a = 99;
	int b = 67;

	while (a <= 122)
	{
		putchar(a);
	}
	while (b <= 90)
	{
		putchar(b);
	}
	putchar("\n");
	return (0);
}
