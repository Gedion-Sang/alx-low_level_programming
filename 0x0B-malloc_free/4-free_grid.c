#include<stdlib.h>
#include"main.h"
/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: address of grid to be freed
 * @height: height of the grid
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}
	free(grid);
}
