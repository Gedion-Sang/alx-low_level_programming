#include <stdio.h>
/**
 * main-program that prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int i;
	char hexvalues[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(hexvalues[i]);
	}
	putchar('\n');
	return (0);
}

