#include <stdio.h>

/**
 *main - You can only use the putchar function
 *Return:0
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
			continue;
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

