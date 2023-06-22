#include "main.h"

/**
 * print_most_numbers - prints numbers between 0 to 9
 * but not 2 and 4
 * Return: no return.
 */
void print_most_numbers(void)
{
	int c;

	for (c = 48; c < 57; c++)
	{
		if (c != 50 && c != 52)
			_putchar(c);
	}
	_putchar('\n');
}
