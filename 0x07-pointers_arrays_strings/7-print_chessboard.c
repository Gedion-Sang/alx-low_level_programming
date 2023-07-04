#include "main.h"
/**
 * print_chessboard - function that prints the chessboard
 * @a: array to be printed
 * Return:0
 */

void print_chessboard(char (*a)[8])
{
	int b;
	int c;

	for (b = 0; b < 8; b++)
	{
		for (c = o; c < 8; c++)
		_putchar(a[b][c]);
		_putchar('\n');
	}
}
