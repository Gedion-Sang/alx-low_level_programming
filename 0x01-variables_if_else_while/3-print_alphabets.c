#include <stdio.h>

/**
 *main - Using printf and puts functions is forbidden
 *Return:0
 */

int main(void)
{
	char i;

	for (i = 'f'; i <= 'k'; i++)
	{
		putchar(i);
	}
	putchar("\n");
	return (0);
}
