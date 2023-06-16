#include <stdio.h>

/**
 *main - Using printf and puts functions is forbidden
 *Return:0
 */

int main(void)
{
	char i;
	char j;

	for (i = 'f'; i <= 'k'; i++)
	{
		putchar(i);
	}
	for (j = 'F'; j <= 'K'; j++)
	{
		putchar(j);
	}
	putchar("\n");
	return (0);
}
