#include <stdio.h>

/**
 *main - You can only use the putchar function
 *Return:0
 */

int main(void)
{
	int i;

	for (i = 97 ; i <= 122; i++)
	{
		if (i == 101 | i == 113)
			continue;
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

