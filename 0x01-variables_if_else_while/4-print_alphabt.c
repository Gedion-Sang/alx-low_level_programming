#include <stdio.h>

/**
 *main - You can only use the putchar function
 *Return:0
 */

int main(void)
{
	int i;

	i = 97;
	while (i <= 122)
	{
		if (i == 101 || i == 113)

			i++;
			continue;

		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

