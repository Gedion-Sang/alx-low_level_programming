#include<stdlib.h>
#include"main.h"
#include<stdio.h>
/**
 * *alloc_grid - function that returns a pointer to
 * a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: Always zero
 */
int **alloc_grid(int width, int height)
{
	int c, d, e, f;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}

	for (c = 0; c < height; c++)
	{
		a[c] = malloc(sizeof(int) * width);

		if (a[c] == NULL)
		{
			for (d = c; d >= 0; d--)
			{
				free(a[d]);
			}
			free(a);
			return (NULL);
		}
	}
	for (e = 0; e < height; e++)
	{
		for (f = 0; f < width; f++)
		{
			a[e][f] = 0;
		}
	}
	return (a);
}
