#include <stdio.h>
/**
 *main-program that prints all single digit numbers of base 10 starting from 0
 *Return:0 no error, non zero if error
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

