#include "main.h"
/**
 * jack_bauer- function that prints every minute of the day of Jack Bauer
 * Return:0
 */

void jack_bauer(void)
{
	int p, d, n, l;

	for (p = 0; p <= 2; p++)
	{
		for (d = 0; d <= 9; d++)
		{
			for (n = 0; n <= 5; n++)
			{
				for (l = 0; l <= 9; l++)
				{
					if (p == 2 && d > 3)
					{break;
					}
					_putchar(p + '0');
					_putchar(d + '0');
					_putchar(':');
					_putchar(n + '0');
					_putchar(l + '0');
					_putchar('\n');
				}
			}
		}
	}
}
