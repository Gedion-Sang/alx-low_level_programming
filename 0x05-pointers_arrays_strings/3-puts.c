#include "main.h"
/**
 * _puts - function that prints a string
 * @str: string to print
 * Return:no return
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
