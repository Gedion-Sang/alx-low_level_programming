#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -prints sum of two diagonals of a square matrix of integers
 * @a: input value
 * @size: input value
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int sum 1, sum 2, b;
	sum 1 = 0;
	sum 2 = 0;

	for (b = 0; b < size; b++)
	{
		sum 1 = sum 1 + a[b * size + b];
	}
	for b = size - 1; b >= 0; b--)
	{
		sum 2 += a[b * size + (size - b - 1)];
	}
	printf("%d, %d\n", sum 1, sum 2);
}
